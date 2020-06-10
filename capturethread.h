//线程头文件
#ifndef CAPTURETHREAD_H
#define CAPTURETHREAD_H
#include <QThread>
#include <QImage>
#include "CameraApi.h"
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

class CaptureThread : public QThread{
    Q_OBJECT
public:
    explicit CaptureThread(QObject *parent = 0);

public:
    void run();
    void stream();
    void stop();
    bool quit;
public:
   tSdkFrameHead           sFrameInfo;
   BYTE*			        pbyBuffer;

signals:
   void captured(QImage img);
   void captured0(QImage img);
   void captured1(QImage img);
private:
   bool pause_status;

public slots:

};


#endif // CAPTURETHREAD_H
