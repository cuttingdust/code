#include <QFileDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "depthtestdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui_(new Ui::MainWindow)
{
    ui_->setupUi(this);
    setCentralWidget(ui_->openGLWidget);
    connect(ui_->actionWireFrameView, SIGNAL(triggered()), this, SLOT(slotWireframeView()));
    connect(ui_->actionEnvSetting, SIGNAL(triggered()), this, SLOT(slotEnvSetting()));
    connect(ui_->actionLoadModel, SIGNAL(triggered()), this, SLOT(slotLoadModel()));
    connect(ui_->actionShowLights, SIGNAL(triggered()), this, SLOT(slotShowLights()));
    connect(ui_->actionDrawCube, SIGNAL(triggered()), this, SLOT(slotDrawCube()));
    connect(ui_->actionDrawPlane, SIGNAL(triggered()), this, SLOT(slotDrawPlane()));
    connect(ui_->actionDepthTest, SIGNAL(triggered()), this, SLOT(slotDepthTestSetting()));
    connect(ui_->actionDepthTestShader, SIGNAL(triggered()), this, SLOT(slotZbufferShader()));
}

void MainWindow::slotWireframeView()
{
    ui_->openGLWidget->setWireframe(ui_->actionWireFrameView->isChecked());
}

MainWindow::~MainWindow()
{
    delete ui_;
}

void MainWindow::slotEnvSetting() {
    auto dlg = new EnvironmentSettingDialog(this);
    dlg->setEnvType(ui_->openGLWidget->getViewEnvType());
    if(dlg->exec()==QDialog::Accepted){
        ui_->openGLWidget->setEnvSettingType(dlg->getEnvType());
    }
    delete dlg;
}

void MainWindow::slotLoadModel() {
    QString str = QFileDialog::getOpenFileName(this,"选择模型文件","",
                                             "OBJ (*.obj);;PLY (*.ply);;FBX(*.fbx);;STL (*.stl);;ALL FILES( *.* ) ");
    ui_->openGLWidget->loadModel(str.toStdString());
}

void MainWindow::slotShowLights() {

    auto bShowLight = ui_->openGLWidget->isBShowLights();
    ui_->openGLWidget->setBShowLights(!bShowLight);
}

void MainWindow::slotDrawCube() {
    auto bDrawCube = ui_->openGLWidget->isBDrawCube();
    ui_->openGLWidget->setBDrawCube(!bDrawCube);
}

void MainWindow::slotDrawPlane() {
    auto bDrawPlane = ui_->openGLWidget->isBDrawPlane();
    ui_->openGLWidget->setBDrawPlane(!bDrawPlane);
}

void MainWindow::slotDepthTestSetting() {
    auto dlg = new DepthTestDialog(this);
    dlg->setDepthTestFunc(ui_->openGLWidget->getTestFuncType());
    if(dlg->exec()==QDialog::Accepted){
        ui_->openGLWidget->setTestFuncType(dlg->getDepthTestFunc());
    }
    delete dlg;
}

void MainWindow::slotZbufferShader() {
    auto bZBufferTest = ui_->openGLWidget->isBDepthTestShader();
    ui_->openGLWidget->setBDepthTestShader(!bZBufferTest);
}
