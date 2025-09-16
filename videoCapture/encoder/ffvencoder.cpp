#include "ffvencoder.h"
#include"queue/ffvframequeue.h"
#include"queue/ffvpacketqueue.h"

//#define NVENC 1

FFVEncoder::FFVEncoder()
{

}

FFVEncoder::~FFVEncoder()
{
    close();

}

void FFVEncoder::init(FFVPacketQueue *pktQueue_){
    pktQueue = pktQueue_;
}

void FFVEncoder::close()
{
    std::lock_guard<std::mutex>lock(mutex);
    if(codecCtx){
        avcodec_free_context(&codecCtx);
        codecCtx = nullptr;
    }
    if(vPars){
        delete vPars;
        vPars = nullptr;
    }

    lastPts = -1;

}

void FFVEncoder::wakeAllThread()
{
    if(pktQueue){
        pktQueue->wakeAllThread();
    }
}

void FFVEncoder::initVideo(AVFrame *frame,AVRational fps)
{
    int ret = 0;
    std::lock_guard<std::mutex>lock(mutex);
    vPars = new FFVEncoderPars();
    vPars->biteRate = 2 * 1024 * 1024; //2M
    vPars->width = frame->width;
    vPars->height = frame->height;
#ifdef NVENC
    vPars->videoFmt = AV_PIX_FMT_CUDA;
#else
    //vPars->videoFmt = AV_PIX_FMT_YUV420P;
#endif
    vPars->frameRate = fps;

#ifdef NVENC
    // NVIDIA硬件设备配置
    AVBufferRef* hw_device_ctx = nullptr;
    ret = av_hwdevice_ctx_create(&hw_device_ctx, AV_HWDEVICE_TYPE_CUDA,
                                 nullptr, nullptr, 0);

    if (ret < 0) {
        std::cerr << "初始化CUDA硬件设备失败：";
        printError(ret);
        avcodec_free_context(&codecCtx);
        return;
    }

    //创建硬件帧上下文
    hw_frame_ref = av_hwframe_ctx_alloc(hw_device_ctx);
    if(hw_frame_ref == NULL){
        printf("av_hwframe_ctx_alloc is falied\n");
    }

    // 配置硬件帧上下文参数
    AVHWFramesContext* hw_frames_ctx = (AVHWFramesContext*)hw_frame_ref->data;
    hw_frames_ctx->format = AV_PIX_FMT_CUDA;       // 硬件像素格式
    hw_frames_ctx->sw_format = AV_PIX_FMT_NV12;   // 软件像素格式
    hw_frames_ctx->width = vPars->width;                 // 视频宽度
    hw_frames_ctx->height = vPars->height;               // 视频高度
    hw_frames_ctx->initial_pool_size = 20;        // 初始帧池大小

    ret = av_hwframe_ctx_init(hw_frame_ref);
    if (ret < 0) {
        printf("Failed to initialize hardware frames context\n");
    }

    const AVCodec* codec = avcodec_find_encoder_by_name("h264_nvenc");
#else
    const AVCodec* codec = avcodec_find_encoder(AV_CODEC_ID_H264);

#endif
    if(codec == nullptr){
        std::cerr << "Find H264 Codec Fail !" << std::endl;
        return;
    }

    codecCtx = avcodec_alloc_context3(codec);
    if(codecCtx == nullptr){
        std::cerr << "Alloc CodecCtx Fail !" << std::endl;
        return;
    }
    codecCtx->width = vPars->width;
    codecCtx->height = vPars->height;
    codecCtx->framerate = vPars->frameRate;
    codecCtx->time_base = AVRational{vPars->frameRate.den,vPars->frameRate.num};
    codecCtx->pix_fmt = vPars->videoFmt;
    codecCtx->flags |= AV_CODEC_FLAG_GLOBAL_HEADER; //不设置就没有封面

    codecCtx->max_b_frames = 0;  // 禁用B帧
    codecCtx->gop_size = 12;     // 合理关键帧间隔
    codecCtx->keyint_min = 12;   // 最小关键帧间隔
    codecCtx->flags |= AV_CODEC_FLAG_LOW_DELAY;  // 低延迟模式
#if 0
    codecCtx->thread_type = FF_THREAD_FRAME;
    codecCtx->thread_count = 8;
#endif

    // 配置编码器参数
    AVDictionary* codec_options = nullptr;
#ifdef NVENC
    codecCtx->hw_frames_ctx = hw_frame_ref;
    // 预设：p0(最快)~p7(最好画质)，直播推荐p5
//    av_dict_set(&codec_options, "preset", "p5", 0);
//    // 码率控制：CBR（恒定码率，适合直播）
//    av_dict_set(&codec_options, "rc", "cbr", 0);
//    // 低延迟模式（直播场景必备）
//    av_dict_set(&codec_options, "low_delay", "1", 0);
//    // 禁用B帧（与max_b_frames=0对应）
//    av_dict_set(&codec_options, "b_adapt", "0", 0);
#else
    av_dict_set(&codec_options, "tune", "zerolatency", 0);
    av_dict_set(&codec_options, "preset", "ultrafast", 0);
#endif
    ret = avcodec_open2(codecCtx,codec,&codec_options);
    if(ret < 0){

        printError(ret);
        return;
    }
    av_dict_free(&codec_options);
    //av_buffer_unref(&hw_device_ctx);
}

int FFVEncoder::encode(AVFrame *frame, int streamIndex, int64_t pts, AVRational timeBase)
{
    std::lock_guard<std::mutex>lock(mutex);

    if(frame == nullptr || codecCtx == nullptr) {
        std::cout << "nullptr" << std::endl;
        return 0;
    }
    pts = av_rescale_q(pts,timeBase,codecCtx->time_base);
    if(pts <= lastPts){ //修正
        pts = lastPts + 1;
    }
    lastPts = pts;

//    std::cout<<"rescale pts:"<<pts<<std::endl;
    frame->pts = pts;


    int ret = avcodec_send_frame(codecCtx,frame);
    if(ret < 0){
        printError(ret);
        return -1;
    }


    while(1){
        AVPacket* pkt = av_packet_alloc();
        ret = avcodec_receive_packet(codecCtx,pkt);
        if(ret == AVERROR(EAGAIN)){
            av_packet_free(&pkt);

            //            std::cerr<<"Encode Video AVERROR(EAGAIN)" << std::endl;
            break;
        }
        else if(ret == AVERROR_EOF){
            std::cout << "Encode Video EOF !" << std::endl;
            av_packet_free(&pkt);
            break;
        }
        else if(ret < 0){
            //            std::cerr << "Encode Video Frame Fail !" << std::endl;
            printError(ret);
            av_packet_free(&pkt);
            av_frame_unref(frame);
            av_frame_free(&frame);
            return -1;
        }
        else{
            pkt->stream_index = streamIndex;
//            std::cerr<<"enqueue pkt !"<<std::endl;
            //            std::cout<<"video packet pts:"<<pkt->pts<<std::endl;
            //            std::cout<<"video packet dts:"<<pkt->dts<<std::endl;
            //            std::cout<<"video packet duration:"<<pkt->duration<<std::endl;
            pktQueue->enqueue(pkt);
            av_packet_free(&pkt);
        }
    }


    return 0;
}

AVCodecContext *FFVEncoder::getCodecCtx()
{
//    std::lock_guard<std::mutex>lock(mutex);
    return codecCtx;
}

FFVEncoderPars *FFVEncoder::getEncoderPars()
{
//    std::lock_guard<std::mutex>lock(mutex);
    return vPars;
}

void FFVEncoder::printError(int ret)
{
    char errorBuffer[AV_ERROR_MAX_STRING_SIZE];
    int res = av_strerror(ret,errorBuffer,sizeof errorBuffer);
    if(res < 0){
        std::cerr << "Unknow Error!" << std::endl;
    }
    else{
        std::cerr << "Error:" << errorBuffer << std::endl;
    }
}
