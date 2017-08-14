#ifndef BCUPARAMETERS_H
#define BCUPARAMETERS_H

#include "mybase.h"

namespace Ui {
    class BcuParameters;
}

class TableAControl;
class VehicleLogo;

class BcuParameters : public MyBase
{
    Q_OBJECT

public:
    explicit BcuParameters(QWidget *parent = 0);
    ~BcuParameters();
    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::BcuParameters *ui;
    TableAControl *tableControl;
    VehicleLogo *vehicleLogo;

private slots:
    void on_btnOthers_pressed();
    void on_btnSiv_pressed();
    void on_btnDcu_pressed();
    void on_btnBack_clicked();
};

#endif // BCUPARAMETERS_H
