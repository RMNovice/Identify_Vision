QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = Coins_Identify
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
RC_FILE += logo.rc
# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    capturethread.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    CameraApi.h \
    CameraDefine.h \
    CameraStatus.h \
    capturethread.h \
    mainwindow.h

FORMS += \
    mainwindow.ui
INCLUDEPATH += D:/opencv3.4.5/opencv/build/include \
               D:/opencv3.4.5/opencv/build/include/opencv \
               D:/opencv3.4.5/opencv/build/include/opencv2

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -LD:/opencv3.4.5/opencv/build/x64/vc14/lib/ -lopencv_world345
else:win32:CONFIG(debug, debug|release): LIBS += -LD:/opencv3.4.5/opencv/build/x64/vc14/lib/ -lopencv_world345d

INCLUDEPATH += D:/opencv3.4.5/opencv/build/x64/vc14
DEPENDPATH += D:/opencv3.4.5/opencv/build/x64/vc14

win32: LIBS += -L$$PWD/./ -lMVCAMSDK_X64

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.
