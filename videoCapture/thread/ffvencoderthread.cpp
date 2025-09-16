#include "ffvencoderthread.h"
#include"queue/ffvframequeue.h"
#include"encoder/ffvencoder.h"
#include"muxer/ffmuxer.h"
#include"filter/ffvfilter.h"

extern "C"{
#include"libswscale/swscale.h"
#include"libavutil/imgutils.h"
}

//#define NVENC 1

FFVEncoderThread::FFVEncoderThread()
{

}

FFVEncoderThread::~FFVEncoderThread()
{
}

void FFVEncoderThread::init(FFVFilter* vFilter_,FFVEncoder*vEncoder_,FFMuxer *muxer_,FFVFrameQueue *frmQueue_)
{
    vFilter = vFilter_;
    vEncoder = vEncoder_;
    muxer = muxer_;
    frmQueue = frmQueue_;
}

void FFVEncoderThread::wakeAllThread()
{
    if(frmQueue){
        frmQueue->wakeAllThread();
    }
    if(vEncoder){
        vEncoder->wakeAllThread();
    }
}

void FFVEncoderThread::close()
{
    if(vEncoder){
        vEncoder->close();
    }

    firstFrame = true;
    firstFramePts = 0;

    streamIndex = -1;

}

void FFVEncoderThread::run()
{

    while(!m_stop){

//        std::cout << "vEncoder Thread run " << std::endl;
        AVFrame* frame = frmQueue->dequeue();
        if(frame == nullptr){
            m_stop = true;
            break;
        }
#ifdef NVENC
        AVFrame* nv12frame = nullptr;

        // yuv420p 转换成 NV12帧
        if(!swsCtx){
            swsCtx = sws_getContext(frame->width,frame->height,AV_PIX_FMT_YUV420P,
                                    frame->width,frame->height,AV_PIX_FMT_NV12,
                                    SWS_BILINEAR,NULL,NULL,NULL);
        }

        nv12frame = av_frame_alloc();
        nv12frame->format = AV_PIX_FMT_NV12;
        nv12frame->width = frame->width;
        nv12frame->height = frame->height;
        av_frame_get_buffer(nv12frame, 32);

        sws_scale(
            swsCtx,
            frame->data,          // 源数据指针
            frame->linesize,      // 源每行字节数
            0,                    // 起始行
            frame->height,        // 源高度
            nv12frame->data,      // 目标数据指针
            nv12frame->linesize   // 目标每行字节数
            );

        AVFrame *hw_frame = av_frame_alloc();
        hw_frame->format = AV_PIX_FMT_CUDA;
        hw_frame->width = nv12frame->width;
        hw_frame->height = nv12frame->height;

        if(streamIndex == -1){
            initEncoder(hw_frame);
        }

        if(vEncoder->getCodecCtx()->hw_frames_ctx== nullptr){
            continue;
        }
// 从硬件帧池分配帧（依赖hw_frames_ctx）
        int ret = av_hwframe_get_buffer(vEncoder->getCodecCtx()->hw_frames_ctx, hw_frame, 0);
        if (ret < 0) {
            //av_log(NULL, AV_LOG_ERROR, "av_hwframe_get_buffer失败: %s\n", av_err2str(ret));
            av_frame_free(&hw_frame);
            av_frame_free(&nv12frame);
            av_frame_free(&frame);
            continue;
        }

        // 将软件帧数据拷贝到硬件帧
        av_hwframe_transfer_data(hw_frame,nv12frame,0);

        if(firstFrame){
            firstFramePts = frame->pts;  // 记录第一帧的绝对PTS
            firstFrame = false;
            vEncoder->encode(hw_frame, streamIndex,0,timeBase);
        }
        else{
            // 计算当前帧的相对PTS
            int64_t relativePts = frame->pts - firstFramePts;
            vEncoder->encode(hw_frame, streamIndex, relativePts,timeBase);
            //            std::cerr << "relativePTS: " << relativePts << std::endl;
        }

        av_frame_unref(hw_frame);
        av_frame_free(&hw_frame);

        av_frame_unref(nv12frame);
        av_frame_free(&nv12frame);
#else
        if(streamIndex == -1){
            initEncoder(frame);
        }

        if(firstFrame){
            firstFramePts = frame->pts;  // 记录第一帧的绝对PTS
            firstFrame = false;
            vEncoder->encode(frame, streamIndex,0,timeBase);
        }
        else{
            // 计算当前帧的相对PTS
            int64_t relativePts = frame->pts - firstFramePts;
            vEncoder->encode(frame, streamIndex, relativePts,timeBase);
            //            std::cerr << "relativePTS: " << relativePts << std::endl;
        }

#endif
        av_frame_unref(frame);
        av_frame_free(&frame);
    }
}
void FFVEncoderThread::initEncoder(AVFrame*frame)
{
    frameRate = vFilter->getFrameRate();
//    frameRate = {30,1};
    timeBase = vFilter->getTimeBase();
//    timeBase ={1,10000000};

    vEncoder->initVideo(frame,frameRate);

    muxer->addStream(vEncoder->getCodecCtx());
    streamIndex = muxer->getVStreamIndex();
}
