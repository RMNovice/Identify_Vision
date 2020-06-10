/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QWidget *centralwidget;
    QTabWidget *Switch;
    QWidget *Coins;
    QGroupBox *Photograph;
    QPushButton *snap;
    QLabel *label_3;
    QLineEdit *showRoad;
    QPushButton *road;
    QLabel *label_4;
    QRadioButton *JPG;
    QRadioButton *PNG;
    QRadioButton *BMP;
    QRadioButton *RAW;
    QPushButton *save_Picture;
    QGroupBox *button_button;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Identify;
    QPushButton *opencamera;
    QPushButton *closecamera;
    QGroupBox *Camera_parameter;
    QSlider *gain;
    QSlider *expose;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *gain_2;
    QDoubleSpinBox *expose2;
    QGroupBox *Video_stream;
    QGraphicsView *VIDEO1;
    QGroupBox *PICTURE;
    QGraphicsView *picture1;
    QGroupBox *Prompt;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *Text;
    QLabel *Text1;
    QLabel *Text2;
    QWidget *Environment;
    QGroupBox *Photograph2;
    QPushButton *snap_2;
    QLabel *label_5;
    QLineEdit *showRoad_2;
    QPushButton *road_2;
    QLabel *label_6;
    QRadioButton *JPG_2;
    QRadioButton *PNG_2;
    QRadioButton *BMP_2;
    QRadioButton *RAW_2;
    QPushButton *save_Picture_2;
    QGroupBox *Camera_parameter_2;
    QSlider *gain_4;
    QSlider *expose_3;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *gain_3;
    QDoubleSpinBox *expose4;
    QGroupBox *video_22;
    QGraphicsView *VIDEO2;
    QGroupBox *PICTURE2;
    QGraphicsView *picture2;
    QGroupBox *Prompt_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *Text_axis;
    QLabel *Text4;
    QLabel *Text5;
    QGroupBox *Button_button_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Scene_Identify;
    QPushButton *close_camera;
    QMenuBar *menubar;
    QMenu *menuCamera_Get;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QString::fromUtf8("Camera"));
        Camera->resize(1218, 718);
        centralwidget = new QWidget(Camera);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Switch = new QTabWidget(centralwidget);
        Switch->setObjectName(QString::fromUtf8("Switch"));
        Switch->setGeometry(QRect(0, 0, 1211, 671));
        Coins = new QWidget();
        Coins->setObjectName(QString::fromUtf8("Coins"));
        Photograph = new QGroupBox(Coins);
        Photograph->setObjectName(QString::fromUtf8("Photograph"));
        Photograph->setGeometry(QRect(940, 10, 261, 141));
        snap = new QPushButton(Photograph);
        snap->setObjectName(QString::fromUtf8("snap"));
        snap->setGeometry(QRect(20, 20, 221, 21));
        label_3 = new QLabel(Photograph);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 31, 20));
        showRoad = new QLineEdit(Photograph);
        showRoad->setObjectName(QString::fromUtf8("showRoad"));
        showRoad->setGeometry(QRect(70, 50, 113, 21));
        road = new QPushButton(Photograph);
        road->setObjectName(QString::fromUtf8("road"));
        road->setGeometry(QRect(190, 50, 51, 21));
        label_4 = new QLabel(Photograph);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 80, 31, 21));
        JPG = new QRadioButton(Photograph);
        JPG->setObjectName(QString::fromUtf8("JPG"));
        JPG->setGeometry(QRect(50, 80, 51, 21));
        PNG = new QRadioButton(Photograph);
        PNG->setObjectName(QString::fromUtf8("PNG"));
        PNG->setGeometry(QRect(100, 80, 51, 21));
        BMP = new QRadioButton(Photograph);
        BMP->setObjectName(QString::fromUtf8("BMP"));
        BMP->setGeometry(QRect(150, 80, 51, 21));
        RAW = new QRadioButton(Photograph);
        RAW->setObjectName(QString::fromUtf8("RAW"));
        RAW->setGeometry(QRect(200, 80, 110, 19));
        save_Picture = new QPushButton(Photograph);
        save_Picture->setObjectName(QString::fromUtf8("save_Picture"));
        save_Picture->setGeometry(QRect(20, 110, 221, 21));
        button_button = new QGroupBox(Coins);
        button_button->setObjectName(QString::fromUtf8("button_button"));
        button_button->setGeometry(QRect(940, 410, 261, 121));
        verticalLayoutWidget = new QWidget(button_button);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 241, 98));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Identify = new QPushButton(verticalLayoutWidget);
        Identify->setObjectName(QString::fromUtf8("Identify"));

        verticalLayout->addWidget(Identify);

        opencamera = new QPushButton(verticalLayoutWidget);
        opencamera->setObjectName(QString::fromUtf8("opencamera"));

        verticalLayout->addWidget(opencamera);

        closecamera = new QPushButton(verticalLayoutWidget);
        closecamera->setObjectName(QString::fromUtf8("closecamera"));

        verticalLayout->addWidget(closecamera);

        Camera_parameter = new QGroupBox(Coins);
        Camera_parameter->setObjectName(QString::fromUtf8("Camera_parameter"));
        Camera_parameter->setGeometry(QRect(940, 220, 261, 111));
        gain = new QSlider(Camera_parameter);
        gain->setObjectName(QString::fromUtf8("gain"));
        gain->setGeometry(QRect(50, 51, 151, 21));
        gain->setOrientation(Qt::Horizontal);
        expose = new QSlider(Camera_parameter);
        expose->setObjectName(QString::fromUtf8("expose"));
        expose->setGeometry(QRect(50, 81, 151, 21));
        expose->setOrientation(Qt::Horizontal);
        label = new QLabel(Camera_parameter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 31, 21));
        label_2 = new QLabel(Camera_parameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 31, 16));
        gain_2 = new QDoubleSpinBox(Camera_parameter);
        gain_2->setObjectName(QString::fromUtf8("gain_2"));
        gain_2->setGeometry(QRect(200, 50, 63, 22));
        expose2 = new QDoubleSpinBox(Camera_parameter);
        expose2->setObjectName(QString::fromUtf8("expose2"));
        expose2->setGeometry(QRect(200, 80, 63, 22));
        Video_stream = new QGroupBox(Coins);
        Video_stream->setObjectName(QString::fromUtf8("Video_stream"));
        Video_stream->setGeometry(QRect(9, 9, 461, 521));
        VIDEO1 = new QGraphicsView(Video_stream);
        VIDEO1->setObjectName(QString::fromUtf8("VIDEO1"));
        VIDEO1->setGeometry(QRect(10, 20, 441, 491));
        PICTURE = new QGroupBox(Coins);
        PICTURE->setObjectName(QString::fromUtf8("PICTURE"));
        PICTURE->setGeometry(QRect(469, 9, 461, 521));
        picture1 = new QGraphicsView(PICTURE);
        picture1->setObjectName(QString::fromUtf8("picture1"));
        picture1->setGeometry(QRect(10, 20, 441, 491));
        Prompt = new QGroupBox(Coins);
        Prompt->setObjectName(QString::fromUtf8("Prompt"));
        Prompt->setGeometry(QRect(10, 530, 1191, 111));
        verticalLayoutWidget_2 = new QWidget(Prompt);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 1171, 81));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Text = new QLabel(verticalLayoutWidget_2);
        Text->setObjectName(QString::fromUtf8("Text"));

        verticalLayout_2->addWidget(Text);

        Text1 = new QLabel(verticalLayoutWidget_2);
        Text1->setObjectName(QString::fromUtf8("Text1"));

        verticalLayout_2->addWidget(Text1);

        Text2 = new QLabel(verticalLayoutWidget_2);
        Text2->setObjectName(QString::fromUtf8("Text2"));

        verticalLayout_2->addWidget(Text2);

        Switch->addTab(Coins, QString());
        Environment = new QWidget();
        Environment->setObjectName(QString::fromUtf8("Environment"));
        Photograph2 = new QGroupBox(Environment);
        Photograph2->setObjectName(QString::fromUtf8("Photograph2"));
        Photograph2->setGeometry(QRect(940, 10, 261, 141));
        snap_2 = new QPushButton(Photograph2);
        snap_2->setObjectName(QString::fromUtf8("snap_2"));
        snap_2->setGeometry(QRect(20, 20, 221, 21));
        label_5 = new QLabel(Photograph2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 50, 31, 20));
        showRoad_2 = new QLineEdit(Photograph2);
        showRoad_2->setObjectName(QString::fromUtf8("showRoad_2"));
        showRoad_2->setGeometry(QRect(70, 50, 113, 21));
        road_2 = new QPushButton(Photograph2);
        road_2->setObjectName(QString::fromUtf8("road_2"));
        road_2->setGeometry(QRect(190, 50, 51, 21));
        label_6 = new QLabel(Photograph2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 80, 31, 21));
        JPG_2 = new QRadioButton(Photograph2);
        JPG_2->setObjectName(QString::fromUtf8("JPG_2"));
        JPG_2->setGeometry(QRect(50, 80, 51, 21));
        PNG_2 = new QRadioButton(Photograph2);
        PNG_2->setObjectName(QString::fromUtf8("PNG_2"));
        PNG_2->setGeometry(QRect(100, 80, 51, 21));
        BMP_2 = new QRadioButton(Photograph2);
        BMP_2->setObjectName(QString::fromUtf8("BMP_2"));
        BMP_2->setGeometry(QRect(150, 80, 51, 21));
        RAW_2 = new QRadioButton(Photograph2);
        RAW_2->setObjectName(QString::fromUtf8("RAW_2"));
        RAW_2->setGeometry(QRect(200, 80, 110, 19));
        save_Picture_2 = new QPushButton(Photograph2);
        save_Picture_2->setObjectName(QString::fromUtf8("save_Picture_2"));
        save_Picture_2->setGeometry(QRect(20, 110, 221, 21));
        Camera_parameter_2 = new QGroupBox(Environment);
        Camera_parameter_2->setObjectName(QString::fromUtf8("Camera_parameter_2"));
        Camera_parameter_2->setGeometry(QRect(940, 220, 261, 111));
        gain_4 = new QSlider(Camera_parameter_2);
        gain_4->setObjectName(QString::fromUtf8("gain_4"));
        gain_4->setGeometry(QRect(50, 50, 141, 22));
        gain_4->setOrientation(Qt::Horizontal);
        expose_3 = new QSlider(Camera_parameter_2);
        expose_3->setObjectName(QString::fromUtf8("expose_3"));
        expose_3->setGeometry(QRect(50, 80, 141, 22));
        expose_3->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(Camera_parameter_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 50, 31, 21));
        label_8 = new QLabel(Camera_parameter_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 80, 31, 16));
        gain_3 = new QDoubleSpinBox(Camera_parameter_2);
        gain_3->setObjectName(QString::fromUtf8("gain_3"));
        gain_3->setGeometry(QRect(190, 50, 63, 22));
        expose4 = new QDoubleSpinBox(Camera_parameter_2);
        expose4->setObjectName(QString::fromUtf8("expose4"));
        expose4->setGeometry(QRect(190, 80, 63, 22));
        video_22 = new QGroupBox(Environment);
        video_22->setObjectName(QString::fromUtf8("video_22"));
        video_22->setGeometry(QRect(10, 10, 461, 521));
        VIDEO2 = new QGraphicsView(video_22);
        VIDEO2->setObjectName(QString::fromUtf8("VIDEO2"));
        VIDEO2->setGeometry(QRect(10, 20, 441, 491));
        PICTURE2 = new QGroupBox(Environment);
        PICTURE2->setObjectName(QString::fromUtf8("PICTURE2"));
        PICTURE2->setGeometry(QRect(470, 10, 461, 521));
        picture2 = new QGraphicsView(PICTURE2);
        picture2->setObjectName(QString::fromUtf8("picture2"));
        picture2->setGeometry(QRect(10, 20, 441, 491));
        Prompt_2 = new QGroupBox(Environment);
        Prompt_2->setObjectName(QString::fromUtf8("Prompt_2"));
        Prompt_2->setGeometry(QRect(10, 530, 1191, 111));
        verticalLayoutWidget_3 = new QWidget(Prompt_2);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(9, 19, 1171, 81));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Text_axis = new QLabel(verticalLayoutWidget_3);
        Text_axis->setObjectName(QString::fromUtf8("Text_axis"));

        verticalLayout_3->addWidget(Text_axis);

        Text4 = new QLabel(verticalLayoutWidget_3);
        Text4->setObjectName(QString::fromUtf8("Text4"));

        verticalLayout_3->addWidget(Text4);

        Text5 = new QLabel(verticalLayoutWidget_3);
        Text5->setObjectName(QString::fromUtf8("Text5"));

        verticalLayout_3->addWidget(Text5);

        Button_button_2 = new QGroupBox(Environment);
        Button_button_2->setObjectName(QString::fromUtf8("Button_button_2"));
        Button_button_2->setGeometry(QRect(940, 410, 261, 121));
        verticalLayoutWidget_4 = new QWidget(Button_button_2);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 20, 241, 91));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Scene_Identify = new QPushButton(verticalLayoutWidget_4);
        Scene_Identify->setObjectName(QString::fromUtf8("Scene_Identify"));

        verticalLayout_4->addWidget(Scene_Identify);

        close_camera = new QPushButton(verticalLayoutWidget_4);
        close_camera->setObjectName(QString::fromUtf8("close_camera"));

        verticalLayout_4->addWidget(close_camera);

        Switch->addTab(Environment, QString());
        Camera->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Camera);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1218, 26));
        menuCamera_Get = new QMenu(menubar);
        menuCamera_Get->setObjectName(QString::fromUtf8("menuCamera_Get"));
        Camera->setMenuBar(menubar);
        statusbar = new QStatusBar(Camera);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Camera->setStatusBar(statusbar);

        menubar->addAction(menuCamera_Get->menuAction());

        retranslateUi(Camera);

        Switch->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QMainWindow *Camera)
    {
        Camera->setWindowTitle(QCoreApplication::translate("Camera", "Camera", nullptr));
#if QT_CONFIG(whatsthis)
        Switch->setWhatsThis(QCoreApplication::translate("Camera", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        Photograph->setTitle(QCoreApplication::translate("Camera", "\346\212\223\346\213\215\350\256\276\347\275\256", nullptr));
        snap->setText(QCoreApplication::translate("Camera", "\346\212\223\346\213\215", nullptr));
        label_3->setText(QCoreApplication::translate("Camera", "\350\267\257\345\276\204", nullptr));
        road->setText(QCoreApplication::translate("Camera", "...", nullptr));
        label_4->setText(QCoreApplication::translate("Camera", "\346\240\274\345\274\217", nullptr));
        JPG->setText(QCoreApplication::translate("Camera", "JPG", nullptr));
        PNG->setText(QCoreApplication::translate("Camera", "PNG", nullptr));
        BMP->setText(QCoreApplication::translate("Camera", "BMP", nullptr));
        RAW->setText(QCoreApplication::translate("Camera", "RAW", nullptr));
        save_Picture->setText(QCoreApplication::translate("Camera", "\344\277\235\345\255\230", nullptr));
        button_button->setTitle(QCoreApplication::translate("Camera", "\346\214\211\351\222\256", nullptr));
        Identify->setText(QCoreApplication::translate("Camera", " \350\257\206\345\210\253", nullptr));
        opencamera->setText(QCoreApplication::translate("Camera", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        closecamera->setText(QCoreApplication::translate("Camera", " \345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
        Camera_parameter->setTitle(QCoreApplication::translate("Camera", "\347\233\270\346\234\272\345\217\202\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("Camera", "\345\242\236\347\233\212", nullptr));
        label_2->setText(QCoreApplication::translate("Camera", "\346\233\235\345\205\211", nullptr));
        Video_stream->setTitle(QCoreApplication::translate("Camera", "\345\233\276\345\203\217\346\230\276\347\244\272", nullptr));
        PICTURE->setTitle(QCoreApplication::translate("Camera", "\346\212\223\346\213\215\347\205\247\347\211\207", nullptr));
        Prompt->setTitle(QCoreApplication::translate("Camera", "\346\226\207\345\255\227\346\217\220\347\244\272", nullptr));
        Text->setText(QCoreApplication::translate("Camera", "Text", nullptr));
        Text1->setText(QCoreApplication::translate("Camera", "Text1", nullptr));
        Text2->setText(QCoreApplication::translate("Camera", "Text2", nullptr));
        Switch->setTabText(Switch->indexOf(Coins), QCoreApplication::translate("Camera", "\347\241\254\345\270\201\350\257\206\345\210\253", nullptr));
        Photograph2->setTitle(QCoreApplication::translate("Camera", "\346\212\223\346\213\215\350\256\276\347\275\256", nullptr));
        snap_2->setText(QCoreApplication::translate("Camera", "\346\212\223\346\213\215", nullptr));
        label_5->setText(QCoreApplication::translate("Camera", "\350\267\257\345\276\204", nullptr));
        road_2->setText(QCoreApplication::translate("Camera", "...", nullptr));
        label_6->setText(QCoreApplication::translate("Camera", "\346\240\274\345\274\217", nullptr));
        JPG_2->setText(QCoreApplication::translate("Camera", "JPG", nullptr));
        PNG_2->setText(QCoreApplication::translate("Camera", "PNG", nullptr));
        BMP_2->setText(QCoreApplication::translate("Camera", "BMP", nullptr));
        RAW_2->setText(QCoreApplication::translate("Camera", "RAW", nullptr));
        save_Picture_2->setText(QCoreApplication::translate("Camera", "\344\277\235\345\255\230", nullptr));
        Camera_parameter_2->setTitle(QCoreApplication::translate("Camera", "\347\233\270\346\234\272\345\217\202\346\225\260", nullptr));
        label_7->setText(QCoreApplication::translate("Camera", "\345\242\236\347\233\212", nullptr));
        label_8->setText(QCoreApplication::translate("Camera", "\346\233\235\345\205\211", nullptr));
        video_22->setTitle(QCoreApplication::translate("Camera", "\347\233\256\346\240\207\346\240\207\346\263\250", nullptr));
        PICTURE2->setTitle(QCoreApplication::translate("Camera", "\346\212\223\346\213\215\345\233\276\347\211\207", nullptr));
        Prompt_2->setTitle(QCoreApplication::translate("Camera", "\346\226\207\345\255\227\346\217\220\347\244\272", nullptr));
        Text_axis->setText(QCoreApplication::translate("Camera", "Text_axis", nullptr));
        Text4->setText(QCoreApplication::translate("Camera", "Text4", nullptr));
        Text5->setText(QCoreApplication::translate("Camera", "Text5", nullptr));
        Button_button_2->setTitle(QCoreApplication::translate("Camera", "\346\214\211\351\222\256", nullptr));
        Scene_Identify->setText(QCoreApplication::translate("Camera", "\345\274\200\345\247\213\350\257\206\345\210\253", nullptr));
        close_camera->setText(QCoreApplication::translate("Camera", " \345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
        Switch->setTabText(Switch->indexOf(Environment), QCoreApplication::translate("Camera", "\351\232\217\346\234\272\350\257\206\345\210\253", nullptr));
        menuCamera_Get->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
