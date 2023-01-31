#include <iostream>
#include <QApplication>
#include "qtcmake.h"
int main(int argc, char* argv[]) 
{
    std::cout << "test qt cmake " << std::endl;
    QApplication a(argc,argv);
    QtCmake qc;
    qc.show();
    return a.exec();
}
