#ifndef DCDCPARAMETERS_H
#define DCDCPARAMETERS_H

#include "mybase.h"

namespace Ui {
    class DcdcParameters;
}

class TableAControl;
class VehicleLogo;

class DcdcParameters : public MyBase
{
    Q_OBJECT

public:
    explicit DcdcParameters(QWidget *parent = 0);
    ~DcdcParameters();
    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::DcdcParameters *ui;
    TableAControl *tableControl;
    VehicleLogo *vehicleLogo;
    QString boolToString(bool value);
    void showPage1();
    void showPage2();
    int page;

private slots:
    void on_btnDown_clicked();
    void on_btnUp_clicked();
    void on_btnBack_clicked();
    void on_btnBcu_pressed();
    void on_btnSiv_pressed();
};

#endif // DCDCPARAMETERS_H
