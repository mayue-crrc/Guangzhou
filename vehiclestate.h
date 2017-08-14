#ifndef VEHICLESTATE_H
#define VEHICLESTATE_H

#include "mybase.h"

class QTimer;
class CrrcFault;

namespace Ui {
    class VehicleState;
}

class QLabel;

class VehicleState : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleState(QWidget *parent = 0);
    ~VehicleState();
    void showEvent(QShowEvent *);
    void updatePage();
    void installCrrcFault(CrrcFault *crrcFault);

private:
    Ui::VehicleState *ui;
    unsigned short int timer;
    void setDoorState(QLabel *label, QList<bool> signal, bool isUpPosition);
    void setTractionForbidden(bool state);
    void setCoupleState();
    void setCabinState();
    void setPantographState();
    void setTractionState(QLabel *traction, QList<bool> state);
    void setGeneratrixState();
    void setSivState();
    void setDcdcState();
    void setFireAlarmState();
    void setCompressorState();
    void setMainBreakerState(QLabel *label, bool online, bool state);
    void setParkingBrakeState();
    void setAirBrakeState(QLabel *label, QList<bool> states);
    void setLimitedSpeed(unsigned short int speed);
    void setUnselfCheck(QList<bool> states);
    void setEmergencyBrake(bool &, bool &);
    void setSlideState(bool slide, bool idle);
    void setDoorSaftyLineState(QLabel *, bool);
    void setConfirmFault();
    CrrcFault *crrcFault;

private slots:
    void on_btnConfirm_clicked();
};

#endif // VEHICLESTATE_H
