/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <modelloadingowgt.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWireFrameView;
    QAction *actionDebug;
    QAction *actionEnvSetting;
    QAction *actionLoadModel;
    QAction *actionShowLights;
    QAction *actionDrawCube;
    QAction *actionDrawPlane;
    QAction *actionDepthTest;
    QAction *actionDepthTestShader;
    QAction *actionStencil;
    QAction *actionDrawVegetation;
    QAction *actionDrawWindows;
    QAction *actionDrawFramBuffer;
    QAction *actionSelectFrambufferType;
    QAction *actionOpenSkyBox;
    QAction *actionReflectIonSkyBox;
    QAction *actionReflractionSkyBox;
    QAction *actionReflectTexSkyBox;
    QAction *actionPoints;
    QAction *actionDrawHouse;
    QAction *actionDrawExplode;
    QAction *actionshowNormal;
    QWidget *centralwidget;
    ModelLoadingOWgt *openGLWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(830, 754);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/le.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color:rgb(68, 68, 68);\n"
"	color:rgb(255, 255, 255);\n"
"	font:14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QMenuBar {\n"
"	background-color:rgb(200, 200, 200);\n"
"	color:rgb(60, 60, 60);\n"
"}"));
        actionWireFrameView = new QAction(MainWindow);
        actionWireFrameView->setObjectName("actionWireFrameView");
        actionWireFrameView->setCheckable(true);
        actionDebug = new QAction(MainWindow);
        actionDebug->setObjectName("actionDebug");
        actionEnvSetting = new QAction(MainWindow);
        actionEnvSetting->setObjectName("actionEnvSetting");
        actionLoadModel = new QAction(MainWindow);
        actionLoadModel->setObjectName("actionLoadModel");
        actionShowLights = new QAction(MainWindow);
        actionShowLights->setObjectName("actionShowLights");
        actionDrawCube = new QAction(MainWindow);
        actionDrawCube->setObjectName("actionDrawCube");
        actionDrawPlane = new QAction(MainWindow);
        actionDrawPlane->setObjectName("actionDrawPlane");
        actionDepthTest = new QAction(MainWindow);
        actionDepthTest->setObjectName("actionDepthTest");
        actionDepthTestShader = new QAction(MainWindow);
        actionDepthTestShader->setObjectName("actionDepthTestShader");
        actionStencil = new QAction(MainWindow);
        actionStencil->setObjectName("actionStencil");
        actionStencil->setCheckable(true);
        actionDrawVegetation = new QAction(MainWindow);
        actionDrawVegetation->setObjectName("actionDrawVegetation");
        actionDrawWindows = new QAction(MainWindow);
        actionDrawWindows->setObjectName("actionDrawWindows");
        actionDrawFramBuffer = new QAction(MainWindow);
        actionDrawFramBuffer->setObjectName("actionDrawFramBuffer");
        actionSelectFrambufferType = new QAction(MainWindow);
        actionSelectFrambufferType->setObjectName("actionSelectFrambufferType");
        actionOpenSkyBox = new QAction(MainWindow);
        actionOpenSkyBox->setObjectName("actionOpenSkyBox");
        actionOpenSkyBox->setCheckable(true);
        actionReflectIonSkyBox = new QAction(MainWindow);
        actionReflectIonSkyBox->setObjectName("actionReflectIonSkyBox");
        actionReflectIonSkyBox->setCheckable(true);
        actionReflractionSkyBox = new QAction(MainWindow);
        actionReflractionSkyBox->setObjectName("actionReflractionSkyBox");
        actionReflractionSkyBox->setCheckable(true);
        actionReflectTexSkyBox = new QAction(MainWindow);
        actionReflectTexSkyBox->setObjectName("actionReflectTexSkyBox");
        actionReflectTexSkyBox->setCheckable(true);
        actionPoints = new QAction(MainWindow);
        actionPoints->setObjectName("actionPoints");
        actionDrawHouse = new QAction(MainWindow);
        actionDrawHouse->setObjectName("actionDrawHouse");
        actionDrawExplode = new QAction(MainWindow);
        actionDrawExplode->setObjectName("actionDrawExplode");
        actionshowNormal = new QAction(MainWindow);
        actionshowNormal->setObjectName("actionshowNormal");
        actionshowNormal->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        openGLWidget = new ModelLoadingOWgt(centralwidget);
        openGLWidget->setObjectName("openGLWidget");
        openGLWidget->setGeometry(QRect(200, 140, 300, 200));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 830, 24));
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(false);
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        mainToolBar->addAction(actionLoadModel);
        mainToolBar->addAction(actionEnvSetting);
        mainToolBar->addAction(actionDepthTest);
        mainToolBar->addAction(actionStencil);
        mainToolBar->addAction(actionWireFrameView);
        mainToolBar->addAction(actionPoints);
        mainToolBar->addAction(actionShowLights);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDrawCube);
        mainToolBar->addAction(actionDrawPlane);
        mainToolBar->addAction(actionDrawWindows);
        mainToolBar->addAction(actionDrawVegetation);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDrawHouse);
        mainToolBar->addAction(actionDrawExplode);
        mainToolBar->addAction(actionshowNormal);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDrawFramBuffer);
        mainToolBar->addAction(actionSelectFrambufferType);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpenSkyBox);
        mainToolBar->addAction(actionReflectIonSkyBox);
        mainToolBar->addAction(actionReflractionSkyBox);
        mainToolBar->addAction(actionReflectTexSkyBox);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDebug);
        mainToolBar->addAction(actionDepthTestShader);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "HelloOpenGL", nullptr));
        actionWireFrameView->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\241\206\346\270\262\346\237\223", nullptr));
        actionDebug->setText(QCoreApplication::translate("MainWindow", "\350\260\203\350\257\225", nullptr));
        actionEnvSetting->setText(QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203\350\256\276\347\275\256", nullptr));
        actionLoadModel->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\236\213\345\212\240\350\275\275", nullptr));
        actionShowLights->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\201\257\345\205\211\347\273\204", nullptr));
        actionDrawCube->setText(QCoreApplication::translate("MainWindow", "DrawCube", nullptr));
        actionDrawPlane->setText(QCoreApplication::translate("MainWindow", "DrawPlane", nullptr));
        actionDepthTest->setText(QCoreApplication::translate("MainWindow", "\346\267\261\345\272\246\346\265\213\350\257\225", nullptr));
        actionDepthTestShader->setText(QCoreApplication::translate("MainWindow", "ZBuffertShader", nullptr));
        actionStencil->setText(QCoreApplication::translate("MainWindow", "\346\250\241\347\211\210\346\265\213\350\257\225", nullptr));
        actionDrawVegetation->setText(QCoreApplication::translate("MainWindow", "DrawVegetation", nullptr));
        actionDrawWindows->setText(QCoreApplication::translate("MainWindow", "DrawWindows", nullptr));
        actionDrawFramBuffer->setText(QCoreApplication::translate("MainWindow", "DrawFramBuffer", nullptr));
        actionSelectFrambufferType->setText(QCoreApplication::translate("MainWindow", "SelectFrambufferType", nullptr));
        actionOpenSkyBox->setText(QCoreApplication::translate("MainWindow", "OpenSkyBox", nullptr));
        actionReflectIonSkyBox->setText(QCoreApplication::translate("MainWindow", "ReflectIonSkyBox", nullptr));
        actionReflractionSkyBox->setText(QCoreApplication::translate("MainWindow", "ReflractionSkyBox", nullptr));
        actionReflectTexSkyBox->setText(QCoreApplication::translate("MainWindow", "ReflectTexSkyBox", nullptr));
        actionPoints->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\346\270\262\346\237\223", nullptr));
        actionDrawHouse->setText(QCoreApplication::translate("MainWindow", "DrawHouse", nullptr));
        actionDrawExplode->setText(QCoreApplication::translate("MainWindow", "DrawExplode", nullptr));
        actionshowNormal->setText(QCoreApplication::translate("MainWindow", "showNormal", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\277\231", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H