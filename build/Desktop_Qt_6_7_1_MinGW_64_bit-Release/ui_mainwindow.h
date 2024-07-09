/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *horizontalSliderTiming;
    QLabel *label;
    QLabel *label_Timing;
    QSlider *horizontalSliderMax;
    QSlider *horizontalSliderMin;
    QLCDNumber *lcdNumberMin;
    QLCDNumber *lcdNumberMax;
    QLabel *label_Max;
    QLabel *label_Min;
    QTextEdit *textEdit_IP;
    QListView *listView;
    QLabel *label_state;
    QSplitter *splitter;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QSplitter *splitter_2;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(572, 372);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setGeometry(QRect(70, 230, 151, 16));
        horizontalSliderTiming->setMinimum(1);
        horizontalSliderTiming->setMaximum(4);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 230, 49, 16));
        label_Timing = new QLabel(centralWidget);
        label_Timing->setObjectName("label_Timing");
        label_Timing->setGeometry(QRect(230, 230, 16, 16));
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName("horizontalSliderMax");
        horizontalSliderMax->setGeometry(QRect(10, 170, 181, 16));
        horizontalSliderMax->setOrientation(Qt::Horizontal);
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setGeometry(QRect(10, 90, 181, 16));
        horizontalSliderMin->setOrientation(Qt::Horizontal);
        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName("lcdNumberMin");
        lcdNumberMin->setGeometry(QRect(200, 110, 51, 31));
        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName("lcdNumberMax");
        lcdNumberMax->setGeometry(QRect(200, 190, 51, 31));
        label_Max = new QLabel(centralWidget);
        label_Max->setObjectName("label_Max");
        label_Max->setGeometry(QRect(200, 150, 49, 16));
        label_Min = new QLabel(centralWidget);
        label_Min->setObjectName("label_Min");
        label_Min->setGeometry(QRect(200, 70, 49, 16));
        textEdit_IP = new QTextEdit(centralWidget);
        textEdit_IP->setObjectName("textEdit_IP");
        textEdit_IP->setGeometry(QRect(10, 10, 241, 21));
        listView = new QListView(centralWidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(270, 10, 271, 271));
        label_state = new QLabel(centralWidget);
        label_state->setObjectName("label_state");
        label_state->setGeometry(QRect(0, 290, 49, 16));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(10, 40, 241, 24));
        splitter->setOrientation(Qt::Horizontal);
        pushButtonConnect = new QPushButton(splitter);
        pushButtonConnect->setObjectName("pushButtonConnect");
        splitter->addWidget(pushButtonConnect);
        pushButtonDisconnect = new QPushButton(splitter);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");
        splitter->addWidget(pushButtonDisconnect);
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(10, 260, 241, 24));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButtonStart = new QPushButton(splitter_2);
        pushButtonStart->setObjectName("pushButtonStart");
        splitter_2->addWidget(pushButtonStart);
        pushButtonStop = new QPushButton(splitter_2);
        pushButtonStop->setObjectName("pushButtonStop");
        splitter_2->addWidget(pushButtonStop);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 572, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        label_Timing->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_Max->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_Min->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_state->setText(QCoreApplication::translate("MainWindow", "state", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
