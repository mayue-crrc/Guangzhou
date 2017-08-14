#ifndef AIRCONDITIONER_H
#define AIRCONDITIONER_H

#include "mybase.h"

class VehicleLogo;

class QPushButton;
class QLabel;
class QTimer;

namespace Ui {
    class AirConditioner;
}

class AirConditioner : public MyBase
{
    Q_OBJECT

public:
    explicit AirConditioner(QWidget *parent = 0);
    ~AirConditioner();
    void showEvent(QShowEvent *event);
    VehicleLogo *vehicleLogo;
    void updatePage();

private:
    Ui::AirConditioner *ui;
    int temperature, settingMode;
    void setAirConditonerState(QLabel *label, QList<bool> &state);
    void setCompressorState(QLabel *label, QList<bool> &state);
    QTimer *timer;
    int selectedVehicle;
    int airConditionerMode;
    void setButtonState(int);
    void setModeButtonState(QPushButton *mode);
    void setAirConditonerMoodeState(unsigned char mode);
    void firstShow();
    void setAirConditonerMoodeAccordingToSelected();

private slots:
    void on_btnVentilate_clicked();
    void on_btnExitPreCool_pressed();
    void on_btnFireMode_clicked();
    void on_btnAuto_clicked();
    void on_btnEmergency_clicked();
    void on_btnManualCool_clicked();
    void on_btnAutoCool_clicked();
    void on_btnSetting_clicked();
    void on_btnAll_clicked();
    void on_btnA002_clicked();
    void on_btnB002_clicked();
    void on_btnC002_clicked();
    void on_btnD002_clicked();
    void on_btnD001_clicked();
    void on_btnC001_clicked();
    void on_btnB001_clicked();
    void on_btnA001_clicked();
    void on_btnModeSet_clicked();
    void on_btnTemperatureSet_clicked();
    void temperatureSet();
    void resetFlag();
};

#endif // AIRCONDITIONER_H
