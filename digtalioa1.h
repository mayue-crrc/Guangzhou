#ifndef DIGTALIOA1_H
#define DIGTALIOA1_H

#include <QWidget>
#include "mybase.h"

class DiControl;
class DoControl;
class AxControl;
class QLabel;

namespace Ui {
    class DigtalIoA1;
}

class DigtalIoA1 : public MyBase
{
    Q_OBJECT

public:
    explicit DigtalIoA1(QWidget *parent = 0);
    ~DigtalIoA1();
    void updatePage();

private:
    Ui::DigtalIoA1 *ui;
    DiControl *diControl1, *diControl2, *diControl3, *diControl4, *diControl5;
    DoControl *doControl;
    AxControl *axControl;
    int page;

private slots:
    void on_btnA2_clicked();
    void on_btnDown_clicked();
    void on_btnUp_clicked();
    void on_btnBack_clicked();
    void myKeyPress();
signals:
    void selectItem(QString);
};

#endif // DIGTALIOA1_H
