#include "qtcmake.h"
#include <QMessageBox>

QtCmake::QtCmake(QWidget* parent /* = nullptr */):
QWidget(parent)
{
    ui_.setupUi(this);
}

void QtCmake::slotTestCMake()
{
    QMessageBox::information(0,"","Test Cmake QT");
}