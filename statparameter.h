#ifndef STATPARAMETER_H
#define STATPARAMETER_H

#include <QWidget>
#include "mybase.h"

class VehicleLogo;
class TableAControl;

namespace Ui {
    class StatParameter;
}

class StatParameter : public MyBase
{
    Q_OBJECT

public:
    explicit StatParameter(QWidget *parent = 0);
    ~StatParameter();
    void updatePage();
    VehicleLogo *vehicleLogo;
    void showEvent(QShowEvent *);
    void showPage1();
    void showPage2();

private:
    Ui::StatParameter *ui;
    TableAControl *tableControl;
    int page;

public slots:

private slots:
    void on_btnTcu_clicked();
    void on_btnSiv_clicked();
    void on_btnBack_clicked();
};

#endif // STATPARAMETER_H
