#ifndef TROUBLESHOOTING_H
#define TROUBLESHOOTING_H

#include "mybase.h"

namespace Ui {
    class TroubleShooting;
}

class TroubleShooting : public MyBase
{
    Q_OBJECT

public:
    explicit TroubleShooting(QWidget *parent = 0);
    ~TroubleShooting();
    void showEvent(QShowEvent *event);

private:
    Ui::TroubleShooting *ui;

private slots:
    void on_btnLcu_clicked();
    void on_btnBusState_clicked();
    void on_btnHmiPositionSet_clicked();
    void on_btnAllPorts_clicked();
    void on_btnMvbPort_clicked();
    void on_btnIOUnit_clicked();
    void on_btnChangePassword_clicked();
    void on_btnFaultRecord_clicked();
    void on_btnVersion_clicked();
    void on_btnDeviceState_clicked();
    void on_btnColorCheck_clicked();
    void on_btnNetwork_clicked();
    void on_btnAccumulation_clicked();
    void on_btnVehicleTest_clicked();
    void on_btnVehicleNumber_clicked();
    void on_btnDiameterSet_clicked();
    void on_btnTimeSet_clicked();
signals:
};

#endif // TROUBLESHOOTING_H
