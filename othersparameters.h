#ifndef OTHERSPARAMETERS_H
#define OTHERSPARAMETERS_H

#include "mybase.h"

namespace Ui {
    class OthersParameters;
}

class TableAControl;
class VehicleLogo;

class OthersParameters : public MyBase
{
    Q_OBJECT

public:
    explicit OthersParameters(QWidget *parent = 0);
    ~OthersParameters();
    void showEvent(QShowEvent *);
    void updatePage();

private:
    int page;
    QString boolToString(bool state);
    void showPage1();
    void showPage2();
    void showPage3();
    Ui::OthersParameters *ui;
    TableAControl *tableControl;
    VehicleLogo *vehicleLogo;

private slots:
    void on_btnDown_clicked();
    void on_btnUp_clicked();
    void on_btnBack_clicked();
    void on_btnBcu_pressed();
    void on_btnTcu_pressed();
    void on_btnSiv_pressed();
};

#endif // OTHERSPARAMETERS_H
