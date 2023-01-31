// qtcmake.h
#ifndef __QTCMAKE_H__
#define __QTCMAKE_H__

#include <QWidget>
#include "ui_qtcmake.h"

class QtCmake: public QWidget
{
    Q_OBJECT
public:
    QtCmake(QWidget* parent = nullptr);

protected slots:
    void slotTestCMake();

private:
    /* data */
    Ui::Form ui_;
};


#endif // !QTCMAKE
