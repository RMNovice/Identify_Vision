#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CameraApi.h"
#include <QTime>
#include <QDebug>

using namespace cv;
using namespace std;
extern  unsigned char * g_pRgbBuffer;
extern int                     hCamera;
extern tSdkCameraCapbility     tCapability; //设备描述信息
int k=0;
int p=0;
int flag=0;int _flag=0;
int flag0=0;
int flag1=0;
int kp=0;
Mat img1;
Mat grayimg;
vector<Vec3f> circles;
QString str0="Total number of one_yuan",str1="Total number of five_pointed";
QString str2="Camera off.";
QString str3="Camera on.";
Camera::Camera(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Camera),m_scene(0),m_image_item(0)
{//在这个大括号内的内容会先执行一遍
    if(init_SDK()==-1){//相机初始化调用
        status =0;
        status1=0;
        //return ;
    }
    ui->setupUi(this);
    ui->Text4->setText(QString("Identify off."));
    ui->Text->setText(str0+":      "+str1+":       ");
    m_scene = new QGraphicsScene(this);
    // ui->VIDEO1->setScene(m_scene);
    m_thread = new CaptureThread(this);
    //start task thread
    connect(m_thread,SIGNAL(captured(QImage)),this,SLOT(Image_process(QImage)),Qt::QueuedConnection);//与下面“connect”函数类似，这句话的意思是“当Captured(QImage)”函数被执行后，会激活”Image_process(QImage)“函数
    connect(m_thread,SIGNAL(captured0(QImage)),this,SLOT(Handle_Image(QImage)),Qt::BlockingQueuedConnection);
    connect(m_thread,SIGNAL(captured1(QImage)),this,SLOT(Random(QImage)),Qt::BlockingQueuedConnection);

    m_thread->start();
    m_thread->stream();
    cout<<status<<endl;
    status =1;
    ui->Text1->setText("Camera on but Image off");
    if(status1==0) ui->Text1->setText("Camera offline");
}

int Camera::init_SDK(){//相机初始化
    int                     iCameraCounts = 1;
    int                     iStatus = -1;
    tSdkCameraDevInfo       tCameraEnumList;
    CameraSdkInit(1);

    //枚举设备，并建立设备列表
    iStatus = CameraEnumerateDevice(&tCameraEnumList, &iCameraCounts);
    printf("state = %d\n", iStatus);

    printf("count = %d\n", iCameraCounts);
    //没有连接设备
    if (iCameraCounts == 0) {
        return -1;
    }

    //相机初始化。初始化成功后，才能调用任何其他相机相关的操作接口
    iStatus = CameraInit(&tCameraEnumList, -1, -1, &hCamera);

    //初始化失败
    printf("state = %d\n", iStatus);
    if (iStatus != CAMERA_STATUS_SUCCESS) {
        return -1;
    }

    CameraSetSaturation (hCamera, 100);

    CameraSetWbMode (hCamera, true);

    CameraSetFrameSpeed (hCamera, 2);

    CameraSetAeState (hCamera, FALSE);

    CameraSetExposureTime (hCamera, 1000 * 15);
    CameraSetAnalogGain (hCamera, 2.5);
    CameraSetMirror(hCamera,0,FALSE);
    CameraSetMirror(hCamera,1,TRUE);
    //获得相机的特性描述结构体。该结构体中包含了相机可设置的各种参数的范围信息。决定了相关函数的参数
    CameraGetCapability(hCamera, &tCapability);

    //
    g_pRgbBuffer = (unsigned char*)malloc(tCapability.sResolutionRange.iHeightMax*tCapability.sResolutionRange.iWidthMax * 3);
    //g_readBuf = (unsigned char*)malloc(tCapability.sResolutionRange.iHeightMax*tCapability.sResolutionRange.iWidthMax*3);

    /*让SDK进入工作模式，开始接收来自相机发送的图像
        数据。如果当前相机是触发模式，则需要接收到
        触发帧以后才会更新图像。    */
    CameraPlay(hCamera);

    /*其他的相机参数设置
        例如 CameraSetExposureTime   CameraGetExposureTime  设置/读取曝光时间
             CameraSetImageResolution  CameraGetImageResolution 设置/读取分辨率
             CameraSetGamma、CameraSetConrast、CameraSetGain等设置图像伽马、对比度、RGB数字增益等等。
             更多的参数的设置方法，，清参考MindVision_Demo。本例程只是为了演示如何将SDK中获取的图像，转成OpenCV的图像格式,以便调用OpenCV的图像处理函数进行后续开发
        */

    if (tCapability.sIspCapacity.bMonoSensor) {
        CameraSetIspOutFormat(hCamera, CAMERA_MEDIA_TYPE_MONO8);
    }
    else {
        CameraSetIspOutFormat(hCamera, CAMERA_MEDIA_TYPE_BGR8);
    }
    return 0;
}

void Camera::Image_process(QImage img)//图像更新函数
{
    if(flag0%2!=0){

        if(flag%2!=0) return;

        if (m_thread->quit)
        {
            return ;//相当于break
        }


        if(m_image_item)
        {
            m_scene->removeItem(m_image_item);
            delete m_image_item;
            m_image_item = 0;
        }


        m_image_item = m_scene->addPixmap(QPixmap::fromImage(img));
        ui->VIDEO1->setScene(m_scene);

        m_scene->setSceneRect(0, 0, img.width(), img.height());
    }
    else
        if(m_image_item)
        {
            m_scene->removeItem(m_image_item);
            delete m_image_item;
            m_image_item = 0;
        }
    return;
}

Camera::~Camera()
{
    delete ui;
}


void Camera::on_closecamera_clicked()//释放相机资源，关闭相机窗口
{
    kp=0;
    flag1++;
    if(flag1%2!=0){
        kp=1;
        ui->Text1->setText(str2);
        m_thread->stop();
        while (!m_thread->wait(100) )
        {
            QCoreApplication::processEvents();
        }

        if(g_pRgbBuffer!=NULL){
            free(g_pRgbBuffer);
            g_pRgbBuffer=NULL;
        }

        if(hCamera>0){
            //相机反初始化。释放资源。
            CameraUnInit(hCamera);
            hCamera=-1;
        }
        if(m_image_item)
        {
            m_scene->removeItem(m_image_item);
            delete m_image_item;
            m_image_item = 0;
        }
       this->close();

    }
}

void Camera::Handle_Image(QImage img){//硬币识别部分请写在此处
    //代码勿动！直到下一个标注部分。
    Mat src;Mat src1;
    src1=cv::Mat(img.height(),img.width(),CV_8UC3,(uchar *)img.bits(),img.bytesPerLine());
    src=cv::Mat(src1.rows,src1.cols,CV_8UC3);
    int from_to[]={0,0,1,1,2,2};
    mixChannels(&src1,1,&src,1,from_to,3);
    //以上代码请勿动，接下来直接操作src即可，src为摄像头实时捕捉的画面
    QTime ti;
    ti.start();
    //卷积
    medianBlur(src, img1, 15);//原图，处理后的图，卷积值1，3，5。。数越大图像越模糊
    qDebug()<<"Gaussian:"<<ti.elapsed()/1000.0<<"s";
    //灰度
    cvtColor(img1, grayimg, COLOR_BGR2GRAY);//模糊过的图，灰色图像

    //检测圆
    //储存检测圆的容器
    QTime tii;
    tii.start();
    //调用Hough变换检测圆, 耗时严重
    HoughCircles(grayimg, circles, HOUGH_GRADIENT, 1, 35, 100, 35, 100, 150);//查找圆环，就是一个不断调节参数的过程。
    qDebug()<<"Hough:"<<tii.elapsed()/1000.0<<"s";

    //Draw the circles detected
    //1元
    int j = 0;
    for (int i = 0;i < circles.size();i++)//循环，circles.size()是圆的数量
    {
        Vec3f cc = circles[i];
        if (cc[2] < 120)//画出1元硬币
            continue;
        //画圆函数（在哪个图上画，Point（圆心x，y），半径，颜色（蓝，绿，红0-255），线条粗细，字体）
        circle(src, Point(cc[0], cc[1]), cc[2], Scalar(0, 0, 255), 2, LINE_AA);
        //画圆心
        circle(src, Point(cc[0], cc[1]), 2, Scalar(0, 0, 255), 2, LINE_AA);
        j++;
    }
    //五角
    int q = 0;
    for (int i = 0;i < circles.size();i++)//循环，circles.size()是圆的数量
    {
        Vec3f cc = circles[i];
        if (cc[2] > 120)//画出五角硬币
            continue;
        //画圆函数（在哪个图上画，Point（圆心x，y），半径，颜色（蓝，绿，红0-255），线条粗细，字体）
        circle(src, Point(cc[0], cc[1]), cc[2], Scalar(0, 255, 0), 2, LINE_AA);
        //画圆心
        circle(src, Point(cc[0], cc[1]), 2, Scalar(0, 255, 0), 2, LINE_AA);
        q++;
    }
    if (k!=j && p!=q)
    {
        k = j;//j为1元个数
        p = q;//q为五角个数
    }


    //以下代码勿动！！！
    ui->Text->setText(str0+":"+QString::number(j)+","+str1+":"+QString::number(q));
    cvtColor(src,src,CV_BGR2RGB);

    QImage img0=QImage((const unsigned char*)(src.data),src.cols,src.rows,QImage::Format_RGB888);

    img0=img0.scaled(1169,459,Qt::KeepAspectRatio);

    if(m_image_item)
    {
        m_scene->removeItem(m_image_item);
        delete m_image_item;
        m_image_item = 0;
    }


    m_image_item = m_scene->addPixmap(QPixmap::fromImage(img0));
    ui->VIDEO1->setScene(m_scene);

    m_scene->setSceneRect(0, 0, img0.width(), img0.height());

}

void Camera::on_Identify_clicked()//与按钮“Identify”相关，按钮处理函数，点击此按钮会开启识别模式
{
    if(flag0%2!=0){
        flag++;
        if(flag%2==0)ui->Text1->setText("Identify off");
        else ui->Text1->setText("Identify on");
    }
    else return;
}

void Camera::on_opencamera_clicked()//与“opencamera”按钮相关，按钮处理函数，点击此按钮将会显示图像在交互页面上。
{
    if(kp==0){
    flag0++;
    if(flag0%2!=0) ui->Text1->setText("Image on but Identify off.");
    else ui->Text1->setText("Image off.");
    }
}

void Camera::Random(QImage img){//随机识别部分请在本函数内完成
    //代码勿动！直到下一个标注部分。
    Mat src;Mat src1;
    src1=cv::Mat(img.height(),img.width(),CV_8UC3,(uchar *)img.bits(),img.bytesPerLine());
    src=cv::Mat(src1.rows,src1.cols,CV_8UC3);
    int from_to[]={0,0,1,1,2,2};
    mixChannels(&src1,1,&src,1,from_to,3);
    //以上代码请勿动，接下来直接操作src即可，src为摄像头实时捕捉的画面





    ui->Text->setText(QString("Identify on."));
    cvtColor(src,src,CV_BGR2RGB);

    QImage img0=QImage((const unsigned char*)(src.data),src.cols,src.rows,QImage::Format_RGB888);

    img0=img0.scaled(1169,459,Qt::KeepAspectRatio);

    if(m_image_item)
    {
        m_scene->removeItem(m_image_item);
        delete m_image_item;
        m_image_item = 0;
    }


    m_image_item = m_scene->addPixmap(QPixmap::fromImage(img0));
    ui->VIDEO1->setScene(m_scene);

    m_scene->setSceneRect(0, 0, img0.width(), img0.height());
}

void Camera::on_Scene_Identify_clicked()
{
    if(_flag%2!=0){
        _flag++;
    }

    else
    {
        ui->Text4->setText(QString("Identify off."));
        return;
    }
}

void Camera::on_close_camera_clicked()
{
        ui->Text5->setText(str2);
        m_thread->stop();
        while (!m_thread->wait(100) )

        {
            QCoreApplication::processEvents();
        }

        if(g_pRgbBuffer!=NULL){
            free(g_pRgbBuffer);
            g_pRgbBuffer=NULL;
        }

        if(hCamera>0){
            //相机反初始化。释放资源。
            CameraUnInit(hCamera);
            hCamera=-1;
        }
        if(m_image_item)
        {
            m_scene->removeItem(m_image_item);
            delete m_image_item;
            m_image_item = 0;
        }
       this->close();
}
