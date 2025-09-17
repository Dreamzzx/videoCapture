#ifndef FFOVERLAYPROCESSOR_H
#define FFOVERLAYPROCESSOR_H

#ifdef win32
#include<opencv2/opencv.hpp>
#elif linux
#include <opencv4/opencv2/opencv.hpp>
#endif

#include"ffvideoadapter.h"

class FFOverlayProcessor
{
public:
    FFOverlayProcessor();

    void init();
    void sendOverlayImage(AVFrame* frame,int x,int y,int w,int h);
    void sendOverlayImage(cv::Mat &mat,int x,int y,int w,int h);
    void resetBackground();
    AVFrame* getOverlayFrame();
private:
    void overlayImage(cv::Mat &foreground,int x,int y,int w,int h);

private:
    cv::Mat background;
    FFVideoAdapter* adapter = nullptr;

    std::mutex mutex;
};

#endif // FFOVERLAYPROCESSOR_H
