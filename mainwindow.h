#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "capturethread.h"
#include <QGraphicsPixmapItem>
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Camera; }
QT_END_NAMESPACE

class Camera : public QMainWindow
{
    Q_OBJECT

public:
    Camera(QWidget *parent = nullptr);
    int status;
    int status1;
    ~Camera();
private slots:
    void on_closecamera_clicked();

    void on_Identify_clicked();

    void Image_process(QImage img);

    void Handle_Image(QImage img);

    void on_opencamera_clicked();

    void on_Scene_Identify_clicked();

    void Random(QImage img);
    void on_close_camera_clicked();

private:
    Ui::Camera *ui;
    int init_SDK();
private:
    QTimer *m_timer;
    QGraphicsScene *m_scene;
    QGraphicsPixmapItem *m_image_item;
    CaptureThread *m_thread;

};

#endif // MAINWINDOW_H
