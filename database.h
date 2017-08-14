#ifndef DATABASE_H
#define DATABASE_H

#include "global.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"
#include <QList>
#include <QMap>
#include "edcufaultlist.h"
#include "bcufaultlist.h"
#include "faufaultlist.h"
#include "pafaultlist.h"
#include "ermfaultlist.h"

class Database
{
public:
    Database();

public:
    // software version of all device
    QString hmiVersionA1, hmiVersionA2;
    QString ccu1OsVersion, ccu1MvbVersion, ccu1PlcVersion, ccu1SdbVersion;
    QString ccu2OsVersion, ccu2MvbVersion, ccu2PlcVersion, ccu2SdbVersion;
    QString riom1GwVersion, riom1DiVersion, riom1DoVersion, riom1AxVersion;
    QString riom2GwVersion, riom2DiVersion, riom2DoVersion;
    QString riom3GwVersion, riom3DiVersion, riom3DoVersion;
    QString riom4GwVersion, riom4DiVersion, riom4DoVersion;
    QString riom5GwVersion, riom5DiVersion, riom5DoVersion;
    QString riom6GwVersion, riom6DiVersion, riom6DoVersion;
    QString riom7GwVersion, riom7DiVersion, riom7DoVersion;
    QString riom8GwVersion, riom8DiVersion, riom8DoVersion, riom8AxVersion;
    QString erm1OsVersion, erm1MvbVersion, erm1PlcVersion, erm1SdbVersion;
    QString erm2OsVersion, erm2MvbVersion, erm2PlcVersion, erm2SdbVersion;
    QString tcuLogicVersionB1, tcuLogicVersionC1, tcuLogicVersionD1, tcuLogicVersionD2, tcuLogicVersionC2, tcuLogicVersionB2;
    QString tcuVvvfVersionB1, tcuVvvfVersionC1, tcuVvvfVersionD1, tcuVvvfVersionD2, tcuVvvfVersionC2, tcuVvvfVersionB2;
    QString tcuAdhereVersionB1, tcuAdhereVersionC1, tcuAdhereVersionD1, tcuAdhereVersionD2, tcuAdhereVersionC2, tcuAdhereVersionB2;
    QString bcuVersionA1, bcuVersionD1, bcuVersionD2, bcuVersionA2;
    QString sivDspVersionA1, sivDspVersionC1, sivDspVersionC2, sivDspVersionA2,
            sivPlcVersionA1, sivPlcVersionC1, sivPlcVersionC2, sivPlcVersionA2;
    QString door1VersionA1, door2VersionA1, door3VersionA1, door4VersionA1, door5VersionA1,
            door6VersionA1, door7VersionA1, door8VersionA1, door9VersionA1, door10VersionA1,
            door1VersionB1, door2VersionB1, door3VersionB1, door4VersionB1, door5VersionB1,
            door6VersionB1, door7VersionB1, door8VersionB1, door9VersionB1, door10VersionB1,
            door1VersionC1, door2VersionC1, door3VersionC1, door4VersionC1, door5VersionC1,
            door6VersionC1, door7VersionC1, door8VersionC1, door9VersionC1, door10VersionC1,
            door1VersionD1, door2VersionD1, door3VersionD1, door4VersionD1, door5VersionD1,
            door6VersionD1, door7VersionD1, door8VersionD1, door9VersionD1, door10VersionD1,
            door1VersionD2, door2VersionD2, door3VersionD2, door4VersionD2, door5VersionD2,
            door6VersionD2, door7VersionD2, door8VersionD2, door9VersionD2, door10VersionD2,
            door1VersionC2, door2VersionC2, door3VersionC2, door4VersionC2, door5VersionC2,
            door6VersionC2, door7VersionC2, door8VersionC2, door9VersionC2, door10VersionC2,
            door1VersionB2, door2VersionB2, door3VersionB2, door4VersionB2, door5VersionB2,
            door6VersionB2, door7VersionB2, door8VersionB2, door9VersionB2, door10VersionB2,
            door1VersionA2, door2VersionA2, door3VersionA2, door4VersionA2, door5VersionA2,
            door6VersionA2, door7VersionA2, door8VersionA2, door9VersionA2, door10VersionA2;
    QString atcVersionA1, atcVersionA2;
    QString paVersionA1, paVersionA2;
    QString fauVersionA1, fauVersionA2;
    QString hvacVersionA1, hvacVersionB1, hvacVersionC1, hvacVersionD1,
            hvacVersionD2, hvacVersionC2, hvacVersionB2, hvacVersionA2;
    QString dcdcDspVersionA1, dcdcPlcVersionA1, dcdcDspVersionA2, dcdcPlcVersionA2;

    // data record
    quint64 mileageAll, mileageTime;
    quint64 compressor1All, compressor1Time, compressor1Distance;
    quint64 compressor2All, compressor2Time, compressor2Distance;
    quint64 consumptionAll, consumptionTime, consumptionDistance;
    quint64 sivConsumptionAll, sivConsumptionTime, sivConsumptionDistance;
    quint64 tcuConsumptionAll, tcuConsumptionTime, tcuConsumptionDistance;
    quint64 bcuConsumptionAll, bcuConsumptionTime, bcuConsumptionDistance;
    quint64 regeneratePowerAll, regeneratePowerTime, regeneratePowerDistance;
    // unsigned short int ermMileageRecord,

    // the signal of erm
    quint64 ermRecordMileageA1, ermRecordTimeA1;
    quint64 ermRecordMileageA2, ermRecordTimeA2;

    quint64 ermTotalMileageA1, ermTotalMileageA2;
    quint64 ermTotalCompressor1A1, ermTotalCompressor1A2;
    quint64 ermTotalCompressor2A1, ermTotalCompressor2A2;
    quint64 ermTotalSivConsumptionA1, ermTotalSivConsumptionA2;
    quint64 ermTotalTractionConsumptionA1, ermTotalTractionConsumptionA2;
    quint64 ermTotalBcuConsumptionA1, ermTotalBcuConsumptionA2;
    quint64 ermTotalRegeneratePowerA1, ermTotalRegeneratePowerA2;
    quint64 ermTotalConsumptionA1, ermTotalConsumptionA2;

    quint64 ermDistanceCompressor1A1, ermDistanceCompressor1A2;
    quint64 ermDistanceCompressor2A1, ermDistanceCompressor2A2;
    quint64 ermDistanceSivConsumptionA1, ermDistanceSivConsumptionA2;
    quint64 ermDistanceTractionConsumptionA1, ermDistanceTractionConsumptionA2;
    quint64 ermDistanceBcuConsumptionA1, ermDistanceBcuConsumptionA2;
    quint64 ermDistanceRegeneratePowerA1, ermDistanceRegeneratePowerA2;
    quint64 ermDistanceConsumptionA1, ermDistanceConsumptionA2;

    quint64 ermTimeMileageA1, ermTimeMileageA2;
    quint64 ermTimeCompressor1A1, ermTimeCompressor1A2;
    quint64 ermTimeCompressor2A1, ermTimeCompressor2A2;
    quint64 ermTimeSivConsumptionA1, ermTimeSivConsumptionA2;
    quint64 ermTimeTractionConsumptionA1, ermTimeTractionConsumptionA2;
    quint64 ermTimeBcuConsumptionA1, ermTimeBcuConsumptionA2;
    quint64 ermTimeRegeneratePowerA1, ermTimeRegeneratePowerA2;
    quint64 ermTimeConsumptionA1, ermTimeConsumptionA2;

    bool hmiSetTotalMileageFlag;
    bool hmiSetTotalCompressor1Flag, hmiSetTotalCompressor2Flag;
    bool hmiSetTotalSivConsumptionFlag;
    bool hmiSetTotalTractionConsumptionFlag;
    bool hmiSetTotalBcuConsumptionFlag;
    bool hmiSetTotalRegeneratePowerFlag;
    bool hmiSetTotalConsumptionFlag;
    bool hmiSetRecordMileageFlag, hmiSetRecordTimeFlag;
    bool hmiAcceleratedSpeedTest;

    bool hmiCompressorTestCommand;
    unsigned char hmiSecurityCode;


    quint32 hmiTotalMileage;
    quint32 hmiTotalCompressor1, hmiTotalCompressor2;
    quint32 hmiTotalSivConsumption;
    quint32 hmiTotalTractionConsumption;
    quint32 hmiTotalBcuConsumption;
    quint32 hmiTotalRegeneratePower;
    quint32 hmiTotalConsumption;

    quint32 hmiTimeMileage;
    quint32 hmiTimeCompressor1, hmiTimeCompressor2;
    quint32 hmiTimeSivConsumption;
    quint32 hmiTimeTractionConsumption;
    quint32 hmiTimeBcuConsumption;
    quint32 hmiTimeRegeneratePower;
    quint32 hmiTimeConsumption;

    quint32 hmiDistanceCompressor1, hmiDistanceCompressor2;
    quint32 hmiDistanceSivConsumption;
    quint32 hmiDistanceTractionConsumption;
    quint32 hmiDistanceBcuConsumption;
    quint32 hmiDistanceRegeneratePower;
    quint32 hmiDistanceConsumption;

    bool hmiModifyMileageFlagA2, hmiModifyCompressor1FlagA2, hmiModifyCompressor2FlagA2, hmiModifyTotalFlagA2;
    bool hmiModifyAuxiliaryFlagA2, hmiModifyTractionFlagA2, hmiModifyBrakeFlagA2, hmiModifyRegenerateFlagA2;

    quint32 hmiRecordMileage, hmiRecordTime;

    // set data record
    quint32 hmiSetTotalMileage;
    quint32 hmiSetTotalCompressor1, hmiSetTotalCompressor2;
    quint32 hmiSetTotalSivConsumption;
    quint32 hmiSetTotalTractionConsumption;
    quint32 hmiSetTotalBcuConsumption;
    quint32 hmiSetTotalRegeneratePower;
    quint32 hmiSetTotalConsumption;
    unsigned short int hmiSetRecordMileage, hmiSetRecordTime;

    // device online state
    unsigned short int hmiLifeSignal;
    bool ccuOnline;
    unsigned char ccuLifeSignal;
    bool ccu1Online, ccu2Online;
    bool ccu1OnlineMain, ccu2OnlineMain;
    bool erm1Online, erm2Online;
    bool hmi1Online, hmi2Online;
    bool riom1GwOnline, riom1Di1Online, riom1Di2Online, riom1Di3Online, riom1Di4Online,
         riom1Di5Online, riom1DoOnline, riom1AxOnline;
    bool riom2GwOnline, riom2DiOnline, riom2DoOnline;
    bool riom3GwOnline, riom3DiOnline, riom3DoOnline;
    bool riom4GwOnline, riom4DiOnline, riom4DoOnline;
    bool riom5GwOnline, riom5DiOnline, riom5DoOnline;
    bool riom6GwOnline, riom6DiOnline, riom6DoOnline;
    bool riom7GwOnline, riom7DiOnline, riom7DoOnline;
    bool riom8GwOnline, riom8Di1Online, riom8Di2Online, riom8Di3Online, riom8Di4Online,
         riom8Di5Online, riom8DoOnline, riom8AxOnline;
    bool bcu1Online, bcu2Online, bcu3Online, bcu4Online;
    bool tcu1Online, tcu2Online, tcu3Online, tcu4Online, tcu5Online, tcu6Online;
    bool siv1Online, siv2Online, siv3Online, siv4Online;
    bool edcu1OnlineA1, edcu2OnlineA1, edcu1OnlineB1, edcu2OnlineB1, edcu1OnlineC1, edcu2OnlineC1, edcu1OnlineD1, edcu2OnlineD1,
         edcu1OnlineA2, edcu2OnlineA2, edcu1OnlineB2, edcu2OnlineB2, edcu1OnlineC2, edcu2OnlineC2, edcu1OnlineD2, edcu2OnlineD2;
    bool pa1Online, pa2Online;
    bool fau1Online, fau2Online;
    bool hvac1Online, hvac2Online, hvac3Online, hvac4Online, hvac5Online, hvac6Online, hvac7Online, hvac8Online;
    bool atc1Online, atc2Online;
    bool dcdc1Online, dcdc2Online;
    bool tdsOnline;

    // the number of vehicles
    QString vehicleNumberA1, vehicleNumberB1, vehicleNumberC1, vehicleNumberD1,
            vehicleNumberA2, vehicleNumberB2, vehicleNumberC2, vehicleNumberD2;
    QString hmiSetVehicleNumber;
    bool hmiSetVehicleNumberCommand;

    // the position of HMI
    int hmiPosition;

    // the login password
    QString troubleShootingPassword, dataRecordSetPassword;

    // some parameters about the hardware
    // the light level -1 means it is in auto adjust mode
    int lightLevel, soundLevel;

    // mvb ports of all devices
    QList<struct port *> hmiA1Ports, hmiA2Ports, ccuPortsA, ccuPortsB, ermPorts, riomPorts;
    QList<struct port *> bcu1Ports, bcu2Ports, tcuPorts, sivPorts, dcuPorts, paPorts, fauPorts,
                         edcu1Ports, edcu2Ports, hvacPorts, atcPorts, dcdcPorts, tdsPorts,
                         userDefinePort;

public:
    void synchronize();
    void installPorts();
    bool testPortExist(unsigned short int port) const;
    void getPortData(unsigned short int port, unsigned short int *pointer) const;

public:
    // all data ports
    QMap<unsigned short int, struct port_data *> ports;
    QList<struct port *> allPorts;

public:
    void insertPort(const QList<struct port *> ports);
    bool getBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset);
    unsigned char getUnsignedChar(unsigned short int port, unsigned short int byteOffset);
    signed char getSignedChar(unsigned short int port, unsigned short int byteOffset);
    unsigned short int getUnsignedInt(unsigned short int port, unsigned short int byteOffset);
    signed short int getSignedInt(unsigned short int port, unsigned short int byteOffset);
    quint32 getUnsignedInt32(unsigned short int port, unsigned short int byteOffset);
    void setBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset, bool signal);
    void setUnsignedChar(unsigned short int port, unsigned short int byteOffset, unsigned char signal);
    void setSignedChar(unsigned short int port, unsigned short int byteOffset, signed char signal);
    void setUnsignedInt(unsigned short int port, unsigned short int byteOffset, unsigned short int signal);
    void setUnsignedInt32(unsigned short int port, unsigned short int byteOffset, quint32 signal);
    void setSignedInt(unsigned short int port, unsigned short int byteOffset, signed short int signal);
    bool signalCheck(unsigned short int lifeSignal);
    unsigned short int getMvbCycleByPort(unsigned short int portNumber);

private:
    void initializeCcuSignals();
    void initializeDcuSignals();

    void synchronizeBcuSignals();
    void synchronizeSivSignals();
    void synchronizeRiomSignals();
    void synchronizeAcuSignals();
    void synchronizePaSignals();
    void synchronizeEdcuSignals();
    void synchronizeErmSignals();
    void synchronizeCcuSignals();
    void synchronizeAtcSignals();
    void synchronizeDcdcSignals();
    void synchronizeFauSignals();
    void synchronizeDcuSignals();
    void synchronizeTdsSignals();

    double pressureConversion(unsigned short int value);

private:
    EdcuFaultList edcuFaultListA1, edcuFaultListB1, edcuFaultListC1, edcuFaultListD1,
                  edcuFaultListD2, edcuFaultListC2, edcuFaultListB2, edcuFaultListA2;
    BcuFaultList bcuFaultListA1, bcuFaultListA2;
    ErmFaultList ermFaultList;
    PaFaultList paFaultList;
    FauFaultList fauFaultList;

public:
    // riom do
    bool airconditionerOnA1, airconditionerOnA2;
    bool airconditionerAllOnA1, airconditionerAllOnA2, airconditionerAllOffA1, airconditionerAllOffA2;
    bool emergencyBrakeCommandA1, emergencyBrakeCommandA2;
    bool kmk1ContactorOffB1, kmk1ContactorOffB2, kmk1ContactorOnB1, kmk1ContactorOnB2;
    bool compressorOnB1, compressorOnB2;
    bool kmk1ContractorOffD1, kmk1ContractorOnD1;

    // riom di
    bool isolateSwitchOperationB1, isolateSwitchOperationB2;
    bool otherSidePowerAccessB1, otherSidePowerAccessB2;
    bool lightPower4FaultB1, lightPower4FaultC1, lightPower4FaultB2, lightPower4FaultC2;
    bool lightPower3FaultB1, lightPower3FaultC1, lightPower3FaultB2, lightPower3FaultC2;
    bool lightPower2FaultB1, lightPower2FaultC1, lightPower2FaultB2, lightPower2FaultC2;
    bool lightPower1FaultB1, lightPower1FaultC1, lightPower1FaultB2, lightPower1FaultC2;
    bool pantographIsolatedB1, pantographIsolatedB2;
    bool parkingBrakeIsolatedB1, parkingBrakeIsolatedC1, parkingBrakeIsolatedB2, parkingBrakeIsolatedC2;
    bool bogie2IsolatedB1, bogie2IsolatedC1, bogie2IsolatedB2, bogie2IsolatedC2;
    bool bogie1IsolatedB1, bogie1IsolatedC1, bogie1IsolatedB2, bogie1IsolatedC2;
    bool pantographDropDownB1, pantographDropDownB2;
    bool pantographPumpActionB1;
    bool dryingTower2StateB1, dryingTower2StateB2;
    bool dryingTower1StateB1, dryingTower1StateB2;
    bool compressorOverloadB1, compressorOverloadB2;
    bool compressorRunB1, compressorRunB2;
    bool kmk1ContactorStateB1, kmk1ContactorStateB2;
    bool sivOkC1, sivOkC2;
    bool isolateSwitchRunStateD1;
    bool lightPower4FaultD1, lightPower4FaultD2;
    bool lightPower3FaultD1, lightPower3FaultD2;
    bool lightPower2FaultD1, lightPower2FaultD2;
    bool lightPower1FaultD1, lightPower1FaultD2;
    bool decoupledDetectionD1, decoupledDetectionD2;
    bool pantographCutoutD1;
    bool parkingBrakeCutoutD1, parkingBrakeCutoutD2;
    bool bogie2CutoutD1, bogie2CutoutD2, bogie1CutoutD1, bogie1CutoutD2;
    bool pantographDropDownD1;
    bool kmk1ContactorStateD1;

    // ax riom1 and riom 2
    unsigned short int handleLevel1A1, handleLevel2A1;
    unsigned short int handleLevel1A2, handleLevel2A2;

    // riom lat and rld
    bool riomLatA1, riomRldA1;
    bool riomLatB1, riomRldB1;
    bool riomLatC1, riomRldC1;
    bool riomLatD1, riomRldD1;
    bool riomLatD2, riomRldD2;
    bool riomLatC2, riomRldC2;
    bool riomLatB2, riomRldB2;
    bool riomLatA2, riomRldA2;

    // port 0x111
    bool accessDoorOpenA1,
         emerEvacDoorOpenA1,cabLeftDoorClosedA1,cabRightDoorClosedA1,
         doorAllClosedA1,rightDoorUnlockBanA1,leftDoorUnlockBanA1,
         reopenTheLeftDoorA1,reopenTheRightDoorA1,
         closeLeftDoorCmdA1,closeRightDoorCmdA1,openLeftDoorCmdA1,openRightDoorCmdA1,
         doorLeftEnableA1,doorRightEnableA1,
         fastBrakingDI1A1,brakeDI1A1,tractionDI1A1,cabPossessionDI1A1,
         backwardDI1A1,forwardDI1A1,trainIntergrityA1,theMinMarshallingA1,
         ATOZeroSpeedRequestA1,ATOBrakeA1,ATOTractionA1,
         flangeLubricationFaultA1,mainMainCutOpenA1,mainCutClosedA1,washingModeA1,resetA1,
         SIVOKA1,chargerOKA1,batteryConCirBreakerA1,batteryBreakerA1,
         fastBrakingDI2A1,brakeDI2A1,tractionDI2A1,cabPossessionDI2A1,
         backwardDI2A1,forwardDI2A1,speedGT1kmA1,
         emergencyBrakingComA1,anotherMushBtnActionA1,emergencyBrakingA1,
         mushBtn2A1,mushBtn1A1,largeBypassA1,EBComBypassA1,mrpPresLowBypass1A1,mrpPresLowBypass2A1,
         trainIntegrityByPassA1,autoCouplerByPassA1,brakeNoRelByPassA1,parkingBrkByPassA1,
         doorZeroSpeedByPassA1,doorSafeByPassA1,watchOutByPassA1;

    bool riomEmergencyRunModeA1, riomEmergencyRunModeA2;

    // port 0x112
    bool uncouplingA1,watchOutActionA1,RMIButtonActionA1,ATBButtonActionA1,ATOButtonActionA1,
         BMModeA1,CBTCModeA1,RM2ModeA1,RMRModeA1,RM1OrPMOrAMModeA1,
         OFFOrATBModeA1,ATCResetA1,ATCCutOffA1,
         mrpPresLow2A1,mrpPresLow1A1,releasedOfAirBrakingA1,
         parkingBrakeAppliedA1,parkingBrkRelButtonA1,parkingBrkApplyButtonA1,
         brakeNotReleasedA1,dropPHCommandA1,rosePhCommandA1,
         luminairePower4FaultA1,luminairePower3FaultA1,luminairePower2FaultA1,luminairePower1FaultA1,
         parkingBrakeCutOffA1,bogie2CutoffA1,bogie1CutoffA1,trainReconnectionA1,
         openAirConditionerCarAA1,closeAirConditionerA1,openAirConditionerA1,
         forcedOpenLeftDoorA1,forcedOpenRightDoorA1,
         autoOpenManualOffA1,automaticDoorA1,doorConModeSeleA1;

    // port 0x181
    bool accessDoorOpenA2,
         emerEvacDoorOpenA2,cabLeftDoorClosedA2,cabRightDoorClosedA2,
         doorAllClosedA2,rightDoorUnlockBanA2,leftDoorUnlockBanA2,
         reopenTheLeftDoorA2,reopenTheRightDoorA2,
         closeLeftDoorCmdA2,closeRightDoorCmdA2,openLeftDoorCmdA2,openRightDoorCmdA2,
         doorLeftEnableA2,doorRightEnableA2,
         fastBrakingDI1A2,brakeDI1A2,tractionDI1A2,cabPossessionDI1A2,
         backwardDI1A2,forwardDI1A2,trainIntergrityA2,theMinMarshallingA2,
         ATOZeroSpeedRequestA2,ATOBrakeA2,ATOTractionA2,
         flangeLubricationFaultA2,mainMainCutOpenA2,mainCutClosedA2,washingModeA2,resetA2,
         SIVOKA2,chargerOKA2,batteryConCirBreakerA2,batteryBreakerA2,
         fastBrakingDI2A2,brakeDI2A2,tractionDI2A2,cabPossessionDI2A2,
         backwardDI2A2,forwardDI2A2,speedGT1kmA2,
         emergencyBrakingComA2,anotherMushBtnActionA2,emergencyBrakingA2,
         mushBtn2A2,mushBtn1A2,largeBypassA2,EBComBypassA2,mrpPresLowBypass1A2,mrpPresLowBypass2A2,
         trainIntegrityByPassA2,autoCouplerByPassA2,brakeNoRelByPassA2,parkingBrkByPassA2,
         doorZeroSpeedByPassA2,doorSafeByPassA2,watchOutByPassA2;

    // port 0x182
    bool uncouplingA2,watchOutActionA2,RMIButtonActionA2,ATBButtonActionA2,ATOButtonActionA2,
         BMModeA2,CBTCModeA2,RM2ModeA2,RMRModeA2,RM1OrPMOrAMModeA2,
         OFFOrATBModeA2,ATCResetA2,ATCCutOffA2,
         mrpPresLow2A2,mrpPresLow1A2,releasedOfAirBrakingA2,
         parkingBrakeAppliedA2,parkingBrkRelButtonA2,parkingBrkApplyButtonA2,
         brakeNotReleasedA2,dropPHCommandA2,rosePhCommandA2,
         luminairePower4FaultA2,luminairePower3FaultA2,luminairePower2FaultA2,luminairePower1FaultA2,
         parkingBrakeCutOffA2,bogie2CutoffA2,bogie1CutoffA2,trainReconnectionA2,
         openAirConditionerCarAA2,closeAirConditionerA2,openAirConditionerA2,
         forcedOpenLeftDoorA2,forcedOpenRightDoorA2,
         autoOpenManualOffA2,automaticDoorA2,doorConModeSeleA2;

    // di, do and ax for reservation
    bool di1In7A1, di1In8A1, di1In24A1;
    bool di2In7A1, di2In8A1, di2In23A1, di2In24A1;
    bool di3In13A1, di3In19A1, di3In20A1, di3In21A1, di3In22A1, di3In23A1, di3In24A1;
    bool di4In21A1, di4In22A1, di4In23A1, di4In24A1;
    bool di5In19A1, di5In20A1, di5In21A1, di5In22A1, di5In23A1, di5In24A1;
    bool doOut5A1, doOut6A1, doOut7A1, doOut8A1, doOut9A1, doOut10A1,
         doOut11A1, doOut12A1, doOut13A1, doOut14A1, doOut15A1, doOut16A1;
    unsigned short int axIn3A1, axIn4A1, axIn5A1, axIn6A1, axIn7A1, axIn8A1;

    bool di1In7A2, di1In8A2, di1In24A2;
    bool di2In7A2, di2In8A2, di2In23A2, di2In24A2;
    bool di3In13A2, di3In19A2, di3In20A2, di3In21A2, di3In22A2, di3In23A2, di3In24A2;
    bool di4In21A2, di4In22A2, di4In23A2, di4In24A2;
    bool di5In19A2, di5In20A2, di5In21A2, di5In22A2, di5In23A2, di5In24A2;
    bool doOut5A2, doOut6A2, doOut7A2, doOut8A2, doOut9A2, doOut10A2,
         doOut11A2, doOut12A2, doOut13A2, doOut14A2, doOut15A2, doOut16A2;
    unsigned short int axIn3A2, axIn4A2, axIn5A2, axIn6A2, axIn7A2, axIn8A2;

    bool diIn1B1, diIn13B1, diIn14B1, diIn21B1, diIn22B1, diIn23B1, diIn24B1;
    bool doOut4B1, doOut5B1, doOut6B1, doOut7B1, doOut8B1, doOut9B1, doOut10B1,
         doOut11B1, doOut12B1, doOut13B1, doOut14B1, doOut15B1, doOut16B1;

    bool diIn2C1, diIn3C1, diIn4C1, diIn5C1, diIn6C1, diIn7C1, diIn8C1, diIn13C1,
         diIn14C1, diIn19C1, diIn20C1, diIn21C1, diIn22C1, diIn23C1, diIn24C1;
    bool doOut1C1, doOut2C1, doOut3C1, doOut4C1, doOut5C1, doOut6C1, doOut7C1, doOut8C1,
         doOut9C1, doOut10C1, doOut11C1, doOut12C1, doOut13C1, doOut14C1, doOut15C1, doOut16C1;

    bool diIn1D1, diIn3D1, diIn4D1, diIn5D1, diIn6D1, diIn7D1,
         diIn12D1, diIn19D1, diIn21D1, diIn22D1, diIn23D1, diIn24D1;
    bool doOut1D1, doOut4D1, doOut5D1, doOut6D1, doOut7D1, doOut8D1, doOut9D1, doOut10D1,
         doOut11D1, doOut12D1, doOut13D1, doOut14D1, doOut15D1, doOut16D1;

    bool diIn1D2, diIn2D2, diIn3D2, diIn4D2, diIn5D2, diIn6D2,
         diIn7D2, diIn8D2, diIn12D2, diIn13D2, diIn19D2,
         diIn20D2, diIn21D2, diIn22D2, diIn23D2, diIn24D2;
    bool doOut1D2, doOut2D2, doOut3D2, doOut4D2, doOut5D2, doOut6D2, doOut7D2, doOut8D2,
         doOut9D2, doOut10D2, doOut11D2, doOut12D2, doOut13D2, doOut14D2, doOut15D2, doOut16D2;

    bool diIn2C2, diIn3C2, diIn4C2, diIn5C2, diIn6C2, diIn7C2,
         diIn8C2, diIn12C2, diIn13C2, diIn14C2, diIn19C2, diIn20C2,
         diIn21C2, diIn22C2, diIn23C2, diIn24C2;
    bool doOut1C2, doOut2C2, doOut3C2, doOut4C2, doOut5C2, doOut6C2, doOut7C2, doOut8C2,
         doOut9C2, doOut10C2, doOut11C2, doOut12C2, doOut13C2, doOut14C2, doOut15C2, doOut16C2;

    bool diIn1B2, diIn7B2, diIn8B2, diIn13B2, diIn14B2, diIn21B2, diIn24B2;
    bool doOut5B2, doOut6B2, doOut7B2, doOut8B2, doOut9B2, doOut10B2,
         doOut11B2, doOut12B2, doOut13B2, doOut14B2, doOut15B2, doOut16B2;

    unsigned short int middleVoltageB1, middleVoltageC1, middleVoltageD1,
                       middleVoltageD2, middleVoltageC2, middleVoltageB2;
    short int middleCurrentB1, middleCurrentC1, middleCurrentD1,
              middleCurrentD2, middleCurrentC2, middleCurrentB2;
    short int lineVoltageB1, lineVoltageC1, lineVoltageD1,
              lineVoltageD2, lineVoltageC2, lineVoltageB2;
    short int inverterCurrentB1, inverterCurrentC1, inverterCurrentD1,
              inverterCurrentD2, inverterCurrentC2, inverterCurrentB2;
    short int chopCurrent1B1, chopCurrent1C1, chopCurrent1D1,
              chopCurrent1D2, chopCurrent1C2, chopCurrent1B2;
    short int chopCurrent2B1, chopCurrent2C1, chopCurrent2D1,
              chopCurrent2D2, chopCurrent2C2, chopCurrent2B2;
    double averageMotorSpeedB1, averageMotorSpeedC1, averageMotorSpeedD1,
           averageMotorSpeedD2, averageMotorSpeedC2, averageMotorSpeedB2;
    unsigned short int motor1SpeedB1, motor1SpeedC1, motor1SpeedD1,
                       motor1SpeedD2, motor1SpeedC2, motor1SpeedB2;
    unsigned short int motor2SpeedB1, motor2SpeedC1, motor2SpeedD1,
                       motor2SpeedD2, motor2SpeedC2, motor2SpeedB2;
    unsigned short int motor3SpeedB1, motor3SpeedC1, motor3SpeedD1,
                       motor3SpeedD2, motor3SpeedC2, motor3SpeedB2;
    unsigned short int motor4SpeedB1, motor4SpeedC1, motor4SpeedD1,
                       motor4SpeedD2, motor4SpeedC2, motor4SpeedB2;
    bool vvvfWheelIdleB1, vvvfWheelIdleC1, vvvfWheelIdleD1, vvvfWheelIdleD2, vvvfWheelIdleC2, vvvfWheelIdleB2;

    bool dcuHardwireResetFeedbackB1, dcuTractionPulseB1, dcuBrakePulseB1, dcuChopPulseB1, dcuEmergencyTractionFeedbackB1, dcuEmergencyBrakeFeedbackB1,
         dcuFastBrakeFeedbackB1;
    bool dcuNetForwardFeedbackB1, dcuNetBackwardFeedbackB1, dcuNetTractionFeedbackB1, dcuNetBrakeFeedbackB1, dcuHardwireForwardFeedbackB1, dcuHardwireBackwardFeedbackB1,
         dcuHardwireTractionFeedbackB1, dcuHardwireBrakeFeedbackB1;
    bool dcuHardwireResetFeedbackC1, dcuTractionPulseC1, dcuBrakePulseC1, dcuChopPulseC1, dcuEmergencyTractionFeedbackC1, dcuEmergencyBrakeFeedbackC1,
         dcuFastBrakeFeedbackC1;
    bool dcuNetForwardFeedbackC1, dcuNetBackwardFeedbackC1, dcuNetTractionFeedbackC1, dcuNetBrakeFeedbackC1, dcuHardwireForwardFeedbackC1, dcuHardwireBackwardFeedbackC1,
         dcuHardwireTractionFeedbackC1, dcuHardwireBrakeFeedbackC1;
    bool dcuHardwireResetFeedbackD1, dcuTractionPulseD1, dcuBrakePulseD1, dcuChopPulseD1, dcuEmergencyTractionFeedbackD1, dcuEmergencyBrakeFeedbackD1,
         dcuFastBrakeFeedbackD1;
    bool dcuNetForwardFeedbackD1, dcuNetBackwardFeedbackD1, dcuNetTractionFeedbackD1, dcuNetBrakeFeedbackD1, dcuHardwireForwardFeedbackD1, dcuHardwireBackwardFeedbackD1,
         dcuHardwireTractionFeedbackD1, dcuHardwireBrakeFeedbackD1;
    bool dcuHardwireResetFeedbackD2, dcuTractionPulseD2, dcuBrakePulseD2, dcuChopPulseD2, dcuEmergencyTractionFeedbackD2, dcuEmergencyBrakeFeedbackD2,
         dcuFastBrakeFeedbackD2;
    bool dcuNetForwardFeedbackD2, dcuNetBackwardFeedbackD2, dcuNetTractionFeedbackD2, dcuNetBrakeFeedbackD2, dcuHardwireForwardFeedbackD2, dcuHardwireBackwardFeedbackD2,
         dcuHardwireTractionFeedbackD2, dcuHardwireBrakeFeedbackD2;
    bool dcuHardwireResetFeedbackC2, dcuTractionPulseC2, dcuBrakePulseC2, dcuChopPulseC2, dcuEmergencyTractionFeedbackC2, dcuEmergencyBrakeFeedbackC2,
         dcuFastBrakeFeedbackC2;
    bool dcuNetForwardFeedbackC2, dcuNetBackwardFeedbackC2, dcuNetTractionFeedbackC2, dcuNetBrakeFeedbackC2, dcuHardwireForwardFeedbackC2, dcuHardwireBackwardFeedbackC2,
         dcuHardwireTractionFeedbackC2, dcuHardwireBrakeFeedbackC2;
    bool dcuHardwireResetFeedbackB2, dcuTractionPulseB2, dcuBrakePulseB2, dcuChopPulseB2, dcuEmergencyTractionFeedbackB2, dcuEmergencyBrakeFeedbackB2,
         dcuFastBrakeFeedbackB2;
    bool dcuNetForwardFeedbackB2, dcuNetBackwardFeedbackB2, dcuNetTractionFeedbackB2, dcuNetBrakeFeedbackB2, dcuHardwireForwardFeedbackB2, dcuHardwireBackwardFeedbackB2,
         dcuHardwireTractionFeedbackB2, dcuHardwireBrakeFeedbackB2;

    bool dcuBrakeResistorPressureNormalB1, dcuBrakeResistorRelayFeedbackStateB1, dcuBrakeResistorFanStartB1;
    bool dcuBrakeResistorPressureNormalC1, dcuBrakeResistorRelayFeedbackStateC1, dcuBrakeResistorFanStartC1;
    bool dcuBrakeResistorPressureNormalD1, dcuBrakeResistorRelayFeedbackStateD1, dcuBrakeResistorFanStartD1;
    bool dcuBrakeResistorPressureNormalD2, dcuBrakeResistorRelayFeedbackStateD2, dcuBrakeResistorFanStartD2;
    bool dcuBrakeResistorPressureNormalC2, dcuBrakeResistorRelayFeedbackStateC2, dcuBrakeResistorFanStartC2;
    bool dcuBrakeResistorPressureNormalB2, dcuBrakeResistorRelayFeedbackStateB2, dcuBrakeResistorFanStartB2;

    bool dcuEmergencyTractionOverSpeedB1, dcuChargeContactorCommandB1, dcuShortContactorCommandB1;
    bool dcuEmergencyTractionOverSpeedC1, dcuChargeContactorCommandC1, dcuShortContactorCommandC1;
    bool dcuEmergencyTractionOverSpeedD1, dcuChargeContactorCommandD1, dcuShortContactorCommandD1;
    bool dcuEmergencyTractionOverSpeedD2, dcuChargeContactorCommandD2, dcuShortContactorCommandD2;
    bool dcuEmergencyTractionOverSpeedC2, dcuChargeContactorCommandC2, dcuShortContactorCommandC2;
    bool dcuEmergencyTractionOverSpeedB2, dcuChargeContactorCommandB2, dcuShortContactorCommandB2;

    bool dcuHardwireAllBrakeReleaseFeedbackB1, dcuHardwireAllBrakeReleaseFeedbackC1, dcuHardwireAllBrakeReleaseFeedbackD1,
         dcuHardwireAllBrakeReleaseFeedbackD2, dcuHardwireAllBrakeReleaseFeedbackC2, dcuHardwireAllBrakeReleaseFeedbackB2;
    bool dcuMainBreakerAllowStateB1, dcuMainBreakerAllowStateC1, dcuMainBreakerAllowStateD1,
         dcuMainBreakerAllowStateD2, dcuMainBreakerAllowStateC2, dcuMainBreakerAllowStateB2;
    bool dcuMainBreakerDecuceStateB1, dcuMainBreakerDecuceStateC1, dcuMainBreakerDecuceStateD1,
         dcuMainBreakerDecuceStateD2, dcuMainBreakerDecuceStateC2, dcuMainBreakerDecuceStateB2;
    bool dcuHardwireHbCloseB1, dcuHardwireHbOpenB1;
    bool dcuHardwireHbCloseC1, dcuHardwireHbOpenC1;
    bool dcuHardwireHbCloseD1, dcuHardwireHbOpenD1;
    bool dcuHardwireHbCloseD2, dcuHardwireHbOpenD2;
    bool dcuHardwireHbCloseC2, dcuHardwireHbOpenC2;
    bool dcuHardwireHbCloseB2, dcuHardwireHbOpenB2;

    bool dcuChargingContactorB1, dcuChargingContactorC1, dcuChargingContactorD1,
         dcuChargingContactorD2, dcuChargingContactorC2, dcuChargingContactorB2;
    bool dcuShortOutContactorB1, dcuShortOutContactorC1, dcuShortOutContactorD1,
         dcuShortOutContactorD2, dcuShortOutContactorC2, dcuShortOutContactorB2;
    short int dcuMotor1TemperatureB1, dcuMotor1TemperatureC1, dcuMotor1TemperatureD1,
              dcuMotor1TemperatureD2, dcuMotor1TemperatureC2, dcuMotor1TemperatureB2;
    short int dcuMotor2TemperatureB1, dcuMotor2TemperatureC1, dcuMotor2TemperatureD1,
              dcuMotor2TemperatureD2, dcuMotor2TemperatureC2, dcuMotor2TemperatureB2;
    short int dcuMotor3TemperatureB1, dcuMotor3TemperatureC1, dcuMotor3TemperatureD1,
              dcuMotor3TemperatureD2, dcuMotor3TemperatureC2, dcuMotor3TemperatureB2;
    short int dcuMotor4TemperatureB1, dcuMotor4TemperatureC1, dcuMotor4TemperatureD1,
              dcuMotor4TemperatureD2, dcuMotor4TemperatureC2, dcuMotor4TemperatureB2;
    unsigned long int dcuRealBrakePowerB1, dcuRealBrakePowerC1, dcuRealBrakePowerD1, dcuRealBrakePowerD2, dcuRealBrakePowerC2, dcuRealBrakePowerB2;

    bool dcuTractionStateB1, dcuTractionStateC1, dcuTractionStateD1, dcuTractionStateD2, dcuTractionStateC2, dcuTractionStateB2;
    bool dcuBrakeStateB1, dcuBrakeStateC1, dcuBrakeStateD1, dcuBrakeStateD2, dcuBrakeStateC2, dcuBrakeStateB2;
    bool dcuDirectionForwardB1, dcuDirectionForwardC1, dcuDirectionForwardD1, dcuDirectionForwardD2, dcuDirectionForwardC2, dcuDirectionForwardB2;
    bool dcuDirectionBackwardB1, dcuDirectionBackwardC1, dcuDirectionBackwardD1, dcuDirectionBackwardD2, dcuDirectionBackwardC2, dcuDirectionBackwardB2;
    bool dcuMainBreakerStateB1, dcuMainBreakerStateC1, dcuMainBreakerStateD1, dcuMainBreakerStateD2, dcuMainBreakerStateC2, dcuMainBreakerStateB2;

    unsigned long int dcuSettedTractionAndBrakePowerB1, dcuRealTractionPowerB1;
    unsigned long int dcuSettedTractionAndBrakePowerC1, dcuRealTractionPowerC1;
    unsigned long int dcuSettedTractionAndBrakePowerD1, dcuRealTractionPowerD1;
    unsigned long int dcuSettedTractionAndBrakePowerD2, dcuRealTractionPowerD2;
    unsigned long int dcuSettedTractionAndBrakePowerC2, dcuRealTractionPowerC2;
    unsigned long int dcuSettedTractionAndBrakePowerB2, dcuRealTractionPowerB2;

    // signals of dcdc
    bool dcdcKm2StateA1, dcdcK1StateA1, dcdcKm1StateA1, dcdcKm1DriverA1, dcdcKm2DriverA1, dcdcK1DriverA1;
    bool dcdcKm2StateA2, dcdcK1StateA2, dcdcKm1StateA2, dcdcKm1DriverA2, dcdcKm2DriverA2, dcdcK1DriverA2;
    bool dcdcOutputOverVoltageA1, dcdcOutputLowVoltageA1, dcdcOutputOverCurrentA1, dcdcChargeOverCurrentA1,
         dcdcInputLowVoltageA1, dcdcInputOverVoltageA1;
    bool dcdcOutputOverVoltageA2, dcdcOutputLowVoltageA2, dcdcOutputOverCurrentA2, dcdcChargeOverCurrentA2,
         dcdcInputLowVoltageA2, dcdcInputOverVoltageA2;

    signed short int dcdcCapacitor1VoltageA1, dcdcCapacitor2VoltageA1, dcdcOutputVoltageA1, dcdcOutputCurrentA1, dcdcChargeCurrentA1;
    signed short int dcdcCapacitor1VoltageA2, dcdcCapacitor2VoltageA2, dcdcOutputVoltageA2, dcdcOutputCurrentA2, dcdcChargeCurrentA2;

    // signals of siv
    bool sivKm1FaultProtectA1, sivKm2FaultProtectA1, sivKmaFaultProtectA1,
         sivKm1DriverSignalA1, sivKm2DriverSignalA1, sivKmaDriverSignalA1,
         siv380vOkA1, sivAcuBusActiveA1;

    bool sivKm1FaultProtectC1, sivKm2FaultProtectC1, sivKmaFaultProtectC1,
         sivKm1DriverSignalC1, sivKm2DriverSignalC1, sivKmaDriverSignalC1,
         siv380vOkC1, sivAcuBusActiveC1;

    bool sivKm1FaultProtectC2, sivKm2FaultProtectC2, sivKmaFaultProtectC2,
         sivKm1DriverSignalC2, sivKm2DriverSignalC2, sivKmaDriverSignalC2,
         siv380vOkC2, sivAcuBusActiveC2;

    bool sivKm1FaultProtectA2, sivKm2FaultProtectA2, sivKmaFaultProtectA2,
         sivKm1DriverSignalA2, sivKm2DriverSignalA2, sivKmaDriverSignalA2,
         siv380vOkA2, sivAcuBusActiveA2;

    unsigned short int inputVoltageSivA1, middleCapacitorVoltageSivA1, inputCurrentSivA1, bridgeACurrentA1,
                       bridgeBCurrentA1, bridgeCCurrentA1, acOutputUCurrentA1,  acOutputVCurrentA1, acOutputWCurrentA1,
                       acOutputUvVoltageA1, acOutputUwVoltageA1, sivGeneratrixUvVoltageA1, sivGeneratrixUwVoltageA1;

    unsigned short int inputVoltageSivC1, middleCapacitorVoltageSivC1, inputCurrentSivC1, bridgeACurrentC1,
                       bridgeBCurrentC1, bridgeCCurrentC1, acOutputUCurrentC1,  acOutputVCurrentC1, acOutputWCurrentC1,
                       acOutputUvVoltageC1, acOutputUwVoltageC1, sivGeneratrixUvVoltageC1, sivGeneratrixUwVoltageC1;

    unsigned short int inputVoltageSivC2, middleCapacitorVoltageSivC2, inputCurrentSivC2, bridgeACurrentC2,
                       bridgeBCurrentC2, bridgeCCurrentC2, acOutputUCurrentC2,  acOutputVCurrentC2, acOutputWCurrentC2,
                       acOutputUvVoltageC2, acOutputUwVoltageC2, sivGeneratrixUvVoltageC2, sivGeneratrixUwVoltageC2;

    unsigned short int inputVoltageSivA2, middleCapacitorVoltageSivA2, inputCurrentSivA2, bridgeACurrentA2,
                       bridgeBCurrentA2, bridgeCCurrentA2, acOutputUCurrentA2,  acOutputVCurrentA2, acOutputWCurrentA2,
                       acOutputUvVoltageA2, acOutputUwVoltageA2, sivGeneratrixUvVoltageA2, sivGeneratrixUwVoltageA2;

    // edcu operation state
    unsigned char edcu1OperationStateA1, edcu2OperationStateA1, edcu1OperationStateB1, edcu2OperationStateB1,
                  edcu1OperationStateC1, edcu2OperationStateC1, edcu1OperationStateD1, edcu2OperationStateD1,
                  edcu1OperationStateD2, edcu2OperationStateD2, edcu1OperationStateC2, edcu2OperationStateC2,
                  edcu1OperationStateB2, edcu2OperationStateB2, edcu1OperationStateA2, edcu2OperationStateA2;
    // tds
    QString tdsSoftwareVersion;

    // bcu
    bool hmiBrakeSelfCheckFlag;

    // the signals of bcu
    // bool bcu1

    // mdcu trust
    bool edcu1Mdcu1ValidA1, edcu1Mdcu2ValidA1, edcu1Mdcu3ValidA1, edcu1Mdcu4ValidA1, edcu1Mdcu5ValidA1, edcu1Mdcu6ValidA1, edcu1Mdcu7ValidA1, edcu1Mdcu8ValidA1, edcu1Mdcu9ValidA1, edcu1Mdcu10ValidA1;
    bool edcu2Mdcu1ValidA1, edcu2Mdcu2ValidA1, edcu2Mdcu3ValidA1, edcu2Mdcu4ValidA1, edcu2Mdcu5ValidA1, edcu2Mdcu6ValidA1, edcu2Mdcu7ValidA1, edcu2Mdcu8ValidA1, edcu2Mdcu9ValidA1, edcu2Mdcu10ValidA1;
    bool edcu1Mdcu1ValidB1, edcu1Mdcu2ValidB1, edcu1Mdcu3ValidB1, edcu1Mdcu4ValidB1, edcu1Mdcu5ValidB1, edcu1Mdcu6ValidB1, edcu1Mdcu7ValidB1, edcu1Mdcu8ValidB1, edcu1Mdcu9ValidB1, edcu1Mdcu10ValidB1;
    bool edcu2Mdcu1ValidB1, edcu2Mdcu2ValidB1, edcu2Mdcu3ValidB1, edcu2Mdcu4ValidB1, edcu2Mdcu5ValidB1, edcu2Mdcu6ValidB1, edcu2Mdcu7ValidB1, edcu2Mdcu8ValidB1, edcu2Mdcu9ValidB1, edcu2Mdcu10ValidB1;
    bool edcu1Mdcu1ValidC1, edcu1Mdcu2ValidC1, edcu1Mdcu3ValidC1, edcu1Mdcu4ValidC1, edcu1Mdcu5ValidC1, edcu1Mdcu6ValidC1, edcu1Mdcu7ValidC1, edcu1Mdcu8ValidC1, edcu1Mdcu9ValidC1, edcu1Mdcu10ValidC1;
    bool edcu2Mdcu1ValidC1, edcu2Mdcu2ValidC1, edcu2Mdcu3ValidC1, edcu2Mdcu4ValidC1, edcu2Mdcu5ValidC1, edcu2Mdcu6ValidC1, edcu2Mdcu7ValidC1, edcu2Mdcu8ValidC1, edcu2Mdcu9ValidC1, edcu2Mdcu10ValidC1;
    bool edcu1Mdcu1ValidD1, edcu1Mdcu2ValidD1, edcu1Mdcu3ValidD1, edcu1Mdcu4ValidD1, edcu1Mdcu5ValidD1, edcu1Mdcu6ValidD1, edcu1Mdcu7ValidD1, edcu1Mdcu8ValidD1, edcu1Mdcu9ValidD1, edcu1Mdcu10ValidD1;
    bool edcu2Mdcu1ValidD1, edcu2Mdcu2ValidD1, edcu2Mdcu3ValidD1, edcu2Mdcu4ValidD1, edcu2Mdcu5ValidD1, edcu2Mdcu6ValidD1, edcu2Mdcu7ValidD1, edcu2Mdcu8ValidD1, edcu2Mdcu9ValidD1, edcu2Mdcu10ValidD1;
    bool edcu1Mdcu1ValidD2, edcu1Mdcu2ValidD2, edcu1Mdcu3ValidD2, edcu1Mdcu4ValidD2, edcu1Mdcu5ValidD2, edcu1Mdcu6ValidD2, edcu1Mdcu7ValidD2, edcu1Mdcu8ValidD2, edcu1Mdcu9ValidD2, edcu1Mdcu10ValidD2;
    bool edcu2Mdcu1ValidD2, edcu2Mdcu2ValidD2, edcu2Mdcu3ValidD2, edcu2Mdcu4ValidD2, edcu2Mdcu5ValidD2, edcu2Mdcu6ValidD2, edcu2Mdcu7ValidD2, edcu2Mdcu8ValidD2, edcu2Mdcu9ValidD2, edcu2Mdcu10ValidD2;
    bool edcu1Mdcu1ValidC2, edcu1Mdcu2ValidC2, edcu1Mdcu3ValidC2, edcu1Mdcu4ValidC2, edcu1Mdcu5ValidC2, edcu1Mdcu6ValidC2, edcu1Mdcu7ValidC2, edcu1Mdcu8ValidC2, edcu1Mdcu9ValidC2, edcu1Mdcu10ValidC2;
    bool edcu2Mdcu1ValidC2, edcu2Mdcu2ValidC2, edcu2Mdcu3ValidC2, edcu2Mdcu4ValidC2, edcu2Mdcu5ValidC2, edcu2Mdcu6ValidC2, edcu2Mdcu7ValidC2, edcu2Mdcu8ValidC2, edcu2Mdcu9ValidC2, edcu2Mdcu10ValidC2;
    bool edcu1Mdcu1ValidB2, edcu1Mdcu2ValidB2, edcu1Mdcu3ValidB2, edcu1Mdcu4ValidB2, edcu1Mdcu5ValidB2, edcu1Mdcu6ValidB2, edcu1Mdcu7ValidB2, edcu1Mdcu8ValidB2, edcu1Mdcu9ValidB2, edcu1Mdcu10ValidB2;
    bool edcu2Mdcu1ValidB2, edcu2Mdcu2ValidB2, edcu2Mdcu3ValidB2, edcu2Mdcu4ValidB2, edcu2Mdcu5ValidB2, edcu2Mdcu6ValidB2, edcu2Mdcu7ValidB2, edcu2Mdcu8ValidB2, edcu2Mdcu9ValidB2, edcu2Mdcu10ValidB2;
    bool edcu1Mdcu1ValidA2, edcu1Mdcu2ValidA2, edcu1Mdcu3ValidA2, edcu1Mdcu4ValidA2, edcu1Mdcu5ValidA2, edcu1Mdcu6ValidA2, edcu1Mdcu7ValidA2, edcu1Mdcu8ValidA2, edcu1Mdcu9ValidA2, edcu1Mdcu10ValidA2;
    bool edcu2Mdcu1ValidA2, edcu2Mdcu2ValidA2, edcu2Mdcu3ValidA2, edcu2Mdcu4ValidA2, edcu2Mdcu5ValidA2, edcu2Mdcu6ValidA2, edcu2Mdcu7ValidA2, edcu2Mdcu8ValidA2, edcu2Mdcu9ValidA2, edcu2Mdcu10ValidA2;

    bool door1ErrorA1, door2ErrorA1, door3ErrorA1, door4ErrorA1, door5ErrorA1, door6ErrorA1, door7ErrorA1, door8ErrorA1, door9ErrorA1, door10ErrorA1;
    bool door1ErrorB1, door2ErrorB1, door3ErrorB1, door4ErrorB1, door5ErrorB1, door6ErrorB1, door7ErrorB1, door8ErrorB1, door9ErrorB1, door10ErrorB1;
    bool door1ErrorC1, door2ErrorC1, door3ErrorC1, door4ErrorC1, door5ErrorC1, door6ErrorC1, door7ErrorC1, door8ErrorC1, door9ErrorC1, door10ErrorC1;
    bool door1ErrorD1, door2ErrorD1, door3ErrorD1, door4ErrorD1, door5ErrorD1, door6ErrorD1, door7ErrorD1, door8ErrorD1, door9ErrorD1, door10ErrorD1;
    bool door1ErrorD2, door2ErrorD2, door3ErrorD2, door4ErrorD2, door5ErrorD2, door6ErrorD2, door7ErrorD2, door8ErrorD2, door9ErrorD2, door10ErrorD2;
    bool door1ErrorC2, door2ErrorC2, door3ErrorC2, door4ErrorC2, door5ErrorC2, door6ErrorC2, door7ErrorC2, door8ErrorC2, door9ErrorC2, door10ErrorC2;
    bool door1ErrorB2, door2ErrorB2, door3ErrorB2, door4ErrorB2, door5ErrorB2, door6ErrorB2, door7ErrorB2, door8ErrorB2, door9ErrorB2, door10ErrorB2;
    bool door1ErrorA2, door2ErrorA2, door3ErrorA2, door4ErrorA2, door5ErrorA2, door6ErrorA2, door7ErrorA2, door8ErrorA2, door9ErrorA2, door10ErrorA2;

    // door signal
    // door 1
    bool edcu1Door1EnabledA1, edcu1Door1ZeroSpeedA1, edcu1Door1OpenA1, edcu1Door1UnknownStateA1, edcu1Door1CloseA1, edcu1Door1OpenObstacleA1, edcu1Door1SaftyLoop1A1, edcu1Door1SaftyLoop2A1,
         edcu1Door1CloseLockA1, edcu1Door1OpenFullyA1, edcu1Door1EmergencyUnlockA1, edcu1Door1IsolatedA1, edcu1Door1CLoseObstacleA1, edcu1Door1TrainLineTrustA1, edcu1Door1MajorErrorA1, edcu1Door1MinorErrorA1;
    bool edcu1Door1EnabledB1, edcu1Door1ZeroSpeedB1, edcu1Door1OpenB1, edcu1Door1UnknownStateB1, edcu1Door1CloseB1, edcu1Door1OpenObstacleB1, edcu1Door1SaftyLoop1B1, edcu1Door1SaftyLoop2B1,
         edcu1Door1CloseLockB1, edcu1Door1OpenFullyB1, edcu1Door1EmergencyUnlockB1, edcu1Door1IsolatedB1, edcu1Door1CLoseObstacleB1, edcu1Door1TrainLineTrustB1, edcu1Door1MajorErrorB1, edcu1Door1MinorErrorB1;
    bool edcu1Door1EnabledC1, edcu1Door1ZeroSpeedC1, edcu1Door1OpenC1, edcu1Door1UnknownStateC1, edcu1Door1CloseC1, edcu1Door1OpenObstacleC1, edcu1Door1SaftyLoop1C1, edcu1Door1SaftyLoop2C1,
         edcu1Door1CloseLockC1, edcu1Door1OpenFullyC1, edcu1Door1EmergencyUnlockC1, edcu1Door1IsolatedC1, edcu1Door1CLoseObstacleC1, edcu1Door1TrainLineTrustC1, edcu1Door1MajorErrorC1, edcu1Door1MinorErrorC1;
    bool edcu1Door1EnabledD1, edcu1Door1ZeroSpeedD1, edcu1Door1OpenD1, edcu1Door1UnknownStateD1, edcu1Door1CloseD1, edcu1Door1OpenObstacleD1, edcu1Door1SaftyLoop1D1, edcu1Door1SaftyLoop2D1,
         edcu1Door1CloseLockD1, edcu1Door1OpenFullyD1, edcu1Door1EmergencyUnlockD1, edcu1Door1IsolatedD1, edcu1Door1CLoseObstacleD1, edcu1Door1TrainLineTrustD1, edcu1Door1MajorErrorD1, edcu1Door1MinorErrorD1;
    bool edcu1Door1EnabledD2, edcu1Door1ZeroSpeedD2, edcu1Door1OpenD2, edcu1Door1UnknownStateD2, edcu1Door1CloseD2, edcu1Door1OpenObstacleD2, edcu1Door1SaftyLoop1D2, edcu1Door1SaftyLoop2D2,
         edcu1Door1CloseLockD2, edcu1Door1OpenFullyD2, edcu1Door1EmergencyUnlockD2, edcu1Door1IsolatedD2, edcu1Door1CLoseObstacleD2, edcu1Door1TrainLineTrustD2, edcu1Door1MajorErrorD2, edcu1Door1MinorErrorD2;
    bool edcu1Door1EnabledC2, edcu1Door1ZeroSpeedC2, edcu1Door1OpenC2, edcu1Door1UnknownStateC2, edcu1Door1CloseC2, edcu1Door1OpenObstacleC2, edcu1Door1SaftyLoop1C2, edcu1Door1SaftyLoop2C2,
         edcu1Door1CloseLockC2, edcu1Door1OpenFullyC2, edcu1Door1EmergencyUnlockC2, edcu1Door1IsolatedC2, edcu1Door1CLoseObstacleC2, edcu1Door1TrainLineTrustC2, edcu1Door1MajorErrorC2, edcu1Door1MinorErrorC2;
    bool edcu1Door1EnabledB2, edcu1Door1ZeroSpeedB2, edcu1Door1OpenB2, edcu1Door1UnknownStateB2, edcu1Door1CloseB2, edcu1Door1OpenObstacleB2, edcu1Door1SaftyLoop1B2, edcu1Door1SaftyLoop2B2,
         edcu1Door1CloseLockB2, edcu1Door1OpenFullyB2, edcu1Door1EmergencyUnlockB2, edcu1Door1IsolatedB2, edcu1Door1CLoseObstacleB2, edcu1Door1TrainLineTrustB2, edcu1Door1MajorErrorB2, edcu1Door1MinorErrorB2;
    bool edcu1Door1EnabledA2, edcu1Door1ZeroSpeedA2, edcu1Door1OpenA2, edcu1Door1UnknownStateA2, edcu1Door1CloseA2, edcu1Door1OpenObstacleA2, edcu1Door1SaftyLoop1A2, edcu1Door1SaftyLoop2A2,
         edcu1Door1CloseLockA2, edcu1Door1OpenFullyA2, edcu1Door1EmergencyUnlockA2, edcu1Door1IsolatedA2, edcu1Door1CLoseObstacleA2, edcu1Door1TrainLineTrustA2, edcu1Door1MajorErrorA2, edcu1Door1MinorErrorA2;

    bool edcu2Door1EnabledA1, edcu2Door1ZeroSpeedA1, edcu2Door1OpenA1, edcu2Door1UnknownStateA1, edcu2Door1CloseA1, edcu2Door1OpenObstacleA1, edcu2Door1SaftyLoop1A1, edcu2Door1SaftyLoop2A1,
         edcu2Door1CloseLockA1, edcu2Door1OpenFullyA1, edcu2Door1EmergencyUnlockA1, edcu2Door1IsolatedA1, edcu2Door1CLoseObstacleA1, edcu2Door1TrainLineTrustA1, edcu2Door1MajorErrorA1, edcu2Door1MinorErrorA1;
    bool edcu2Door1EnabledB1, edcu2Door1ZeroSpeedB1, edcu2Door1OpenB1, edcu2Door1UnknownStateB1, edcu2Door1CloseB1, edcu2Door1OpenObstacleB1, edcu2Door1SaftyLoop1B1, edcu2Door1SaftyLoop2B1,
         edcu2Door1CloseLockB1, edcu2Door1OpenFullyB1, edcu2Door1EmergencyUnlockB1, edcu2Door1IsolatedB1, edcu2Door1CLoseObstacleB1, edcu2Door1TrainLineTrustB1, edcu2Door1MajorErrorB1, edcu2Door1MinorErrorB1;
    bool edcu2Door1EnabledC1, edcu2Door1ZeroSpeedC1, edcu2Door1OpenC1, edcu2Door1UnknownStateC1, edcu2Door1CloseC1, edcu2Door1OpenObstacleC1, edcu2Door1SaftyLoop1C1, edcu2Door1SaftyLoop2C1,
         edcu2Door1CloseLockC1, edcu2Door1OpenFullyC1, edcu2Door1EmergencyUnlockC1, edcu2Door1IsolatedC1, edcu2Door1CLoseObstacleC1, edcu2Door1TrainLineTrustC1, edcu2Door1MajorErrorC1, edcu2Door1MinorErrorC1;
    bool edcu2Door1EnabledD1, edcu2Door1ZeroSpeedD1, edcu2Door1OpenD1, edcu2Door1UnknownStateD1, edcu2Door1CloseD1, edcu2Door1OpenObstacleD1, edcu2Door1SaftyLoop1D1, edcu2Door1SaftyLoop2D1,
         edcu2Door1CloseLockD1, edcu2Door1OpenFullyD1, edcu2Door1EmergencyUnlockD1, edcu2Door1IsolatedD1, edcu2Door1CLoseObstacleD1, edcu2Door1TrainLineTrustD1, edcu2Door1MajorErrorD1, edcu2Door1MinorErrorD1;
    bool edcu2Door1EnabledD2, edcu2Door1ZeroSpeedD2, edcu2Door1OpenD2, edcu2Door1UnknownStateD2, edcu2Door1CloseD2, edcu2Door1OpenObstacleD2, edcu2Door1SaftyLoop1D2, edcu2Door1SaftyLoop2D2,
         edcu2Door1CloseLockD2, edcu2Door1OpenFullyD2, edcu2Door1EmergencyUnlockD2, edcu2Door1IsolatedD2, edcu2Door1CLoseObstacleD2, edcu2Door1TrainLineTrustD2, edcu2Door1MajorErrorD2, edcu2Door1MinorErrorD2;
    bool edcu2Door1EnabledC2, edcu2Door1ZeroSpeedC2, edcu2Door1OpenC2, edcu2Door1UnknownStateC2, edcu2Door1CloseC2, edcu2Door1OpenObstacleC2, edcu2Door1SaftyLoop1C2, edcu2Door1SaftyLoop2C2,
         edcu2Door1CloseLockC2, edcu2Door1OpenFullyC2, edcu2Door1EmergencyUnlockC2, edcu2Door1IsolatedC2, edcu2Door1CLoseObstacleC2, edcu2Door1TrainLineTrustC2, edcu2Door1MajorErrorC2, edcu2Door1MinorErrorC2;
    bool edcu2Door1EnabledB2, edcu2Door1ZeroSpeedB2, edcu2Door1OpenB2, edcu2Door1UnknownStateB2, edcu2Door1CloseB2, edcu2Door1OpenObstacleB2, edcu2Door1SaftyLoop1B2, edcu2Door1SaftyLoop2B2,
         edcu2Door1CloseLockB2, edcu2Door1OpenFullyB2, edcu2Door1EmergencyUnlockB2, edcu2Door1IsolatedB2, edcu2Door1CLoseObstacleB2, edcu2Door1TrainLineTrustB2, edcu2Door1MajorErrorB2, edcu2Door1MinorErrorB2;
    bool edcu2Door1EnabledA2, edcu2Door1ZeroSpeedA2, edcu2Door1OpenA2, edcu2Door1UnknownStateA2, edcu2Door1CloseA2, edcu2Door1OpenObstacleA2, edcu2Door1SaftyLoop1A2, edcu2Door1SaftyLoop2A2,
         edcu2Door1CloseLockA2, edcu2Door1OpenFullyA2, edcu2Door1EmergencyUnlockA2, edcu2Door1IsolatedA2, edcu2Door1CLoseObstacleA2, edcu2Door1TrainLineTrustA2, edcu2Door1MajorErrorA2, edcu2Door1MinorErrorA2;

    // door 1
    bool hmiDoor1EnabledA1, hmiDoor1ZeroSpeedA1, hmiDoor1OpenA1, hmiDoor1UnknownStateA1, hmiDoor1CloseA1, hmiDoor1OpenObstacleA1, hmiDoor1SaftyLoop1A1, hmiDoor1SaftyLoop2A1,
         hmiDoor1CloseLockA1, hmiDoor1OpenFullyA1, hmiDoor1EmergencyUnlockA1, hmiDoor1IsolatedA1, hmiDoor1CLoseObstacleA1, hmiDoor1TrainLineTrustA1, hmiDoor1MajorErrorA1, hmiDoor1MinorErrorA1;
    bool hmiDoor1EnabledB1, hmiDoor1ZeroSpeedB1, hmiDoor1OpenB1, hmiDoor1UnknownStateB1, hmiDoor1CloseB1, hmiDoor1OpenObstacleB1, hmiDoor1SaftyLoop1B1, hmiDoor1SaftyLoop2B1,
         hmiDoor1CloseLockB1, hmiDoor1OpenFullyB1, hmiDoor1EmergencyUnlockB1, hmiDoor1IsolatedB1, hmiDoor1CLoseObstacleB1, hmiDoor1TrainLineTrustB1, hmiDoor1MajorErrorB1, hmiDoor1MinorErrorB1;
    bool hmiDoor1EnabledC1, hmiDoor1ZeroSpeedC1, hmiDoor1OpenC1, hmiDoor1UnknownStateC1, hmiDoor1CloseC1, hmiDoor1OpenObstacleC1, hmiDoor1SaftyLoop1C1, hmiDoor1SaftyLoop2C1,
         hmiDoor1CloseLockC1, hmiDoor1OpenFullyC1, hmiDoor1EmergencyUnlockC1, hmiDoor1IsolatedC1, hmiDoor1CLoseObstacleC1, hmiDoor1TrainLineTrustC1, hmiDoor1MajorErrorC1, hmiDoor1MinorErrorC1;
    bool hmiDoor1EnabledD1, hmiDoor1ZeroSpeedD1, hmiDoor1OpenD1, hmiDoor1UnknownStateD1, hmiDoor1CloseD1, hmiDoor1OpenObstacleD1, hmiDoor1SaftyLoop1D1, hmiDoor1SaftyLoop2D1,
         hmiDoor1CloseLockD1, hmiDoor1OpenFullyD1, hmiDoor1EmergencyUnlockD1, hmiDoor1IsolatedD1, hmiDoor1CLoseObstacleD1, hmiDoor1TrainLineTrustD1, hmiDoor1MajorErrorD1, hmiDoor1MinorErrorD1;
    bool hmiDoor1EnabledD2, hmiDoor1ZeroSpeedD2, hmiDoor1OpenD2, hmiDoor1UnknownStateD2, hmiDoor1CloseD2, hmiDoor1OpenObstacleD2, hmiDoor1SaftyLoop1D2, hmiDoor1SaftyLoop2D2,
         hmiDoor1CloseLockD2, hmiDoor1OpenFullyD2, hmiDoor1EmergencyUnlockD2, hmiDoor1IsolatedD2, hmiDoor1CLoseObstacleD2, hmiDoor1TrainLineTrustD2, hmiDoor1MajorErrorD2, hmiDoor1MinorErrorD2;
    bool hmiDoor1EnabledC2, hmiDoor1ZeroSpeedC2, hmiDoor1OpenC2, hmiDoor1UnknownStateC2, hmiDoor1CloseC2, hmiDoor1OpenObstacleC2, hmiDoor1SaftyLoop1C2, hmiDoor1SaftyLoop2C2,
         hmiDoor1CloseLockC2, hmiDoor1OpenFullyC2, hmiDoor1EmergencyUnlockC2, hmiDoor1IsolatedC2, hmiDoor1CLoseObstacleC2, hmiDoor1TrainLineTrustC2, hmiDoor1MajorErrorC2, hmiDoor1MinorErrorC2;
    bool hmiDoor1EnabledB2, hmiDoor1ZeroSpeedB2, hmiDoor1OpenB2, hmiDoor1UnknownStateB2, hmiDoor1CloseB2, hmiDoor1OpenObstacleB2, hmiDoor1SaftyLoop1B2, hmiDoor1SaftyLoop2B2,
         hmiDoor1CloseLockB2, hmiDoor1OpenFullyB2, hmiDoor1EmergencyUnlockB2, hmiDoor1IsolatedB2, hmiDoor1CLoseObstacleB2, hmiDoor1TrainLineTrustB2, hmiDoor1MajorErrorB2, hmiDoor1MinorErrorB2;
    bool hmiDoor1EnabledA2, hmiDoor1ZeroSpeedA2, hmiDoor1OpenA2, hmiDoor1UnknownStateA2, hmiDoor1CloseA2, hmiDoor1OpenObstacleA2, hmiDoor1SaftyLoop1A2, hmiDoor1SaftyLoop2A2,
         hmiDoor1CloseLockA2, hmiDoor1OpenFullyA2, hmiDoor1EmergencyUnlockA2, hmiDoor1IsolatedA2, hmiDoor1CLoseObstacleA2, hmiDoor1TrainLineTrustA2, hmiDoor1MajorErrorA2, hmiDoor1MinorErrorA2;

    // door 2
    bool hmiDoor2EnabledA1, hmiDoor2ZeroSpeedA1, hmiDoor2OpenA1, hmiDoor2UnknownStateA1, hmiDoor2CloseA1, hmiDoor2OpenObstacleA1, hmiDoor2SaftyLoop1A1, hmiDoor2SaftyLoop2A1,
         hmiDoor2CloseLockA1, hmiDoor2OpenFullyA1, hmiDoor2EmergencyUnlockA1, hmiDoor2IsolatedA1, hmiDoor2CLoseObstacleA1, hmiDoor2TrainLineTrustA1, hmiDoor2MajorErrorA1, hmiDoor2MinorErrorA1;
    bool hmiDoor2EnabledB1, hmiDoor2ZeroSpeedB1, hmiDoor2OpenB1, hmiDoor2UnknownStateB1, hmiDoor2CloseB1, hmiDoor2OpenObstacleB1, hmiDoor2SaftyLoop1B1, hmiDoor2SaftyLoop2B1,
         hmiDoor2CloseLockB1, hmiDoor2OpenFullyB1, hmiDoor2EmergencyUnlockB1, hmiDoor2IsolatedB1, hmiDoor2CLoseObstacleB1, hmiDoor2TrainLineTrustB1, hmiDoor2MajorErrorB1, hmiDoor2MinorErrorB1;
    bool hmiDoor2EnabledC1, hmiDoor2ZeroSpeedC1, hmiDoor2OpenC1, hmiDoor2UnknownStateC1, hmiDoor2CloseC1, hmiDoor2OpenObstacleC1, hmiDoor2SaftyLoop1C1, hmiDoor2SaftyLoop2C1,
         hmiDoor2CloseLockC1, hmiDoor2OpenFullyC1, hmiDoor2EmergencyUnlockC1, hmiDoor2IsolatedC1, hmiDoor2CLoseObstacleC1, hmiDoor2TrainLineTrustC1, hmiDoor2MajorErrorC1, hmiDoor2MinorErrorC1;
    bool hmiDoor2EnabledD1, hmiDoor2ZeroSpeedD1, hmiDoor2OpenD1, hmiDoor2UnknownStateD1, hmiDoor2CloseD1, hmiDoor2OpenObstacleD1, hmiDoor2SaftyLoop1D1, hmiDoor2SaftyLoop2D1,
         hmiDoor2CloseLockD1, hmiDoor2OpenFullyD1, hmiDoor2EmergencyUnlockD1, hmiDoor2IsolatedD1, hmiDoor2CLoseObstacleD1, hmiDoor2TrainLineTrustD1, hmiDoor2MajorErrorD1, hmiDoor2MinorErrorD1;
    bool hmiDoor2EnabledD2, hmiDoor2ZeroSpeedD2, hmiDoor2OpenD2, hmiDoor2UnknownStateD2, hmiDoor2CloseD2, hmiDoor2OpenObstacleD2, hmiDoor2SaftyLoop1D2, hmiDoor2SaftyLoop2D2,
         hmiDoor2CloseLockD2, hmiDoor2OpenFullyD2, hmiDoor2EmergencyUnlockD2, hmiDoor2IsolatedD2, hmiDoor2CLoseObstacleD2, hmiDoor2TrainLineTrustD2, hmiDoor2MajorErrorD2, hmiDoor2MinorErrorD2;
    bool hmiDoor2EnabledC2, hmiDoor2ZeroSpeedC2, hmiDoor2OpenC2, hmiDoor2UnknownStateC2, hmiDoor2CloseC2, hmiDoor2OpenObstacleC2, hmiDoor2SaftyLoop1C2, hmiDoor2SaftyLoop2C2,
         hmiDoor2CloseLockC2, hmiDoor2OpenFullyC2, hmiDoor2EmergencyUnlockC2, hmiDoor2IsolatedC2, hmiDoor2CLoseObstacleC2, hmiDoor2TrainLineTrustC2, hmiDoor2MajorErrorC2, hmiDoor2MinorErrorC2;
    bool hmiDoor2EnabledB2, hmiDoor2ZeroSpeedB2, hmiDoor2OpenB2, hmiDoor2UnknownStateB2, hmiDoor2CloseB2, hmiDoor2OpenObstacleB2, hmiDoor2SaftyLoop1B2, hmiDoor2SaftyLoop2B2,
         hmiDoor2CloseLockB2, hmiDoor2OpenFullyB2, hmiDoor2EmergencyUnlockB2, hmiDoor2IsolatedB2, hmiDoor2CLoseObstacleB2, hmiDoor2TrainLineTrustB2, hmiDoor2MajorErrorB2, hmiDoor2MinorErrorB2;
    bool hmiDoor2EnabledA2, hmiDoor2ZeroSpeedA2, hmiDoor2OpenA2, hmiDoor2UnknownStateA2, hmiDoor2CloseA2, hmiDoor2OpenObstacleA2, hmiDoor2SaftyLoop1A2, hmiDoor2SaftyLoop2A2,
         hmiDoor2CloseLockA2, hmiDoor2OpenFullyA2, hmiDoor2EmergencyUnlockA2, hmiDoor2IsolatedA2, hmiDoor2CLoseObstacleA2, hmiDoor2TrainLineTrustA2, hmiDoor2MajorErrorA2, hmiDoor2MinorErrorA2;

    // door 3
    bool hmiDoor3EnabledA1, hmiDoor3ZeroSpeedA1, hmiDoor3OpenA1, hmiDoor3UnknownStateA1, hmiDoor3CloseA1, hmiDoor3OpenObstacleA1, hmiDoor3SaftyLoop1A1, hmiDoor3SaftyLoop2A1,
         hmiDoor3CloseLockA1, hmiDoor3OpenFullyA1, hmiDoor3EmergencyUnlockA1, hmiDoor3IsolatedA1, hmiDoor3CLoseObstacleA1, hmiDoor3TrainLineTrustA1, hmiDoor3MajorErrorA1, hmiDoor3MinorErrorA1;
    bool hmiDoor3EnabledB1, hmiDoor3ZeroSpeedB1, hmiDoor3OpenB1, hmiDoor3UnknownStateB1, hmiDoor3CloseB1, hmiDoor3OpenObstacleB1, hmiDoor3SaftyLoop1B1, hmiDoor3SaftyLoop2B1,
         hmiDoor3CloseLockB1, hmiDoor3OpenFullyB1, hmiDoor3EmergencyUnlockB1, hmiDoor3IsolatedB1, hmiDoor3CLoseObstacleB1, hmiDoor3TrainLineTrustB1, hmiDoor3MajorErrorB1, hmiDoor3MinorErrorB1;
    bool hmiDoor3EnabledC1, hmiDoor3ZeroSpeedC1, hmiDoor3OpenC1, hmiDoor3UnknownStateC1, hmiDoor3CloseC1, hmiDoor3OpenObstacleC1, hmiDoor3SaftyLoop1C1, hmiDoor3SaftyLoop2C1,
         hmiDoor3CloseLockC1, hmiDoor3OpenFullyC1, hmiDoor3EmergencyUnlockC1, hmiDoor3IsolatedC1, hmiDoor3CLoseObstacleC1, hmiDoor3TrainLineTrustC1, hmiDoor3MajorErrorC1, hmiDoor3MinorErrorC1;
    bool hmiDoor3EnabledD1, hmiDoor3ZeroSpeedD1, hmiDoor3OpenD1, hmiDoor3UnknownStateD1, hmiDoor3CloseD1, hmiDoor3OpenObstacleD1, hmiDoor3SaftyLoop1D1, hmiDoor3SaftyLoop2D1,
         hmiDoor3CloseLockD1, hmiDoor3OpenFullyD1, hmiDoor3EmergencyUnlockD1, hmiDoor3IsolatedD1, hmiDoor3CLoseObstacleD1, hmiDoor3TrainLineTrustD1, hmiDoor3MajorErrorD1, hmiDoor3MinorErrorD1;
    bool hmiDoor3EnabledD2, hmiDoor3ZeroSpeedD2, hmiDoor3OpenD2, hmiDoor3UnknownStateD2, hmiDoor3CloseD2, hmiDoor3OpenObstacleD2, hmiDoor3SaftyLoop1D2, hmiDoor3SaftyLoop2D2,
         hmiDoor3CloseLockD2, hmiDoor3OpenFullyD2, hmiDoor3EmergencyUnlockD2, hmiDoor3IsolatedD2, hmiDoor3CLoseObstacleD2, hmiDoor3TrainLineTrustD2, hmiDoor3MajorErrorD2, hmiDoor3MinorErrorD2;
    bool hmiDoor3EnabledC2, hmiDoor3ZeroSpeedC2, hmiDoor3OpenC2, hmiDoor3UnknownStateC2, hmiDoor3CloseC2, hmiDoor3OpenObstacleC2, hmiDoor3SaftyLoop1C2, hmiDoor3SaftyLoop2C2,
         hmiDoor3CloseLockC2, hmiDoor3OpenFullyC2, hmiDoor3EmergencyUnlockC2, hmiDoor3IsolatedC2, hmiDoor3CLoseObstacleC2, hmiDoor3TrainLineTrustC2, hmiDoor3MajorErrorC2, hmiDoor3MinorErrorC2;
    bool hmiDoor3EnabledB2, hmiDoor3ZeroSpeedB2, hmiDoor3OpenB2, hmiDoor3UnknownStateB2, hmiDoor3CloseB2, hmiDoor3OpenObstacleB2, hmiDoor3SaftyLoop1B2, hmiDoor3SaftyLoop2B2,
         hmiDoor3CloseLockB2, hmiDoor3OpenFullyB2, hmiDoor3EmergencyUnlockB2, hmiDoor3IsolatedB2, hmiDoor3CLoseObstacleB2, hmiDoor3TrainLineTrustB2, hmiDoor3MajorErrorB2, hmiDoor3MinorErrorB2;
    bool hmiDoor3EnabledA2, hmiDoor3ZeroSpeedA2, hmiDoor3OpenA2, hmiDoor3UnknownStateA2, hmiDoor3CloseA2, hmiDoor3OpenObstacleA2, hmiDoor3SaftyLoop1A2, hmiDoor3SaftyLoop2A2,
         hmiDoor3CloseLockA2, hmiDoor3OpenFullyA2, hmiDoor3EmergencyUnlockA2, hmiDoor3IsolatedA2, hmiDoor3CLoseObstacleA2, hmiDoor3TrainLineTrustA2, hmiDoor3MajorErrorA2, hmiDoor3MinorErrorA2;

    // door 4
    bool hmiDoor4EnabledA1, hmiDoor4ZeroSpeedA1, hmiDoor4OpenA1, hmiDoor4UnknownStateA1, hmiDoor4CloseA1, hmiDoor4OpenObstacleA1, hmiDoor4SaftyLoop1A1, hmiDoor4SaftyLoop2A1,
         hmiDoor4CloseLockA1, hmiDoor4OpenFullyA1, hmiDoor4EmergencyUnlockA1, hmiDoor4IsolatedA1, hmiDoor4CLoseObstacleA1, hmiDoor4TrainLineTrustA1, hmiDoor4MajorErrorA1, hmiDoor4MinorErrorA1;
    bool hmiDoor4EnabledB1, hmiDoor4ZeroSpeedB1, hmiDoor4OpenB1, hmiDoor4UnknownStateB1, hmiDoor4CloseB1, hmiDoor4OpenObstacleB1, hmiDoor4SaftyLoop1B1, hmiDoor4SaftyLoop2B1,
         hmiDoor4CloseLockB1, hmiDoor4OpenFullyB1, hmiDoor4EmergencyUnlockB1, hmiDoor4IsolatedB1, hmiDoor4CLoseObstacleB1, hmiDoor4TrainLineTrustB1, hmiDoor4MajorErrorB1, hmiDoor4MinorErrorB1;
    bool hmiDoor4EnabledC1, hmiDoor4ZeroSpeedC1, hmiDoor4OpenC1, hmiDoor4UnknownStateC1, hmiDoor4CloseC1, hmiDoor4OpenObstacleC1, hmiDoor4SaftyLoop1C1, hmiDoor4SaftyLoop2C1,
         hmiDoor4CloseLockC1, hmiDoor4OpenFullyC1, hmiDoor4EmergencyUnlockC1, hmiDoor4IsolatedC1, hmiDoor4CLoseObstacleC1, hmiDoor4TrainLineTrustC1, hmiDoor4MajorErrorC1, hmiDoor4MinorErrorC1;
    bool hmiDoor4EnabledD1, hmiDoor4ZeroSpeedD1, hmiDoor4OpenD1, hmiDoor4UnknownStateD1, hmiDoor4CloseD1, hmiDoor4OpenObstacleD1, hmiDoor4SaftyLoop1D1, hmiDoor4SaftyLoop2D1,
         hmiDoor4CloseLockD1, hmiDoor4OpenFullyD1, hmiDoor4EmergencyUnlockD1, hmiDoor4IsolatedD1, hmiDoor4CLoseObstacleD1, hmiDoor4TrainLineTrustD1, hmiDoor4MajorErrorD1, hmiDoor4MinorErrorD1;
    bool hmiDoor4EnabledD2, hmiDoor4ZeroSpeedD2, hmiDoor4OpenD2, hmiDoor4UnknownStateD2, hmiDoor4CloseD2, hmiDoor4OpenObstacleD2, hmiDoor4SaftyLoop1D2, hmiDoor4SaftyLoop2D2,
         hmiDoor4CloseLockD2, hmiDoor4OpenFullyD2, hmiDoor4EmergencyUnlockD2, hmiDoor4IsolatedD2, hmiDoor4CLoseObstacleD2, hmiDoor4TrainLineTrustD2, hmiDoor4MajorErrorD2, hmiDoor4MinorErrorD2;
    bool hmiDoor4EnabledC2, hmiDoor4ZeroSpeedC2, hmiDoor4OpenC2, hmiDoor4UnknownStateC2, hmiDoor4CloseC2, hmiDoor4OpenObstacleC2, hmiDoor4SaftyLoop1C2, hmiDoor4SaftyLoop2C2,
         hmiDoor4CloseLockC2, hmiDoor4OpenFullyC2, hmiDoor4EmergencyUnlockC2, hmiDoor4IsolatedC2, hmiDoor4CLoseObstacleC2, hmiDoor4TrainLineTrustC2, hmiDoor4MajorErrorC2, hmiDoor4MinorErrorC2;
    bool hmiDoor4EnabledB2, hmiDoor4ZeroSpeedB2, hmiDoor4OpenB2, hmiDoor4UnknownStateB2, hmiDoor4CloseB2, hmiDoor4OpenObstacleB2, hmiDoor4SaftyLoop1B2, hmiDoor4SaftyLoop2B2,
         hmiDoor4CloseLockB2, hmiDoor4OpenFullyB2, hmiDoor4EmergencyUnlockB2, hmiDoor4IsolatedB2, hmiDoor4CLoseObstacleB2, hmiDoor4TrainLineTrustB2, hmiDoor4MajorErrorB2, hmiDoor4MinorErrorB2;
    bool hmiDoor4EnabledA2, hmiDoor4ZeroSpeedA2, hmiDoor4OpenA2, hmiDoor4UnknownStateA2, hmiDoor4CloseA2, hmiDoor4OpenObstacleA2, hmiDoor4SaftyLoop1A2, hmiDoor4SaftyLoop2A2,
         hmiDoor4CloseLockA2, hmiDoor4OpenFullyA2, hmiDoor4EmergencyUnlockA2, hmiDoor4IsolatedA2, hmiDoor4CLoseObstacleA2, hmiDoor4TrainLineTrustA2, hmiDoor4MajorErrorA2, hmiDoor4MinorErrorA2;

    // door 5
    bool hmiDoor5EnabledA1, hmiDoor5ZeroSpeedA1, hmiDoor5OpenA1, hmiDoor5UnknownStateA1, hmiDoor5CloseA1, hmiDoor5OpenObstacleA1, hmiDoor5SaftyLoop1A1, hmiDoor5SaftyLoop2A1,
         hmiDoor5CloseLockA1, hmiDoor5OpenFullyA1, hmiDoor5EmergencyUnlockA1, hmiDoor5IsolatedA1, hmiDoor5CLoseObstacleA1, hmiDoor5TrainLineTrustA1, hmiDoor5MajorErrorA1, hmiDoor5MinorErrorA1;
    bool hmiDoor5EnabledB1, hmiDoor5ZeroSpeedB1, hmiDoor5OpenB1, hmiDoor5UnknownStateB1, hmiDoor5CloseB1, hmiDoor5OpenObstacleB1, hmiDoor5SaftyLoop1B1, hmiDoor5SaftyLoop2B1,
         hmiDoor5CloseLockB1, hmiDoor5OpenFullyB1, hmiDoor5EmergencyUnlockB1, hmiDoor5IsolatedB1, hmiDoor5CLoseObstacleB1, hmiDoor5TrainLineTrustB1, hmiDoor5MajorErrorB1, hmiDoor5MinorErrorB1;
    bool hmiDoor5EnabledC1, hmiDoor5ZeroSpeedC1, hmiDoor5OpenC1, hmiDoor5UnknownStateC1, hmiDoor5CloseC1, hmiDoor5OpenObstacleC1, hmiDoor5SaftyLoop1C1, hmiDoor5SaftyLoop2C1,
         hmiDoor5CloseLockC1, hmiDoor5OpenFullyC1, hmiDoor5EmergencyUnlockC1, hmiDoor5IsolatedC1, hmiDoor5CLoseObstacleC1, hmiDoor5TrainLineTrustC1, hmiDoor5MajorErrorC1, hmiDoor5MinorErrorC1;
    bool hmiDoor5EnabledD1, hmiDoor5ZeroSpeedD1, hmiDoor5OpenD1, hmiDoor5UnknownStateD1, hmiDoor5CloseD1, hmiDoor5OpenObstacleD1, hmiDoor5SaftyLoop1D1, hmiDoor5SaftyLoop2D1,
         hmiDoor5CloseLockD1, hmiDoor5OpenFullyD1, hmiDoor5EmergencyUnlockD1, hmiDoor5IsolatedD1, hmiDoor5CLoseObstacleD1, hmiDoor5TrainLineTrustD1, hmiDoor5MajorErrorD1, hmiDoor5MinorErrorD1;
    bool hmiDoor5EnabledD2, hmiDoor5ZeroSpeedD2, hmiDoor5OpenD2, hmiDoor5UnknownStateD2, hmiDoor5CloseD2, hmiDoor5OpenObstacleD2, hmiDoor5SaftyLoop1D2, hmiDoor5SaftyLoop2D2,
         hmiDoor5CloseLockD2, hmiDoor5OpenFullyD2, hmiDoor5EmergencyUnlockD2, hmiDoor5IsolatedD2, hmiDoor5CLoseObstacleD2, hmiDoor5TrainLineTrustD2, hmiDoor5MajorErrorD2, hmiDoor5MinorErrorD2;
    bool hmiDoor5EnabledC2, hmiDoor5ZeroSpeedC2, hmiDoor5OpenC2, hmiDoor5UnknownStateC2, hmiDoor5CloseC2, hmiDoor5OpenObstacleC2, hmiDoor5SaftyLoop1C2, hmiDoor5SaftyLoop2C2,
         hmiDoor5CloseLockC2, hmiDoor5OpenFullyC2, hmiDoor5EmergencyUnlockC2, hmiDoor5IsolatedC2, hmiDoor5CLoseObstacleC2, hmiDoor5TrainLineTrustC2, hmiDoor5MajorErrorC2, hmiDoor5MinorErrorC2;
    bool hmiDoor5EnabledB2, hmiDoor5ZeroSpeedB2, hmiDoor5OpenB2, hmiDoor5UnknownStateB2, hmiDoor5CloseB2, hmiDoor5OpenObstacleB2, hmiDoor5SaftyLoop1B2, hmiDoor5SaftyLoop2B2,
         hmiDoor5CloseLockB2, hmiDoor5OpenFullyB2, hmiDoor5EmergencyUnlockB2, hmiDoor5IsolatedB2, hmiDoor5CLoseObstacleB2, hmiDoor5TrainLineTrustB2, hmiDoor5MajorErrorB2, hmiDoor5MinorErrorB2;
    bool hmiDoor5EnabledA2, hmiDoor5ZeroSpeedA2, hmiDoor5OpenA2, hmiDoor5UnknownStateA2, hmiDoor5CloseA2, hmiDoor5OpenObstacleA2, hmiDoor5SaftyLoop1A2, hmiDoor5SaftyLoop2A2,
         hmiDoor5CloseLockA2, hmiDoor5OpenFullyA2, hmiDoor5EmergencyUnlockA2, hmiDoor5IsolatedA2, hmiDoor5CLoseObstacleA2, hmiDoor5TrainLineTrustA2, hmiDoor5MajorErrorA2, hmiDoor5MinorErrorA2;

    // door 6
    bool hmiDoor6EnabledA1, hmiDoor6ZeroSpeedA1, hmiDoor6OpenA1, hmiDoor6UnknownStateA1, hmiDoor6CloseA1, hmiDoor6OpenObstacleA1, hmiDoor6SaftyLoop1A1, hmiDoor6SaftyLoop2A1,
         hmiDoor6CloseLockA1, hmiDoor6OpenFullyA1, hmiDoor6EmergencyUnlockA1, hmiDoor6IsolatedA1, hmiDoor6CLoseObstacleA1, hmiDoor6TrainLineTrustA1, hmiDoor6MajorErrorA1, hmiDoor6MinorErrorA1;
    bool hmiDoor6EnabledB1, hmiDoor6ZeroSpeedB1, hmiDoor6OpenB1, hmiDoor6UnknownStateB1, hmiDoor6CloseB1, hmiDoor6OpenObstacleB1, hmiDoor6SaftyLoop1B1, hmiDoor6SaftyLoop2B1,
         hmiDoor6CloseLockB1, hmiDoor6OpenFullyB1, hmiDoor6EmergencyUnlockB1, hmiDoor6IsolatedB1, hmiDoor6CLoseObstacleB1, hmiDoor6TrainLineTrustB1, hmiDoor6MajorErrorB1, hmiDoor6MinorErrorB1;
    bool hmiDoor6EnabledC1, hmiDoor6ZeroSpeedC1, hmiDoor6OpenC1, hmiDoor6UnknownStateC1, hmiDoor6CloseC1, hmiDoor6OpenObstacleC1, hmiDoor6SaftyLoop1C1, hmiDoor6SaftyLoop2C1,
         hmiDoor6CloseLockC1, hmiDoor6OpenFullyC1, hmiDoor6EmergencyUnlockC1, hmiDoor6IsolatedC1, hmiDoor6CLoseObstacleC1, hmiDoor6TrainLineTrustC1, hmiDoor6MajorErrorC1, hmiDoor6MinorErrorC1;
    bool hmiDoor6EnabledD1, hmiDoor6ZeroSpeedD1, hmiDoor6OpenD1, hmiDoor6UnknownStateD1, hmiDoor6CloseD1, hmiDoor6OpenObstacleD1, hmiDoor6SaftyLoop1D1, hmiDoor6SaftyLoop2D1,
         hmiDoor6CloseLockD1, hmiDoor6OpenFullyD1, hmiDoor6EmergencyUnlockD1, hmiDoor6IsolatedD1, hmiDoor6CLoseObstacleD1, hmiDoor6TrainLineTrustD1, hmiDoor6MajorErrorD1, hmiDoor6MinorErrorD1;
    bool hmiDoor6EnabledD2, hmiDoor6ZeroSpeedD2, hmiDoor6OpenD2, hmiDoor6UnknownStateD2, hmiDoor6CloseD2, hmiDoor6OpenObstacleD2, hmiDoor6SaftyLoop1D2, hmiDoor6SaftyLoop2D2,
         hmiDoor6CloseLockD2, hmiDoor6OpenFullyD2, hmiDoor6EmergencyUnlockD2, hmiDoor6IsolatedD2, hmiDoor6CLoseObstacleD2, hmiDoor6TrainLineTrustD2, hmiDoor6MajorErrorD2, hmiDoor6MinorErrorD2;
    bool hmiDoor6EnabledC2, hmiDoor6ZeroSpeedC2, hmiDoor6OpenC2, hmiDoor6UnknownStateC2, hmiDoor6CloseC2, hmiDoor6OpenObstacleC2, hmiDoor6SaftyLoop1C2, hmiDoor6SaftyLoop2C2,
         hmiDoor6CloseLockC2, hmiDoor6OpenFullyC2, hmiDoor6EmergencyUnlockC2, hmiDoor6IsolatedC2, hmiDoor6CLoseObstacleC2, hmiDoor6TrainLineTrustC2, hmiDoor6MajorErrorC2, hmiDoor6MinorErrorC2;
    bool hmiDoor6EnabledB2, hmiDoor6ZeroSpeedB2, hmiDoor6OpenB2, hmiDoor6UnknownStateB2, hmiDoor6CloseB2, hmiDoor6OpenObstacleB2, hmiDoor6SaftyLoop1B2, hmiDoor6SaftyLoop2B2,
         hmiDoor6CloseLockB2, hmiDoor6OpenFullyB2, hmiDoor6EmergencyUnlockB2, hmiDoor6IsolatedB2, hmiDoor6CLoseObstacleB2, hmiDoor6TrainLineTrustB2, hmiDoor6MajorErrorB2, hmiDoor6MinorErrorB2;
    bool hmiDoor6EnabledA2, hmiDoor6ZeroSpeedA2, hmiDoor6OpenA2, hmiDoor6UnknownStateA2, hmiDoor6CloseA2, hmiDoor6OpenObstacleA2, hmiDoor6SaftyLoop1A2, hmiDoor6SaftyLoop2A2,
         hmiDoor6CloseLockA2, hmiDoor6OpenFullyA2, hmiDoor6EmergencyUnlockA2, hmiDoor6IsolatedA2, hmiDoor6CLoseObstacleA2, hmiDoor6TrainLineTrustA2, hmiDoor6MajorErrorA2, hmiDoor6MinorErrorA2;

    // door 7
    bool hmiDoor7EnabledA1, hmiDoor7ZeroSpeedA1, hmiDoor7OpenA1, hmiDoor7UnknownStateA1, hmiDoor7CloseA1, hmiDoor7OpenObstacleA1, hmiDoor7SaftyLoop1A1, hmiDoor7SaftyLoop2A1,
         hmiDoor7CloseLockA1, hmiDoor7OpenFullyA1, hmiDoor7EmergencyUnlockA1, hmiDoor7IsolatedA1, hmiDoor7CLoseObstacleA1, hmiDoor7TrainLineTrustA1, hmiDoor7MajorErrorA1, hmiDoor7MinorErrorA1;
    bool hmiDoor7EnabledB1, hmiDoor7ZeroSpeedB1, hmiDoor7OpenB1, hmiDoor7UnknownStateB1, hmiDoor7CloseB1, hmiDoor7OpenObstacleB1, hmiDoor7SaftyLoop1B1, hmiDoor7SaftyLoop2B1,
         hmiDoor7CloseLockB1, hmiDoor7OpenFullyB1, hmiDoor7EmergencyUnlockB1, hmiDoor7IsolatedB1, hmiDoor7CLoseObstacleB1, hmiDoor7TrainLineTrustB1, hmiDoor7MajorErrorB1, hmiDoor7MinorErrorB1;
    bool hmiDoor7EnabledC1, hmiDoor7ZeroSpeedC1, hmiDoor7OpenC1, hmiDoor7UnknownStateC1, hmiDoor7CloseC1, hmiDoor7OpenObstacleC1, hmiDoor7SaftyLoop1C1, hmiDoor7SaftyLoop2C1,
         hmiDoor7CloseLockC1, hmiDoor7OpenFullyC1, hmiDoor7EmergencyUnlockC1, hmiDoor7IsolatedC1, hmiDoor7CLoseObstacleC1, hmiDoor7TrainLineTrustC1, hmiDoor7MajorErrorC1, hmiDoor7MinorErrorC1;
    bool hmiDoor7EnabledD1, hmiDoor7ZeroSpeedD1, hmiDoor7OpenD1, hmiDoor7UnknownStateD1, hmiDoor7CloseD1, hmiDoor7OpenObstacleD1, hmiDoor7SaftyLoop1D1, hmiDoor7SaftyLoop2D1,
         hmiDoor7CloseLockD1, hmiDoor7OpenFullyD1, hmiDoor7EmergencyUnlockD1, hmiDoor7IsolatedD1, hmiDoor7CLoseObstacleD1, hmiDoor7TrainLineTrustD1, hmiDoor7MajorErrorD1, hmiDoor7MinorErrorD1;
    bool hmiDoor7EnabledD2, hmiDoor7ZeroSpeedD2, hmiDoor7OpenD2, hmiDoor7UnknownStateD2, hmiDoor7CloseD2, hmiDoor7OpenObstacleD2, hmiDoor7SaftyLoop1D2, hmiDoor7SaftyLoop2D2,
         hmiDoor7CloseLockD2, hmiDoor7OpenFullyD2, hmiDoor7EmergencyUnlockD2, hmiDoor7IsolatedD2, hmiDoor7CLoseObstacleD2, hmiDoor7TrainLineTrustD2, hmiDoor7MajorErrorD2, hmiDoor7MinorErrorD2;
    bool hmiDoor7EnabledC2, hmiDoor7ZeroSpeedC2, hmiDoor7OpenC2, hmiDoor7UnknownStateC2, hmiDoor7CloseC2, hmiDoor7OpenObstacleC2, hmiDoor7SaftyLoop1C2, hmiDoor7SaftyLoop2C2,
         hmiDoor7CloseLockC2, hmiDoor7OpenFullyC2, hmiDoor7EmergencyUnlockC2, hmiDoor7IsolatedC2, hmiDoor7CLoseObstacleC2, hmiDoor7TrainLineTrustC2, hmiDoor7MajorErrorC2, hmiDoor7MinorErrorC2;
    bool hmiDoor7EnabledB2, hmiDoor7ZeroSpeedB2, hmiDoor7OpenB2, hmiDoor7UnknownStateB2, hmiDoor7CloseB2, hmiDoor7OpenObstacleB2, hmiDoor7SaftyLoop1B2, hmiDoor7SaftyLoop2B2,
         hmiDoor7CloseLockB2, hmiDoor7OpenFullyB2, hmiDoor7EmergencyUnlockB2, hmiDoor7IsolatedB2, hmiDoor7CLoseObstacleB2, hmiDoor7TrainLineTrustB2, hmiDoor7MajorErrorB2, hmiDoor7MinorErrorB2;
    bool hmiDoor7EnabledA2, hmiDoor7ZeroSpeedA2, hmiDoor7OpenA2, hmiDoor7UnknownStateA2, hmiDoor7CloseA2, hmiDoor7OpenObstacleA2, hmiDoor7SaftyLoop1A2, hmiDoor7SaftyLoop2A2,
         hmiDoor7CloseLockA2, hmiDoor7OpenFullyA2, hmiDoor7EmergencyUnlockA2, hmiDoor7IsolatedA2, hmiDoor7CLoseObstacleA2, hmiDoor7TrainLineTrustA2, hmiDoor7MajorErrorA2, hmiDoor7MinorErrorA2;

    // door 8
    bool hmiDoor8EnabledA1, hmiDoor8ZeroSpeedA1, hmiDoor8OpenA1, hmiDoor8UnknownStateA1, hmiDoor8CloseA1, hmiDoor8OpenObstacleA1, hmiDoor8SaftyLoop1A1, hmiDoor8SaftyLoop2A1,
         hmiDoor8CloseLockA1, hmiDoor8OpenFullyA1, hmiDoor8EmergencyUnlockA1, hmiDoor8IsolatedA1, hmiDoor8CLoseObstacleA1, hmiDoor8TrainLineTrustA1, hmiDoor8MajorErrorA1, hmiDoor8MinorErrorA1;
    bool hmiDoor8EnabledB1, hmiDoor8ZeroSpeedB1, hmiDoor8OpenB1, hmiDoor8UnknownStateB1, hmiDoor8CloseB1, hmiDoor8OpenObstacleB1, hmiDoor8SaftyLoop1B1, hmiDoor8SaftyLoop2B1,
         hmiDoor8CloseLockB1, hmiDoor8OpenFullyB1, hmiDoor8EmergencyUnlockB1, hmiDoor8IsolatedB1, hmiDoor8CLoseObstacleB1, hmiDoor8TrainLineTrustB1, hmiDoor8MajorErrorB1, hmiDoor8MinorErrorB1;
    bool hmiDoor8EnabledC1, hmiDoor8ZeroSpeedC1, hmiDoor8OpenC1, hmiDoor8UnknownStateC1, hmiDoor8CloseC1, hmiDoor8OpenObstacleC1, hmiDoor8SaftyLoop1C1, hmiDoor8SaftyLoop2C1,
         hmiDoor8CloseLockC1, hmiDoor8OpenFullyC1, hmiDoor8EmergencyUnlockC1, hmiDoor8IsolatedC1, hmiDoor8CLoseObstacleC1, hmiDoor8TrainLineTrustC1, hmiDoor8MajorErrorC1, hmiDoor8MinorErrorC1;
    bool hmiDoor8EnabledD1, hmiDoor8ZeroSpeedD1, hmiDoor8OpenD1, hmiDoor8UnknownStateD1, hmiDoor8CloseD1, hmiDoor8OpenObstacleD1, hmiDoor8SaftyLoop1D1, hmiDoor8SaftyLoop2D1,
         hmiDoor8CloseLockD1, hmiDoor8OpenFullyD1, hmiDoor8EmergencyUnlockD1, hmiDoor8IsolatedD1, hmiDoor8CLoseObstacleD1, hmiDoor8TrainLineTrustD1, hmiDoor8MajorErrorD1, hmiDoor8MinorErrorD1;
    bool hmiDoor8EnabledD2, hmiDoor8ZeroSpeedD2, hmiDoor8OpenD2, hmiDoor8UnknownStateD2, hmiDoor8CloseD2, hmiDoor8OpenObstacleD2, hmiDoor8SaftyLoop1D2, hmiDoor8SaftyLoop2D2,
         hmiDoor8CloseLockD2, hmiDoor8OpenFullyD2, hmiDoor8EmergencyUnlockD2, hmiDoor8IsolatedD2, hmiDoor8CLoseObstacleD2, hmiDoor8TrainLineTrustD2, hmiDoor8MajorErrorD2, hmiDoor8MinorErrorD2;
    bool hmiDoor8EnabledC2, hmiDoor8ZeroSpeedC2, hmiDoor8OpenC2, hmiDoor8UnknownStateC2, hmiDoor8CloseC2, hmiDoor8OpenObstacleC2, hmiDoor8SaftyLoop1C2, hmiDoor8SaftyLoop2C2,
         hmiDoor8CloseLockC2, hmiDoor8OpenFullyC2, hmiDoor8EmergencyUnlockC2, hmiDoor8IsolatedC2, hmiDoor8CLoseObstacleC2, hmiDoor8TrainLineTrustC2, hmiDoor8MajorErrorC2, hmiDoor8MinorErrorC2;
    bool hmiDoor8EnabledB2, hmiDoor8ZeroSpeedB2, hmiDoor8OpenB2, hmiDoor8UnknownStateB2, hmiDoor8CloseB2, hmiDoor8OpenObstacleB2, hmiDoor8SaftyLoop1B2, hmiDoor8SaftyLoop2B2,
         hmiDoor8CloseLockB2, hmiDoor8OpenFullyB2, hmiDoor8EmergencyUnlockB2, hmiDoor8IsolatedB2, hmiDoor8CLoseObstacleB2, hmiDoor8TrainLineTrustB2, hmiDoor8MajorErrorB2, hmiDoor8MinorErrorB2;
    bool hmiDoor8EnabledA2, hmiDoor8ZeroSpeedA2, hmiDoor8OpenA2, hmiDoor8UnknownStateA2, hmiDoor8CloseA2, hmiDoor8OpenObstacleA2, hmiDoor8SaftyLoop1A2, hmiDoor8SaftyLoop2A2,
         hmiDoor8CloseLockA2, hmiDoor8OpenFullyA2, hmiDoor8EmergencyUnlockA2, hmiDoor8IsolatedA2, hmiDoor8CLoseObstacleA2, hmiDoor8TrainLineTrustA2, hmiDoor8MajorErrorA2, hmiDoor8MinorErrorA2;

    // door 9
    bool hmiDoor9EnabledA1, hmiDoor9ZeroSpeedA1, hmiDoor9OpenA1, hmiDoor9UnknownStateA1, hmiDoor9CloseA1, hmiDoor9OpenObstacleA1, hmiDoor9SaftyLoop1A1, hmiDoor9SaftyLoop2A1,
         hmiDoor9CloseLockA1, hmiDoor9OpenFullyA1, hmiDoor9EmergencyUnlockA1, hmiDoor9IsolatedA1, hmiDoor9CLoseObstacleA1, hmiDoor9TrainLineTrustA1, hmiDoor9MajorErrorA1, hmiDoor9MinorErrorA1;
    bool hmiDoor9EnabledB1, hmiDoor9ZeroSpeedB1, hmiDoor9OpenB1, hmiDoor9UnknownStateB1, hmiDoor9CloseB1, hmiDoor9OpenObstacleB1, hmiDoor9SaftyLoop1B1, hmiDoor9SaftyLoop2B1,
         hmiDoor9CloseLockB1, hmiDoor9OpenFullyB1, hmiDoor9EmergencyUnlockB1, hmiDoor9IsolatedB1, hmiDoor9CLoseObstacleB1, hmiDoor9TrainLineTrustB1, hmiDoor9MajorErrorB1, hmiDoor9MinorErrorB1;
    bool hmiDoor9EnabledC1, hmiDoor9ZeroSpeedC1, hmiDoor9OpenC1, hmiDoor9UnknownStateC1, hmiDoor9CloseC1, hmiDoor9OpenObstacleC1, hmiDoor9SaftyLoop1C1, hmiDoor9SaftyLoop2C1,
         hmiDoor9CloseLockC1, hmiDoor9OpenFullyC1, hmiDoor9EmergencyUnlockC1, hmiDoor9IsolatedC1, hmiDoor9CLoseObstacleC1, hmiDoor9TrainLineTrustC1, hmiDoor9MajorErrorC1, hmiDoor9MinorErrorC1;
    bool hmiDoor9EnabledD1, hmiDoor9ZeroSpeedD1, hmiDoor9OpenD1, hmiDoor9UnknownStateD1, hmiDoor9CloseD1, hmiDoor9OpenObstacleD1, hmiDoor9SaftyLoop1D1, hmiDoor9SaftyLoop2D1,
         hmiDoor9CloseLockD1, hmiDoor9OpenFullyD1, hmiDoor9EmergencyUnlockD1, hmiDoor9IsolatedD1, hmiDoor9CLoseObstacleD1, hmiDoor9TrainLineTrustD1, hmiDoor9MajorErrorD1, hmiDoor9MinorErrorD1;
    bool hmiDoor9EnabledD2, hmiDoor9ZeroSpeedD2, hmiDoor9OpenD2, hmiDoor9UnknownStateD2, hmiDoor9CloseD2, hmiDoor9OpenObstacleD2, hmiDoor9SaftyLoop1D2, hmiDoor9SaftyLoop2D2,
         hmiDoor9CloseLockD2, hmiDoor9OpenFullyD2, hmiDoor9EmergencyUnlockD2, hmiDoor9IsolatedD2, hmiDoor9CLoseObstacleD2, hmiDoor9TrainLineTrustD2, hmiDoor9MajorErrorD2, hmiDoor9MinorErrorD2;
    bool hmiDoor9EnabledC2, hmiDoor9ZeroSpeedC2, hmiDoor9OpenC2, hmiDoor9UnknownStateC2, hmiDoor9CloseC2, hmiDoor9OpenObstacleC2, hmiDoor9SaftyLoop1C2, hmiDoor9SaftyLoop2C2,
         hmiDoor9CloseLockC2, hmiDoor9OpenFullyC2, hmiDoor9EmergencyUnlockC2, hmiDoor9IsolatedC2, hmiDoor9CLoseObstacleC2, hmiDoor9TrainLineTrustC2, hmiDoor9MajorErrorC2, hmiDoor9MinorErrorC2;
    bool hmiDoor9EnabledB2, hmiDoor9ZeroSpeedB2, hmiDoor9OpenB2, hmiDoor9UnknownStateB2, hmiDoor9CloseB2, hmiDoor9OpenObstacleB2, hmiDoor9SaftyLoop1B2, hmiDoor9SaftyLoop2B2,
         hmiDoor9CloseLockB2, hmiDoor9OpenFullyB2, hmiDoor9EmergencyUnlockB2, hmiDoor9IsolatedB2, hmiDoor9CLoseObstacleB2, hmiDoor9TrainLineTrustB2, hmiDoor9MajorErrorB2, hmiDoor9MinorErrorB2;
    bool hmiDoor9EnabledA2, hmiDoor9ZeroSpeedA2, hmiDoor9OpenA2, hmiDoor9UnknownStateA2, hmiDoor9CloseA2, hmiDoor9OpenObstacleA2, hmiDoor9SaftyLoop1A2, hmiDoor9SaftyLoop2A2,
         hmiDoor9CloseLockA2, hmiDoor9OpenFullyA2, hmiDoor9EmergencyUnlockA2, hmiDoor9IsolatedA2, hmiDoor9CLoseObstacleA2, hmiDoor9TrainLineTrustA2, hmiDoor9MajorErrorA2, hmiDoor9MinorErrorA2;

    // door 10
    bool hmiDoor10EnabledA1, hmiDoor10ZeroSpeedA1, hmiDoor10OpenA1, hmiDoor10UnknownStateA1, hmiDoor10CloseA1, hmiDoor10OpenObstacleA1, hmiDoor10SaftyLoop1A1, hmiDoor10SaftyLoop2A1,
         hmiDoor10CloseLockA1, hmiDoor10OpenFullyA1, hmiDoor10EmergencyUnlockA1, hmiDoor10IsolatedA1, hmiDoor10CLoseObstacleA1, hmiDoor10TrainLineTrustA1, hmiDoor10MajorErrorA1, hmiDoor10MinorErrorA1;
    bool hmiDoor10EnabledB1, hmiDoor10ZeroSpeedB1, hmiDoor10OpenB1, hmiDoor10UnknownStateB1, hmiDoor10CloseB1, hmiDoor10OpenObstacleB1, hmiDoor10SaftyLoop1B1, hmiDoor10SaftyLoop2B1,
         hmiDoor10CloseLockB1, hmiDoor10OpenFullyB1, hmiDoor10EmergencyUnlockB1, hmiDoor10IsolatedB1, hmiDoor10CLoseObstacleB1, hmiDoor10TrainLineTrustB1, hmiDoor10MajorErrorB1, hmiDoor10MinorErrorB1;
    bool hmiDoor10EnabledC1, hmiDoor10ZeroSpeedC1, hmiDoor10OpenC1, hmiDoor10UnknownStateC1, hmiDoor10CloseC1, hmiDoor10OpenObstacleC1, hmiDoor10SaftyLoop1C1, hmiDoor10SaftyLoop2C1,
         hmiDoor10CloseLockC1, hmiDoor10OpenFullyC1, hmiDoor10EmergencyUnlockC1, hmiDoor10IsolatedC1, hmiDoor10CLoseObstacleC1, hmiDoor10TrainLineTrustC1, hmiDoor10MajorErrorC1, hmiDoor10MinorErrorC1;
    bool hmiDoor10EnabledD1, hmiDoor10ZeroSpeedD1, hmiDoor10OpenD1, hmiDoor10UnknownStateD1, hmiDoor10CloseD1, hmiDoor10OpenObstacleD1, hmiDoor10SaftyLoop1D1, hmiDoor10SaftyLoop2D1,
         hmiDoor10CloseLockD1, hmiDoor10OpenFullyD1, hmiDoor10EmergencyUnlockD1, hmiDoor10IsolatedD1, hmiDoor10CLoseObstacleD1, hmiDoor10TrainLineTrustD1, hmiDoor10MajorErrorD1, hmiDoor10MinorErrorD1;
    bool hmiDoor10EnabledD2, hmiDoor10ZeroSpeedD2, hmiDoor10OpenD2, hmiDoor10UnknownStateD2, hmiDoor10CloseD2, hmiDoor10OpenObstacleD2, hmiDoor10SaftyLoop1D2, hmiDoor10SaftyLoop2D2,
         hmiDoor10CloseLockD2, hmiDoor10OpenFullyD2, hmiDoor10EmergencyUnlockD2, hmiDoor10IsolatedD2, hmiDoor10CLoseObstacleD2, hmiDoor10TrainLineTrustD2, hmiDoor10MajorErrorD2, hmiDoor10MinorErrorD2;
    bool hmiDoor10EnabledC2, hmiDoor10ZeroSpeedC2, hmiDoor10OpenC2, hmiDoor10UnknownStateC2, hmiDoor10CloseC2, hmiDoor10OpenObstacleC2, hmiDoor10SaftyLoop1C2, hmiDoor10SaftyLoop2C2,
         hmiDoor10CloseLockC2, hmiDoor10OpenFullyC2, hmiDoor10EmergencyUnlockC2, hmiDoor10IsolatedC2, hmiDoor10CLoseObstacleC2, hmiDoor10TrainLineTrustC2, hmiDoor10MajorErrorC2, hmiDoor10MinorErrorC2;
    bool hmiDoor10EnabledB2, hmiDoor10ZeroSpeedB2, hmiDoor10OpenB2, hmiDoor10UnknownStateB2, hmiDoor10CloseB2, hmiDoor10OpenObstacleB2, hmiDoor10SaftyLoop1B2, hmiDoor10SaftyLoop2B2,
         hmiDoor10CloseLockB2, hmiDoor10OpenFullyB2, hmiDoor10EmergencyUnlockB2, hmiDoor10IsolatedB2, hmiDoor10CLoseObstacleB2, hmiDoor10TrainLineTrustB2, hmiDoor10MajorErrorB2, hmiDoor10MinorErrorB2;
    bool hmiDoor10EnabledA2, hmiDoor10ZeroSpeedA2, hmiDoor10OpenA2, hmiDoor10UnknownStateA2, hmiDoor10CloseA2, hmiDoor10OpenObstacleA2, hmiDoor10SaftyLoop1A2, hmiDoor10SaftyLoop2A2,
         hmiDoor10CloseLockA2, hmiDoor10OpenFullyA2, hmiDoor10EmergencyUnlockA2, hmiDoor10IsolatedA2, hmiDoor10CLoseObstacleA2, hmiDoor10TrainLineTrustA2, hmiDoor10MajorErrorA2, hmiDoor10MinorErrorA2;

    // A1
    bool edcuDoor1EmergencyUnlockRequestA1, edcuDoor2EmergencyUnlockRequestA1, edcuDoor3EmergencyUnlockRequestA1, edcuDoor4EmergencyUnlockRequestA1, edcuDoor5EmergencyUnlockRequestA1,
         edcuDoor6EmergencyUnlockRequestA1, edcuDoor7EmergencyUnlockRequestA1, edcuDoor8EmergencyUnlockRequestA1, edcuDoor9EmergencyUnlockRequestA1, edcuDoor10EmergencyUnlockRequestA1;
    bool edcuDoor1SaftyLoop1A1, edcuDoor2SaftyLoop1A1, edcuDoor3SaftyLoop1A1, edcuDoor4SaftyLoop1A1, edcuDoor5SaftyLoop1A1,
         edcuDoor6SaftyLoop1A1, edcuDoor7SaftyLoop1A1, edcuDoor8SaftyLoop1A1, edcuDoor9SaftyLoop1A1, edcuDoor10SaftyLoop1A1,
         edcuDoor1SaftyLoop2A1, edcuDoor2SaftyLoop2A1, edcuDoor3SaftyLoop2A1, edcuDoor4SaftyLoop2A1, edcuDoor5SaftyLoop2A1,
         edcuDoor6SaftyLoop2A1, edcuDoor7SaftyLoop2A1, edcuDoor8SaftyLoop2A1, edcuDoor9SaftyLoop2A1, edcuDoor10SaftyLoop2A1;

    // B1
    bool edcuDoor1EmergencyUnlockRequestB1, edcuDoor2EmergencyUnlockRequestB1, edcuDoor3EmergencyUnlockRequestB1, edcuDoor4EmergencyUnlockRequestB1, edcuDoor5EmergencyUnlockRequestB1,
         edcuDoor6EmergencyUnlockRequestB1, edcuDoor7EmergencyUnlockRequestB1, edcuDoor8EmergencyUnlockRequestB1, edcuDoor9EmergencyUnlockRequestB1, edcuDoor10EmergencyUnlockRequestB1;
    bool edcuDoor1SaftyLoop1B1, edcuDoor2SaftyLoop1B1, edcuDoor3SaftyLoop1B1, edcuDoor4SaftyLoop1B1, edcuDoor5SaftyLoop1B1,
         edcuDoor6SaftyLoop1B1, edcuDoor7SaftyLoop1B1, edcuDoor8SaftyLoop1B1, edcuDoor9SaftyLoop1B1, edcuDoor10SaftyLoop1B1,
         edcuDoor1SaftyLoop2B1, edcuDoor2SaftyLoop2B1, edcuDoor3SaftyLoop2B1, edcuDoor4SaftyLoop2B1, edcuDoor5SaftyLoop2B1,
         edcuDoor6SaftyLoop2B1, edcuDoor7SaftyLoop2B1, edcuDoor8SaftyLoop2B1, edcuDoor9SaftyLoop2B1, edcuDoor10SaftyLoop2B1;

    // C1
    bool edcuDoor1EmergencyUnlockRequestC1, edcuDoor2EmergencyUnlockRequestC1, edcuDoor3EmergencyUnlockRequestC1, edcuDoor4EmergencyUnlockRequestC1, edcuDoor5EmergencyUnlockRequestC1,
         edcuDoor6EmergencyUnlockRequestC1, edcuDoor7EmergencyUnlockRequestC1, edcuDoor8EmergencyUnlockRequestC1, edcuDoor9EmergencyUnlockRequestC1, edcuDoor10EmergencyUnlockRequestC1;
    bool edcuDoor1SaftyLoop1C1, edcuDoor2SaftyLoop1C1, edcuDoor3SaftyLoop1C1, edcuDoor4SaftyLoop1C1, edcuDoor5SaftyLoop1C1,
         edcuDoor6SaftyLoop1C1, edcuDoor7SaftyLoop1C1, edcuDoor8SaftyLoop1C1, edcuDoor9SaftyLoop1C1, edcuDoor10SaftyLoop1C1,
         edcuDoor1SaftyLoop2C1, edcuDoor2SaftyLoop2C1, edcuDoor3SaftyLoop2C1, edcuDoor4SaftyLoop2C1, edcuDoor5SaftyLoop2C1,
         edcuDoor6SaftyLoop2C1, edcuDoor7SaftyLoop2C1, edcuDoor8SaftyLoop2C1, edcuDoor9SaftyLoop2C1, edcuDoor10SaftyLoop2C1;

    // D1
    bool edcuDoor1EmergencyUnlockRequestD1, edcuDoor2EmergencyUnlockRequestD1, edcuDoor3EmergencyUnlockRequestD1, edcuDoor4EmergencyUnlockRequestD1, edcuDoor5EmergencyUnlockRequestD1,
         edcuDoor6EmergencyUnlockRequestD1, edcuDoor7EmergencyUnlockRequestD1, edcuDoor8EmergencyUnlockRequestD1, edcuDoor9EmergencyUnlockRequestD1, edcuDoor10EmergencyUnlockRequestD1;
    bool edcuDoor1SaftyLoop1D1, edcuDoor2SaftyLoop1D1, edcuDoor3SaftyLoop1D1, edcuDoor4SaftyLoop1D1, edcuDoor5SaftyLoop1D1,
         edcuDoor6SaftyLoop1D1, edcuDoor7SaftyLoop1D1, edcuDoor8SaftyLoop1D1, edcuDoor9SaftyLoop1D1, edcuDoor10SaftyLoop1D1,
         edcuDoor1SaftyLoop2D1, edcuDoor2SaftyLoop2D1, edcuDoor3SaftyLoop2D1, edcuDoor4SaftyLoop2D1, edcuDoor5SaftyLoop2D1,
         edcuDoor6SaftyLoop2D1, edcuDoor7SaftyLoop2D1, edcuDoor8SaftyLoop2D1, edcuDoor9SaftyLoop2D1, edcuDoor10SaftyLoop2D1;

    // D2
    bool edcuDoor1EmergencyUnlockRequestD2, edcuDoor2EmergencyUnlockRequestD2, edcuDoor3EmergencyUnlockRequestD2, edcuDoor4EmergencyUnlockRequestD2, edcuDoor5EmergencyUnlockRequestD2,
         edcuDoor6EmergencyUnlockRequestD2, edcuDoor7EmergencyUnlockRequestD2, edcuDoor8EmergencyUnlockRequestD2, edcuDoor9EmergencyUnlockRequestD2, edcuDoor10EmergencyUnlockRequestD2;
    bool edcuDoor1SaftyLoop1D2, edcuDoor2SaftyLoop1D2, edcuDoor3SaftyLoop1D2, edcuDoor4SaftyLoop1D2, edcuDoor5SaftyLoop1D2,
         edcuDoor6SaftyLoop1D2, edcuDoor7SaftyLoop1D2, edcuDoor8SaftyLoop1D2, edcuDoor9SaftyLoop1D2, edcuDoor10SaftyLoop1D2,
         edcuDoor1SaftyLoop2D2, edcuDoor2SaftyLoop2D2, edcuDoor3SaftyLoop2D2, edcuDoor4SaftyLoop2D2, edcuDoor5SaftyLoop2D2,
         edcuDoor6SaftyLoop2D2, edcuDoor7SaftyLoop2D2, edcuDoor8SaftyLoop2D2, edcuDoor9SaftyLoop2D2, edcuDoor10SaftyLoop2D2;

    // C2
    bool edcuDoor1EmergencyUnlockRequestC2, edcuDoor2EmergencyUnlockRequestC2, edcuDoor3EmergencyUnlockRequestC2, edcuDoor4EmergencyUnlockRequestC2, edcuDoor5EmergencyUnlockRequestC2,
         edcuDoor6EmergencyUnlockRequestC2, edcuDoor7EmergencyUnlockRequestC2, edcuDoor8EmergencyUnlockRequestC2, edcuDoor9EmergencyUnlockRequestC2, edcuDoor10EmergencyUnlockRequestC2;
    bool edcuDoor1SaftyLoop1C2, edcuDoor2SaftyLoop1C2, edcuDoor3SaftyLoop1C2, edcuDoor4SaftyLoop1C2, edcuDoor5SaftyLoop1C2,
         edcuDoor6SaftyLoop1C2, edcuDoor7SaftyLoop1C2, edcuDoor8SaftyLoop1C2, edcuDoor9SaftyLoop1C2, edcuDoor10SaftyLoop1C2,
         edcuDoor1SaftyLoop2C2, edcuDoor2SaftyLoop2C2, edcuDoor3SaftyLoop2C2, edcuDoor4SaftyLoop2C2, edcuDoor5SaftyLoop2C2,
         edcuDoor6SaftyLoop2C2, edcuDoor7SaftyLoop2C2, edcuDoor8SaftyLoop2C2, edcuDoor9SaftyLoop2C2, edcuDoor10SaftyLoop2C2;

    // B2
    bool edcuDoor1EmergencyUnlockRequestB2, edcuDoor2EmergencyUnlockRequestB2, edcuDoor3EmergencyUnlockRequestB2, edcuDoor4EmergencyUnlockRequestB2, edcuDoor5EmergencyUnlockRequestB2,
         edcuDoor6EmergencyUnlockRequestB2, edcuDoor7EmergencyUnlockRequestB2, edcuDoor8EmergencyUnlockRequestB2, edcuDoor9EmergencyUnlockRequestB2, edcuDoor10EmergencyUnlockRequestB2;
    bool edcuDoor1SaftyLoop1B2, edcuDoor2SaftyLoop1B2, edcuDoor3SaftyLoop1B2, edcuDoor4SaftyLoop1B2, edcuDoor5SaftyLoop1B2,
         edcuDoor6SaftyLoop1B2, edcuDoor7SaftyLoop1B2, edcuDoor8SaftyLoop1B2, edcuDoor9SaftyLoop1B2, edcuDoor10SaftyLoop1B2,
         edcuDoor1SaftyLoop2B2, edcuDoor2SaftyLoop2B2, edcuDoor3SaftyLoop2B2, edcuDoor4SaftyLoop2B2, edcuDoor5SaftyLoop2B2,
         edcuDoor6SaftyLoop2B2, edcuDoor7SaftyLoop2B2, edcuDoor8SaftyLoop2B2, edcuDoor9SaftyLoop2B2, edcuDoor10SaftyLoop2B2;

    // A2
    bool edcuDoor1EmergencyUnlockRequestA2, edcuDoor2EmergencyUnlockRequestA2, edcuDoor3EmergencyUnlockRequestA2, edcuDoor4EmergencyUnlockRequestA2, edcuDoor5EmergencyUnlockRequestA2,
         edcuDoor6EmergencyUnlockRequestA2, edcuDoor7EmergencyUnlockRequestA2, edcuDoor8EmergencyUnlockRequestA2, edcuDoor9EmergencyUnlockRequestA2, edcuDoor10EmergencyUnlockRequestA2;
    bool edcuDoor1SaftyLoop1A2, edcuDoor2SaftyLoop1A2, edcuDoor3SaftyLoop1A2, edcuDoor4SaftyLoop1A2, edcuDoor5SaftyLoop1A2,
         edcuDoor6SaftyLoop1A2, edcuDoor7SaftyLoop1A2, edcuDoor8SaftyLoop1A2, edcuDoor9SaftyLoop1A2, edcuDoor10SaftyLoop1A2,
         edcuDoor1SaftyLoop2A2, edcuDoor2SaftyLoop2A2, edcuDoor3SaftyLoop2A2, edcuDoor4SaftyLoop2A2, edcuDoor5SaftyLoop2A2,
         edcuDoor6SaftyLoop2A2, edcuDoor7SaftyLoop2A2, edcuDoor8SaftyLoop2A2, edcuDoor9SaftyLoop2A2, edcuDoor10SaftyLoop2A2;

    QString edcu1Door1SoftwareVersionA1, edcu1Door1SoftwareVersionB1, edcu1Door1SoftwareVersionC1, edcu1Door1SoftwareVersionD1,
            edcu1Door1SoftwareVersionD2, edcu1Door1SoftwareVersionC2, edcu1Door1SoftwareVersionB2, edcu1Door1SoftwareVersionA2;
    QString edcu2Door1SoftwareVersionA1, edcu2Door1SoftwareVersionB1, edcu2Door1SoftwareVersionC1, edcu2Door1SoftwareVersionD1,
            edcu2Door1SoftwareVersionD2, edcu2Door1SoftwareVersionC2, edcu2Door1SoftwareVersionB2, edcu2Door1SoftwareVersionA2;

    // door 2
    bool edcu1Door2EnabledA1, edcu1Door2ZeroSpeedA1, edcu1Door2OpenA1, edcu1Door2UnknownStateA1, edcu1Door2CloseA1, edcu1Door2OpenObstacleA1, edcu1Door2SaftyLoop1A1, edcu1Door2SaftyLoop2A1,
         edcu1Door2CloseLockA1, edcu1Door2OpenFullyA1, edcu1Door2EmergencyUnlockA1, edcu1Door2IsolatedA1, edcu1Door2CLoseObstacleA1, edcu1Door2TrainLineTrustA1, edcu1Door2MajorErrorA1, edcu1Door2MinorErrorA1;
    bool edcu1Door2EnabledB1, edcu1Door2ZeroSpeedB1, edcu1Door2OpenB1, edcu1Door2UnknownStateB1, edcu1Door2CloseB1, edcu1Door2OpenObstacleB1, edcu1Door2SaftyLoop1B1, edcu1Door2SaftyLoop2B1,
         edcu1Door2CloseLockB1, edcu1Door2OpenFullyB1, edcu1Door2EmergencyUnlockB1, edcu1Door2IsolatedB1, edcu1Door2CLoseObstacleB1, edcu1Door2TrainLineTrustB1, edcu1Door2MajorErrorB1, edcu1Door2MinorErrorB1;
    bool edcu1Door2EnabledC1, edcu1Door2ZeroSpeedC1, edcu1Door2OpenC1, edcu1Door2UnknownStateC1, edcu1Door2CloseC1, edcu1Door2OpenObstacleC1, edcu1Door2SaftyLoop1C1, edcu1Door2SaftyLoop2C1,
         edcu1Door2CloseLockC1, edcu1Door2OpenFullyC1, edcu1Door2EmergencyUnlockC1, edcu1Door2IsolatedC1, edcu1Door2CLoseObstacleC1, edcu1Door2TrainLineTrustC1, edcu1Door2MajorErrorC1, edcu1Door2MinorErrorC1;
    bool edcu1Door2EnabledD1, edcu1Door2ZeroSpeedD1, edcu1Door2OpenD1, edcu1Door2UnknownStateD1, edcu1Door2CloseD1, edcu1Door2OpenObstacleD1, edcu1Door2SaftyLoop1D1, edcu1Door2SaftyLoop2D1,
         edcu1Door2CloseLockD1, edcu1Door2OpenFullyD1, edcu1Door2EmergencyUnlockD1, edcu1Door2IsolatedD1, edcu1Door2CLoseObstacleD1, edcu1Door2TrainLineTrustD1, edcu1Door2MajorErrorD1, edcu1Door2MinorErrorD1;
    bool edcu1Door2EnabledD2, edcu1Door2ZeroSpeedD2, edcu1Door2OpenD2, edcu1Door2UnknownStateD2, edcu1Door2CloseD2, edcu1Door2OpenObstacleD2, edcu1Door2SaftyLoop1D2, edcu1Door2SaftyLoop2D2,
         edcu1Door2CloseLockD2, edcu1Door2OpenFullyD2, edcu1Door2EmergencyUnlockD2, edcu1Door2IsolatedD2, edcu1Door2CLoseObstacleD2, edcu1Door2TrainLineTrustD2, edcu1Door2MajorErrorD2, edcu1Door2MinorErrorD2;
    bool edcu1Door2EnabledC2, edcu1Door2ZeroSpeedC2, edcu1Door2OpenC2, edcu1Door2UnknownStateC2, edcu1Door2CloseC2, edcu1Door2OpenObstacleC2, edcu1Door2SaftyLoop1C2, edcu1Door2SaftyLoop2C2,
         edcu1Door2CloseLockC2, edcu1Door2OpenFullyC2, edcu1Door2EmergencyUnlockC2, edcu1Door2IsolatedC2, edcu1Door2CLoseObstacleC2, edcu1Door2TrainLineTrustC2, edcu1Door2MajorErrorC2, edcu1Door2MinorErrorC2;
    bool edcu1Door2EnabledB2, edcu1Door2ZeroSpeedB2, edcu1Door2OpenB2, edcu1Door2UnknownStateB2, edcu1Door2CloseB2, edcu1Door2OpenObstacleB2, edcu1Door2SaftyLoop1B2, edcu1Door2SaftyLoop2B2,
         edcu1Door2CloseLockB2, edcu1Door2OpenFullyB2, edcu1Door2EmergencyUnlockB2, edcu1Door2IsolatedB2, edcu1Door2CLoseObstacleB2, edcu1Door2TrainLineTrustB2, edcu1Door2MajorErrorB2, edcu1Door2MinorErrorB2;
    bool edcu1Door2EnabledA2, edcu1Door2ZeroSpeedA2, edcu1Door2OpenA2, edcu1Door2UnknownStateA2, edcu1Door2CloseA2, edcu1Door2OpenObstacleA2, edcu1Door2SaftyLoop1A2, edcu1Door2SaftyLoop2A2,
         edcu1Door2CloseLockA2, edcu1Door2OpenFullyA2, edcu1Door2EmergencyUnlockA2, edcu1Door2IsolatedA2, edcu1Door2CLoseObstacleA2, edcu1Door2TrainLineTrustA2, edcu1Door2MajorErrorA2, edcu1Door2MinorErrorA2;

    bool edcu2Door2EnabledA1, edcu2Door2ZeroSpeedA1, edcu2Door2OpenA1, edcu2Door2UnknownStateA1, edcu2Door2CloseA1, edcu2Door2OpenObstacleA1, edcu2Door2SaftyLoop1A1, edcu2Door2SaftyLoop2A1,
         edcu2Door2CloseLockA1, edcu2Door2OpenFullyA1, edcu2Door2EmergencyUnlockA1, edcu2Door2IsolatedA1, edcu2Door2CLoseObstacleA1, edcu2Door2TrainLineTrustA1, edcu2Door2MajorErrorA1, edcu2Door2MinorErrorA1;
    bool edcu2Door2EnabledB1, edcu2Door2ZeroSpeedB1, edcu2Door2OpenB1, edcu2Door2UnknownStateB1, edcu2Door2CloseB1, edcu2Door2OpenObstacleB1, edcu2Door2SaftyLoop1B1, edcu2Door2SaftyLoop2B1,
         edcu2Door2CloseLockB1, edcu2Door2OpenFullyB1, edcu2Door2EmergencyUnlockB1, edcu2Door2IsolatedB1, edcu2Door2CLoseObstacleB1, edcu2Door2TrainLineTrustB1, edcu2Door2MajorErrorB1, edcu2Door2MinorErrorB1;
    bool edcu2Door2EnabledC1, edcu2Door2ZeroSpeedC1, edcu2Door2OpenC1, edcu2Door2UnknownStateC1, edcu2Door2CloseC1, edcu2Door2OpenObstacleC1, edcu2Door2SaftyLoop1C1, edcu2Door2SaftyLoop2C1,
         edcu2Door2CloseLockC1, edcu2Door2OpenFullyC1, edcu2Door2EmergencyUnlockC1, edcu2Door2IsolatedC1, edcu2Door2CLoseObstacleC1, edcu2Door2TrainLineTrustC1, edcu2Door2MajorErrorC1, edcu2Door2MinorErrorC1;
    bool edcu2Door2EnabledD1, edcu2Door2ZeroSpeedD1, edcu2Door2OpenD1, edcu2Door2UnknownStateD1, edcu2Door2CloseD1, edcu2Door2OpenObstacleD1, edcu2Door2SaftyLoop1D1, edcu2Door2SaftyLoop2D1,
         edcu2Door2CloseLockD1, edcu2Door2OpenFullyD1, edcu2Door2EmergencyUnlockD1, edcu2Door2IsolatedD1, edcu2Door2CLoseObstacleD1, edcu2Door2TrainLineTrustD1, edcu2Door2MajorErrorD1, edcu2Door2MinorErrorD1;
    bool edcu2Door2EnabledD2, edcu2Door2ZeroSpeedD2, edcu2Door2OpenD2, edcu2Door2UnknownStateD2, edcu2Door2CloseD2, edcu2Door2OpenObstacleD2, edcu2Door2SaftyLoop1D2, edcu2Door2SaftyLoop2D2,
         edcu2Door2CloseLockD2, edcu2Door2OpenFullyD2, edcu2Door2EmergencyUnlockD2, edcu2Door2IsolatedD2, edcu2Door2CLoseObstacleD2, edcu2Door2TrainLineTrustD2, edcu2Door2MajorErrorD2, edcu2Door2MinorErrorD2;
    bool edcu2Door2EnabledC2, edcu2Door2ZeroSpeedC2, edcu2Door2OpenC2, edcu2Door2UnknownStateC2, edcu2Door2CloseC2, edcu2Door2OpenObstacleC2, edcu2Door2SaftyLoop1C2, edcu2Door2SaftyLoop2C2,
         edcu2Door2CloseLockC2, edcu2Door2OpenFullyC2, edcu2Door2EmergencyUnlockC2, edcu2Door2IsolatedC2, edcu2Door2CLoseObstacleC2, edcu2Door2TrainLineTrustC2, edcu2Door2MajorErrorC2, edcu2Door2MinorErrorC2;
    bool edcu2Door2EnabledB2, edcu2Door2ZeroSpeedB2, edcu2Door2OpenB2, edcu2Door2UnknownStateB2, edcu2Door2CloseB2, edcu2Door2OpenObstacleB2, edcu2Door2SaftyLoop1B2, edcu2Door2SaftyLoop2B2,
         edcu2Door2CloseLockB2, edcu2Door2OpenFullyB2, edcu2Door2EmergencyUnlockB2, edcu2Door2IsolatedB2, edcu2Door2CLoseObstacleB2, edcu2Door2TrainLineTrustB2, edcu2Door2MajorErrorB2, edcu2Door2MinorErrorB2;
    bool edcu2Door2EnabledA2, edcu2Door2ZeroSpeedA2, edcu2Door2OpenA2, edcu2Door2UnknownStateA2, edcu2Door2CloseA2, edcu2Door2OpenObstacleA2, edcu2Door2SaftyLoop1A2, edcu2Door2SaftyLoop2A2,
         edcu2Door2CloseLockA2, edcu2Door2OpenFullyA2, edcu2Door2EmergencyUnlockA2, edcu2Door2IsolatedA2, edcu2Door2CLoseObstacleA2, edcu2Door2TrainLineTrustA2, edcu2Door2MajorErrorA2, edcu2Door2MinorErrorA2;

    QString edcu1Door2SoftwareVersionA1, edcu1Door2SoftwareVersionB1, edcu1Door2SoftwareVersionC1, edcu1Door2SoftwareVersionD1,
            edcu1Door2SoftwareVersionD2, edcu1Door2SoftwareVersionC2, edcu1Door2SoftwareVersionB2, edcu1Door2SoftwareVersionA2;
    QString edcu2Door2SoftwareVersionA1, edcu2Door2SoftwareVersionB1, edcu2Door2SoftwareVersionC1, edcu2Door2SoftwareVersionD1,
            edcu2Door2SoftwareVersionD2, edcu2Door2SoftwareVersionC2, edcu2Door2SoftwareVersionB2, edcu2Door2SoftwareVersionA2;

    // door 3
    bool edcu1Door3EnabledA1, edcu1Door3ZeroSpeedA1, edcu1Door3OpenA1, edcu1Door3UnknownStateA1, edcu1Door3CloseA1, edcu1Door3OpenObstacleA1, edcu1Door3SaftyLoop1A1, edcu1Door3SaftyLoop2A1,
         edcu1Door3CloseLockA1, edcu1Door3OpenFullyA1, edcu1Door3EmergencyUnlockA1, edcu1Door3IsolatedA1, edcu1Door3CLoseObstacleA1, edcu1Door3TrainLineTrustA1, edcu1Door3MajorErrorA1, edcu1Door3MinorErrorA1;
    bool edcu1Door3EnabledB1, edcu1Door3ZeroSpeedB1, edcu1Door3OpenB1, edcu1Door3UnknownStateB1, edcu1Door3CloseB1, edcu1Door3OpenObstacleB1, edcu1Door3SaftyLoop1B1, edcu1Door3SaftyLoop2B1,
         edcu1Door3CloseLockB1, edcu1Door3OpenFullyB1, edcu1Door3EmergencyUnlockB1, edcu1Door3IsolatedB1, edcu1Door3CLoseObstacleB1, edcu1Door3TrainLineTrustB1, edcu1Door3MajorErrorB1, edcu1Door3MinorErrorB1;
    bool edcu1Door3EnabledC1, edcu1Door3ZeroSpeedC1, edcu1Door3OpenC1, edcu1Door3UnknownStateC1, edcu1Door3CloseC1, edcu1Door3OpenObstacleC1, edcu1Door3SaftyLoop1C1, edcu1Door3SaftyLoop2C1,
         edcu1Door3CloseLockC1, edcu1Door3OpenFullyC1, edcu1Door3EmergencyUnlockC1, edcu1Door3IsolatedC1, edcu1Door3CLoseObstacleC1, edcu1Door3TrainLineTrustC1, edcu1Door3MajorErrorC1, edcu1Door3MinorErrorC1;
    bool edcu1Door3EnabledD1, edcu1Door3ZeroSpeedD1, edcu1Door3OpenD1, edcu1Door3UnknownStateD1, edcu1Door3CloseD1, edcu1Door3OpenObstacleD1, edcu1Door3SaftyLoop1D1, edcu1Door3SaftyLoop2D1,
         edcu1Door3CloseLockD1, edcu1Door3OpenFullyD1, edcu1Door3EmergencyUnlockD1, edcu1Door3IsolatedD1, edcu1Door3CLoseObstacleD1, edcu1Door3TrainLineTrustD1, edcu1Door3MajorErrorD1, edcu1Door3MinorErrorD1;
    bool edcu1Door3EnabledD2, edcu1Door3ZeroSpeedD2, edcu1Door3OpenD2, edcu1Door3UnknownStateD2, edcu1Door3CloseD2, edcu1Door3OpenObstacleD2, edcu1Door3SaftyLoop1D2, edcu1Door3SaftyLoop2D2,
         edcu1Door3CloseLockD2, edcu1Door3OpenFullyD2, edcu1Door3EmergencyUnlockD2, edcu1Door3IsolatedD2, edcu1Door3CLoseObstacleD2, edcu1Door3TrainLineTrustD2, edcu1Door3MajorErrorD2, edcu1Door3MinorErrorD2;
    bool edcu1Door3EnabledC2, edcu1Door3ZeroSpeedC2, edcu1Door3OpenC2, edcu1Door3UnknownStateC2, edcu1Door3CloseC2, edcu1Door3OpenObstacleC2, edcu1Door3SaftyLoop1C2, edcu1Door3SaftyLoop2C2,
         edcu1Door3CloseLockC2, edcu1Door3OpenFullyC2, edcu1Door3EmergencyUnlockC2, edcu1Door3IsolatedC2, edcu1Door3CLoseObstacleC2, edcu1Door3TrainLineTrustC2, edcu1Door3MajorErrorC2, edcu1Door3MinorErrorC2;
    bool edcu1Door3EnabledB2, edcu1Door3ZeroSpeedB2, edcu1Door3OpenB2, edcu1Door3UnknownStateB2, edcu1Door3CloseB2, edcu1Door3OpenObstacleB2, edcu1Door3SaftyLoop1B2, edcu1Door3SaftyLoop2B2,
         edcu1Door3CloseLockB2, edcu1Door3OpenFullyB2, edcu1Door3EmergencyUnlockB2, edcu1Door3IsolatedB2, edcu1Door3CLoseObstacleB2, edcu1Door3TrainLineTrustB2, edcu1Door3MajorErrorB2, edcu1Door3MinorErrorB2;
    bool edcu1Door3EnabledA2, edcu1Door3ZeroSpeedA2, edcu1Door3OpenA2, edcu1Door3UnknownStateA2, edcu1Door3CloseA2, edcu1Door3OpenObstacleA2, edcu1Door3SaftyLoop1A2, edcu1Door3SaftyLoop2A2,
         edcu1Door3CloseLockA2, edcu1Door3OpenFullyA2, edcu1Door3EmergencyUnlockA2, edcu1Door3IsolatedA2, edcu1Door3CLoseObstacleA2, edcu1Door3TrainLineTrustA2, edcu1Door3MajorErrorA2, edcu1Door3MinorErrorA2;

    bool edcu2Door3EnabledA1, edcu2Door3ZeroSpeedA1, edcu2Door3OpenA1, edcu2Door3UnknownStateA1, edcu2Door3CloseA1, edcu2Door3OpenObstacleA1, edcu2Door3SaftyLoop1A1, edcu2Door3SaftyLoop2A1,
         edcu2Door3CloseLockA1, edcu2Door3OpenFullyA1, edcu2Door3EmergencyUnlockA1, edcu2Door3IsolatedA1, edcu2Door3CLoseObstacleA1, edcu2Door3TrainLineTrustA1, edcu2Door3MajorErrorA1, edcu2Door3MinorErrorA1;
    bool edcu2Door3EnabledB1, edcu2Door3ZeroSpeedB1, edcu2Door3OpenB1, edcu2Door3UnknownStateB1, edcu2Door3CloseB1, edcu2Door3OpenObstacleB1, edcu2Door3SaftyLoop1B1, edcu2Door3SaftyLoop2B1,
         edcu2Door3CloseLockB1, edcu2Door3OpenFullyB1, edcu2Door3EmergencyUnlockB1, edcu2Door3IsolatedB1, edcu2Door3CLoseObstacleB1, edcu2Door3TrainLineTrustB1, edcu2Door3MajorErrorB1, edcu2Door3MinorErrorB1;
    bool edcu2Door3EnabledC1, edcu2Door3ZeroSpeedC1, edcu2Door3OpenC1, edcu2Door3UnknownStateC1, edcu2Door3CloseC1, edcu2Door3OpenObstacleC1, edcu2Door3SaftyLoop1C1, edcu2Door3SaftyLoop2C1,
         edcu2Door3CloseLockC1, edcu2Door3OpenFullyC1, edcu2Door3EmergencyUnlockC1, edcu2Door3IsolatedC1, edcu2Door3CLoseObstacleC1, edcu2Door3TrainLineTrustC1, edcu2Door3MajorErrorC1, edcu2Door3MinorErrorC1;
    bool edcu2Door3EnabledD1, edcu2Door3ZeroSpeedD1, edcu2Door3OpenD1, edcu2Door3UnknownStateD1, edcu2Door3CloseD1, edcu2Door3OpenObstacleD1, edcu2Door3SaftyLoop1D1, edcu2Door3SaftyLoop2D1,
         edcu2Door3CloseLockD1, edcu2Door3OpenFullyD1, edcu2Door3EmergencyUnlockD1, edcu2Door3IsolatedD1, edcu2Door3CLoseObstacleD1, edcu2Door3TrainLineTrustD1, edcu2Door3MajorErrorD1, edcu2Door3MinorErrorD1;
    bool edcu2Door3EnabledD2, edcu2Door3ZeroSpeedD2, edcu2Door3OpenD2, edcu2Door3UnknownStateD2, edcu2Door3CloseD2, edcu2Door3OpenObstacleD2, edcu2Door3SaftyLoop1D2, edcu2Door3SaftyLoop2D2,
         edcu2Door3CloseLockD2, edcu2Door3OpenFullyD2, edcu2Door3EmergencyUnlockD2, edcu2Door3IsolatedD2, edcu2Door3CLoseObstacleD2, edcu2Door3TrainLineTrustD2, edcu2Door3MajorErrorD2, edcu2Door3MinorErrorD2;
    bool edcu2Door3EnabledC2, edcu2Door3ZeroSpeedC2, edcu2Door3OpenC2, edcu2Door3UnknownStateC2, edcu2Door3CloseC2, edcu2Door3OpenObstacleC2, edcu2Door3SaftyLoop1C2, edcu2Door3SaftyLoop2C2,
         edcu2Door3CloseLockC2, edcu2Door3OpenFullyC2, edcu2Door3EmergencyUnlockC2, edcu2Door3IsolatedC2, edcu2Door3CLoseObstacleC2, edcu2Door3TrainLineTrustC2, edcu2Door3MajorErrorC2, edcu2Door3MinorErrorC2;
    bool edcu2Door3EnabledB2, edcu2Door3ZeroSpeedB2, edcu2Door3OpenB2, edcu2Door3UnknownStateB2, edcu2Door3CloseB2, edcu2Door3OpenObstacleB2, edcu2Door3SaftyLoop1B2, edcu2Door3SaftyLoop2B2,
         edcu2Door3CloseLockB2, edcu2Door3OpenFullyB2, edcu2Door3EmergencyUnlockB2, edcu2Door3IsolatedB2, edcu2Door3CLoseObstacleB2, edcu2Door3TrainLineTrustB2, edcu2Door3MajorErrorB2, edcu2Door3MinorErrorB2;
    bool edcu2Door3EnabledA2, edcu2Door3ZeroSpeedA2, edcu2Door3OpenA2, edcu2Door3UnknownStateA2, edcu2Door3CloseA2, edcu2Door3OpenObstacleA2, edcu2Door3SaftyLoop1A2, edcu2Door3SaftyLoop2A2,
         edcu2Door3CloseLockA2, edcu2Door3OpenFullyA2, edcu2Door3EmergencyUnlockA2, edcu2Door3IsolatedA2, edcu2Door3CLoseObstacleA2, edcu2Door3TrainLineTrustA2, edcu2Door3MajorErrorA2, edcu2Door3MinorErrorA2;

    QString edcu1Door3SoftwareVersionA1, edcu1Door3SoftwareVersionB1, edcu1Door3SoftwareVersionC1, edcu1Door3SoftwareVersionD1,
            edcu1Door3SoftwareVersionD2, edcu1Door3SoftwareVersionC2, edcu1Door3SoftwareVersionB2, edcu1Door3SoftwareVersionA2;
    QString edcu2Door3SoftwareVersionA1, edcu2Door3SoftwareVersionB1, edcu2Door3SoftwareVersionC1, edcu2Door3SoftwareVersionD1,
            edcu2Door3SoftwareVersionD2, edcu2Door3SoftwareVersionC2, edcu2Door3SoftwareVersionB2, edcu2Door3SoftwareVersionA2;

    // door 4
    bool edcu1Door4EnabledA1, edcu1Door4ZeroSpeedA1, edcu1Door4OpenA1, edcu1Door4UnknownStateA1, edcu1Door4CloseA1, edcu1Door4OpenObstacleA1, edcu1Door4SaftyLoop1A1, edcu1Door4SaftyLoop2A1,
         edcu1Door4CloseLockA1, edcu1Door4OpenFullyA1, edcu1Door4EmergencyUnlockA1, edcu1Door4IsolatedA1, edcu1Door4CLoseObstacleA1, edcu1Door4TrainLineTrustA1, edcu1Door4MajorErrorA1, edcu1Door4MinorErrorA1;
    bool edcu1Door4EnabledB1, edcu1Door4ZeroSpeedB1, edcu1Door4OpenB1, edcu1Door4UnknownStateB1, edcu1Door4CloseB1, edcu1Door4OpenObstacleB1, edcu1Door4SaftyLoop1B1, edcu1Door4SaftyLoop2B1,
         edcu1Door4CloseLockB1, edcu1Door4OpenFullyB1, edcu1Door4EmergencyUnlockB1, edcu1Door4IsolatedB1, edcu1Door4CLoseObstacleB1, edcu1Door4TrainLineTrustB1, edcu1Door4MajorErrorB1, edcu1Door4MinorErrorB1;
    bool edcu1Door4EnabledC1, edcu1Door4ZeroSpeedC1, edcu1Door4OpenC1, edcu1Door4UnknownStateC1, edcu1Door4CloseC1, edcu1Door4OpenObstacleC1, edcu1Door4SaftyLoop1C1, edcu1Door4SaftyLoop2C1,
         edcu1Door4CloseLockC1, edcu1Door4OpenFullyC1, edcu1Door4EmergencyUnlockC1, edcu1Door4IsolatedC1, edcu1Door4CLoseObstacleC1, edcu1Door4TrainLineTrustC1, edcu1Door4MajorErrorC1, edcu1Door4MinorErrorC1;
    bool edcu1Door4EnabledD1, edcu1Door4ZeroSpeedD1, edcu1Door4OpenD1, edcu1Door4UnknownStateD1, edcu1Door4CloseD1, edcu1Door4OpenObstacleD1, edcu1Door4SaftyLoop1D1, edcu1Door4SaftyLoop2D1,
         edcu1Door4CloseLockD1, edcu1Door4OpenFullyD1, edcu1Door4EmergencyUnlockD1, edcu1Door4IsolatedD1, edcu1Door4CLoseObstacleD1, edcu1Door4TrainLineTrustD1, edcu1Door4MajorErrorD1, edcu1Door4MinorErrorD1;
    bool edcu1Door4EnabledD2, edcu1Door4ZeroSpeedD2, edcu1Door4OpenD2, edcu1Door4UnknownStateD2, edcu1Door4CloseD2, edcu1Door4OpenObstacleD2, edcu1Door4SaftyLoop1D2, edcu1Door4SaftyLoop2D2,
         edcu1Door4CloseLockD2, edcu1Door4OpenFullyD2, edcu1Door4EmergencyUnlockD2, edcu1Door4IsolatedD2, edcu1Door4CLoseObstacleD2, edcu1Door4TrainLineTrustD2, edcu1Door4MajorErrorD2, edcu1Door4MinorErrorD2;
    bool edcu1Door4EnabledC2, edcu1Door4ZeroSpeedC2, edcu1Door4OpenC2, edcu1Door4UnknownStateC2, edcu1Door4CloseC2, edcu1Door4OpenObstacleC2, edcu1Door4SaftyLoop1C2, edcu1Door4SaftyLoop2C2,
         edcu1Door4CloseLockC2, edcu1Door4OpenFullyC2, edcu1Door4EmergencyUnlockC2, edcu1Door4IsolatedC2, edcu1Door4CLoseObstacleC2, edcu1Door4TrainLineTrustC2, edcu1Door4MajorErrorC2, edcu1Door4MinorErrorC2;
    bool edcu1Door4EnabledB2, edcu1Door4ZeroSpeedB2, edcu1Door4OpenB2, edcu1Door4UnknownStateB2, edcu1Door4CloseB2, edcu1Door4OpenObstacleB2, edcu1Door4SaftyLoop1B2, edcu1Door4SaftyLoop2B2,
         edcu1Door4CloseLockB2, edcu1Door4OpenFullyB2, edcu1Door4EmergencyUnlockB2, edcu1Door4IsolatedB2, edcu1Door4CLoseObstacleB2, edcu1Door4TrainLineTrustB2, edcu1Door4MajorErrorB2, edcu1Door4MinorErrorB2;
    bool edcu1Door4EnabledA2, edcu1Door4ZeroSpeedA2, edcu1Door4OpenA2, edcu1Door4UnknownStateA2, edcu1Door4CloseA2, edcu1Door4OpenObstacleA2, edcu1Door4SaftyLoop1A2, edcu1Door4SaftyLoop2A2,
         edcu1Door4CloseLockA2, edcu1Door4OpenFullyA2, edcu1Door4EmergencyUnlockA2, edcu1Door4IsolatedA2, edcu1Door4CLoseObstacleA2, edcu1Door4TrainLineTrustA2, edcu1Door4MajorErrorA2, edcu1Door4MinorErrorA2;

    bool edcu2Door4EnabledA1, edcu2Door4ZeroSpeedA1, edcu2Door4OpenA1, edcu2Door4UnknownStateA1, edcu2Door4CloseA1, edcu2Door4OpenObstacleA1, edcu2Door4SaftyLoop1A1, edcu2Door4SaftyLoop2A1,
         edcu2Door4CloseLockA1, edcu2Door4OpenFullyA1, edcu2Door4EmergencyUnlockA1, edcu2Door4IsolatedA1, edcu2Door4CLoseObstacleA1, edcu2Door4TrainLineTrustA1, edcu2Door4MajorErrorA1, edcu2Door4MinorErrorA1;
    bool edcu2Door4EnabledB1, edcu2Door4ZeroSpeedB1, edcu2Door4OpenB1, edcu2Door4UnknownStateB1, edcu2Door4CloseB1, edcu2Door4OpenObstacleB1, edcu2Door4SaftyLoop1B1, edcu2Door4SaftyLoop2B1,
         edcu2Door4CloseLockB1, edcu2Door4OpenFullyB1, edcu2Door4EmergencyUnlockB1, edcu2Door4IsolatedB1, edcu2Door4CLoseObstacleB1, edcu2Door4TrainLineTrustB1, edcu2Door4MajorErrorB1, edcu2Door4MinorErrorB1;
    bool edcu2Door4EnabledC1, edcu2Door4ZeroSpeedC1, edcu2Door4OpenC1, edcu2Door4UnknownStateC1, edcu2Door4CloseC1, edcu2Door4OpenObstacleC1, edcu2Door4SaftyLoop1C1, edcu2Door4SaftyLoop2C1,
         edcu2Door4CloseLockC1, edcu2Door4OpenFullyC1, edcu2Door4EmergencyUnlockC1, edcu2Door4IsolatedC1, edcu2Door4CLoseObstacleC1, edcu2Door4TrainLineTrustC1, edcu2Door4MajorErrorC1, edcu2Door4MinorErrorC1;
    bool edcu2Door4EnabledD1, edcu2Door4ZeroSpeedD1, edcu2Door4OpenD1, edcu2Door4UnknownStateD1, edcu2Door4CloseD1, edcu2Door4OpenObstacleD1, edcu2Door4SaftyLoop1D1, edcu2Door4SaftyLoop2D1,
         edcu2Door4CloseLockD1, edcu2Door4OpenFullyD1, edcu2Door4EmergencyUnlockD1, edcu2Door4IsolatedD1, edcu2Door4CLoseObstacleD1, edcu2Door4TrainLineTrustD1, edcu2Door4MajorErrorD1, edcu2Door4MinorErrorD1;
    bool edcu2Door4EnabledD2, edcu2Door4ZeroSpeedD2, edcu2Door4OpenD2, edcu2Door4UnknownStateD2, edcu2Door4CloseD2, edcu2Door4OpenObstacleD2, edcu2Door4SaftyLoop1D2, edcu2Door4SaftyLoop2D2,
         edcu2Door4CloseLockD2, edcu2Door4OpenFullyD2, edcu2Door4EmergencyUnlockD2, edcu2Door4IsolatedD2, edcu2Door4CLoseObstacleD2, edcu2Door4TrainLineTrustD2, edcu2Door4MajorErrorD2, edcu2Door4MinorErrorD2;
    bool edcu2Door4EnabledC2, edcu2Door4ZeroSpeedC2, edcu2Door4OpenC2, edcu2Door4UnknownStateC2, edcu2Door4CloseC2, edcu2Door4OpenObstacleC2, edcu2Door4SaftyLoop1C2, edcu2Door4SaftyLoop2C2,
         edcu2Door4CloseLockC2, edcu2Door4OpenFullyC2, edcu2Door4EmergencyUnlockC2, edcu2Door4IsolatedC2, edcu2Door4CLoseObstacleC2, edcu2Door4TrainLineTrustC2, edcu2Door4MajorErrorC2, edcu2Door4MinorErrorC2;
    bool edcu2Door4EnabledB2, edcu2Door4ZeroSpeedB2, edcu2Door4OpenB2, edcu2Door4UnknownStateB2, edcu2Door4CloseB2, edcu2Door4OpenObstacleB2, edcu2Door4SaftyLoop1B2, edcu2Door4SaftyLoop2B2,
         edcu2Door4CloseLockB2, edcu2Door4OpenFullyB2, edcu2Door4EmergencyUnlockB2, edcu2Door4IsolatedB2, edcu2Door4CLoseObstacleB2, edcu2Door4TrainLineTrustB2, edcu2Door4MajorErrorB2, edcu2Door4MinorErrorB2;
    bool edcu2Door4EnabledA2, edcu2Door4ZeroSpeedA2, edcu2Door4OpenA2, edcu2Door4UnknownStateA2, edcu2Door4CloseA2, edcu2Door4OpenObstacleA2, edcu2Door4SaftyLoop1A2, edcu2Door4SaftyLoop2A2,
         edcu2Door4CloseLockA2, edcu2Door4OpenFullyA2, edcu2Door4EmergencyUnlockA2, edcu2Door4IsolatedA2, edcu2Door4CLoseObstacleA2, edcu2Door4TrainLineTrustA2, edcu2Door4MajorErrorA2, edcu2Door4MinorErrorA2;

    QString edcu1Door4SoftwareVersionA1, edcu1Door4SoftwareVersionB1, edcu1Door4SoftwareVersionC1, edcu1Door4SoftwareVersionD1,
            edcu1Door4SoftwareVersionD2, edcu1Door4SoftwareVersionC2, edcu1Door4SoftwareVersionB2, edcu1Door4SoftwareVersionA2;
    QString edcu2Door4SoftwareVersionA1, edcu2Door4SoftwareVersionB1, edcu2Door4SoftwareVersionC1, edcu2Door4SoftwareVersionD1,
            edcu2Door4SoftwareVersionD2, edcu2Door4SoftwareVersionC2, edcu2Door4SoftwareVersionB2, edcu2Door4SoftwareVersionA2;

    // door 5
    bool edcu1Door5EnabledA1, edcu1Door5ZeroSpeedA1, edcu1Door5OpenA1, edcu1Door5UnknownStateA1, edcu1Door5CloseA1, edcu1Door5OpenObstacleA1, edcu1Door5SaftyLoop1A1, edcu1Door5SaftyLoop2A1,
         edcu1Door5CloseLockA1, edcu1Door5OpenFullyA1, edcu1Door5EmergencyUnlockA1, edcu1Door5IsolatedA1, edcu1Door5CLoseObstacleA1, edcu1Door5TrainLineTrustA1, edcu1Door5MajorErrorA1, edcu1Door5MinorErrorA1;
    bool edcu1Door5EnabledB1, edcu1Door5ZeroSpeedB1, edcu1Door5OpenB1, edcu1Door5UnknownStateB1, edcu1Door5CloseB1, edcu1Door5OpenObstacleB1, edcu1Door5SaftyLoop1B1, edcu1Door5SaftyLoop2B1,
         edcu1Door5CloseLockB1, edcu1Door5OpenFullyB1, edcu1Door5EmergencyUnlockB1, edcu1Door5IsolatedB1, edcu1Door5CLoseObstacleB1, edcu1Door5TrainLineTrustB1, edcu1Door5MajorErrorB1, edcu1Door5MinorErrorB1;
    bool edcu1Door5EnabledC1, edcu1Door5ZeroSpeedC1, edcu1Door5OpenC1, edcu1Door5UnknownStateC1, edcu1Door5CloseC1, edcu1Door5OpenObstacleC1, edcu1Door5SaftyLoop1C1, edcu1Door5SaftyLoop2C1,
         edcu1Door5CloseLockC1, edcu1Door5OpenFullyC1, edcu1Door5EmergencyUnlockC1, edcu1Door5IsolatedC1, edcu1Door5CLoseObstacleC1, edcu1Door5TrainLineTrustC1, edcu1Door5MajorErrorC1, edcu1Door5MinorErrorC1;
    bool edcu1Door5EnabledD1, edcu1Door5ZeroSpeedD1, edcu1Door5OpenD1, edcu1Door5UnknownStateD1, edcu1Door5CloseD1, edcu1Door5OpenObstacleD1, edcu1Door5SaftyLoop1D1, edcu1Door5SaftyLoop2D1,
         edcu1Door5CloseLockD1, edcu1Door5OpenFullyD1, edcu1Door5EmergencyUnlockD1, edcu1Door5IsolatedD1, edcu1Door5CLoseObstacleD1, edcu1Door5TrainLineTrustD1, edcu1Door5MajorErrorD1, edcu1Door5MinorErrorD1;
    bool edcu1Door5EnabledD2, edcu1Door5ZeroSpeedD2, edcu1Door5OpenD2, edcu1Door5UnknownStateD2, edcu1Door5CloseD2, edcu1Door5OpenObstacleD2, edcu1Door5SaftyLoop1D2, edcu1Door5SaftyLoop2D2,
         edcu1Door5CloseLockD2, edcu1Door5OpenFullyD2, edcu1Door5EmergencyUnlockD2, edcu1Door5IsolatedD2, edcu1Door5CLoseObstacleD2, edcu1Door5TrainLineTrustD2, edcu1Door5MajorErrorD2, edcu1Door5MinorErrorD2;
    bool edcu1Door5EnabledC2, edcu1Door5ZeroSpeedC2, edcu1Door5OpenC2, edcu1Door5UnknownStateC2, edcu1Door5CloseC2, edcu1Door5OpenObstacleC2, edcu1Door5SaftyLoop1C2, edcu1Door5SaftyLoop2C2,
         edcu1Door5CloseLockC2, edcu1Door5OpenFullyC2, edcu1Door5EmergencyUnlockC2, edcu1Door5IsolatedC2, edcu1Door5CLoseObstacleC2, edcu1Door5TrainLineTrustC2, edcu1Door5MajorErrorC2, edcu1Door5MinorErrorC2;
    bool edcu1Door5EnabledB2, edcu1Door5ZeroSpeedB2, edcu1Door5OpenB2, edcu1Door5UnknownStateB2, edcu1Door5CloseB2, edcu1Door5OpenObstacleB2, edcu1Door5SaftyLoop1B2, edcu1Door5SaftyLoop2B2,
         edcu1Door5CloseLockB2, edcu1Door5OpenFullyB2, edcu1Door5EmergencyUnlockB2, edcu1Door5IsolatedB2, edcu1Door5CLoseObstacleB2, edcu1Door5TrainLineTrustB2, edcu1Door5MajorErrorB2, edcu1Door5MinorErrorB2;
    bool edcu1Door5EnabledA2, edcu1Door5ZeroSpeedA2, edcu1Door5OpenA2, edcu1Door5UnknownStateA2, edcu1Door5CloseA2, edcu1Door5OpenObstacleA2, edcu1Door5SaftyLoop1A2, edcu1Door5SaftyLoop2A2,
         edcu1Door5CloseLockA2, edcu1Door5OpenFullyA2, edcu1Door5EmergencyUnlockA2, edcu1Door5IsolatedA2, edcu1Door5CLoseObstacleA2, edcu1Door5TrainLineTrustA2, edcu1Door5MajorErrorA2, edcu1Door5MinorErrorA2;

    bool edcu2Door5EnabledA1, edcu2Door5ZeroSpeedA1, edcu2Door5OpenA1, edcu2Door5UnknownStateA1, edcu2Door5CloseA1, edcu2Door5OpenObstacleA1, edcu2Door5SaftyLoop1A1, edcu2Door5SaftyLoop2A1,
         edcu2Door5CloseLockA1, edcu2Door5OpenFullyA1, edcu2Door5EmergencyUnlockA1, edcu2Door5IsolatedA1, edcu2Door5CLoseObstacleA1, edcu2Door5TrainLineTrustA1, edcu2Door5MajorErrorA1, edcu2Door5MinorErrorA1;
    bool edcu2Door5EnabledB1, edcu2Door5ZeroSpeedB1, edcu2Door5OpenB1, edcu2Door5UnknownStateB1, edcu2Door5CloseB1, edcu2Door5OpenObstacleB1, edcu2Door5SaftyLoop1B1, edcu2Door5SaftyLoop2B1,
         edcu2Door5CloseLockB1, edcu2Door5OpenFullyB1, edcu2Door5EmergencyUnlockB1, edcu2Door5IsolatedB1, edcu2Door5CLoseObstacleB1, edcu2Door5TrainLineTrustB1, edcu2Door5MajorErrorB1, edcu2Door5MinorErrorB1;
    bool edcu2Door5EnabledC1, edcu2Door5ZeroSpeedC1, edcu2Door5OpenC1, edcu2Door5UnknownStateC1, edcu2Door5CloseC1, edcu2Door5OpenObstacleC1, edcu2Door5SaftyLoop1C1, edcu2Door5SaftyLoop2C1,
         edcu2Door5CloseLockC1, edcu2Door5OpenFullyC1, edcu2Door5EmergencyUnlockC1, edcu2Door5IsolatedC1, edcu2Door5CLoseObstacleC1, edcu2Door5TrainLineTrustC1, edcu2Door5MajorErrorC1, edcu2Door5MinorErrorC1;
    bool edcu2Door5EnabledD1, edcu2Door5ZeroSpeedD1, edcu2Door5OpenD1, edcu2Door5UnknownStateD1, edcu2Door5CloseD1, edcu2Door5OpenObstacleD1, edcu2Door5SaftyLoop1D1, edcu2Door5SaftyLoop2D1,
         edcu2Door5CloseLockD1, edcu2Door5OpenFullyD1, edcu2Door5EmergencyUnlockD1, edcu2Door5IsolatedD1, edcu2Door5CLoseObstacleD1, edcu2Door5TrainLineTrustD1, edcu2Door5MajorErrorD1, edcu2Door5MinorErrorD1;
    bool edcu2Door5EnabledD2, edcu2Door5ZeroSpeedD2, edcu2Door5OpenD2, edcu2Door5UnknownStateD2, edcu2Door5CloseD2, edcu2Door5OpenObstacleD2, edcu2Door5SaftyLoop1D2, edcu2Door5SaftyLoop2D2,
         edcu2Door5CloseLockD2, edcu2Door5OpenFullyD2, edcu2Door5EmergencyUnlockD2, edcu2Door5IsolatedD2, edcu2Door5CLoseObstacleD2, edcu2Door5TrainLineTrustD2, edcu2Door5MajorErrorD2, edcu2Door5MinorErrorD2;
    bool edcu2Door5EnabledC2, edcu2Door5ZeroSpeedC2, edcu2Door5OpenC2, edcu2Door5UnknownStateC2, edcu2Door5CloseC2, edcu2Door5OpenObstacleC2, edcu2Door5SaftyLoop1C2, edcu2Door5SaftyLoop2C2,
         edcu2Door5CloseLockC2, edcu2Door5OpenFullyC2, edcu2Door5EmergencyUnlockC2, edcu2Door5IsolatedC2, edcu2Door5CLoseObstacleC2, edcu2Door5TrainLineTrustC2, edcu2Door5MajorErrorC2, edcu2Door5MinorErrorC2;
    bool edcu2Door5EnabledB2, edcu2Door5ZeroSpeedB2, edcu2Door5OpenB2, edcu2Door5UnknownStateB2, edcu2Door5CloseB2, edcu2Door5OpenObstacleB2, edcu2Door5SaftyLoop1B2, edcu2Door5SaftyLoop2B2,
         edcu2Door5CloseLockB2, edcu2Door5OpenFullyB2, edcu2Door5EmergencyUnlockB2, edcu2Door5IsolatedB2, edcu2Door5CLoseObstacleB2, edcu2Door5TrainLineTrustB2, edcu2Door5MajorErrorB2, edcu2Door5MinorErrorB2;
    bool edcu2Door5EnabledA2, edcu2Door5ZeroSpeedA2, edcu2Door5OpenA2, edcu2Door5UnknownStateA2, edcu2Door5CloseA2, edcu2Door5OpenObstacleA2, edcu2Door5SaftyLoop1A2, edcu2Door5SaftyLoop2A2,
         edcu2Door5CloseLockA2, edcu2Door5OpenFullyA2, edcu2Door5EmergencyUnlockA2, edcu2Door5IsolatedA2, edcu2Door5CLoseObstacleA2, edcu2Door5TrainLineTrustA2, edcu2Door5MajorErrorA2, edcu2Door5MinorErrorA2;

    QString edcu1Door5SoftwareVersionA1, edcu1Door5SoftwareVersionB1, edcu1Door5SoftwareVersionC1, edcu1Door5SoftwareVersionD1,
            edcu1Door5SoftwareVersionD2, edcu1Door5SoftwareVersionC2, edcu1Door5SoftwareVersionB2, edcu1Door5SoftwareVersionA2;
    QString edcu2Door5SoftwareVersionA1, edcu2Door5SoftwareVersionB1, edcu2Door5SoftwareVersionC1, edcu2Door5SoftwareVersionD1,
            edcu2Door5SoftwareVersionD2, edcu2Door5SoftwareVersionC2, edcu2Door5SoftwareVersionB2, edcu2Door5SoftwareVersionA2;

    // door 6
    bool edcu1Door6EnabledA1, edcu1Door6ZeroSpeedA1, edcu1Door6OpenA1, edcu1Door6UnknownStateA1, edcu1Door6CloseA1, edcu1Door6OpenObstacleA1, edcu1Door6SaftyLoop1A1, edcu1Door6SaftyLoop2A1,
         edcu1Door6CloseLockA1, edcu1Door6OpenFullyA1, edcu1Door6EmergencyUnlockA1, edcu1Door6IsolatedA1, edcu1Door6CLoseObstacleA1, edcu1Door6TrainLineTrustA1, edcu1Door6MajorErrorA1, edcu1Door6MinorErrorA1;
    bool edcu1Door6EnabledB1, edcu1Door6ZeroSpeedB1, edcu1Door6OpenB1, edcu1Door6UnknownStateB1, edcu1Door6CloseB1, edcu1Door6OpenObstacleB1, edcu1Door6SaftyLoop1B1, edcu1Door6SaftyLoop2B1,
         edcu1Door6CloseLockB1, edcu1Door6OpenFullyB1, edcu1Door6EmergencyUnlockB1, edcu1Door6IsolatedB1, edcu1Door6CLoseObstacleB1, edcu1Door6TrainLineTrustB1, edcu1Door6MajorErrorB1, edcu1Door6MinorErrorB1;
    bool edcu1Door6EnabledC1, edcu1Door6ZeroSpeedC1, edcu1Door6OpenC1, edcu1Door6UnknownStateC1, edcu1Door6CloseC1, edcu1Door6OpenObstacleC1, edcu1Door6SaftyLoop1C1, edcu1Door6SaftyLoop2C1,
         edcu1Door6CloseLockC1, edcu1Door6OpenFullyC1, edcu1Door6EmergencyUnlockC1, edcu1Door6IsolatedC1, edcu1Door6CLoseObstacleC1, edcu1Door6TrainLineTrustC1, edcu1Door6MajorErrorC1, edcu1Door6MinorErrorC1;
    bool edcu1Door6EnabledD1, edcu1Door6ZeroSpeedD1, edcu1Door6OpenD1, edcu1Door6UnknownStateD1, edcu1Door6CloseD1, edcu1Door6OpenObstacleD1, edcu1Door6SaftyLoop1D1, edcu1Door6SaftyLoop2D1,
         edcu1Door6CloseLockD1, edcu1Door6OpenFullyD1, edcu1Door6EmergencyUnlockD1, edcu1Door6IsolatedD1, edcu1Door6CLoseObstacleD1, edcu1Door6TrainLineTrustD1, edcu1Door6MajorErrorD1, edcu1Door6MinorErrorD1;
    bool edcu1Door6EnabledD2, edcu1Door6ZeroSpeedD2, edcu1Door6OpenD2, edcu1Door6UnknownStateD2, edcu1Door6CloseD2, edcu1Door6OpenObstacleD2, edcu1Door6SaftyLoop1D2, edcu1Door6SaftyLoop2D2,
         edcu1Door6CloseLockD2, edcu1Door6OpenFullyD2, edcu1Door6EmergencyUnlockD2, edcu1Door6IsolatedD2, edcu1Door6CLoseObstacleD2, edcu1Door6TrainLineTrustD2, edcu1Door6MajorErrorD2, edcu1Door6MinorErrorD2;
    bool edcu1Door6EnabledC2, edcu1Door6ZeroSpeedC2, edcu1Door6OpenC2, edcu1Door6UnknownStateC2, edcu1Door6CloseC2, edcu1Door6OpenObstacleC2, edcu1Door6SaftyLoop1C2, edcu1Door6SaftyLoop2C2,
         edcu1Door6CloseLockC2, edcu1Door6OpenFullyC2, edcu1Door6EmergencyUnlockC2, edcu1Door6IsolatedC2, edcu1Door6CLoseObstacleC2, edcu1Door6TrainLineTrustC2, edcu1Door6MajorErrorC2, edcu1Door6MinorErrorC2;
    bool edcu1Door6EnabledB2, edcu1Door6ZeroSpeedB2, edcu1Door6OpenB2, edcu1Door6UnknownStateB2, edcu1Door6CloseB2, edcu1Door6OpenObstacleB2, edcu1Door6SaftyLoop1B2, edcu1Door6SaftyLoop2B2,
         edcu1Door6CloseLockB2, edcu1Door6OpenFullyB2, edcu1Door6EmergencyUnlockB2, edcu1Door6IsolatedB2, edcu1Door6CLoseObstacleB2, edcu1Door6TrainLineTrustB2, edcu1Door6MajorErrorB2, edcu1Door6MinorErrorB2;
    bool edcu1Door6EnabledA2, edcu1Door6ZeroSpeedA2, edcu1Door6OpenA2, edcu1Door6UnknownStateA2, edcu1Door6CloseA2, edcu1Door6OpenObstacleA2, edcu1Door6SaftyLoop1A2, edcu1Door6SaftyLoop2A2,
         edcu1Door6CloseLockA2, edcu1Door6OpenFullyA2, edcu1Door6EmergencyUnlockA2, edcu1Door6IsolatedA2, edcu1Door6CLoseObstacleA2, edcu1Door6TrainLineTrustA2, edcu1Door6MajorErrorA2, edcu1Door6MinorErrorA2;

    bool edcu2Door6EnabledA1, edcu2Door6ZeroSpeedA1, edcu2Door6OpenA1, edcu2Door6UnknownStateA1, edcu2Door6CloseA1, edcu2Door6OpenObstacleA1, edcu2Door6SaftyLoop1A1, edcu2Door6SaftyLoop2A1,
         edcu2Door6CloseLockA1, edcu2Door6OpenFullyA1, edcu2Door6EmergencyUnlockA1, edcu2Door6IsolatedA1, edcu2Door6CLoseObstacleA1, edcu2Door6TrainLineTrustA1, edcu2Door6MajorErrorA1, edcu2Door6MinorErrorA1;
    bool edcu2Door6EnabledB1, edcu2Door6ZeroSpeedB1, edcu2Door6OpenB1, edcu2Door6UnknownStateB1, edcu2Door6CloseB1, edcu2Door6OpenObstacleB1, edcu2Door6SaftyLoop1B1, edcu2Door6SaftyLoop2B1,
         edcu2Door6CloseLockB1, edcu2Door6OpenFullyB1, edcu2Door6EmergencyUnlockB1, edcu2Door6IsolatedB1, edcu2Door6CLoseObstacleB1, edcu2Door6TrainLineTrustB1, edcu2Door6MajorErrorB1, edcu2Door6MinorErrorB1;
    bool edcu2Door6EnabledC1, edcu2Door6ZeroSpeedC1, edcu2Door6OpenC1, edcu2Door6UnknownStateC1, edcu2Door6CloseC1, edcu2Door6OpenObstacleC1, edcu2Door6SaftyLoop1C1, edcu2Door6SaftyLoop2C1,
         edcu2Door6CloseLockC1, edcu2Door6OpenFullyC1, edcu2Door6EmergencyUnlockC1, edcu2Door6IsolatedC1, edcu2Door6CLoseObstacleC1, edcu2Door6TrainLineTrustC1, edcu2Door6MajorErrorC1, edcu2Door6MinorErrorC1;
    bool edcu2Door6EnabledD1, edcu2Door6ZeroSpeedD1, edcu2Door6OpenD1, edcu2Door6UnknownStateD1, edcu2Door6CloseD1, edcu2Door6OpenObstacleD1, edcu2Door6SaftyLoop1D1, edcu2Door6SaftyLoop2D1,
         edcu2Door6CloseLockD1, edcu2Door6OpenFullyD1, edcu2Door6EmergencyUnlockD1, edcu2Door6IsolatedD1, edcu2Door6CLoseObstacleD1, edcu2Door6TrainLineTrustD1, edcu2Door6MajorErrorD1, edcu2Door6MinorErrorD1;
    bool edcu2Door6EnabledD2, edcu2Door6ZeroSpeedD2, edcu2Door6OpenD2, edcu2Door6UnknownStateD2, edcu2Door6CloseD2, edcu2Door6OpenObstacleD2, edcu2Door6SaftyLoop1D2, edcu2Door6SaftyLoop2D2,
         edcu2Door6CloseLockD2, edcu2Door6OpenFullyD2, edcu2Door6EmergencyUnlockD2, edcu2Door6IsolatedD2, edcu2Door6CLoseObstacleD2, edcu2Door6TrainLineTrustD2, edcu2Door6MajorErrorD2, edcu2Door6MinorErrorD2;
    bool edcu2Door6EnabledC2, edcu2Door6ZeroSpeedC2, edcu2Door6OpenC2, edcu2Door6UnknownStateC2, edcu2Door6CloseC2, edcu2Door6OpenObstacleC2, edcu2Door6SaftyLoop1C2, edcu2Door6SaftyLoop2C2,
         edcu2Door6CloseLockC2, edcu2Door6OpenFullyC2, edcu2Door6EmergencyUnlockC2, edcu2Door6IsolatedC2, edcu2Door6CLoseObstacleC2, edcu2Door6TrainLineTrustC2, edcu2Door6MajorErrorC2, edcu2Door6MinorErrorC2;
    bool edcu2Door6EnabledB2, edcu2Door6ZeroSpeedB2, edcu2Door6OpenB2, edcu2Door6UnknownStateB2, edcu2Door6CloseB2, edcu2Door6OpenObstacleB2, edcu2Door6SaftyLoop1B2, edcu2Door6SaftyLoop2B2,
         edcu2Door6CloseLockB2, edcu2Door6OpenFullyB2, edcu2Door6EmergencyUnlockB2, edcu2Door6IsolatedB2, edcu2Door6CLoseObstacleB2, edcu2Door6TrainLineTrustB2, edcu2Door6MajorErrorB2, edcu2Door6MinorErrorB2;
    bool edcu2Door6EnabledA2, edcu2Door6ZeroSpeedA2, edcu2Door6OpenA2, edcu2Door6UnknownStateA2, edcu2Door6CloseA2, edcu2Door6OpenObstacleA2, edcu2Door6SaftyLoop1A2, edcu2Door6SaftyLoop2A2,
         edcu2Door6CloseLockA2, edcu2Door6OpenFullyA2, edcu2Door6EmergencyUnlockA2, edcu2Door6IsolatedA2, edcu2Door6CLoseObstacleA2, edcu2Door6TrainLineTrustA2, edcu2Door6MajorErrorA2, edcu2Door6MinorErrorA2;

    QString edcu1Door6SoftwareVersionA1, edcu1Door6SoftwareVersionB1, edcu1Door6SoftwareVersionC1, edcu1Door6SoftwareVersionD1,
            edcu1Door6SoftwareVersionD2, edcu1Door6SoftwareVersionC2, edcu1Door6SoftwareVersionB2, edcu1Door6SoftwareVersionA2;
    QString edcu2Door6SoftwareVersionA1, edcu2Door6SoftwareVersionB1, edcu2Door6SoftwareVersionC1, edcu2Door6SoftwareVersionD1,
            edcu2Door6SoftwareVersionD2, edcu2Door6SoftwareVersionC2, edcu2Door6SoftwareVersionB2, edcu2Door6SoftwareVersionA2;

    // door 7
    bool edcu1Door7EnabledA1, edcu1Door7ZeroSpeedA1, edcu1Door7OpenA1, edcu1Door7UnknownStateA1, edcu1Door7CloseA1, edcu1Door7OpenObstacleA1, edcu1Door7SaftyLoop1A1, edcu1Door7SaftyLoop2A1,
         edcu1Door7CloseLockA1, edcu1Door7OpenFullyA1, edcu1Door7EmergencyUnlockA1, edcu1Door7IsolatedA1, edcu1Door7CLoseObstacleA1, edcu1Door7TrainLineTrustA1, edcu1Door7MajorErrorA1, edcu1Door7MinorErrorA1;
    bool edcu1Door7EnabledB1, edcu1Door7ZeroSpeedB1, edcu1Door7OpenB1, edcu1Door7UnknownStateB1, edcu1Door7CloseB1, edcu1Door7OpenObstacleB1, edcu1Door7SaftyLoop1B1, edcu1Door7SaftyLoop2B1,
         edcu1Door7CloseLockB1, edcu1Door7OpenFullyB1, edcu1Door7EmergencyUnlockB1, edcu1Door7IsolatedB1, edcu1Door7CLoseObstacleB1, edcu1Door7TrainLineTrustB1, edcu1Door7MajorErrorB1, edcu1Door7MinorErrorB1;
    bool edcu1Door7EnabledC1, edcu1Door7ZeroSpeedC1, edcu1Door7OpenC1, edcu1Door7UnknownStateC1, edcu1Door7CloseC1, edcu1Door7OpenObstacleC1, edcu1Door7SaftyLoop1C1, edcu1Door7SaftyLoop2C1,
         edcu1Door7CloseLockC1, edcu1Door7OpenFullyC1, edcu1Door7EmergencyUnlockC1, edcu1Door7IsolatedC1, edcu1Door7CLoseObstacleC1, edcu1Door7TrainLineTrustC1, edcu1Door7MajorErrorC1, edcu1Door7MinorErrorC1;
    bool edcu1Door7EnabledD1, edcu1Door7ZeroSpeedD1, edcu1Door7OpenD1, edcu1Door7UnknownStateD1, edcu1Door7CloseD1, edcu1Door7OpenObstacleD1, edcu1Door7SaftyLoop1D1, edcu1Door7SaftyLoop2D1,
         edcu1Door7CloseLockD1, edcu1Door7OpenFullyD1, edcu1Door7EmergencyUnlockD1, edcu1Door7IsolatedD1, edcu1Door7CLoseObstacleD1, edcu1Door7TrainLineTrustD1, edcu1Door7MajorErrorD1, edcu1Door7MinorErrorD1;
    bool edcu1Door7EnabledD2, edcu1Door7ZeroSpeedD2, edcu1Door7OpenD2, edcu1Door7UnknownStateD2, edcu1Door7CloseD2, edcu1Door7OpenObstacleD2, edcu1Door7SaftyLoop1D2, edcu1Door7SaftyLoop2D2,
         edcu1Door7CloseLockD2, edcu1Door7OpenFullyD2, edcu1Door7EmergencyUnlockD2, edcu1Door7IsolatedD2, edcu1Door7CLoseObstacleD2, edcu1Door7TrainLineTrustD2, edcu1Door7MajorErrorD2, edcu1Door7MinorErrorD2;
    bool edcu1Door7EnabledC2, edcu1Door7ZeroSpeedC2, edcu1Door7OpenC2, edcu1Door7UnknownStateC2, edcu1Door7CloseC2, edcu1Door7OpenObstacleC2, edcu1Door7SaftyLoop1C2, edcu1Door7SaftyLoop2C2,
         edcu1Door7CloseLockC2, edcu1Door7OpenFullyC2, edcu1Door7EmergencyUnlockC2, edcu1Door7IsolatedC2, edcu1Door7CLoseObstacleC2, edcu1Door7TrainLineTrustC2, edcu1Door7MajorErrorC2, edcu1Door7MinorErrorC2;
    bool edcu1Door7EnabledB2, edcu1Door7ZeroSpeedB2, edcu1Door7OpenB2, edcu1Door7UnknownStateB2, edcu1Door7CloseB2, edcu1Door7OpenObstacleB2, edcu1Door7SaftyLoop1B2, edcu1Door7SaftyLoop2B2,
         edcu1Door7CloseLockB2, edcu1Door7OpenFullyB2, edcu1Door7EmergencyUnlockB2, edcu1Door7IsolatedB2, edcu1Door7CLoseObstacleB2, edcu1Door7TrainLineTrustB2, edcu1Door7MajorErrorB2, edcu1Door7MinorErrorB2;
    bool edcu1Door7EnabledA2, edcu1Door7ZeroSpeedA2, edcu1Door7OpenA2, edcu1Door7UnknownStateA2, edcu1Door7CloseA2, edcu1Door7OpenObstacleA2, edcu1Door7SaftyLoop1A2, edcu1Door7SaftyLoop2A2,
         edcu1Door7CloseLockA2, edcu1Door7OpenFullyA2, edcu1Door7EmergencyUnlockA2, edcu1Door7IsolatedA2, edcu1Door7CLoseObstacleA2, edcu1Door7TrainLineTrustA2, edcu1Door7MajorErrorA2, edcu1Door7MinorErrorA2;

    bool edcu2Door7EnabledA1, edcu2Door7ZeroSpeedA1, edcu2Door7OpenA1, edcu2Door7UnknownStateA1, edcu2Door7CloseA1, edcu2Door7OpenObstacleA1, edcu2Door7SaftyLoop1A1, edcu2Door7SaftyLoop2A1,
         edcu2Door7CloseLockA1, edcu2Door7OpenFullyA1, edcu2Door7EmergencyUnlockA1, edcu2Door7IsolatedA1, edcu2Door7CLoseObstacleA1, edcu2Door7TrainLineTrustA1, edcu2Door7MajorErrorA1, edcu2Door7MinorErrorA1;
    bool edcu2Door7EnabledB1, edcu2Door7ZeroSpeedB1, edcu2Door7OpenB1, edcu2Door7UnknownStateB1, edcu2Door7CloseB1, edcu2Door7OpenObstacleB1, edcu2Door7SaftyLoop1B1, edcu2Door7SaftyLoop2B1,
         edcu2Door7CloseLockB1, edcu2Door7OpenFullyB1, edcu2Door7EmergencyUnlockB1, edcu2Door7IsolatedB1, edcu2Door7CLoseObstacleB1, edcu2Door7TrainLineTrustB1, edcu2Door7MajorErrorB1, edcu2Door7MinorErrorB1;
    bool edcu2Door7EnabledC1, edcu2Door7ZeroSpeedC1, edcu2Door7OpenC1, edcu2Door7UnknownStateC1, edcu2Door7CloseC1, edcu2Door7OpenObstacleC1, edcu2Door7SaftyLoop1C1, edcu2Door7SaftyLoop2C1,
         edcu2Door7CloseLockC1, edcu2Door7OpenFullyC1, edcu2Door7EmergencyUnlockC1, edcu2Door7IsolatedC1, edcu2Door7CLoseObstacleC1, edcu2Door7TrainLineTrustC1, edcu2Door7MajorErrorC1, edcu2Door7MinorErrorC1;
    bool edcu2Door7EnabledD1, edcu2Door7ZeroSpeedD1, edcu2Door7OpenD1, edcu2Door7UnknownStateD1, edcu2Door7CloseD1, edcu2Door7OpenObstacleD1, edcu2Door7SaftyLoop1D1, edcu2Door7SaftyLoop2D1,
         edcu2Door7CloseLockD1, edcu2Door7OpenFullyD1, edcu2Door7EmergencyUnlockD1, edcu2Door7IsolatedD1, edcu2Door7CLoseObstacleD1, edcu2Door7TrainLineTrustD1, edcu2Door7MajorErrorD1, edcu2Door7MinorErrorD1;
    bool edcu2Door7EnabledD2, edcu2Door7ZeroSpeedD2, edcu2Door7OpenD2, edcu2Door7UnknownStateD2, edcu2Door7CloseD2, edcu2Door7OpenObstacleD2, edcu2Door7SaftyLoop1D2, edcu2Door7SaftyLoop2D2,
         edcu2Door7CloseLockD2, edcu2Door7OpenFullyD2, edcu2Door7EmergencyUnlockD2, edcu2Door7IsolatedD2, edcu2Door7CLoseObstacleD2, edcu2Door7TrainLineTrustD2, edcu2Door7MajorErrorD2, edcu2Door7MinorErrorD2;
    bool edcu2Door7EnabledC2, edcu2Door7ZeroSpeedC2, edcu2Door7OpenC2, edcu2Door7UnknownStateC2, edcu2Door7CloseC2, edcu2Door7OpenObstacleC2, edcu2Door7SaftyLoop1C2, edcu2Door7SaftyLoop2C2,
         edcu2Door7CloseLockC2, edcu2Door7OpenFullyC2, edcu2Door7EmergencyUnlockC2, edcu2Door7IsolatedC2, edcu2Door7CLoseObstacleC2, edcu2Door7TrainLineTrustC2, edcu2Door7MajorErrorC2, edcu2Door7MinorErrorC2;
    bool edcu2Door7EnabledB2, edcu2Door7ZeroSpeedB2, edcu2Door7OpenB2, edcu2Door7UnknownStateB2, edcu2Door7CloseB2, edcu2Door7OpenObstacleB2, edcu2Door7SaftyLoop1B2, edcu2Door7SaftyLoop2B2,
         edcu2Door7CloseLockB2, edcu2Door7OpenFullyB2, edcu2Door7EmergencyUnlockB2, edcu2Door7IsolatedB2, edcu2Door7CLoseObstacleB2, edcu2Door7TrainLineTrustB2, edcu2Door7MajorErrorB2, edcu2Door7MinorErrorB2;
    bool edcu2Door7EnabledA2, edcu2Door7ZeroSpeedA2, edcu2Door7OpenA2, edcu2Door7UnknownStateA2, edcu2Door7CloseA2, edcu2Door7OpenObstacleA2, edcu2Door7SaftyLoop1A2, edcu2Door7SaftyLoop2A2,
         edcu2Door7CloseLockA2, edcu2Door7OpenFullyA2, edcu2Door7EmergencyUnlockA2, edcu2Door7IsolatedA2, edcu2Door7CLoseObstacleA2, edcu2Door7TrainLineTrustA2, edcu2Door7MajorErrorA2, edcu2Door7MinorErrorA2;

    QString edcu1Door7SoftwareVersionA1, edcu1Door7SoftwareVersionB1, edcu1Door7SoftwareVersionC1, edcu1Door7SoftwareVersionD1,
            edcu1Door7SoftwareVersionD2, edcu1Door7SoftwareVersionC2, edcu1Door7SoftwareVersionB2, edcu1Door7SoftwareVersionA2;
    QString edcu2Door7SoftwareVersionA1, edcu2Door7SoftwareVersionB1, edcu2Door7SoftwareVersionC1, edcu2Door7SoftwareVersionD1,
            edcu2Door7SoftwareVersionD2, edcu2Door7SoftwareVersionC2, edcu2Door7SoftwareVersionB2, edcu2Door7SoftwareVersionA2;

    // door 8
    bool edcu1Door8EnabledA1, edcu1Door8ZeroSpeedA1, edcu1Door8OpenA1, edcu1Door8UnknownStateA1, edcu1Door8CloseA1, edcu1Door8OpenObstacleA1, edcu1Door8SaftyLoop1A1, edcu1Door8SaftyLoop2A1,
         edcu1Door8CloseLockA1, edcu1Door8OpenFullyA1, edcu1Door8EmergencyUnlockA1, edcu1Door8IsolatedA1, edcu1Door8CLoseObstacleA1, edcu1Door8TrainLineTrustA1, edcu1Door8MajorErrorA1, edcu1Door8MinorErrorA1;
    bool edcu1Door8EnabledB1, edcu1Door8ZeroSpeedB1, edcu1Door8OpenB1, edcu1Door8UnknownStateB1, edcu1Door8CloseB1, edcu1Door8OpenObstacleB1, edcu1Door8SaftyLoop1B1, edcu1Door8SaftyLoop2B1,
         edcu1Door8CloseLockB1, edcu1Door8OpenFullyB1, edcu1Door8EmergencyUnlockB1, edcu1Door8IsolatedB1, edcu1Door8CLoseObstacleB1, edcu1Door8TrainLineTrustB1, edcu1Door8MajorErrorB1, edcu1Door8MinorErrorB1;
    bool edcu1Door8EnabledC1, edcu1Door8ZeroSpeedC1, edcu1Door8OpenC1, edcu1Door8UnknownStateC1, edcu1Door8CloseC1, edcu1Door8OpenObstacleC1, edcu1Door8SaftyLoop1C1, edcu1Door8SaftyLoop2C1,
         edcu1Door8CloseLockC1, edcu1Door8OpenFullyC1, edcu1Door8EmergencyUnlockC1, edcu1Door8IsolatedC1, edcu1Door8CLoseObstacleC1, edcu1Door8TrainLineTrustC1, edcu1Door8MajorErrorC1, edcu1Door8MinorErrorC1;
    bool edcu1Door8EnabledD1, edcu1Door8ZeroSpeedD1, edcu1Door8OpenD1, edcu1Door8UnknownStateD1, edcu1Door8CloseD1, edcu1Door8OpenObstacleD1, edcu1Door8SaftyLoop1D1, edcu1Door8SaftyLoop2D1,
         edcu1Door8CloseLockD1, edcu1Door8OpenFullyD1, edcu1Door8EmergencyUnlockD1, edcu1Door8IsolatedD1, edcu1Door8CLoseObstacleD1, edcu1Door8TrainLineTrustD1, edcu1Door8MajorErrorD1, edcu1Door8MinorErrorD1;
    bool edcu1Door8EnabledD2, edcu1Door8ZeroSpeedD2, edcu1Door8OpenD2, edcu1Door8UnknownStateD2, edcu1Door8CloseD2, edcu1Door8OpenObstacleD2, edcu1Door8SaftyLoop1D2, edcu1Door8SaftyLoop2D2,
         edcu1Door8CloseLockD2, edcu1Door8OpenFullyD2, edcu1Door8EmergencyUnlockD2, edcu1Door8IsolatedD2, edcu1Door8CLoseObstacleD2, edcu1Door8TrainLineTrustD2, edcu1Door8MajorErrorD2, edcu1Door8MinorErrorD2;
    bool edcu1Door8EnabledC2, edcu1Door8ZeroSpeedC2, edcu1Door8OpenC2, edcu1Door8UnknownStateC2, edcu1Door8CloseC2, edcu1Door8OpenObstacleC2, edcu1Door8SaftyLoop1C2, edcu1Door8SaftyLoop2C2,
         edcu1Door8CloseLockC2, edcu1Door8OpenFullyC2, edcu1Door8EmergencyUnlockC2, edcu1Door8IsolatedC2, edcu1Door8CLoseObstacleC2, edcu1Door8TrainLineTrustC2, edcu1Door8MajorErrorC2, edcu1Door8MinorErrorC2;
    bool edcu1Door8EnabledB2, edcu1Door8ZeroSpeedB2, edcu1Door8OpenB2, edcu1Door8UnknownStateB2, edcu1Door8CloseB2, edcu1Door8OpenObstacleB2, edcu1Door8SaftyLoop1B2, edcu1Door8SaftyLoop2B2,
         edcu1Door8CloseLockB2, edcu1Door8OpenFullyB2, edcu1Door8EmergencyUnlockB2, edcu1Door8IsolatedB2, edcu1Door8CLoseObstacleB2, edcu1Door8TrainLineTrustB2, edcu1Door8MajorErrorB2, edcu1Door8MinorErrorB2;
    bool edcu1Door8EnabledA2, edcu1Door8ZeroSpeedA2, edcu1Door8OpenA2, edcu1Door8UnknownStateA2, edcu1Door8CloseA2, edcu1Door8OpenObstacleA2, edcu1Door8SaftyLoop1A2, edcu1Door8SaftyLoop2A2,
         edcu1Door8CloseLockA2, edcu1Door8OpenFullyA2, edcu1Door8EmergencyUnlockA2, edcu1Door8IsolatedA2, edcu1Door8CLoseObstacleA2, edcu1Door8TrainLineTrustA2, edcu1Door8MajorErrorA2, edcu1Door8MinorErrorA2;

    bool edcu2Door8EnabledA1, edcu2Door8ZeroSpeedA1, edcu2Door8OpenA1, edcu2Door8UnknownStateA1, edcu2Door8CloseA1, edcu2Door8OpenObstacleA1, edcu2Door8SaftyLoop1A1, edcu2Door8SaftyLoop2A1,
         edcu2Door8CloseLockA1, edcu2Door8OpenFullyA1, edcu2Door8EmergencyUnlockA1, edcu2Door8IsolatedA1, edcu2Door8CLoseObstacleA1, edcu2Door8TrainLineTrustA1, edcu2Door8MajorErrorA1, edcu2Door8MinorErrorA1;
    bool edcu2Door8EnabledB1, edcu2Door8ZeroSpeedB1, edcu2Door8OpenB1, edcu2Door8UnknownStateB1, edcu2Door8CloseB1, edcu2Door8OpenObstacleB1, edcu2Door8SaftyLoop1B1, edcu2Door8SaftyLoop2B1,
         edcu2Door8CloseLockB1, edcu2Door8OpenFullyB1, edcu2Door8EmergencyUnlockB1, edcu2Door8IsolatedB1, edcu2Door8CLoseObstacleB1, edcu2Door8TrainLineTrustB1, edcu2Door8MajorErrorB1, edcu2Door8MinorErrorB1;
    bool edcu2Door8EnabledC1, edcu2Door8ZeroSpeedC1, edcu2Door8OpenC1, edcu2Door8UnknownStateC1, edcu2Door8CloseC1, edcu2Door8OpenObstacleC1, edcu2Door8SaftyLoop1C1, edcu2Door8SaftyLoop2C1,
         edcu2Door8CloseLockC1, edcu2Door8OpenFullyC1, edcu2Door8EmergencyUnlockC1, edcu2Door8IsolatedC1, edcu2Door8CLoseObstacleC1, edcu2Door8TrainLineTrustC1, edcu2Door8MajorErrorC1, edcu2Door8MinorErrorC1;
    bool edcu2Door8EnabledD1, edcu2Door8ZeroSpeedD1, edcu2Door8OpenD1, edcu2Door8UnknownStateD1, edcu2Door8CloseD1, edcu2Door8OpenObstacleD1, edcu2Door8SaftyLoop1D1, edcu2Door8SaftyLoop2D1,
         edcu2Door8CloseLockD1, edcu2Door8OpenFullyD1, edcu2Door8EmergencyUnlockD1, edcu2Door8IsolatedD1, edcu2Door8CLoseObstacleD1, edcu2Door8TrainLineTrustD1, edcu2Door8MajorErrorD1, edcu2Door8MinorErrorD1;
    bool edcu2Door8EnabledD2, edcu2Door8ZeroSpeedD2, edcu2Door8OpenD2, edcu2Door8UnknownStateD2, edcu2Door8CloseD2, edcu2Door8OpenObstacleD2, edcu2Door8SaftyLoop1D2, edcu2Door8SaftyLoop2D2,
         edcu2Door8CloseLockD2, edcu2Door8OpenFullyD2, edcu2Door8EmergencyUnlockD2, edcu2Door8IsolatedD2, edcu2Door8CLoseObstacleD2, edcu2Door8TrainLineTrustD2, edcu2Door8MajorErrorD2, edcu2Door8MinorErrorD2;
    bool edcu2Door8EnabledC2, edcu2Door8ZeroSpeedC2, edcu2Door8OpenC2, edcu2Door8UnknownStateC2, edcu2Door8CloseC2, edcu2Door8OpenObstacleC2, edcu2Door8SaftyLoop1C2, edcu2Door8SaftyLoop2C2,
         edcu2Door8CloseLockC2, edcu2Door8OpenFullyC2, edcu2Door8EmergencyUnlockC2, edcu2Door8IsolatedC2, edcu2Door8CLoseObstacleC2, edcu2Door8TrainLineTrustC2, edcu2Door8MajorErrorC2, edcu2Door8MinorErrorC2;
    bool edcu2Door8EnabledB2, edcu2Door8ZeroSpeedB2, edcu2Door8OpenB2, edcu2Door8UnknownStateB2, edcu2Door8CloseB2, edcu2Door8OpenObstacleB2, edcu2Door8SaftyLoop1B2, edcu2Door8SaftyLoop2B2,
         edcu2Door8CloseLockB2, edcu2Door8OpenFullyB2, edcu2Door8EmergencyUnlockB2, edcu2Door8IsolatedB2, edcu2Door8CLoseObstacleB2, edcu2Door8TrainLineTrustB2, edcu2Door8MajorErrorB2, edcu2Door8MinorErrorB2;
    bool edcu2Door8EnabledA2, edcu2Door8ZeroSpeedA2, edcu2Door8OpenA2, edcu2Door8UnknownStateA2, edcu2Door8CloseA2, edcu2Door8OpenObstacleA2, edcu2Door8SaftyLoop1A2, edcu2Door8SaftyLoop2A2,
         edcu2Door8CloseLockA2, edcu2Door8OpenFullyA2, edcu2Door8EmergencyUnlockA2, edcu2Door8IsolatedA2, edcu2Door8CLoseObstacleA2, edcu2Door8TrainLineTrustA2, edcu2Door8MajorErrorA2, edcu2Door8MinorErrorA2;

    QString edcu1Door8SoftwareVersionA1, edcu1Door8SoftwareVersionB1, edcu1Door8SoftwareVersionC1, edcu1Door8SoftwareVersionD1,
            edcu1Door8SoftwareVersionD2, edcu1Door8SoftwareVersionC2, edcu1Door8SoftwareVersionB2, edcu1Door8SoftwareVersionA2;
    QString edcu2Door8SoftwareVersionA1, edcu2Door8SoftwareVersionB1, edcu2Door8SoftwareVersionC1, edcu2Door8SoftwareVersionD1,
            edcu2Door8SoftwareVersionD2, edcu2Door8SoftwareVersionC2, edcu2Door8SoftwareVersionB2, edcu2Door8SoftwareVersionA2;

    // door 9
    bool edcu1Door9EnabledA1, edcu1Door9ZeroSpeedA1, edcu1Door9OpenA1, edcu1Door9UnknownStateA1, edcu1Door9CloseA1, edcu1Door9OpenObstacleA1, edcu1Door9SaftyLoop1A1, edcu1Door9SaftyLoop2A1,
         edcu1Door9CloseLockA1, edcu1Door9OpenFullyA1, edcu1Door9EmergencyUnlockA1, edcu1Door9IsolatedA1, edcu1Door9CLoseObstacleA1, edcu1Door9TrainLineTrustA1, edcu1Door9MajorErrorA1, edcu1Door9MinorErrorA1;
    bool edcu1Door9EnabledB1, edcu1Door9ZeroSpeedB1, edcu1Door9OpenB1, edcu1Door9UnknownStateB1, edcu1Door9CloseB1, edcu1Door9OpenObstacleB1, edcu1Door9SaftyLoop1B1, edcu1Door9SaftyLoop2B1,
         edcu1Door9CloseLockB1, edcu1Door9OpenFullyB1, edcu1Door9EmergencyUnlockB1, edcu1Door9IsolatedB1, edcu1Door9CLoseObstacleB1, edcu1Door9TrainLineTrustB1, edcu1Door9MajorErrorB1, edcu1Door9MinorErrorB1;
    bool edcu1Door9EnabledC1, edcu1Door9ZeroSpeedC1, edcu1Door9OpenC1, edcu1Door9UnknownStateC1, edcu1Door9CloseC1, edcu1Door9OpenObstacleC1, edcu1Door9SaftyLoop1C1, edcu1Door9SaftyLoop2C1,
         edcu1Door9CloseLockC1, edcu1Door9OpenFullyC1, edcu1Door9EmergencyUnlockC1, edcu1Door9IsolatedC1, edcu1Door9CLoseObstacleC1, edcu1Door9TrainLineTrustC1, edcu1Door9MajorErrorC1, edcu1Door9MinorErrorC1;
    bool edcu1Door9EnabledD1, edcu1Door9ZeroSpeedD1, edcu1Door9OpenD1, edcu1Door9UnknownStateD1, edcu1Door9CloseD1, edcu1Door9OpenObstacleD1, edcu1Door9SaftyLoop1D1, edcu1Door9SaftyLoop2D1,
         edcu1Door9CloseLockD1, edcu1Door9OpenFullyD1, edcu1Door9EmergencyUnlockD1, edcu1Door9IsolatedD1, edcu1Door9CLoseObstacleD1, edcu1Door9TrainLineTrustD1, edcu1Door9MajorErrorD1, edcu1Door9MinorErrorD1;
    bool edcu1Door9EnabledD2, edcu1Door9ZeroSpeedD2, edcu1Door9OpenD2, edcu1Door9UnknownStateD2, edcu1Door9CloseD2, edcu1Door9OpenObstacleD2, edcu1Door9SaftyLoop1D2, edcu1Door9SaftyLoop2D2,
         edcu1Door9CloseLockD2, edcu1Door9OpenFullyD2, edcu1Door9EmergencyUnlockD2, edcu1Door9IsolatedD2, edcu1Door9CLoseObstacleD2, edcu1Door9TrainLineTrustD2, edcu1Door9MajorErrorD2, edcu1Door9MinorErrorD2;
    bool edcu1Door9EnabledC2, edcu1Door9ZeroSpeedC2, edcu1Door9OpenC2, edcu1Door9UnknownStateC2, edcu1Door9CloseC2, edcu1Door9OpenObstacleC2, edcu1Door9SaftyLoop1C2, edcu1Door9SaftyLoop2C2,
         edcu1Door9CloseLockC2, edcu1Door9OpenFullyC2, edcu1Door9EmergencyUnlockC2, edcu1Door9IsolatedC2, edcu1Door9CLoseObstacleC2, edcu1Door9TrainLineTrustC2, edcu1Door9MajorErrorC2, edcu1Door9MinorErrorC2;
    bool edcu1Door9EnabledB2, edcu1Door9ZeroSpeedB2, edcu1Door9OpenB2, edcu1Door9UnknownStateB2, edcu1Door9CloseB2, edcu1Door9OpenObstacleB2, edcu1Door9SaftyLoop1B2, edcu1Door9SaftyLoop2B2,
         edcu1Door9CloseLockB2, edcu1Door9OpenFullyB2, edcu1Door9EmergencyUnlockB2, edcu1Door9IsolatedB2, edcu1Door9CLoseObstacleB2, edcu1Door9TrainLineTrustB2, edcu1Door9MajorErrorB2, edcu1Door9MinorErrorB2;
    bool edcu1Door9EnabledA2, edcu1Door9ZeroSpeedA2, edcu1Door9OpenA2, edcu1Door9UnknownStateA2, edcu1Door9CloseA2, edcu1Door9OpenObstacleA2, edcu1Door9SaftyLoop1A2, edcu1Door9SaftyLoop2A2,
         edcu1Door9CloseLockA2, edcu1Door9OpenFullyA2, edcu1Door9EmergencyUnlockA2, edcu1Door9IsolatedA2, edcu1Door9CLoseObstacleA2, edcu1Door9TrainLineTrustA2, edcu1Door9MajorErrorA2, edcu1Door9MinorErrorA2;

    bool edcu2Door9EnabledA1, edcu2Door9ZeroSpeedA1, edcu2Door9OpenA1, edcu2Door9UnknownStateA1, edcu2Door9CloseA1, edcu2Door9OpenObstacleA1, edcu2Door9SaftyLoop1A1, edcu2Door9SaftyLoop2A1,
         edcu2Door9CloseLockA1, edcu2Door9OpenFullyA1, edcu2Door9EmergencyUnlockA1, edcu2Door9IsolatedA1, edcu2Door9CLoseObstacleA1, edcu2Door9TrainLineTrustA1, edcu2Door9MajorErrorA1, edcu2Door9MinorErrorA1;
    bool edcu2Door9EnabledB1, edcu2Door9ZeroSpeedB1, edcu2Door9OpenB1, edcu2Door9UnknownStateB1, edcu2Door9CloseB1, edcu2Door9OpenObstacleB1, edcu2Door9SaftyLoop1B1, edcu2Door9SaftyLoop2B1,
         edcu2Door9CloseLockB1, edcu2Door9OpenFullyB1, edcu2Door9EmergencyUnlockB1, edcu2Door9IsolatedB1, edcu2Door9CLoseObstacleB1, edcu2Door9TrainLineTrustB1, edcu2Door9MajorErrorB1, edcu2Door9MinorErrorB1;
    bool edcu2Door9EnabledC1, edcu2Door9ZeroSpeedC1, edcu2Door9OpenC1, edcu2Door9UnknownStateC1, edcu2Door9CloseC1, edcu2Door9OpenObstacleC1, edcu2Door9SaftyLoop1C1, edcu2Door9SaftyLoop2C1,
         edcu2Door9CloseLockC1, edcu2Door9OpenFullyC1, edcu2Door9EmergencyUnlockC1, edcu2Door9IsolatedC1, edcu2Door9CLoseObstacleC1, edcu2Door9TrainLineTrustC1, edcu2Door9MajorErrorC1, edcu2Door9MinorErrorC1;
    bool edcu2Door9EnabledD1, edcu2Door9ZeroSpeedD1, edcu2Door9OpenD1, edcu2Door9UnknownStateD1, edcu2Door9CloseD1, edcu2Door9OpenObstacleD1, edcu2Door9SaftyLoop1D1, edcu2Door9SaftyLoop2D1,
         edcu2Door9CloseLockD1, edcu2Door9OpenFullyD1, edcu2Door9EmergencyUnlockD1, edcu2Door9IsolatedD1, edcu2Door9CLoseObstacleD1, edcu2Door9TrainLineTrustD1, edcu2Door9MajorErrorD1, edcu2Door9MinorErrorD1;
    bool edcu2Door9EnabledD2, edcu2Door9ZeroSpeedD2, edcu2Door9OpenD2, edcu2Door9UnknownStateD2, edcu2Door9CloseD2, edcu2Door9OpenObstacleD2, edcu2Door9SaftyLoop1D2, edcu2Door9SaftyLoop2D2,
         edcu2Door9CloseLockD2, edcu2Door9OpenFullyD2, edcu2Door9EmergencyUnlockD2, edcu2Door9IsolatedD2, edcu2Door9CLoseObstacleD2, edcu2Door9TrainLineTrustD2, edcu2Door9MajorErrorD2, edcu2Door9MinorErrorD2;
    bool edcu2Door9EnabledC2, edcu2Door9ZeroSpeedC2, edcu2Door9OpenC2, edcu2Door9UnknownStateC2, edcu2Door9CloseC2, edcu2Door9OpenObstacleC2, edcu2Door9SaftyLoop1C2, edcu2Door9SaftyLoop2C2,
         edcu2Door9CloseLockC2, edcu2Door9OpenFullyC2, edcu2Door9EmergencyUnlockC2, edcu2Door9IsolatedC2, edcu2Door9CLoseObstacleC2, edcu2Door9TrainLineTrustC2, edcu2Door9MajorErrorC2, edcu2Door9MinorErrorC2;
    bool edcu2Door9EnabledB2, edcu2Door9ZeroSpeedB2, edcu2Door9OpenB2, edcu2Door9UnknownStateB2, edcu2Door9CloseB2, edcu2Door9OpenObstacleB2, edcu2Door9SaftyLoop1B2, edcu2Door9SaftyLoop2B2,
         edcu2Door9CloseLockB2, edcu2Door9OpenFullyB2, edcu2Door9EmergencyUnlockB2, edcu2Door9IsolatedB2, edcu2Door9CLoseObstacleB2, edcu2Door9TrainLineTrustB2, edcu2Door9MajorErrorB2, edcu2Door9MinorErrorB2;
    bool edcu2Door9EnabledA2, edcu2Door9ZeroSpeedA2, edcu2Door9OpenA2, edcu2Door9UnknownStateA2, edcu2Door9CloseA2, edcu2Door9OpenObstacleA2, edcu2Door9SaftyLoop1A2, edcu2Door9SaftyLoop2A2,
         edcu2Door9CloseLockA2, edcu2Door9OpenFullyA2, edcu2Door9EmergencyUnlockA2, edcu2Door9IsolatedA2, edcu2Door9CLoseObstacleA2, edcu2Door9TrainLineTrustA2, edcu2Door9MajorErrorA2, edcu2Door9MinorErrorA2;

    QString edcu1Door9SoftwareVersionA1, edcu1Door9SoftwareVersionB1, edcu1Door9SoftwareVersionC1, edcu1Door9SoftwareVersionD1,
            edcu1Door9SoftwareVersionD2, edcu1Door9SoftwareVersionC2, edcu1Door9SoftwareVersionB2, edcu1Door9SoftwareVersionA2;
    QString edcu2Door9SoftwareVersionA1, edcu2Door9SoftwareVersionB1, edcu2Door9SoftwareVersionC1, edcu2Door9SoftwareVersionD1,
            edcu2Door9SoftwareVersionD2, edcu2Door9SoftwareVersionC2, edcu2Door9SoftwareVersionB2, edcu2Door9SoftwareVersionA2;

    // door 10
    bool edcu1Door10EnabledA1, edcu1Door10ZeroSpeedA1, edcu1Door10OpenA1, edcu1Door10UnknownStateA1, edcu1Door10CloseA1, edcu1Door10OpenObstacleA1, edcu1Door10SaftyLoop1A1, edcu1Door10SaftyLoop2A1,
         edcu1Door10CloseLockA1, edcu1Door10OpenFullyA1, edcu1Door10EmergencyUnlockA1, edcu1Door10IsolatedA1, edcu1Door10CLoseObstacleA1, edcu1Door10TrainLineTrustA1, edcu1Door10MajorErrorA1, edcu1Door10MinorErrorA1;
    bool edcu1Door10EnabledB1, edcu1Door10ZeroSpeedB1, edcu1Door10OpenB1, edcu1Door10UnknownStateB1, edcu1Door10CloseB1, edcu1Door10OpenObstacleB1, edcu1Door10SaftyLoop1B1, edcu1Door10SaftyLoop2B1,
         edcu1Door10CloseLockB1, edcu1Door10OpenFullyB1, edcu1Door10EmergencyUnlockB1, edcu1Door10IsolatedB1, edcu1Door10CLoseObstacleB1, edcu1Door10TrainLineTrustB1, edcu1Door10MajorErrorB1, edcu1Door10MinorErrorB1;
    bool edcu1Door10EnabledC1, edcu1Door10ZeroSpeedC1, edcu1Door10OpenC1, edcu1Door10UnknownStateC1, edcu1Door10CloseC1, edcu1Door10OpenObstacleC1, edcu1Door10SaftyLoop1C1, edcu1Door10SaftyLoop2C1,
         edcu1Door10CloseLockC1, edcu1Door10OpenFullyC1, edcu1Door10EmergencyUnlockC1, edcu1Door10IsolatedC1, edcu1Door10CLoseObstacleC1, edcu1Door10TrainLineTrustC1, edcu1Door10MajorErrorC1, edcu1Door10MinorErrorC1;
    bool edcu1Door10EnabledD1, edcu1Door10ZeroSpeedD1, edcu1Door10OpenD1, edcu1Door10UnknownStateD1, edcu1Door10CloseD1, edcu1Door10OpenObstacleD1, edcu1Door10SaftyLoop1D1, edcu1Door10SaftyLoop2D1,
         edcu1Door10CloseLockD1, edcu1Door10OpenFullyD1, edcu1Door10EmergencyUnlockD1, edcu1Door10IsolatedD1, edcu1Door10CLoseObstacleD1, edcu1Door10TrainLineTrustD1, edcu1Door10MajorErrorD1, edcu1Door10MinorErrorD1;
    bool edcu1Door10EnabledD2, edcu1Door10ZeroSpeedD2, edcu1Door10OpenD2, edcu1Door10UnknownStateD2, edcu1Door10CloseD2, edcu1Door10OpenObstacleD2, edcu1Door10SaftyLoop1D2, edcu1Door10SaftyLoop2D2,
         edcu1Door10CloseLockD2, edcu1Door10OpenFullyD2, edcu1Door10EmergencyUnlockD2, edcu1Door10IsolatedD2, edcu1Door10CLoseObstacleD2, edcu1Door10TrainLineTrustD2, edcu1Door10MajorErrorD2, edcu1Door10MinorErrorD2;
    bool edcu1Door10EnabledC2, edcu1Door10ZeroSpeedC2, edcu1Door10OpenC2, edcu1Door10UnknownStateC2, edcu1Door10CloseC2, edcu1Door10OpenObstacleC2, edcu1Door10SaftyLoop1C2, edcu1Door10SaftyLoop2C2,
         edcu1Door10CloseLockC2, edcu1Door10OpenFullyC2, edcu1Door10EmergencyUnlockC2, edcu1Door10IsolatedC2, edcu1Door10CLoseObstacleC2, edcu1Door10TrainLineTrustC2, edcu1Door10MajorErrorC2, edcu1Door10MinorErrorC2;
    bool edcu1Door10EnabledB2, edcu1Door10ZeroSpeedB2, edcu1Door10OpenB2, edcu1Door10UnknownStateB2, edcu1Door10CloseB2, edcu1Door10OpenObstacleB2, edcu1Door10SaftyLoop1B2, edcu1Door10SaftyLoop2B2,
         edcu1Door10CloseLockB2, edcu1Door10OpenFullyB2, edcu1Door10EmergencyUnlockB2, edcu1Door10IsolatedB2, edcu1Door10CLoseObstacleB2, edcu1Door10TrainLineTrustB2, edcu1Door10MajorErrorB2, edcu1Door10MinorErrorB2;
    bool edcu1Door10EnabledA2, edcu1Door10ZeroSpeedA2, edcu1Door10OpenA2, edcu1Door10UnknownStateA2, edcu1Door10CloseA2, edcu1Door10OpenObstacleA2, edcu1Door10SaftyLoop1A2, edcu1Door10SaftyLoop2A2,
         edcu1Door10CloseLockA2, edcu1Door10OpenFullyA2, edcu1Door10EmergencyUnlockA2, edcu1Door10IsolatedA2, edcu1Door10CLoseObstacleA2, edcu1Door10TrainLineTrustA2, edcu1Door10MajorErrorA2, edcu1Door10MinorErrorA2;

    bool edcu2Door10EnabledA1, edcu2Door10ZeroSpeedA1, edcu2Door10OpenA1, edcu2Door10UnknownStateA1, edcu2Door10CloseA1, edcu2Door10OpenObstacleA1, edcu2Door10SaftyLoop1A1, edcu2Door10SaftyLoop2A1,
         edcu2Door10CloseLockA1, edcu2Door10OpenFullyA1, edcu2Door10EmergencyUnlockA1, edcu2Door10IsolatedA1, edcu2Door10CLoseObstacleA1, edcu2Door10TrainLineTrustA1, edcu2Door10MajorErrorA1, edcu2Door10MinorErrorA1;
    bool edcu2Door10EnabledB1, edcu2Door10ZeroSpeedB1, edcu2Door10OpenB1, edcu2Door10UnknownStateB1, edcu2Door10CloseB1, edcu2Door10OpenObstacleB1, edcu2Door10SaftyLoop1B1, edcu2Door10SaftyLoop2B1,
         edcu2Door10CloseLockB1, edcu2Door10OpenFullyB1, edcu2Door10EmergencyUnlockB1, edcu2Door10IsolatedB1, edcu2Door10CLoseObstacleB1, edcu2Door10TrainLineTrustB1, edcu2Door10MajorErrorB1, edcu2Door10MinorErrorB1;
    bool edcu2Door10EnabledC1, edcu2Door10ZeroSpeedC1, edcu2Door10OpenC1, edcu2Door10UnknownStateC1, edcu2Door10CloseC1, edcu2Door10OpenObstacleC1, edcu2Door10SaftyLoop1C1, edcu2Door10SaftyLoop2C1,
         edcu2Door10CloseLockC1, edcu2Door10OpenFullyC1, edcu2Door10EmergencyUnlockC1, edcu2Door10IsolatedC1, edcu2Door10CLoseObstacleC1, edcu2Door10TrainLineTrustC1, edcu2Door10MajorErrorC1, edcu2Door10MinorErrorC1;
    bool edcu2Door10EnabledD1, edcu2Door10ZeroSpeedD1, edcu2Door10OpenD1, edcu2Door10UnknownStateD1, edcu2Door10CloseD1, edcu2Door10OpenObstacleD1, edcu2Door10SaftyLoop1D1, edcu2Door10SaftyLoop2D1,
         edcu2Door10CloseLockD1, edcu2Door10OpenFullyD1, edcu2Door10EmergencyUnlockD1, edcu2Door10IsolatedD1, edcu2Door10CLoseObstacleD1, edcu2Door10TrainLineTrustD1, edcu2Door10MajorErrorD1, edcu2Door10MinorErrorD1;
    bool edcu2Door10EnabledD2, edcu2Door10ZeroSpeedD2, edcu2Door10OpenD2, edcu2Door10UnknownStateD2, edcu2Door10CloseD2, edcu2Door10OpenObstacleD2, edcu2Door10SaftyLoop1D2, edcu2Door10SaftyLoop2D2,
         edcu2Door10CloseLockD2, edcu2Door10OpenFullyD2, edcu2Door10EmergencyUnlockD2, edcu2Door10IsolatedD2, edcu2Door10CLoseObstacleD2, edcu2Door10TrainLineTrustD2, edcu2Door10MajorErrorD2, edcu2Door10MinorErrorD2;
    bool edcu2Door10EnabledC2, edcu2Door10ZeroSpeedC2, edcu2Door10OpenC2, edcu2Door10UnknownStateC2, edcu2Door10CloseC2, edcu2Door10OpenObstacleC2, edcu2Door10SaftyLoop1C2, edcu2Door10SaftyLoop2C2,
         edcu2Door10CloseLockC2, edcu2Door10OpenFullyC2, edcu2Door10EmergencyUnlockC2, edcu2Door10IsolatedC2, edcu2Door10CLoseObstacleC2, edcu2Door10TrainLineTrustC2, edcu2Door10MajorErrorC2, edcu2Door10MinorErrorC2;
    bool edcu2Door10EnabledB2, edcu2Door10ZeroSpeedB2, edcu2Door10OpenB2, edcu2Door10UnknownStateB2, edcu2Door10CloseB2, edcu2Door10OpenObstacleB2, edcu2Door10SaftyLoop1B2, edcu2Door10SaftyLoop2B2,
         edcu2Door10CloseLockB2, edcu2Door10OpenFullyB2, edcu2Door10EmergencyUnlockB2, edcu2Door10IsolatedB2, edcu2Door10CLoseObstacleB2, edcu2Door10TrainLineTrustB2, edcu2Door10MajorErrorB2, edcu2Door10MinorErrorB2;
    bool edcu2Door10EnabledA2, edcu2Door10ZeroSpeedA2, edcu2Door10OpenA2, edcu2Door10UnknownStateA2, edcu2Door10CloseA2, edcu2Door10OpenObstacleA2, edcu2Door10SaftyLoop1A2, edcu2Door10SaftyLoop2A2,
         edcu2Door10CloseLockA2, edcu2Door10OpenFullyA2, edcu2Door10EmergencyUnlockA2, edcu2Door10IsolatedA2, edcu2Door10CLoseObstacleA2, edcu2Door10TrainLineTrustA2, edcu2Door10MajorErrorA2, edcu2Door10MinorErrorA2;

    QString edcu1Door10SoftwareVersionA1, edcu1Door10SoftwareVersionB1, edcu1Door10SoftwareVersionC1, edcu1Door10SoftwareVersionD1,
            edcu1Door10SoftwareVersionD2, edcu1Door10SoftwareVersionC2, edcu1Door10SoftwareVersionB2, edcu1Door10SoftwareVersionA2;
    QString edcu2Door10SoftwareVersionA1, edcu2Door10SoftwareVersionB1, edcu2Door10SoftwareVersionC1, edcu2Door10SoftwareVersionD1,
            edcu2Door10SoftwareVersionD2, edcu2Door10SoftwareVersionC2, edcu2Door10SoftwareVersionB2, edcu2Door10SoftwareVersionA2;

    // edcu operation status
    unsigned char edcu1OperationStatusA1, edcu2OperationStatusA1;
    unsigned char edcu1OperationStatusB1, edcu2OperationStatusB1;
    unsigned char edcu1OperationStatusC1, edcu2OperationStatusC1;
    unsigned char edcu1OperationStatusD1, edcu2OperationStatusD1;
    unsigned char edcu1OperationStatusD2, edcu2OperationStatusD2;
    unsigned char edcu1OperationStatusC2, edcu2OperationStatusC2;
    unsigned char edcu1OperationStatusB2, edcu2OperationStatusB2;
    unsigned char edcu1OperationStatusA2, edcu2OperationStatusA2;

    // the wheel diameter
    unsigned short int hmiWheelDiameterA1, hmiWheelDiameterB1, hmiWheelDiameterC1, hmiWheelDiameterD1,
                       hmiWheelDiameterA2, hmiWheelDiameterB2, hmiWheelDiameterC2, hmiWheelDiameterD2;
    bool hmiSetWheelCommandA1, hmiSetWheelCommandB1, hmiSetWheelCommandC1, hmiSetWheelCommandD1;
    bool hmiSetWheelCommandA2, hmiSetWheelCommandB2, hmiSetWheelCommandC2, hmiSetWheelCommandD2;
    bool ccuVehicleForward, ccuVehicleBackword;
    bool ccuVehicleTraction, ccuVehicleBrake;
    bool ccuCabinActiveA1, ccuCabinActiveA2;
    bool ccuEmergencyBrakeApply, ccuFastBrakeApply;
    bool ccuDirectionForward, ccuDirectionBackward;
    bool ccuNoTractionAll;

    // port 0xB10 and 0xB11, the atc signals
    bool atcAmMode, atcAtbMode, atcPmMode, atcRmf1Mode, atcRmf2Mode, atcRmrMode, atcCbtcMode;
    unsigned short int atcCurrentStation, atcNextStation, atcFinalStatiion;

    // the time set command
    bool hmiSetTimeCommand;

    // ccu to siv
    bool ccuSivStartA1, ccuSivStartC1, ccuSivStartC2, ccuSivStartA2;

    // the port 0x308, 0x309, 0x318 and 0x319
    bool ccuPantographErrorB1, ccuPantographErrorD1, ccuPantographErrorB2;
    bool ccuPantographUpB1, ccuPantographUpD1, ccuPantographUpB2;
    int ccuHandleLevel;

    bool ccuAirConditionerDeloadA1, ccuAirConditionerDeloadB1, ccuAirConditionerDeloadC1, ccuAirConditionerDeloadD1,
         ccuAirConditionerDeloadD2, ccuAirConditionerDeloadC2, ccuAirConditionerDeloadB2, ccuAirConditionerDeloadA2;
    unsigned char ccuAirConditionerModeA1, ccuAirConditionerModeB1, ccuAirConditionerModeC1, ccuAirConditionerModeD1;
    unsigned char ccuAirConditionerModeA2, ccuAirConditionerModeB2, ccuAirConditionerModeC2, ccuAirConditionerModeD2;
    unsigned char ccuAirConditionerTemperatureA1, ccuAirConditionerTemperatureB1, ccuAirConditionerTemperatureC1, ccuAirConditionerTemperatureD1;
    unsigned char ccuAirConditionerTemperatureA2, ccuAirConditionerTemperatureB2, ccuAirConditionerTemperatureC2, ccuAirConditionerTemperatureD2;

    unsigned char hmiAirConditionerModeA1, hmiAirConditionerModeB1, hmiAirConditionerModeC1, hmiAirConditionerModeD1;
    unsigned char hmiAirConditionerModeA2, hmiAirConditionerModeB2, hmiAirConditionerModeC2, hmiAirConditionerModeD2;
    unsigned char hmiAirConditionerTemperatureA1, hmiAirConditionerTemperatureB1, hmiAirConditionerTemperatureC1, hmiAirConditionerTemperatureD1;
    unsigned char hmiAirConditionerTemperatureA2, hmiAirConditionerTemperatureB2, hmiAirConditionerTemperatureC2, hmiAirConditionerTemperatureD2;

    // added by Deng Ran on the 08th of May 2017
    signed short int ccuAcceleratedSpeed;
    unsigned short int ccuBrakeDistance, ccuTractionDistance;
    float ccuTractionStartSpeed, ccuTractionEndSpeed, ccuBrakeStartSpeed, ccuBrakeEndSpeed;

    bool hmiAirConditionerFireMode, hmiAirConditionerPreCoolMode;

    bool hmiSetAirConditionerModeCommandA1, hmiSetAirConditionerModeCommandB1, hmiSetAirConditionerModeCommandC1, hmiSetAirConditionerModeCommandD1;
    bool hmiSetAirConditionerModeCommandA2, hmiSetAirConditionerModeCommandB2, hmiSetAirConditionerModeCommandC2, hmiSetAirConditionerModeCommandD2;
    bool hmiSetAirConditionerTemperatureCommandA1, hmiSetAirConditionerTemperatureCommandB1, hmiSetAirConditionerTemperatureCommandC1, hmiSetAirConditionerTemperatureCommandD1;
    bool hmiSetAirConditionerTemperatureCommandA2, hmiSetAirConditionerTemperatureCommandB2, hmiSetAirConditionerTemperatureCommandC2, hmiSetAirConditionerTemperatureCommandD2;

    unsigned short int ccuWheelDiameterA1, ccuWheelDiameterB1, ccuWheelDiameterC1, ccuWheelDiameterD1;
    unsigned short int ccuWheelDiameterA2, ccuWheelDiameterB2, ccuWheelDiameterC2, ccuWheelDiameterD2;
    float ccuVehicleSpeed;
    unsigned short int ccuLimitedSpeed;
    bool hmiSivCutoutA1, hmiSivCutoutC1, hmiSivCutoutC2, hmiSivCutoutA2;
    bool hmiDcuBrakeResistorTestB1, hmiDcuBrakeResistorTestC1, hmiDcuBrakeResistorTestD1,
         hmiDcuBrakeResistorTestB2, hmiDcuBrakeResistorTestC2, hmiDcuBrakeResistorTestD2,
         hmiElectricCutout;
    unsigned char ccuYear, ccuMonth, ccuDay, ccuHour, ccuMinute, ccuSecond;
    bool ccuTimeValid;

    // the signals of bcu about apply and release
    bool bcu1Bogie1MajorFaultA1, bcu1Bogie1SlightFaultA1, bcu1Bogie2MajorFaultA1, bcu1Bogie2SlightFaultA1;
    bool bcu1Bogie1MajorFaultB1, bcu1Bogie1SlightFaultB1, bcu1Bogie2MajorFaultB1, bcu1Bogie2SlightFaultB1;
    bool bcu1Bogie1MajorFaultC1, bcu1Bogie1SlightFaultC1, bcu1Bogie2MajorFaultC1, bcu1Bogie2SlightFaultC1;
    bool bcu1Bogie1MajorFaultD1, bcu1Bogie1SlightFaultD1, bcu1Bogie2MajorFaultD1, bcu1Bogie2SlightFaultD1;

    bool bcu2Bogie1MajorFaultA1, bcu2Bogie1SlightFaultA1, bcu2Bogie2MajorFaultA1, bcu2Bogie2SlightFaultA1;
    bool bcu2Bogie1MajorFaultB1, bcu2Bogie1SlightFaultB1, bcu2Bogie2MajorFaultB1, bcu2Bogie2SlightFaultB1;
    bool bcu2Bogie1MajorFaultC1, bcu2Bogie1SlightFaultC1, bcu2Bogie2MajorFaultC1, bcu2Bogie2SlightFaultC1;
    bool bcu2Bogie1MajorFaultD1, bcu2Bogie1SlightFaultD1, bcu2Bogie2MajorFaultD1, bcu2Bogie2SlightFaultD1;

    bool hmiBogie1MajorFaultA1, hmiBogie1SlightFaultA1, hmiBogie2MajorFaultA1, hmiBogie2SlightFaultA1;
    bool hmiBogie1MajorFaultB1, hmiBogie1SlightFaultB1, hmiBogie2MajorFaultB1, hmiBogie2SlightFaultB1;
    bool hmiBogie1MajorFaultC1, hmiBogie1SlightFaultC1, hmiBogie2MajorFaultC1, hmiBogie2SlightFaultC1;
    bool hmiBogie1MajorFaultD1, hmiBogie1SlightFaultD1, hmiBogie2MajorFaultD1, hmiBogie2SlightFaultD1;

    bool bcu3Bogie1MajorFaultA2, bcu3Bogie1SlightFaultA2, bcu3Bogie2MajorFaultA2, bcu3Bogie2SlightFaultA2;
    bool bcu3Bogie1MajorFaultB2, bcu3Bogie1SlightFaultB2, bcu3Bogie2MajorFaultB2, bcu3Bogie2SlightFaultB2;
    bool bcu3Bogie1MajorFaultC2, bcu3Bogie1SlightFaultC2, bcu3Bogie2MajorFaultC2, bcu3Bogie2SlightFaultC2;
    bool bcu3Bogie1MajorFaultD2, bcu3Bogie1SlightFaultD2, bcu3Bogie2MajorFaultD2, bcu3Bogie2SlightFaultD2;

    bool bcu4Bogie1MajorFaultA2, bcu4Bogie1SlightFaultA2, bcu4Bogie2MajorFaultA2, bcu4Bogie2SlightFaultA2;
    bool bcu4Bogie1MajorFaultB2, bcu4Bogie1SlightFaultB2, bcu4Bogie2MajorFaultB2, bcu4Bogie2SlightFaultB2;
    bool bcu4Bogie1MajorFaultC2, bcu4Bogie1SlightFaultC2, bcu4Bogie2MajorFaultC2, bcu4Bogie2SlightFaultC2;
    bool bcu4Bogie1MajorFaultD2, bcu4Bogie1SlightFaultD2, bcu4Bogie2MajorFaultD2, bcu4Bogie2SlightFaultD2;

    bool hmiBogie1MajorFaultA2, hmiBogie1SlightFaultA2, hmiBogie2MajorFaultA2, hmiBogie2SlightFaultA2;
    bool hmiBogie1MajorFaultB2, hmiBogie1SlightFaultB2, hmiBogie2MajorFaultB2, hmiBogie2SlightFaultB2;
    bool hmiBogie1MajorFaultC2, hmiBogie1SlightFaultC2, hmiBogie2MajorFaultC2, hmiBogie2SlightFaultC2;
    bool hmiBogie1MajorFaultD2, hmiBogie1SlightFaultD2, hmiBogie2MajorFaultD2, hmiBogie2SlightFaultD2;

    bool bcu1Bogie1SlideA1, bcu1Bogie1EmergercyBrakeApplyA1, bcu1Bogie1EmergencyBrakeValidA1, bcu1Bogie1AirBrakeApplyA1, bcu1Bogie1AirPressureLowA1;
    bool bcu1Bogie1ParkingBrakeReleaseA1, bcu1Bogie1AirPressureStateA1, bcu1Bogie1LoadValidA1;
    bool bcu1Bogie1SlideB1, bcu1Bogie1EmergercyBrakeApplyB1, bcu1Bogie1EmergencyBrakeValidB1, bcu1Bogie1AirBrakeApplyB1, bcu1Bogie1AirPressureLowB1;
    bool bcu1Bogie1ParkingBrakeReleaseB1, bcu1Bogie1AirPressureStateB1, bcu1Bogie1LoadValidB1;
    bool bcu1Bogie1SlideC1, bcu1Bogie1EmergercyBrakeApplyC1, bcu1Bogie1EmergencyBrakeValidC1, bcu1Bogie1AirBrakeApplyC1, bcu1Bogie1AirPressureLowC1;
    bool bcu1Bogie1ParkingBrakeReleaseC1, bcu1Bogie1AirPressureStateC1, bcu1Bogie1LoadValidC1;
    bool bcu1Bogie1SlideD1, bcu1Bogie1EmergercyBrakeApplyD1, bcu1Bogie1EmergencyBrakeValidD1, bcu1Bogie1AirBrakeApplyD1, bcu1Bogie1AirPressureLowD1;
    bool bcu1Bogie1ParkingBrakeReleaseD1, bcu1Bogie1AirPressureStateD1, bcu1Bogie1LoadValidD1;

    bool bcu1Bogie2SlideA1, bcu1Bogie2EmergercyBrakeApplyA1, bcu1Bogie2EmergencyBrakeValidA1, bcu1Bogie2AirBrakeApplyA1, bcu1Bogie2AirPressureLowA1;
    bool bcu1Bogie2ParkingBrakeReleaseA1, bcu1Bogie2AirPressureStateA1, bcu1Bogie2LoadValidA1;
    bool bcu1Bogie2SlideB1, bcu1Bogie2EmergercyBrakeApplyB1, bcu1Bogie2EmergencyBrakeValidB1, bcu1Bogie2AirBrakeApplyB1, bcu1Bogie2AirPressureLowB1;
    bool bcu1Bogie2ParkingBrakeReleaseB1, bcu1Bogie2AirPressureStateB1, bcu1Bogie2LoadValidB1;
    bool bcu1Bogie2SlideC1, bcu1Bogie2EmergercyBrakeApplyC1, bcu1Bogie2EmergencyBrakeValidC1, bcu1Bogie2AirBrakeApplyC1, bcu1Bogie2AirPressureLowC1;
    bool bcu1Bogie2ParkingBrakeReleaseC1, bcu1Bogie2AirPressureStateC1, bcu1Bogie2LoadValidC1;
    bool bcu1Bogie2SlideD1, bcu1Bogie2EmergercyBrakeApplyD1, bcu1Bogie2EmergencyBrakeValidD1, bcu1Bogie2AirBrakeApplyD1, bcu1Bogie2AirPressureLowD1;
    bool bcu1Bogie2ParkingBrakeReleaseD1, bcu1Bogie2AirPressureStateD1, bcu1Bogie2LoadValidD1;

    bool bcu2Bogie1SlideA1, bcu2Bogie1EmergercyBrakeApplyA1, bcu2Bogie1EmergencyBrakeValidA1, bcu2Bogie1AirBrakeApplyA1, bcu2Bogie1AirPressureLowA1;
    bool bcu2Bogie1ParkingBrakeReleaseA1, bcu2Bogie1AirPressureStateA1, bcu2Bogie1LoadValidA1;
    bool bcu2Bogie1SlideB1, bcu2Bogie1EmergercyBrakeApplyB1, bcu2Bogie1EmergencyBrakeValidB1, bcu2Bogie1AirBrakeApplyB1, bcu2Bogie1AirPressureLowB1;
    bool bcu2Bogie1ParkingBrakeReleaseB1, bcu2Bogie1AirPressureStateB1, bcu2Bogie1LoadValidB1;
    bool bcu2Bogie1SlideC1, bcu2Bogie1EmergercyBrakeApplyC1, bcu2Bogie1EmergencyBrakeValidC1, bcu2Bogie1AirBrakeApplyC1, bcu2Bogie1AirPressureLowC1;
    bool bcu2Bogie1ParkingBrakeReleaseC1, bcu2Bogie1AirPressureStateC1, bcu2Bogie1LoadValidC1;
    bool bcu2Bogie1SlideD1, bcu2Bogie1EmergercyBrakeApplyD1, bcu2Bogie1EmergencyBrakeValidD1, bcu2Bogie1AirBrakeApplyD1, bcu2Bogie1AirPressureLowD1;
    bool bcu2Bogie1ParkingBrakeReleaseD1, bcu2Bogie1AirPressureStateD1, bcu2Bogie1LoadValidD1;

    bool bcu2Bogie2SlideA1, bcu2Bogie2EmergercyBrakeApplyA1, bcu2Bogie2EmergencyBrakeValidA1, bcu2Bogie2AirBrakeApplyA1, bcu2Bogie2AirPressureLowA1;
    bool bcu2Bogie2ParkingBrakeReleaseA1, bcu2Bogie2AirPressureStateA1, bcu2Bogie2LoadValidA1;
    bool bcu2Bogie2SlideB1, bcu2Bogie2EmergercyBrakeApplyB1, bcu2Bogie2EmergencyBrakeValidB1, bcu2Bogie2AirBrakeApplyB1, bcu2Bogie2AirPressureLowB1;
    bool bcu2Bogie2ParkingBrakeReleaseB1, bcu2Bogie2AirPressureStateB1, bcu2Bogie2LoadValidB1;
    bool bcu2Bogie2SlideC1, bcu2Bogie2EmergercyBrakeApplyC1, bcu2Bogie2EmergencyBrakeValidC1, bcu2Bogie2AirBrakeApplyC1, bcu2Bogie2AirPressureLowC1;
    bool bcu2Bogie2ParkingBrakeReleaseC1, bcu2Bogie2AirPressureStateC1, bcu2Bogie2LoadValidC1;
    bool bcu2Bogie2SlideD1, bcu2Bogie2EmergercyBrakeApplyD1, bcu2Bogie2EmergencyBrakeValidD1, bcu2Bogie2AirBrakeApplyD1, bcu2Bogie2AirPressureLowD1;
    bool bcu2Bogie2ParkingBrakeReleaseD1, bcu2Bogie2AirPressureStateD1, bcu2Bogie2LoadValidD1;

    bool hmiBogie1SlideA1, hmiBogie1EmergercyBrakeApplyA1, hmiBogie1EmergencyBrakeValidA1, hmiBogie1AirBrakeApplyA1, hmiBogie1AirPressureLowA1;
    bool hmiBogie1ParkingBrakeReleaseA1, hmiBogie1AirPressureStateA1, hmiBogie1LoadValidA1;
    bool hmiBogie1SlideB1, hmiBogie1EmergercyBrakeApplyB1, hmiBogie1EmergencyBrakeValidB1, hmiBogie1AirBrakeApplyB1, hmiBogie1AirPressureLowB1;
    bool hmiBogie1ParkingBrakeReleaseB1, hmiBogie1AirPressureStateB1, hmiBogie1LoadValidB1;
    bool hmiBogie1SlideC1, hmiBogie1EmergercyBrakeApplyC1, hmiBogie1EmergencyBrakeValidC1, hmiBogie1AirBrakeApplyC1, hmiBogie1AirPressureLowC1;
    bool hmiBogie1ParkingBrakeReleaseC1, hmiBogie1AirPressureStateC1, hmiBogie1LoadValidC1;
    bool hmiBogie1SlideD1, hmiBogie1EmergercyBrakeApplyD1, hmiBogie1EmergencyBrakeValidD1, hmiBogie1AirBrakeApplyD1, hmiBogie1AirPressureLowD1;
    bool hmiBogie1ParkingBrakeReleaseD1, hmiBogie1AirPressureStateD1, hmiBogie1LoadValidD1;

    bool hmiBogie2SlideA1, hmiBogie2EmergercyBrakeApplyA1, hmiBogie2EmergencyBrakeValidA1, hmiBogie2AirBrakeApplyA1, hmiBogie2AirPressureLowA1;
    bool hmiBogie2ParkingBrakeReleaseA1, hmiBogie2AirPressureStateA1, hmiBogie2LoadValidA1;
    bool hmiBogie2SlideB1, hmiBogie2EmergercyBrakeApplyB1, hmiBogie2EmergencyBrakeValidB1, hmiBogie2AirBrakeApplyB1, hmiBogie2AirPressureLowB1;
    bool hmiBogie2ParkingBrakeReleaseB1, hmiBogie2AirPressureStateB1, hmiBogie2LoadValidB1;
    bool hmiBogie2SlideC1, hmiBogie2EmergercyBrakeApplyC1, hmiBogie2EmergencyBrakeValidC1, hmiBogie2AirBrakeApplyC1, hmiBogie2AirPressureLowC1;
    bool hmiBogie2ParkingBrakeReleaseC1, hmiBogie2AirPressureStateC1, hmiBogie2LoadValidC1;
    bool hmiBogie2SlideD1, hmiBogie2EmergercyBrakeApplyD1, hmiBogie2EmergencyBrakeValidD1, hmiBogie2AirBrakeApplyD1, hmiBogie2AirPressureLowD1;
    bool hmiBogie2ParkingBrakeReleaseD1, hmiBogie2AirPressureStateD1, hmiBogie2LoadValidD1;

    bool bcu3Bogie1SlideA2, bcu3Bogie1EmergercyBrakeApplyA2, bcu3Bogie1EmergencyBrakeValidA2, bcu3Bogie1AirBrakeApplyA2, bcu3Bogie1AirPressureLowA2;
    bool bcu3Bogie1ParkingBrakeReleaseA2, bcu3Bogie1AirPressureStateA2, bcu3Bogie1LoadValidA2;
    bool bcu3Bogie1SlideB2, bcu3Bogie1EmergercyBrakeApplyB2, bcu3Bogie1EmergencyBrakeValidB2, bcu3Bogie1AirBrakeApplyB2, bcu3Bogie1AirPressureLowB2;
    bool bcu3Bogie1ParkingBrakeReleaseB2, bcu3Bogie1AirPressureStateB2, bcu3Bogie1LoadValidB2;
    bool bcu3Bogie1SlideC2, bcu3Bogie1EmergercyBrakeApplyC2, bcu3Bogie1EmergencyBrakeValidC2, bcu3Bogie1AirBrakeApplyC2, bcu3Bogie1AirPressureLowC2;
    bool bcu3Bogie1ParkingBrakeReleaseC2, bcu3Bogie1AirPressureStateC2, bcu3Bogie1LoadValidC2;
    bool bcu3Bogie1SlideD2, bcu3Bogie1EmergercyBrakeApplyD2, bcu3Bogie1EmergencyBrakeValidD2, bcu3Bogie1AirBrakeApplyD2, bcu3Bogie1AirPressureLowD2;
    bool bcu3Bogie1ParkingBrakeReleaseD2, bcu3Bogie1AirPressureStateD2, bcu3Bogie1LoadValidD2;

    bool bcu3Bogie2SlideA2, bcu3Bogie2EmergercyBrakeApplyA2, bcu3Bogie2EmergencyBrakeValidA2, bcu3Bogie2AirBrakeApplyA2, bcu3Bogie2AirPressureLowA2;
    bool bcu3Bogie2ParkingBrakeReleaseA2, bcu3Bogie2AirPressureStateA2, bcu3Bogie2LoadValidA2;
    bool bcu3Bogie2SlideB2, bcu3Bogie2EmergercyBrakeApplyB2, bcu3Bogie2EmergencyBrakeValidB2, bcu3Bogie2AirBrakeApplyB2, bcu3Bogie2AirPressureLowB2;
    bool bcu3Bogie2ParkingBrakeReleaseB2, bcu3Bogie2AirPressureStateB2, bcu3Bogie2LoadValidB2;
    bool bcu3Bogie2SlideC2, bcu3Bogie2EmergercyBrakeApplyC2, bcu3Bogie2EmergencyBrakeValidC2, bcu3Bogie2AirBrakeApplyC2, bcu3Bogie2AirPressureLowC2;
    bool bcu3Bogie2ParkingBrakeReleaseC2, bcu3Bogie2AirPressureStateC2, bcu3Bogie2LoadValidC2;
    bool bcu3Bogie2SlideD2, bcu3Bogie2EmergercyBrakeApplyD2, bcu3Bogie2EmergencyBrakeValidD2, bcu3Bogie2AirBrakeApplyD2, bcu3Bogie2AirPressureLowD2;
    bool bcu3Bogie2ParkingBrakeReleaseD2, bcu3Bogie2AirPressureStateD2, bcu3Bogie2LoadValidD2;

    bool bcu4Bogie1SlideA2, bcu4Bogie1EmergercyBrakeApplyA2, bcu4Bogie1EmergencyBrakeValidA2, bcu4Bogie1AirBrakeApplyA2, bcu4Bogie1AirPressureLowA2;
    bool bcu4Bogie1ParkingBrakeReleaseA2, bcu4Bogie1AirPressureStateA2, bcu4Bogie1LoadValidA2;
    bool bcu4Bogie1SlideB2, bcu4Bogie1EmergercyBrakeApplyB2, bcu4Bogie1EmergencyBrakeValidB2, bcu4Bogie1AirBrakeApplyB2, bcu4Bogie1AirPressureLowB2;
    bool bcu4Bogie1ParkingBrakeReleaseB2, bcu4Bogie1AirPressureStateB2, bcu4Bogie1LoadValidB2;
    bool bcu4Bogie1SlideC2, bcu4Bogie1EmergercyBrakeApplyC2, bcu4Bogie1EmergencyBrakeValidC2, bcu4Bogie1AirBrakeApplyC2, bcu4Bogie1AirPressureLowC2;
    bool bcu4Bogie1ParkingBrakeReleaseC2, bcu4Bogie1AirPressureStateC2, bcu4Bogie1LoadValidC2;
    bool bcu4Bogie1SlideD2, bcu4Bogie1EmergercyBrakeApplyD2, bcu4Bogie1EmergencyBrakeValidD2, bcu4Bogie1AirBrakeApplyD2, bcu4Bogie1AirPressureLowD2;
    bool bcu4Bogie1ParkingBrakeReleaseD2, bcu4Bogie1AirPressureStateD2, bcu4Bogie1LoadValidD2;

    bool bcu4Bogie2SlideA2, bcu4Bogie2EmergercyBrakeApplyA2, bcu4Bogie2EmergencyBrakeValidA2, bcu4Bogie2AirBrakeApplyA2, bcu4Bogie2AirPressureLowA2;
    bool bcu4Bogie2ParkingBrakeReleaseA2, bcu4Bogie2AirPressureStateA2, bcu4Bogie2LoadValidA2;
    bool bcu4Bogie2SlideB2, bcu4Bogie2EmergercyBrakeApplyB2, bcu4Bogie2EmergencyBrakeValidB2, bcu4Bogie2AirBrakeApplyB2, bcu4Bogie2AirPressureLowB2;
    bool bcu4Bogie2ParkingBrakeReleaseB2, bcu4Bogie2AirPressureStateB2, bcu4Bogie2LoadValidB2;
    bool bcu4Bogie2SlideC2, bcu4Bogie2EmergercyBrakeApplyC2, bcu4Bogie2EmergencyBrakeValidC2, bcu4Bogie2AirBrakeApplyC2, bcu4Bogie2AirPressureLowC2;
    bool bcu4Bogie2ParkingBrakeReleaseC2, bcu4Bogie2AirPressureStateC2, bcu4Bogie2LoadValidC2;
    bool bcu4Bogie2SlideD2, bcu4Bogie2EmergercyBrakeApplyD2, bcu4Bogie2EmergencyBrakeValidD2, bcu4Bogie2AirBrakeApplyD2, bcu4Bogie2AirPressureLowD2;
    bool bcu4Bogie2ParkingBrakeReleaseD2, bcu4Bogie2AirPressureStateD2, bcu4Bogie2LoadValidD2;

    bool hmiBogie1SlideA2, hmiBogie1EmergercyBrakeApplyA2, hmiBogie1EmergencyBrakeValidA2, hmiBogie1AirBrakeApplyA2, hmiBogie1AirPressureLowA2;
    bool hmiBogie1ParkingBrakeReleaseA2, hmiBogie1AirPressureStateA2, hmiBogie1LoadValidA2;
    bool hmiBogie1SlideB2, hmiBogie1EmergercyBrakeApplyB2, hmiBogie1EmergencyBrakeValidB2, hmiBogie1AirBrakeApplyB2, hmiBogie1AirPressureLowB2;
    bool hmiBogie1ParkingBrakeReleaseB2, hmiBogie1AirPressureStateB2, hmiBogie1LoadValidB2;
    bool hmiBogie1SlideC2, hmiBogie1EmergercyBrakeApplyC2, hmiBogie1EmergencyBrakeValidC2, hmiBogie1AirBrakeApplyC2, hmiBogie1AirPressureLowC2;
    bool hmiBogie1ParkingBrakeReleaseC2, hmiBogie1AirPressureStateC2, hmiBogie1LoadValidC2;
    bool hmiBogie1SlideD2, hmiBogie1EmergercyBrakeApplyD2, hmiBogie1EmergencyBrakeValidD2, hmiBogie1AirBrakeApplyD2, hmiBogie1AirPressureLowD2;
    bool hmiBogie1ParkingBrakeReleaseD2, hmiBogie1AirPressureStateD2, hmiBogie1LoadValidD2;

    bool hmiBogie2SlideA2, hmiBogie2EmergercyBrakeApplyA2, hmiBogie2EmergencyBrakeValidA2, hmiBogie2AirBrakeApplyA2, hmiBogie2AirPressureLowA2;
    bool hmiBogie2ParkingBrakeReleaseA2, hmiBogie2AirPressureStateA2, hmiBogie2LoadValidA2;
    bool hmiBogie2SlideB2, hmiBogie2EmergercyBrakeApplyB2, hmiBogie2EmergencyBrakeValidB2, hmiBogie2AirBrakeApplyB2, hmiBogie2AirPressureLowB2;
    bool hmiBogie2ParkingBrakeReleaseB2, hmiBogie2AirPressureStateB2, hmiBogie2LoadValidB2;
    bool hmiBogie2SlideC2, hmiBogie2EmergercyBrakeApplyC2, hmiBogie2EmergencyBrakeValidC2, hmiBogie2AirBrakeApplyC2, hmiBogie2AirPressureLowC2;
    bool hmiBogie2ParkingBrakeReleaseC2, hmiBogie2AirPressureStateC2, hmiBogie2LoadValidC2;
    bool hmiBogie2SlideD2, hmiBogie2EmergercyBrakeApplyD2, hmiBogie2EmergencyBrakeValidD2, hmiBogie2AirBrakeApplyD2, hmiBogie2AirPressureLowD2;
    bool hmiBogie2ParkingBrakeReleaseD2, hmiBogie2AirPressureStateD2, hmiBogie2LoadValidD2;

    // the signals of bcu about self-check
    bool bcu1bogie1SelfCheckFailureA1, bcu1bogie1SelfCheckFailureB1, bcu1bogie1SelfCheckFailureC1, bcu1bogie1SelfCheckFailureD1;
    bool bcu1bogie2SelfCheckFailureA1, bcu1bogie2SelfCheckFailureB1, bcu1bogie2SelfCheckFailureC1, bcu1bogie2SelfCheckFailureD1;
    bool bcu2bogie1SelfCheckFailureA1, bcu2bogie1SelfCheckFailureB1, bcu2bogie1SelfCheckFailureC1, bcu2bogie1SelfCheckFailureD1;
    bool bcu2bogie2SelfCheckFailureA1, bcu2bogie2SelfCheckFailureB1, bcu2bogie2SelfCheckFailureC1, bcu2bogie2SelfCheckFailureD1;
    bool bcu3bogie1SelfCheckFailureA2, bcu3bogie1SelfCheckFailureB2, bcu3bogie1SelfCheckFailureC2, bcu3bogie1SelfCheckFailureD2;
    bool bcu3bogie2SelfCheckFailureA2, bcu3bogie2SelfCheckFailureB2, bcu3bogie2SelfCheckFailureC2, bcu3bogie2SelfCheckFailureD2;
    bool bcu4bogie1SelfCheckFailureA2, bcu4bogie1SelfCheckFailureB2, bcu4bogie1SelfCheckFailureC2, bcu4bogie1SelfCheckFailureD2;
    bool bcu4bogie2SelfCheckFailureA2, bcu4bogie2SelfCheckFailureB2, bcu4bogie2SelfCheckFailureC2, bcu4bogie2SelfCheckFailureD2;

    bool bcu1SelfCheckInterrupted, bcu1SelfCheckActive, bcu1SelfCheckSuccessful, bcu1SelfCheckReady, bcu124hUncheck, bcu126hUncheck;
    bool bcu2SelfCheckInterrupted, bcu2SelfCheckActive, bcu2SelfCheckSuccessful, bcu2SelfCheckReady, bcu224hUncheck, bcu226hUncheck;
    bool bcu3SelfCheckInterrupted, bcu3SelfCheckActive, bcu3SelfCheckSuccessful, bcu3SelfCheckReady, bcu324hUncheck, bcu326hUncheck;
    bool bcu4SelfCheckInterrupted, bcu4SelfCheckActive, bcu4SelfCheckSuccessful, bcu4SelfCheckReady, bcu424hUncheck, bcu426hUncheck;

    // the signals of bcu in hmi
    bool hmiBogie1SelfCheckFailureA1, hmiBogie1SelfCheckFailureB1, hmiBogie1SelfCheckFailureC1, hmiBogie1SelfCheckFailureD1;
    bool hmiBogie2SelfCheckFailureA1, hmiBogie2SelfCheckFailureB1, hmiBogie2SelfCheckFailureC1, hmiBogie2SelfCheckFailureD1;
    bool hmiBogie1SelfCheckFailureA2, hmiBogie1SelfCheckFailureB2, hmiBogie1SelfCheckFailureC2, hmiBogie1SelfCheckFailureD2;
    bool hmiBogie2SelfCheckFailureA2, hmiBogie2SelfCheckFailureB2, hmiBogie2SelfCheckFailureC2, hmiBogie2SelfCheckFailureD2;
    bool hmiSelfCheckInterruptedA1, hmiSelfCheckActiveA1, hmiSelfCheckSuccessfulA1, hmiSelfCheckReadyA1, hmi24hUncheckA1, hmi26hUncheckA1;
    bool hmiSelfCheckInterruptedA2, hmiSelfCheckActiveA2, hmiSelfCheckSuccessfulA2, hmiSelfCheckReadyA2, hmi24hUncheckA2, hmi26hUncheckA2;

    // the traction state
    bool tcuRunningStateB1, tcuMajorFaultB1, tcuMinorFaultB1, tcuCutoutB1;
    bool tcuRunningStateC1, tcuMajorFaultC1, tcuMinorFaultC1, tcuCutoutC1;
    bool tcuRunningStateD1, tcuMajorFaultD1, tcuMinorFaultD1, tcuCutoutD1;
    bool tcuRunningStateD2, tcuMajorFaultD2, tcuMinorFaultD2, tcuCutoutD2;
    bool tcuRunningStateC2, tcuMajorFaultC2, tcuMinorFaultC2, tcuCutoutC2;
    bool tcuRunningStateB2, tcuMajorFaultB2, tcuMinorFaultB2, tcuCutoutB2;

    // the brake signals
    bool bcuMasterSlaveA1, bcuMasterSlaveD1, bcuMasterSlaveD2, bcuMasterSlaveA2;
    bool bcuParkingBrakeBogie1A1, bcuParkingBrakeBogie2A1, bcuMajorFaultBogie1A1, bcuMajorFaultBogie2A1;

    double bcu1TotalPressureA1, bcu1TotalPressureB1, bcu1TotalPressureC1, bcu1TotalPressureD1;
    double bcu2TotalPressureA1, bcu2TotalPressureB1, bcu2TotalPressureC1, bcu2TotalPressureD1;
    double bcu3TotalPressureA2, bcu3TotalPressureB2, bcu3TotalPressureC2, bcu3TotalPressureD2;
    double bcu4TotalPressureA2, bcu4TotalPressureB2, bcu4TotalPressureC2, bcu4TotalPressureD2;

    double hmiTotalPressureA1, hmiTotalPressureB1, hmiTotalPressureC1, hmiTotalPressureD1;
    double hmiTotalPressureA2, hmiTotalPressureB2, hmiTotalPressureC2, hmiTotalPressureD2;

    double bcu1Bogie1AirSpringPressureA1, bcu1Bogie2AirSpringPressureA1, bcu1Bogie1AirSpringPressureB1, bcu1Bogie2AirSpringPressureB1,
           bcu1Bogie1AirSpringPressureC1, bcu1Bogie2AirSpringPressureC1, bcu1Bogie1AirSpringPressureD1, bcu1Bogie2AirSpringPressureD1;
    double bcu2Bogie1AirSpringPressureA1, bcu2Bogie2AirSpringPressureA1, bcu2Bogie1AirSpringPressureB1, bcu2Bogie2AirSpringPressureB1,
           bcu2Bogie1AirSpringPressureC1, bcu2Bogie2AirSpringPressureC1, bcu2Bogie1AirSpringPressureD1, bcu2Bogie2AirSpringPressureD1;
    double bcu3Bogie1AirSpringPressureA2, bcu3Bogie2AirSpringPressureA2, bcu3Bogie1AirSpringPressureB2, bcu3Bogie2AirSpringPressureB2,
           bcu3Bogie1AirSpringPressureC2, bcu3Bogie2AirSpringPressureC2, bcu3Bogie1AirSpringPressureD2, bcu3Bogie2AirSpringPressureD2;
    double bcu4Bogie1AirSpringPressureA2, bcu4Bogie2AirSpringPressureA2, bcu4Bogie1AirSpringPressureB2, bcu4Bogie2AirSpringPressureB2,
           bcu4Bogie1AirSpringPressureC2, bcu4Bogie2AirSpringPressureC2, bcu4Bogie1AirSpringPressureD2, bcu4Bogie2AirSpringPressureD2;

    double hmiBogie1AirSpringPressureA1, hmiBogie2AirSpringPressureA1, hmiBogie1AirSpringPressureB1, hmiBogie2AirSpringPressureB1,
           hmiBogie1AirSpringPressureC1, hmiBogie2AirSpringPressureC1, hmiBogie1AirSpringPressureD1, hmiBogie2AirSpringPressureD1;
    double hmiBogie1AirSpringPressureA2, hmiBogie2AirSpringPressureA2, hmiBogie1AirSpringPressureB2, hmiBogie2AirSpringPressureB2,
           hmiBogie1AirSpringPressureC2, hmiBogie2AirSpringPressureC2, hmiBogie1AirSpringPressureD2, hmiBogie2AirSpringPressureD2;

    // added by Deng Ran on the 23th of September 2016
    double bcu1Bogie1BrakeAirCylinderPressureA1, bcu1Bogie1BrakeAirCylinderPressureB1, bcu1Bogie1BrakeAirCylinderPressureC1, bcu1Bogie1BrakeAirCylinderPressureD1;
    double bcu2Bogie1BrakeAirCylinderPressureA1, bcu2Bogie1BrakeAirCylinderPressureB1, bcu2Bogie1BrakeAirCylinderPressureC1, bcu2Bogie1BrakeAirCylinderPressureD1;
    double bcu3Bogie1BrakeAirCylinderPressureA2, bcu3Bogie1BrakeAirCylinderPressureB2, bcu3Bogie1BrakeAirCylinderPressureC2, bcu3Bogie1BrakeAirCylinderPressureD2;
    double bcu4Bogie1BrakeAirCylinderPressureA2, bcu4Bogie1BrakeAirCylinderPressureB2, bcu4Bogie1BrakeAirCylinderPressureC2, bcu4Bogie1BrakeAirCylinderPressureD2;

    double bcu1Bogie2BrakeAirCylinderPressureA1, bcu1Bogie2BrakeAirCylinderPressureB1, bcu1Bogie2BrakeAirCylinderPressureC1, bcu1Bogie2BrakeAirCylinderPressureD1;
    double bcu2Bogie2BrakeAirCylinderPressureA1, bcu2Bogie2BrakeAirCylinderPressureB1, bcu2Bogie2BrakeAirCylinderPressureC1, bcu2Bogie2BrakeAirCylinderPressureD1;
    double bcu3Bogie2BrakeAirCylinderPressureA2, bcu3Bogie2BrakeAirCylinderPressureB2, bcu3Bogie2BrakeAirCylinderPressureC2, bcu3Bogie2BrakeAirCylinderPressureD2;
    double bcu4Bogie2BrakeAirCylinderPressureA2, bcu4Bogie2BrakeAirCylinderPressureB2, bcu4Bogie2BrakeAirCylinderPressureC2, bcu4Bogie2BrakeAirCylinderPressureD2;

    double hmiBogie1BrakeAirCylinderPressureA1, hmiBogie1BrakeAirCylinderPressureB1, hmiBogie1BrakeAirCylinderPressureC1, hmiBogie1BrakeAirCylinderPressureD1;
    double hmiBogie1BrakeAirCylinderPressureA2, hmiBogie1BrakeAirCylinderPressureB2, hmiBogie1BrakeAirCylinderPressureC2, hmiBogie1BrakeAirCylinderPressureD2;
    double hmiBogie2BrakeAirCylinderPressureA1, hmiBogie2BrakeAirCylinderPressureB1, hmiBogie2BrakeAirCylinderPressureC1, hmiBogie2BrakeAirCylinderPressureD1;
    double hmiBogie2BrakeAirCylinderPressureA2, hmiBogie2BrakeAirCylinderPressureB2, hmiBogie2BrakeAirCylinderPressureC2, hmiBogie2BrakeAirCylinderPressureD2;

    double bcu1ParkingCylinderPressureA1, bcu1ParkingCylinderPressureB1, bcu1ParkingCylinderPressureC1, bcu1ParkingCylinderPressureD1;
    double bcu2ParkingCylinderPressureA1, bcu2ParkingCylinderPressureB1, bcu2ParkingCylinderPressureC1, bcu2ParkingCylinderPressureD1;
    double bcu3ParkingCylinderPressureA2, bcu3ParkingCylinderPressureB2, bcu3ParkingCylinderPressureC2, bcu3ParkingCylinderPressureD2;
    double bcu4ParkingCylinderPressureA2, bcu4ParkingCylinderPressureB2, bcu4ParkingCylinderPressureC2, bcu4ParkingCylinderPressureD2;

    double hmiParkingCylinderPressureA1, hmiParkingCylinderPressureB1, hmiParkingCylinderPressureC1, hmiParkingCylinderPressureD1;
    double hmiParkingCylinderPressureA2, hmiParkingCylinderPressureB2, hmiParkingCylinderPressureC2, hmiParkingCylinderPressureD2;

    double bcu1Bogie1BrakeCylinderPressureA1, bcu1Bogie2BrakeCylinderPressureA1, bcu1Bogie1BrakeCylinderPressureB1, bcu1Bogie2BrakeCylinderPressureB1,
           bcu1Bogie1BrakeCylinderPressureC1, bcu1Bogie2BrakeCylinderPressureC1, bcu1Bogie1BrakeCylinderPressureD1, bcu1Bogie2BrakeCylinderPressureD1;
    double bcu2Bogie1BrakeCylinderPressureA1, bcu2Bogie2BrakeCylinderPressureA1, bcu2Bogie1BrakeCylinderPressureB1, bcu2Bogie2BrakeCylinderPressureB1,
           bcu2Bogie1BrakeCylinderPressureC1, bcu2Bogie2BrakeCylinderPressureC1, bcu2Bogie1BrakeCylinderPressureD1, bcu2Bogie2BrakeCylinderPressureD1;
    double bcu3Bogie1BrakeCylinderPressureA2, bcu3Bogie2BrakeCylinderPressureA2, bcu3Bogie1BrakeCylinderPressureB2, bcu3Bogie2BrakeCylinderPressureB2,
           bcu3Bogie1BrakeCylinderPressureC2, bcu3Bogie2BrakeCylinderPressureC2, bcu3Bogie1BrakeCylinderPressureD2, bcu3Bogie2BrakeCylinderPressureD2;
    double bcu4Bogie1BrakeCylinderPressureA2, bcu4Bogie2BrakeCylinderPressureA2, bcu4Bogie1BrakeCylinderPressureB2, bcu4Bogie2BrakeCylinderPressureB2,
           bcu4Bogie1BrakeCylinderPressureC2, bcu4Bogie2BrakeCylinderPressureC2, bcu4Bogie1BrakeCylinderPressureD2, bcu4Bogie2BrakeCylinderPressureD2;

    double hmiBogie1BrakeCylinderPressureA1, hmiBogie2BrakeCylinderPressureA1, hmiBogie1BrakeCylinderPressureB1, hmiBogie2BrakeCylinderPressureB1,
           hmiBogie1BrakeCylinderPressureC1, hmiBogie2BrakeCylinderPressureC1, hmiBogie1BrakeCylinderPressureD1, hmiBogie2BrakeCylinderPressureD1;
    double hmiBogie1BrakeCylinderPressureA2, hmiBogie2BrakeCylinderPressureA2, hmiBogie1BrakeCylinderPressureB2, hmiBogie2BrakeCylinderPressureB2,
           hmiBogie1BrakeCylinderPressureC2, hmiBogie2BrakeCylinderPressureC2, hmiBogie1BrakeCylinderPressureD2, hmiBogie2BrakeCylinderPressureD2;

    unsigned short int bcu1Bogie1LoadA1, bcu1Bogie2LoadA1, bcu1Bogie1LoadB1, bcu1Bogie2LoadB1,
                       bcu1Bogie1LoadC1, bcu1Bogie2LoadC1, bcu1Bogie1LoadD1, bcu1Bogie2LoadD1;
    unsigned short int bcu2Bogie1LoadA1, bcu2Bogie2LoadA1, bcu2Bogie1LoadB1, bcu2Bogie2LoadB1,
                       bcu2Bogie1LoadC1, bcu2Bogie2LoadC1, bcu2Bogie1LoadD1, bcu2Bogie2LoadD1;
    unsigned short int bcu3Bogie1LoadA2, bcu3Bogie2LoadA2, bcu3Bogie1LoadB2, bcu3Bogie2LoadB2,
                       bcu3Bogie1LoadC2, bcu3Bogie2LoadC2, bcu3Bogie1LoadD2, bcu3Bogie2LoadD2;
    unsigned short int bcu4Bogie1LoadA2, bcu4Bogie2LoadA2, bcu4Bogie1LoadB2, bcu4Bogie2LoadB2,
                       bcu4Bogie1LoadC2, bcu4Bogie2LoadC2, bcu4Bogie1LoadD2, bcu4Bogie2LoadD2;

    unsigned short int hmiBogie1LoadA1, hmiBogie2LoadA1, hmiBogie1LoadB1, hmiBogie2LoadB1,
                       hmiBogie1LoadC1, hmiBogie2LoadC1, hmiBogie1LoadD1, hmiBogie2LoadD1;
    unsigned short int hmiBogie1LoadA2, hmiBogie2LoadA2, hmiBogie1LoadB2, hmiBogie2LoadB2,
                       hmiBogie1LoadC2, hmiBogie2LoadC2, hmiBogie1LoadD2, hmiBogie2LoadD2;

    // the siv signals
    bool sivRunningStateA1, sivMajorErrorA1, sivMinorErrorA1, sivStopStateA1;
    bool sivRunningStateC1, sivMajorErrorC1, sivMinorErrorC1, sivStopStateC1;
    bool sivRunningStateA2, sivMajorErrorA2, sivMinorErrorA2, sivStopStateA2;
    bool sivRunningStateC2, sivMajorErrorC2, sivMinorErrorC2, sivStopStateC2;

    // the dcdc signals
    bool dcdcNormalA1, dcdcNormalA2;
    bool dcdcRunningStateA1, dcdcMajorErrorA1, dcdcMinorErrorA1, dcdcEmergencyRunningA1;
    bool dcdcRunningStateA2, dcdcMajorErrorA2, dcdcMinorErrorA2, dcdcEmergencyRunningA2;
    signed short int dcdcBatteryTemperatureA1, dcdcBatteryTemperatureA2;
    signed short int dcdcInputCurrentA1, dcdcInputCurrentA2;
    signed short int dcdcInputVoltageA1, dcdcInputVoltageA2;

    // the air conditioner signals
    signed short int acuTargetTemperatureA1, acuIndoorTemperatureA1, acuOutdoorTemperatureA1;
    signed short int acuTargetTemperatureB1, acuIndoorTemperatureB1, acuOutdoorTemperatureB1;
    signed short int acuTargetTemperatureC1, acuIndoorTemperatureC1, acuOutdoorTemperatureC1;
    signed short int acuTargetTemperatureD1, acuIndoorTemperatureD1, acuOutdoorTemperatureD1;
    signed short int acuTargetTemperatureD2, acuIndoorTemperatureD2, acuOutdoorTemperatureD2;
    signed short int acuTargetTemperatureC2, acuIndoorTemperatureC2, acuOutdoorTemperatureC2;
    signed short int acuTargetTemperatureB2, acuIndoorTemperatureB2, acuOutdoorTemperatureB2;
    signed short int acuTargetTemperatureA2, acuIndoorTemperatureA2, acuOutdoorTemperatureA2;

    bool acuDeloadA1, acuDeloadB1, acuDeloadC1, acuDeloadD1, acuDeloadD2, acuDeloadC2, acuDeloadB2, acuDeloadA2;

    bool acuStopA1, acuVentilateA1, acuPreCoolA1, acuManualCoolA1, acuAutoCoolA1, acuAutoA1, acuEmergencyA1, acuFireModeA1, acuLittleErrorA1, acuMinorErrorA1, acuMajorErrorA1;
    bool acuStopB1, acuVentilateB1, acuPreCoolB1, acuManualCoolB1, acuAutoCoolB1, acuAutoB1, acuEmergencyB1, acuFireModeB1, acuLittleErrorB1, acuMinorErrorB1, acuMajorErrorB1;
    bool acuStopC1, acuVentilateC1, acuPreCoolC1, acuManualCoolC1, acuAutoCoolC1, acuAutoC1, acuEmergencyC1, acuFireModeC1, acuLittleErrorC1, acuMinorErrorC1, acuMajorErrorC1;
    bool acuStopD1, acuVentilateD1, acuPreCoolD1, acuManualCoolD1, acuAutoCoolD1, acuAutoD1, acuEmergencyD1, acuFireModeD1, acuLittleErrorD1, acuMinorErrorD1, acuMajorErrorD1;
    bool acuStopD2, acuVentilateD2, acuPreCoolD2, acuManualCoolD2, acuAutoCoolD2, acuAutoD2, acuEmergencyD2, acuFireModeD2, acuLittleErrorD2, acuMinorErrorD2, acuMajorErrorD2;
    bool acuStopC2, acuVentilateC2, acuPreCoolC2, acuManualCoolC2, acuAutoCoolC2, acuAutoC2, acuEmergencyC2, acuFireModeC2, acuLittleErrorC2, acuMinorErrorC2, acuMajorErrorC2;
    bool acuStopB2, acuVentilateB2, acuPreCoolB2, acuManualCoolB2, acuAutoCoolB2, acuAutoB2, acuEmergencyB2, acuFireModeB2, acuLittleErrorB2, acuMinorErrorB2, acuMajorErrorB2;
    bool acuStopA2, acuVentilateA2, acuPreCoolA2, acuManualCoolA2, acuAutoCoolA2, acuAutoA2, acuEmergencyA2, acuFireModeA2, acuLittleErrorA2, acuMinorErrorA2, acuMajorErrorA2;

    // set temperature hmi
    unsigned char hmiTemperatureCommandA1;
    bool hmiAirConditionerStopCommandA1, hmiAirConditonerStartCommandA1, hmiVentilationCommandA1, hmiManualCoolCommandA1, hmiAutoCoolCommandA1;
    bool hmiExitPreCoolCommandA1, hmiEmergencyCommandA1, hmiAutoCommandA1, hmiFireModeCommandA1, hmiTemperatureSetFlagCommandA1;

    unsigned char hmiTemperatureCommandB1;
    bool hmiAirConditionerStopCommandB1, hmiAirConditonerStartCommandB1, hmiVentilationCommandB1, hmiManualCoolCommandB1, hmiAutoCoolCommandB1;
    bool hmiExitPreCoolCommandB1, hmiEmergencyCommandB1, hmiAutoCommandB1, hmiFireModeCommandB1, hmiTemperatureSetFlagCommandB1;

    unsigned char hmiTemperatureCommandC1;
    bool hmiAirConditionerStopCommandC1, hmiAirConditonerStartCommandC1, hmiVentilationCommandC1, hmiManualCoolCommandC1, hmiAutoCoolCommandC1;
    bool hmiExitPreCoolCommandC1, hmiEmergencyCommandC1, hmiAutoCommandC1, hmiFireModeCommandC1, hmiTemperatureSetFlagCommandC1;

    unsigned char hmiTemperatureCommandD1;
    bool hmiAirConditionerStopCommandD1, hmiAirConditonerStartCommandD1, hmiVentilationCommandD1, hmiManualCoolCommandD1, hmiAutoCoolCommandD1;
    bool hmiExitPreCoolCommandD1, hmiEmergencyCommandD1, hmiAutoCommandD1, hmiFireModeCommandD1, hmiTemperatureSetFlagCommandD1;

    unsigned char hmiTemperatureCommandD2;
    bool hmiAirConditionerStopCommandD2, hmiAirConditonerStartCommandD2, hmiVentilationCommandD2, hmiManualCoolCommandD2, hmiAutoCoolCommandD2;
    bool hmiExitPreCoolCommandD2, hmiEmergencyCommandD2, hmiAutoCommandD2, hmiFireModeCommandD2, hmiTemperatureSetFlagCommandD2;

    unsigned char hmiTemperatureCommandC2;
    bool hmiAirConditionerStopCommandC2, hmiAirConditonerStartCommandC2, hmiVentilationCommandC2, hmiManualCoolCommandC2, hmiAutoCoolCommandC2;
    bool hmiExitPreCoolCommandC2, hmiEmergencyCommandC2, hmiAutoCommandC2, hmiFireModeCommandC2, hmiTemperatureSetFlagCommandC2;

    unsigned char hmiTemperatureCommandB2;
    bool hmiAirConditionerStopCommandB2, hmiAirConditonerStartCommandB2, hmiVentilationCommandB2, hmiManualCoolCommandB2, hmiAutoCoolCommandB2;
    bool hmiExitPreCoolCommandB2, hmiEmergencyCommandB2, hmiAutoCommandB2, hmiFireModeCommandB2, hmiTemperatureSetFlagCommandB2;

    unsigned char hmiTemperatureCommandA2;
    bool hmiAirConditionerStopCommandA2, hmiAirConditonerStartCommandA2, hmiVentilationCommandA2, hmiManualCoolCommandA2, hmiAutoCoolCommandA2;
    bool hmiExitPreCoolCommandA2, hmiEmergencyCommandA2, hmiAutoCommandA2, hmiFireModeCommandA2, hmiTemperatureSetFlagCommandA2;

    // the air conditioner compressor state
    bool acuSet1Compressor1RunA1, acuSet1Compressor2RunA1, acuSet1Compressor1ConverterErrorA1, acuSet1Compressor2ConverterErrorA1;
    bool acuSet1Compressor1OverLoadA1, acuSet1Compressor2OverLoadA1, acuSet1Compressor1HighVoltageErrorA1, acuSet1Compressor2HighVoltageErrorA1;
    bool acuSet1Compressor1LowVoltageErrorA1, acuSet1Compressor2LowVoltageErrorA1;

    bool acuSet2Compressor1RunA1, acuSet2Compressor2RunA1, acuSet2Compressor1ConverterErrorA1, acuSet2Compressor2ConverterErrorA1;
    bool acuSet2Compressor1OverLoadA1, acuSet2Compressor2OverLoadA1, acuSet2Compressor1HighVoltageErrorA1, acuSet2Compressor2HighVoltageErrorA1;
    bool acuSet2Compressor1LowVoltageErrorA1, acuSet2Compressor2LowVoltageErrorA1;

    bool acuSet1Compressor1RunB1, acuSet1Compressor2RunB1, acuSet1Compressor1ConverterErrorB1, acuSet1Compressor2ConverterErrorB1;
    bool acuSet1Compressor1OverLoadB1, acuSet1Compressor2OverLoadB1, acuSet1Compressor1HighVoltageErrorB1, acuSet1Compressor2HighVoltageErrorB1;
    bool acuSet1Compressor1LowVoltageErrorB1, acuSet1Compressor2LowVoltageErrorB1;

    bool acuSet2Compressor1RunB1, acuSet2Compressor2RunB1, acuSet2Compressor1ConverterErrorB1, acuSet2Compressor2ConverterErrorB1;
    bool acuSet2Compressor1OverLoadB1, acuSet2Compressor2OverLoadB1, acuSet2Compressor1HighVoltageErrorB1, acuSet2Compressor2HighVoltageErrorB1;
    bool acuSet2Compressor1LowVoltageErrorB1, acuSet2Compressor2LowVoltageErrorB1;

    bool acuSet1Compressor1RunC1, acuSet1Compressor2RunC1, acuSet1Compressor1ConverterErrorC1, acuSet1Compressor2ConverterErrorC1;
    bool acuSet1Compressor1OverLoadC1, acuSet1Compressor2OverLoadC1, acuSet1Compressor1HighVoltageErrorC1, acuSet1Compressor2HighVoltageErrorC1;
    bool acuSet1Compressor1LowVoltageErrorC1, acuSet1Compressor2LowVoltageErrorC1;

    bool acuSet2Compressor1RunC1, acuSet2Compressor2RunC1, acuSet2Compressor1ConverterErrorC1, acuSet2Compressor2ConverterErrorC1;
    bool acuSet2Compressor1OverLoadC1, acuSet2Compressor2OverLoadC1, acuSet2Compressor1HighVoltageErrorC1, acuSet2Compressor2HighVoltageErrorC1;
    bool acuSet2Compressor1LowVoltageErrorC1, acuSet2Compressor2LowVoltageErrorC1;

    bool acuSet1Compressor1RunD1, acuSet1Compressor2RunD1, acuSet1Compressor1ConverterErrorD1, acuSet1Compressor2ConverterErrorD1;
    bool acuSet1Compressor1OverLoadD1, acuSet1Compressor2OverLoadD1, acuSet1Compressor1HighVoltageErrorD1, acuSet1Compressor2HighVoltageErrorD1;
    bool acuSet1Compressor1LowVoltageErrorD1, acuSet1Compressor2LowVoltageErrorD1;

    bool acuSet2Compressor1RunD1, acuSet2Compressor2RunD1, acuSet2Compressor1ConverterErrorD1, acuSet2Compressor2ConverterErrorD1;
    bool acuSet2Compressor1OverLoadD1, acuSet2Compressor2OverLoadD1, acuSet2Compressor1HighVoltageErrorD1, acuSet2Compressor2HighVoltageErrorD1;
    bool acuSet2Compressor1LowVoltageErrorD1, acuSet2Compressor2LowVoltageErrorD1;

    bool acuSet1Compressor1RunD2, acuSet1Compressor2RunD2, acuSet1Compressor1ConverterErrorD2, acuSet1Compressor2ConverterErrorD2;
    bool acuSet1Compressor1OverLoadD2, acuSet1Compressor2OverLoadD2, acuSet1Compressor1HighVoltageErrorD2, acuSet1Compressor2HighVoltageErrorD2;
    bool acuSet1Compressor1LowVoltageErrorD2, acuSet1Compressor2LowVoltageErrorD2;

    bool acuSet2Compressor1RunD2, acuSet2Compressor2RunD2, acuSet2Compressor1ConverterErrorD2, acuSet2Compressor2ConverterErrorD2;
    bool acuSet2Compressor1OverLoadD2, acuSet2Compressor2OverLoadD2, acuSet2Compressor1HighVoltageErrorD2, acuSet2Compressor2HighVoltageErrorD2;
    bool acuSet2Compressor1LowVoltageErrorD2, acuSet2Compressor2LowVoltageErrorD2;

    bool acuSet1Compressor1RunC2, acuSet1Compressor2RunC2, acuSet1Compressor1ConverterErrorC2, acuSet1Compressor2ConverterErrorC2;
    bool acuSet1Compressor1OverLoadC2, acuSet1Compressor2OverLoadC2, acuSet1Compressor1HighVoltageErrorC2, acuSet1Compressor2HighVoltageErrorC2;
    bool acuSet1Compressor1LowVoltageErrorC2, acuSet1Compressor2LowVoltageErrorC2;

    bool acuSet2Compressor1RunC2, acuSet2Compressor2RunC2, acuSet2Compressor1ConverterErrorC2, acuSet2Compressor2ConverterErrorC2;
    bool acuSet2Compressor1OverLoadC2, acuSet2Compressor2OverLoadC2, acuSet2Compressor1HighVoltageErrorC2, acuSet2Compressor2HighVoltageErrorC2;
    bool acuSet2Compressor1LowVoltageErrorC2, acuSet2Compressor2LowVoltageErrorC2;

    bool acuSet1Compressor1RunB2, acuSet1Compressor2RunB2, acuSet1Compressor1ConverterErrorB2, acuSet1Compressor2ConverterErrorB2;
    bool acuSet1Compressor1OverLoadB2, acuSet1Compressor2OverLoadB2, acuSet1Compressor1HighVoltageErrorB2, acuSet1Compressor2HighVoltageErrorB2;
    bool acuSet1Compressor1LowVoltageErrorB2, acuSet1Compressor2LowVoltageErrorB2;

    bool acuSet2Compressor1RunB2, acuSet2Compressor2RunB2, acuSet2Compressor1ConverterErrorB2, acuSet2Compressor2ConverterErrorB2;
    bool acuSet2Compressor1OverLoadB2, acuSet2Compressor2OverLoadB2, acuSet2Compressor1HighVoltageErrorB2, acuSet2Compressor2HighVoltageErrorB2;
    bool acuSet2Compressor1LowVoltageErrorB2, acuSet2Compressor2LowVoltageErrorB2;

    bool acuSet1Compressor1RunA2, acuSet1Compressor2RunA2, acuSet1Compressor1ConverterErrorA2, acuSet1Compressor2ConverterErrorA2;
    bool acuSet1Compressor1OverLoadA2, acuSet1Compressor2OverLoadA2, acuSet1Compressor1HighVoltageErrorA2, acuSet1Compressor2HighVoltageErrorA2;
    bool acuSet1Compressor1LowVoltageErrorA2, acuSet1Compressor2LowVoltageErrorA2;

    bool acuSet2Compressor1RunA2, acuSet2Compressor2RunA2, acuSet2Compressor1ConverterErrorA2, acuSet2Compressor2ConverterErrorA2;
    bool acuSet2Compressor1OverLoadA2, acuSet2Compressor2OverLoadA2, acuSet2Compressor1HighVoltageErrorA2, acuSet2Compressor2HighVoltageErrorA2;
    bool acuSet2Compressor1LowVoltageErrorA2, acuSet2Compressor2LowVoltageErrorA2;

    // fire alarm
    bool fau1Probe1AlarmA1, fau1Probe2AlarmA1, fau1Probe3AlarmA1, fau1Probe4AlarmA1, fau1Probe5AlarmA1, fau1Probe6AlarmA1, fau1Probe7AlarmA1, fau1Probe8AlarmA1;
    bool fau1Probe1AlarmB1, fau1Probe2AlarmB1, fau1Probe3AlarmB1, fau1Probe4AlarmB1, fau1Probe5AlarmB1, fau1Probe6AlarmB1;
    bool fau1Probe1AlarmC1, fau1Probe2AlarmC1, fau1Probe3AlarmC1, fau1Probe4AlarmC1, fau1Probe5AlarmC1, fau1Probe6AlarmC1;
    bool fau1Probe1AlarmD1, fau1Probe2AlarmD1, fau1Probe3AlarmD1, fau1Probe4AlarmD1, fau1Probe5AlarmD1, fau1Probe6AlarmD1;
    bool fau1Probe1AlarmD2, fau1Probe2AlarmD2, fau1Probe3AlarmD2, fau1Probe4AlarmD2, fau1Probe5AlarmD2, fau1Probe6AlarmD2;
    bool fau1Probe1AlarmC2, fau1Probe2AlarmC2, fau1Probe3AlarmC2, fau1Probe4AlarmC2, fau1Probe5AlarmC2, fau1Probe6AlarmC2;
    bool fau1Probe1AlarmB2, fau1Probe2AlarmB2, fau1Probe3AlarmB2, fau1Probe4AlarmB2, fau1Probe5AlarmB2, fau1Probe6AlarmB2;
    bool fau1Probe1AlarmA2, fau1Probe2AlarmA2, fau1Probe3AlarmA2, fau1Probe4AlarmA2, fau1Probe5AlarmA2, fau1Probe6AlarmA2, fau1Probe7AlarmA2, fau1Probe8AlarmA2;

    bool fau2Probe1AlarmA1, fau2Probe2AlarmA1, fau2Probe3AlarmA1, fau2Probe4AlarmA1, fau2Probe5AlarmA1, fau2Probe6AlarmA1, fau2Probe7AlarmA1, fau2Probe8AlarmA1;
    bool fau2Probe1AlarmB1, fau2Probe2AlarmB1, fau2Probe3AlarmB1, fau2Probe4AlarmB1, fau2Probe5AlarmB1, fau2Probe6AlarmB1;
    bool fau2Probe1AlarmC1, fau2Probe2AlarmC1, fau2Probe3AlarmC1, fau2Probe4AlarmC1, fau2Probe5AlarmC1, fau2Probe6AlarmC1;
    bool fau2Probe1AlarmD1, fau2Probe2AlarmD1, fau2Probe3AlarmD1, fau2Probe4AlarmD1, fau2Probe5AlarmD1, fau2Probe6AlarmD1;
    bool fau2Probe1AlarmD2, fau2Probe2AlarmD2, fau2Probe3AlarmD2, fau2Probe4AlarmD2, fau2Probe5AlarmD2, fau2Probe6AlarmD2;
    bool fau2Probe1AlarmC2, fau2Probe2AlarmC2, fau2Probe3AlarmC2, fau2Probe4AlarmC2, fau2Probe5AlarmC2, fau2Probe6AlarmC2;
    bool fau2Probe1AlarmB2, fau2Probe2AlarmB2, fau2Probe3AlarmB2, fau2Probe4AlarmB2, fau2Probe5AlarmB2, fau2Probe6AlarmB2;
    bool fau2Probe1AlarmA2, fau2Probe2AlarmA2, fau2Probe3AlarmA2, fau2Probe4AlarmA2, fau2Probe5AlarmA2, fau2Probe6AlarmA2, fau2Probe7AlarmA2, fau2Probe8AlarmA2;

    bool fau1Probe1ErrorA1, fau1Probe2ErrorA1, fau1Probe3ErrorA1, fau1Probe4ErrorA1, fau1Probe5ErrorA1, fau1Probe6ErrorA1, fau1Probe7ErrorA1, fau1Probe8ErrorA1;
    bool fau1Probe1ErrorB1, fau1Probe2ErrorB1, fau1Probe3ErrorB1, fau1Probe4ErrorB1, fau1Probe5ErrorB1, fau1Probe6ErrorB1;
    bool fau1Probe1ErrorC1, fau1Probe2ErrorC1, fau1Probe3ErrorC1, fau1Probe4ErrorC1, fau1Probe5ErrorC1, fau1Probe6ErrorC1;
    bool fau1Probe1ErrorD1, fau1Probe2ErrorD1, fau1Probe3ErrorD1, fau1Probe4ErrorD1, fau1Probe5ErrorD1, fau1Probe6ErrorD1;
    bool fau1Probe1ErrorD2, fau1Probe2ErrorD2, fau1Probe3ErrorD2, fau1Probe4ErrorD2, fau1Probe5ErrorD2, fau1Probe6ErrorD2;
    bool fau1Probe1ErrorC2, fau1Probe2ErrorC2, fau1Probe3ErrorC2, fau1Probe4ErrorC2, fau1Probe5ErrorC2, fau1Probe6ErrorC2;
    bool fau1Probe1ErrorB2, fau1Probe2ErrorB2, fau1Probe3ErrorB2, fau1Probe4ErrorB2, fau1Probe5ErrorB2, fau1Probe6ErrorB2;
    bool fau1Probe1ErrorA2, fau1Probe2ErrorA2, fau1Probe3ErrorA2, fau1Probe4ErrorA2, fau1Probe5ErrorA2, fau1Probe6ErrorA2, fau1Probe7ErrorA2, fau1Probe8ErrorA2;

    bool fau2Probe1ErrorA1, fau2Probe2ErrorA1, fau2Probe3ErrorA1, fau2Probe4ErrorA1, fau2Probe5ErrorA1, fau2Probe6ErrorA1, fau2Probe7ErrorA1, fau2Probe8ErrorA1;
    bool fau2Probe1ErrorB1, fau2Probe2ErrorB1, fau2Probe3ErrorB1, fau2Probe4ErrorB1, fau2Probe5ErrorB1, fau2Probe6ErrorB1;
    bool fau2Probe1ErrorC1, fau2Probe2ErrorC1, fau2Probe3ErrorC1, fau2Probe4ErrorC1, fau2Probe5ErrorC1, fau2Probe6ErrorC1;
    bool fau2Probe1ErrorD1, fau2Probe2ErrorD1, fau2Probe3ErrorD1, fau2Probe4ErrorD1, fau2Probe5ErrorD1, fau2Probe6ErrorD1;
    bool fau2Probe1ErrorD2, fau2Probe2ErrorD2, fau2Probe3ErrorD2, fau2Probe4ErrorD2, fau2Probe5ErrorD2, fau2Probe6ErrorD2;
    bool fau2Probe1ErrorC2, fau2Probe2ErrorC2, fau2Probe3ErrorC2, fau2Probe4ErrorC2, fau2Probe5ErrorC2, fau2Probe6ErrorC2;
    bool fau2Probe1ErrorB2, fau2Probe2ErrorB2, fau2Probe3ErrorB2, fau2Probe4ErrorB2, fau2Probe5ErrorB2, fau2Probe6ErrorB2;
    bool fau2Probe1ErrorA2, fau2Probe2ErrorA2, fau2Probe3ErrorA2, fau2Probe4ErrorA2, fau2Probe5ErrorA2, fau2Probe6ErrorA2, fau2Probe7ErrorA2, fau2Probe8ErrorA2;

    bool fau1MasterErrorA1, fau1MasterErrorA2, fau1SlaveErrorB1, fau1SlaveErrorC1, fau1SlaveErrorD1, fau1SlaveErrorD2, fau1SlaveErrorC2, fau1SlaveErrorB2;
    bool fau2MasterErrorA1, fau2MasterErrorA2, fau2SlaveErrorB1, fau2SlaveErrorC1, fau2SlaveErrorD1, fau2SlaveErrorD2, fau2SlaveErrorC2, fau2SlaveErrorB2;

    QDateTime hmiSetDateTime;
    bool hmiFireAlarmResetCommand;
    bool hmiFireAlarmA1, hmiFireAlarmB1, hmiFireAlarmC1, hmiFireAlarmD1, hmiFireAlarmD2, hmiFireAlarmC2, hmiFireAlarmB2, hmiFireAlarmA2;

    bool ccuDcuForwardAll, ccuDcuBackwardAll, ccuDcuTractionAll, ccuDcuBrakeAll;

    bool ccuBcuTractionAll, ccuBcuBrakeAll;
    int ccuBcuBrakeLevelAll;
    bool ccuDcuA1ForwardAll, ccuDcuA1BackwardAll, ccuDcuA2ForwardAll, ccuDcuA2BackwardAll;
    bool hmiThisCabinActive;
};

#endif // DATABASE_H
