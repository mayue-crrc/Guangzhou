#ifndef DIGTALIOOTHERS_H
#define DIGTALIOOTHERS_H

#include <QWidget>
#include "mybase.h"

class DiControl;
class DoControl;

namespace Ui {
    class DigtalIoOthers;
}

class DigtalIoOthers : public MyBase
{
    Q_OBJECT

    enum vehicle
    {
        uB1Vehicle,
        uC1Vehicle,
        uD1Vehicle,
        uD2Vehicle,
        uC2Vehicle,
        uB2Vehicle
    };

public:
    explicit DigtalIoOthers(QWidget *parent = 0);
    ~DigtalIoOthers();
    DiControl *diControlB1, *diControlC1, *diControlD1,
              *diControlD2, *diControlC2, *diControlB2;
    DoControl *doControlB1, *doControlC1, *doControlD1,
              *doControlD2, *doControlC2, *doControlB2;
    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::DigtalIoOthers *ui;
    enum vehicle currentVehicle;

private slots:
    void on_btnBack_clicked();
    void myKeyPress();
    void selectItem(QString);
};

#endif // DIGTALIOOTHERS_H
