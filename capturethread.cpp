//主要包括工业摄像头的调用，数据传输。需要在另外一个线程里获取摄像头采集到的图像以便处理
#include "capturethread.h"
#include "mainwindow.h"
#include "CameraApi.h"
#include <iostream>

using namespace std;
using namespace cv;
unsigned char * g_pRgbBuffer;
int                     hCamera;
tSdkCameraCapbility     tCapability;
extern int flag;
extern int _flag;
CaptureThread::CaptureThread(QObject *parent):
    QThread(parent)
{
    pause_status=true;
    quit=false;
}

void CaptureThread::run(){
    cv::Mat src;
    forever{
        if(!pause_status){
            if(quit) break;
            if(CameraGetImageBuffer(hCamera,&sFrameInfo,&pbyBuffer,1000)==CAMERA_STATUS_SUCCESS){
                CameraImageProcess(hCamera,pbyBuffer,g_pRgbBuffer,&sFrameInfo);
                CameraReleaseImageBuffer(hCamera,pbyBuffer);
                cv::Mat matImage(
                            cvSize(sFrameInfo.iWidth, sFrameInfo.iHeight),
                            sFrameInfo.uiMediaType == CAMERA_MEDIA_TYPE_MONO8 ? CV_8UC1 : CV_8UC3,
                            g_pRgbBuffer
                            );
                src=matImage;
                cvtColor(src,src,CV_BGR2RGB);
                QImage img0=QImage((const unsigned char*)(src.data),src.cols,src.rows,QImage::Format_RGB888);
                //在Qt里需要进行图像类型转换 一
                cvtColor(matImage,matImage,CV_BGR2RGB);

                QImage img=QImage((const unsigned char*)(matImage.data),matImage.cols,matImage.rows,QImage::Format_RGB888);

                img=img.scaled(1169,459,Qt::KeepAspectRatio);
                //二 到此类型转换结束
                emit captured(img);//表示在本线程里传输图像到另一个线程里以便我们处理

                if(flag%2!=0){
                    emit captured0(img0);
                }
                if(_flag%2!=0){
                    emit captured1(img0);
                }

            } else {
                cout<<"timeout"<<endl;
                QThread::usleep(1000);

            }
        }else QThread::usleep(1000);

        if(quit) break;
    }
}

void CaptureThread::stream(){
    pause_status=false;
}


void CaptureThread::stop(){
    pause_status=false;
    quit=true;
}
