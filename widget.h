#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include <QWidget>
#include <QMap>

namespace Ui {
    class Widget;
}

class QTimer;
class MyBase;
class Header;
class Navigator;
class VehicleState;
class VehicleParameter;
class AirConditioner;
class Bypass;
class MyCase;
class FireAlarm;
class TroubleShootingLogin;
class TroubleShooting;
class DateTimeSet;
class WheelDiameterSet;
class VehicleNumberSet;
class SystemTest;
class DataRecord;
class DataRecordSet;
class NetCommunication;
class ColorCheck;
class SoftwareVersion;
class HistoryFault;
class PasswordSet;
class VehicleStateHelp;
class VehicleParameterHelp;
class AirConditionerHelp;
class SetLight;
class MvbDriver;
class Database;
class DigtalIoA1;
class DigtalIoA2;
class DigtalIoOthers;
class PortData;
class AllPorts;
class HmiPositionSet;
class SivParameters;
class DcuParameters;
class BcuParameters;
class MvbState;
class OthersParameters;
class BrakeTestPage;
class WarningMessage;
class SivTest;
class TractionTest;
class CrrcFault;
class CompressorTest;
class HandShankTest;
class LcuPage;
class CrrcRecorder;
class AcceleratedSpeedTestPage;
class MyCaseAll;
class LcuTestPage;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void showEvent(QShowEvent *event);
    void keyPressEvent(QKeyEvent *event);
    QMap<int, MyBase *> widgets;

public slots:
    void changePage(int page);
    void updatePage();
signals:

private:
    Ui::Widget *ui;
    QTimer *timer;
    void checkLogFileSize();
    void synchronizeTimeWithCcu();
    void triggerBuzzer();
    void updateRecord();
    void checkRecordModify();

public:
    Header *header;
    Navigator *navigator;
    VehicleState *vehicleState;
    VehicleParameter *vehicleParameter;
    AirConditioner *airConditioner;
    Bypass *bypass;
    MyCase *myCase;
    FireAlarm *fireAlarm;
    TroubleShootingLogin *troubleShootingLogin;
    TroubleShooting *troubleShooting;
    DateTimeSet *dateTimeSet;
    WheelDiameterSet *wheelDiameterSet;
    VehicleNumberSet *vehicleNumberSet;
    SystemTest *systemTest;
    DataRecord *dataRecord;
    DataRecordSet *dataRecordSet;
    NetCommunication *netCommunication;
    ColorCheck *colorCheck;
    SoftwareVersion *softwareVersion;
    HistoryFault *historyFault;
    PasswordSet *passwordSet;
    TroubleShootingLogin *dataRecordSetLogin;
    VehicleStateHelp *vehicleStateHelp;
    VehicleParameterHelp *vehicleParameterHelp;
    AirConditionerHelp *airConditionerHelp;
    SetLight *setLight;
    Database *database;
    DigtalIoA1 *digtalIoA1;
    DigtalIoA2 *digtalIoA2;
    DigtalIoOthers *digtalIoOthers;
    SivParameters *sivParameters;
    DcuParameters *dcuParameters;
    BcuParameters *bcuParameters;
    LcuPage *lcuPage;
    PortData *portData;
    AllPorts *allPorts;
    HmiPositionSet *hmiPositionSet;
    SivTest *sivTest;
    TractionTest *tractionTest;
    CompressorTest *compressorTest;
    MvbState *mvbState;
    OthersParameters *othersParameters;
    BrakeTestPage *brakeTestPage;
    WarningMessage *warningMessage;
    HandShankTest *handShankTest;
    AcceleratedSpeedTestPage *acceleratedSpeedPage;
    LcuTestPage *lcuTestPage;
    MyCaseAll *myCaseAll;
    CrrcRecorder *crrcRecorder;
    CrrcFault *crrcFault;

public:
    MvbDriver *mvbDriver;
};

#endif // WIDGET_H
