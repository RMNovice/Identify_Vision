#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Camera w;
    w.setWindowTitle(QString("Identify"));
    w.show();
    return a.exec();
}
