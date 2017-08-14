#ifndef DIGTALIOA2_H
#define DIGTALIOA2_H

#include <QWidget>
#include "mybase.h"

class DiControl;
class DoControl;
class AxControl;
class QLabel;

namespace Ui {
    class DigtalIoA2;
}

class DigtalIoA2 : public MyBase
{
    Q_OBJECT

public:
    explicit DigtalIoA2(QWidget *parent = 0);
    ~DigtalIoA2();
    void updatePage();

private:
    Ui::DigtalIoA2 *ui;
    DiControl *diControl1, *diControl2, *diControl3, *diControl4, *diControl5;
    DoControl *doControl;
    AxControl *axControl;
    int page;

private slots:
    void on_btnDown_clicked();
    void on_btnUp_clicked();
    void on_btnA1_clicked();
    void on_btnBack_clicked();
    void myKeyPress();
signals:
    void selectItem(QString name);
};

#endif // DIGTALIOA2_H
