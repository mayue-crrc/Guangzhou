#ifndef SIVPARAMETERS_H
#define SIVPARAMETERS_H

#include "mybase.h"

namespace Ui {
    class SivParameters;
}

class TableAControl;
class VehicleLogo;

class SivParameters : public MyBase
{
    Q_OBJECT

public:
    explicit SivParameters(QWidget *parent = 0);
    ~SivParameters();
    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::SivParameters *ui;
    TableAControl *tableControl;
    VehicleLogo *vehicleLogo;
    void showPage1();
    void showPage2();
    QString boolToString(bool value);
    int page;

private slots:
    void on_btnOthers_pressed();
    void on_btnDcu_pressed();
    void on_btnDown_clicked();
    void on_btnUp_clicked();
    void on_btnBack_clicked();
    void on_btnBcu_pressed();
};

#endif // SIVPARAMETERS_H
