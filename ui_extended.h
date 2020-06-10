/********************************************************************************
** Form generated from reading UI file 'extended.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENDED_H
#define UI_EXTENDED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_extended
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *extended)
    {
        if (extended->objectName().isEmpty())
            extended->setObjectName(QString::fromUtf8("extended"));
        extended->resize(800, 600);
        menubar = new QMenuBar(extended);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        extended->setMenuBar(menubar);
        centralwidget = new QWidget(extended);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        extended->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(extended);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        extended->setStatusBar(statusbar);

        retranslateUi(extended);

        QMetaObject::connectSlotsByName(extended);
    } // setupUi

    void retranslateUi(QMainWindow *extended)
    {
        extended->setWindowTitle(QCoreApplication::translate("extended", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class extended: public Ui_extended {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENDED_H
