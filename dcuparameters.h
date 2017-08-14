#ifndef DCUPARAMETERS_H
#define DCUPARAMETERS_H

#include "mybase.h"

namespace Ui {
    class DcuParameters;
}

class VehicleLogo;
class TableAControl;

class DcuParameters : public MyBase
{
    Q_OBJECT

public:
    explicit DcuParameters(QWidget *parent = 0);
    ~DcuParameters();
    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::DcuParameters *ui;
    TableAControl *tableControl;
    VehicleLogo *vehicleLogo;
    void showPage1();
    void showPage2();
    void showPage3();
    QString boolToString(bool value);
    int page;

private slots:
    void on_btnUp_clicked();
    void on_btnDown_clicked();
    void on_btnBack_clicked();
    void on_btnBcu_pressed();
    void on_btnSiv_pressed();
};

#endif // DCUPARAMETERS_H
