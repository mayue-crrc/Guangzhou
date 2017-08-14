#include "database.h"
#include <QDebug>
#include <QDateTime>

void Database::initializeCcuSignals()
{
    this->hmiFireAlarmResetCommand = false;

    this->hmiSetTotalMileageFlag = false;
    this->hmiSetTotalCompressor1Flag = false;
    this->hmiSetTotalCompressor2Flag = false;
    this->hmiSetTotalSivConsumptionFlag = false;
    this->hmiSetTotalTractionConsumptionFlag = false;
    this->hmiSetTotalBcuConsumptionFlag = false;
    this->hmiSetTotalRegeneratePowerFlag = false;
    this->hmiSetTotalConsumptionFlag = false;
    this->hmiSetRecordMileageFlag = false;
    this->hmiSetRecordTimeFlag = false;
    this->hmiAcceleratedSpeedTest = false;

    this->hmiSecurityCode = 0x55;
    this->hmiCompressorTestCommand = false;

    this->hmiSetTimeCommand = false;
    this->hmiSetVehicleNumberCommand = false;

    this->hmiSetWheelCommandA1 = false;
    this->hmiSetWheelCommandB1 = false;
    this->hmiSetWheelCommandC1 = false;
    this->hmiSetWheelCommandD1 = false;
    this->hmiSetWheelCommandD2 = false;
    this->hmiSetWheelCommandC2 = false;
    this->hmiSetWheelCommandB2 = false;
    this->hmiSetWheelCommandA2 = false;

    this->hmiSivCutoutA1 = false;
    this->hmiSivCutoutC1 = false;
    this->hmiSivCutoutC2 = false;
    this->hmiSivCutoutA2 = false;

    this->hmiDcuBrakeResistorTestB1 = false;
    this->hmiDcuBrakeResistorTestC1 = false;
    this->hmiDcuBrakeResistorTestD1 = false;
    this->hmiDcuBrakeResistorTestD2 = false;
    this->hmiDcuBrakeResistorTestC2 = false;
    this->hmiDcuBrakeResistorTestB2 = false;

    this->hmiBrakeSelfCheckFlag = false;

    this->hmiSetAirConditionerModeCommandA1 = false;
    this->hmiSetAirConditionerModeCommandB1 = false;
    this->hmiSetAirConditionerModeCommandC1 = false;
    this->hmiSetAirConditionerModeCommandD1 = false;
    this->hmiSetAirConditionerModeCommandD2 = false;
    this->hmiSetAirConditionerModeCommandC2 = false;
    this->hmiSetAirConditionerModeCommandB2 = false;
    this->hmiSetAirConditionerModeCommandA2 = false;

    this->hmiSetAirConditionerTemperatureCommandA1 = false;
    this->hmiSetAirConditionerTemperatureCommandB1 = false;
    this->hmiSetAirConditionerTemperatureCommandC1 = false;
    this->hmiSetAirConditionerTemperatureCommandD1 = false;
    this->hmiSetAirConditionerTemperatureCommandD2 = false;
    this->hmiSetAirConditionerTemperatureCommandC2 = false;
    this->hmiSetAirConditionerTemperatureCommandB2 = false;
    this->hmiSetAirConditionerTemperatureCommandA2 = false;

    this->hmiAirConditionerFireMode = false;
    this->hmiAirConditionerPreCoolMode = false;

    this->hmiWheelDiameterA1 = 770;
    this->hmiWheelDiameterB1 = 770;
    this->hmiWheelDiameterC1 = 770;
    this->hmiWheelDiameterD1 = 770;
    this->hmiWheelDiameterD2 = 770;
    this->hmiWheelDiameterC2 = 770;
    this->hmiWheelDiameterB2 = 770;
    this->hmiWheelDiameterA2 = 770;

    this->hmiAirConditionerTemperatureA1 = 0;
    this->hmiAirConditionerTemperatureB1 = 0;
    this->hmiAirConditionerTemperatureC1 = 0;
    this->hmiAirConditionerTemperatureD1 = 0;
    this->hmiAirConditionerTemperatureD2 = 0;
    this->hmiAirConditionerTemperatureC2 = 0;
    this->hmiAirConditionerTemperatureB2 = 0;
    this->hmiAirConditionerTemperatureA2 = 0;

    this->ccuOnline = false;

    this->ccuYear = 0;
    this->ccuMonth = 0;
    this->ccuDay = 0;
    this->ccuHour = 0;
    this->ccuMinute = 0;
    this->ccuSecond = 0;

    this->ccuTimeValid = false;
    this->hmiSetDateTime.setDate(QDate::currentDate());
    this->hmiSetDateTime.setTime(QTime::currentTime());

    this->hmiModifyMileageFlagA2 = false;
    this->hmiModifyCompressor1FlagA2 = false;
    this->hmiModifyCompressor2FlagA2 = false;
    this->hmiModifyTotalFlagA2 = false;
    this->hmiModifyAuxiliaryFlagA2 = false;
    this->hmiModifyTractionFlagA2 = false;
    this->hmiModifyBrakeFlagA2 = false;
    this->hmiModifyRegenerateFlagA2 = false;
}

void Database::synchronizeCcuSignals()
{
    // added by Deng Ran on the 08th of May 2017.
    this->ccuAcceleratedSpeed = this->getSignedInt(0x308, 30);
    this->ccuBrakeDistance = this->getUnsignedInt(0x308, 28);
    this->ccuTractionDistance = this->getUnsignedInt(0x318, 8);

    this->ccuTractionStartSpeed = this->getUnsignedInt(0x318, 0) * 0.1;
    this->ccuTractionEndSpeed = this->getUnsignedInt(0x318, 2) * 0.1;
    this->ccuBrakeStartSpeed = this->getUnsignedInt(0x318, 4) * 0.1;
    this->ccuBrakeEndSpeed = this->getUnsignedInt(0x318, 6) * 0.1;

    this->ccuAirConditionerDeloadA1= this->getBool(0xA18, 7, 7);
    this->ccuAirConditionerDeloadB1= this->getBool(0xA28, 7, 7);
    this->ccuAirConditionerDeloadC1= this->getBool(0xA38, 7, 7);
    this->ccuAirConditionerDeloadD1= this->getBool(0xA48, 7, 7);
    this->ccuAirConditionerDeloadD2= this->getBool(0xA58, 7, 7);
    this->ccuAirConditionerDeloadC2= this->getBool(0xA68, 7, 7);
    this->ccuAirConditionerDeloadB2= this->getBool(0xA78, 7, 7);
    this->ccuAirConditionerDeloadA2= this->getBool(0xA88, 7, 7);

    this->ccuYear = this->getUnsignedChar(0x0FF, 2);
    this->ccuMonth = this->getUnsignedChar(0x0FF, 3);
    this->ccuDay = this->getUnsignedChar(0x0FF, 4);
    this->ccuHour = this->getUnsignedChar(0x0FF, 5);
    this->ccuMinute = this->getUnsignedChar(0x0FF, 6);
    this->ccuSecond = this->getUnsignedChar(0x0FF, 7);

    this->ccuTimeValid = this->getBool(0x0FF, 1, 6);

    this->ccuCabinActiveA1 = this->getBool(0x308, 22, 7);
    this->ccuCabinActiveA2 = this->getBool(0x308, 22, 6);
    this->ccuVehicleForward = this->getBool(0x308, 22, 5);
    this->ccuVehicleBackword = this->getBool(0x308, 22, 4);
    this->ccuVehicleTraction = this->getBool(0x308, 22, 3);
    this->ccuVehicleBrake = this->getBool(0x308, 22, 2);
    this->ccuHandleLevel = this->getUnsignedChar(0x308, 23);

    this->ccuAirConditionerModeA1 = this->getUnsignedChar(0x309, 0);
    this->ccuAirConditionerModeB1 = this->getUnsignedChar(0x309, 1);
    this->ccuAirConditionerModeC1 = this->getUnsignedChar(0x309, 2);
    this->ccuAirConditionerModeD1 = this->getUnsignedChar(0x309, 3);
    this->ccuAirConditionerModeD2 = this->getUnsignedChar(0x309, 4);
    this->ccuAirConditionerModeC2 = this->getUnsignedChar(0x309, 5);
    this->ccuAirConditionerModeB2 = this->getUnsignedChar(0x309, 6);
    this->ccuAirConditionerModeA2 = this->getUnsignedChar(0x309, 7);

    this->ccuAirConditionerTemperatureA1 = this->getUnsignedChar(0x309, 8);
    this->ccuAirConditionerTemperatureB1 = this->getUnsignedChar(0x309, 9);
    this->ccuAirConditionerTemperatureC1 = this->getUnsignedChar(0x309, 10);
    this->ccuAirConditionerTemperatureD1 = this->getUnsignedChar(0x309, 11);
    this->ccuAirConditionerTemperatureD2 = this->getUnsignedChar(0x309, 12);
    this->ccuAirConditionerTemperatureC2 = this->getUnsignedChar(0x309, 13);
    this->ccuAirConditionerTemperatureB2 = this->getUnsignedChar(0x309, 14);
    this->ccuAirConditionerTemperatureA2 = this->getUnsignedChar(0x309, 15);

    this->ccuWheelDiameterA1 = this->getUnsignedChar(0x309, 16) + 770;
    this->ccuWheelDiameterB1 = this->getUnsignedChar(0x309, 17) + 770;
    this->ccuWheelDiameterC1 = this->getUnsignedChar(0x309, 18) + 770;
    this->ccuWheelDiameterD1 = this->getUnsignedChar(0x309, 19) + 770;
    this->ccuWheelDiameterD2 = this->getUnsignedChar(0x309, 20) + 770;
    this->ccuWheelDiameterC2 = this->getUnsignedChar(0x309, 21) + 770;
    this->ccuWheelDiameterB2 = this->getUnsignedChar(0x309, 22) + 770;
    this->ccuWheelDiameterA2 = this->getUnsignedChar(0x309, 23) + 770;

    this->ccuVehicleSpeed = this->getUnsignedInt(0x308, 24) * 0.1f;

    this->ccuPantographErrorB1 = this->getBool(0x308, 21, 5);
    this->ccuPantographErrorD1 = this->getBool(0x308, 21, 4);
    this->ccuPantographErrorB2 = this->getBool(0x308, 21, 3);
    this->ccuPantographUpB1 = this->getBool(0x308, 21, 2);
    this->ccuPantographUpD1 = this->getBool(0x308, 21, 1);
    this->ccuPantographUpB2 = this->getBool(0x308, 21, 0);

    this->vehicleNumberA1.sprintf("%03d", this->getUnsignedChar(0x308, 27));
    this->ccuLimitedSpeed = this->getUnsignedInt(0x309, 24) / 10;

    // device online state
    this->ccuLifeSignal = this->getUnsignedChar(0x0FF, 0);
    this->ccuOnline = this->signalCheck(this->ccuLifeSignal);
    this->ccu1Online = this->getBool(0x308, 0, 7);
    this->ccu2Online = this->getBool(0x308, 0, 6);
    this->ccu1OnlineMain = this->getBool(0x308, 0, 5);
    this->ccu2OnlineMain = this->getBool(0x308, 0, 4);
    this->erm1Online = this->getBool(0x308, 0, 3);
    this->erm2Online = this->getBool(0x308, 0, 2);
    this->hmi1Online = this->getBool(0x308, 0, 1);
    this->hmi2Online = this->getBool(0x308, 0, 0);
    this->riom1GwOnline = this->getBool(0x308, 1, 7);
    this->riom1Di1Online = this->getBool(0x308, 1, 6);
    this->riom1Di2Online = this->getBool(0x308, 1, 5);
    this->riom1Di3Online = this->getBool(0x308, 1, 4);
    this->riom1Di4Online = this->getBool(0x308, 1, 3);
    this->riom1Di5Online = this->getBool(0x308, 1, 2);
    this->riom1DoOnline = this->getBool(0x308, 1, 1);
    this->riom1AxOnline = this->getBool(0x308, 1, 0);
    this->riom2GwOnline = this->getBool(0x308, 2, 7);
    this->riom2DiOnline = this->getBool(0x308, 2, 6);
    this->riom2DoOnline = this->getBool(0x308, 2, 5);
    this->riom3GwOnline = this->getBool(0x308, 2, 3);
    this->riom3DiOnline = this->getBool(0x308, 2, 2);
    this->riom3DoOnline = this->getBool(0x308, 2, 1);
    this->riom4GwOnline = this->getBool(0x308, 3, 7);
    this->riom4DiOnline = this->getBool(0x308, 3, 6);
    this->riom4DoOnline = this->getBool(0x308, 3, 5);
    this->riom5GwOnline = this->getBool(0x308, 3, 3);
    this->riom5DiOnline = this->getBool(0x308, 3, 2);
    this->riom5DoOnline = this->getBool(0x308, 3, 1);
    this->riom6GwOnline = this->getBool(0x308, 4, 7);
    this->riom6DiOnline = this->getBool(0x308, 4, 6);
    this->riom6DoOnline = this->getBool(0x308, 4, 5);
    this->riom7GwOnline = this->getBool(0x308, 4, 3);
    this->riom7DiOnline = this->getBool(0x308, 4, 2);
    this->riom7DoOnline = this->getBool(0x308, 4, 1);
    this->riom8GwOnline = this->getBool(0x308, 5, 7);
    this->riom8Di1Online = this->getBool(0x308, 5, 6);
    this->riom8Di2Online = this->getBool(0x308, 5, 5);
    this->riom8Di3Online = this->getBool(0x308, 5, 4);
    this->riom8Di4Online = this->getBool(0x308, 5, 3);
    this->riom8Di5Online = this->getBool(0x308, 5, 2);
    this->riom8DoOnline = this->getBool(0x308, 5, 1);
    this->riom8AxOnline = this->getBool(0x308, 5, 0);
    this->bcu1Online = this->getBool(0x308, 6, 7);
    this->bcu2Online = this->getBool(0x308, 6, 6);
    this->bcu3Online = this->getBool(0x308, 6, 5);
    this->bcu4Online = this->getBool(0x308, 6, 4);
    this->tcu1Online = this->getBool(0x308, 6, 3);
    this->tcu2Online = this->getBool(0x308, 6, 2);
    this->tcu3Online = this->getBool(0x308, 6, 1);
    this->tcu4Online = this->getBool(0x308, 6, 0);
    this->tcu5Online = this->getBool(0x308, 7, 7);
    this->tcu6Online = this->getBool(0x308, 7, 6);
    this->siv1Online = this->getBool(0x308, 7, 5);
    this->siv2Online = this->getBool(0x308, 7, 4);
    this->siv3Online = this->getBool(0x308, 7, 3);
    this->siv4Online = this->getBool(0x308, 7, 2);
    this->edcu1OnlineA1 = this->getBool(0x308, 7, 1);
    this->edcu2OnlineA1 = this->getBool(0x308, 7, 0);
    this->edcu1OnlineB1 = this->getBool(0x308, 8, 7);
    this->edcu2OnlineB1 = this->getBool(0x308, 8, 6);
    this->edcu1OnlineC1 = this->getBool(0x308, 8, 5);
    this->edcu2OnlineC1 = this->getBool(0x308, 8, 4);
    this->edcu1OnlineD1 = this->getBool(0x308, 8, 3);
    this->edcu2OnlineD1 = this->getBool(0x308, 8, 2);
    this->edcu1OnlineD2 = this->getBool(0x308, 8, 1);
    this->edcu2OnlineD2 = this->getBool(0x308, 8, 0);
    this->edcu1OnlineC2 = this->getBool(0x308, 9, 7);
    this->edcu2OnlineC2 = this->getBool(0x308, 9, 6);
    this->edcu1OnlineB2 = this->getBool(0x308, 9, 5);
    this->edcu2OnlineB2 = this->getBool(0x308, 9, 4);
    this->edcu1OnlineA2 = this->getBool(0x308, 9, 3);
    this->edcu2OnlineA2 = this->getBool(0x308, 9, 2);
    this->pa1Online = this->getBool(0x308, 9, 1);
    this->pa2Online = this->getBool(0x308, 9, 0);
    this->fau1Online = this->getBool(0x308, 10, 7);
    this->fau2Online = this->getBool(0x308, 10 ,6);
    this->hvac1Online = this->getBool(0x308, 10, 5);
    this->hvac2Online = this->getBool(0x308, 10, 4);
    this->hvac3Online = this->getBool(0x308, 10, 3);
    this->hvac4Online = this->getBool(0x308, 10, 2);
    this->hvac5Online = this->getBool(0x308, 10, 1);
    this->hvac6Online = this->getBool(0x308, 10, 0);
    this->hvac7Online = this->getBool(0x308, 11, 7);
    this->hvac8Online = this->getBool(0x308, 11, 6);
    this->atc1Online = this->getBool(0x308, 11, 5);
    this->atc2Online = this->getBool(0x308, 11, 4);
    this->dcdc1Online = this->getBool(0x308, 11, 3);
    this->dcdc2Online = this->getBool(0x308, 11, 2);
    this->tdsOnline = this->getBool(0x308, 11, 1);

    this->ccuSivStartA1 = this->getBool(0x618, 0, 7);
    this->ccuSivStartC1 = this->getBool(0x618, 0, 6);
    this->ccuSivStartC2 = this->getBool(0x618, 0, 5);
    this->ccuSivStartA2 = this->getBool(0x618, 0, 4);

    this->ccuEmergencyBrakeApply = this->getBool(0x308, 22, 1);
    this->ccuFastBrakeApply = this->getBool(0x308, 22, 0);

    this->ccuDirectionForward = this->getBool(0x308, 22, 5);
    this->ccuDirectionBackward = this->getBool(0x308, 22, 4);

    this->ccuNoTractionAll = this->getBool(0x309, 26, 7) || this->getBool(0x309, 26, 6) || this->getBool(0x309, 26, 5)
                                ||  this->getBool(0x309, 26, 4) || this->getBool(0x309, 26, 3) || this->getBool(0x309, 26, 2)
                                || this->getBool(0x309, 26, 1);

    this->ccuDcuForwardAll = this->getBool(0x518, 1, 7);
    this->ccuDcuBackwardAll = this->getBool(0x518, 1, 6);
    this->ccuDcuTractionAll = this->getBool(0x518, 1, 5);
    this->ccuDcuBrakeAll = this->getBool(0x518, 1, 4);

    this->ccuBcuTractionAll = this->getBool(0x408, 0, 7);
    this->ccuBcuBrakeAll = this->getBool(0x408, 0, 6);
    this->ccuBcuBrakeLevelAll = this->getSignedInt(0x408, 4) / 100;

    this->ccuDcuA2ForwardAll = this->getBool(0x518, 0, 6);
    this->ccuDcuA2BackwardAll = this->getBool(0x518, 0, 5);
    this->ccuDcuA1ForwardAll = this->getBool(0x518, 1, 7);
    this->ccuDcuA1BackwardAll = this->getBool(0x518, 1, 6);

    // this cabin active
    if (1 == this->hmiPosition && this->ccuCabinActiveA1)
    {
        this->hmiThisCabinActive = true;
    }
    else if (2 == this->hmiPosition && this->ccuCabinActiveA2)
    {
        this->hmiThisCabinActive = true;
    }
    else
    {
        this->hmiThisCabinActive = false;
    }

    this->ccu1OsVersion.sprintf("%.1f", this->getUnsignedChar(0x308, 13) * 0.1);
    this->ccu1MvbVersion.sprintf("%.1f", this->getUnsignedChar(0x308, 14) * 0.1);
    this->ccu1SdbVersion.sprintf("%.1f", this->getUnsignedChar(0x308, 15) * 0.1);
    this->ccu1PlcVersion.sprintf("%.1f", this->getUnsignedChar(0x308, 16) * 0.1);

    this->ccu2OsVersion.sprintf("%.1f", this->getUnsignedChar(0x308, 17) * 0.1);
    this->ccu2MvbVersion.sprintf("%.1f", this->getUnsignedChar(0x308, 18) * 0.1);
    this->ccu2SdbVersion.sprintf("%.1f", this->getUnsignedChar(0x308, 19) * 0.1);
    this->ccu2PlcVersion.sprintf("%.1f", this->getUnsignedChar(0x308, 20) * 0.1);

    if (1 == this->hmiPosition)
    {
        this->hmiVersionA1.sprintf("%d.%d", _HMI_VERSION_MAIN, _HMI_VERSION_MINOR);
        this->hmiVersionA2.sprintf("%d.%d", this->getUnsignedChar(0x320, 2), this->getUnsignedChar(0x320, 3));

        this->setUnsignedInt(0x310, 0, this->hmiLifeSignal ++);
        this->setUnsignedChar(0x310, 2, _HMI_VERSION_MAIN);
        this->setUnsignedChar(0x310, 3, _HMI_VERSION_MINOR);
        this->setUnsignedChar(0x310, 4, this->hmiSetDateTime.toString("yy").toInt());
        this->setUnsignedChar(0x310, 5, this->hmiSetDateTime.toString("MM").toInt());
        this->setUnsignedChar(0x310, 6, this->hmiSetDateTime.toString("dd").toInt());
        this->setUnsignedChar(0x310, 7, this->hmiSetDateTime.toString("hh").toInt());
        this->setUnsignedChar(0x310, 8, this->hmiSetDateTime.toString("mm").toInt());
        this->setUnsignedChar(0x310, 9, this->hmiSetDateTime.toString("ss").toInt());

        this->setBool(0x313, 3, 4, this->hmiAcceleratedSpeedTest);

        this->setBool(0x313, 0, 7, this->hmiFireAlarmResetCommand);
        this->setBool(0x313, 0, 6, this->hmiFireAlarmResetCommand);
        this->setBool(0x313, 0, 5, this->hmiFireAlarmResetCommand);
        this->setBool(0x313, 0, 4, this->hmiFireAlarmResetCommand);
        this->setBool(0x313, 0, 3, this->hmiFireAlarmResetCommand);
        this->setBool(0x313, 0, 2, this->hmiFireAlarmResetCommand);
        this->setBool(0x313, 0, 1, this->hmiFireAlarmResetCommand);
        this->setBool(0x313, 0, 0, this->hmiFireAlarmResetCommand);

        this->setBool(0x310, 10, 5, this->hmiSetTotalMileageFlag);
        this->setBool(0x310, 10, 4, this->hmiSetTotalCompressor1Flag);
        this->setBool(0x310, 10, 3, this->hmiSetTotalCompressor2Flag);
        this->setBool(0x310, 10, 2, this->hmiSetTotalConsumptionFlag);
        this->setBool(0x310, 10, 1, this->hmiSetTotalSivConsumptionFlag);
        this->setBool(0x310, 10, 0, this->hmiSetTotalTractionConsumptionFlag);
        this->setBool(0x310, 11, 7, this->hmiSetTotalBcuConsumptionFlag);
        this->setBool(0x310, 11, 6, this->hmiSetTotalRegeneratePowerFlag);
        this->setBool(0x310, 11, 5, this->hmiSetRecordTimeFlag);
        this->setBool(0x310, 11, 4, this->hmiSetRecordMileageFlag);

        this->setBool(0x310, 10, 7, this->hmiSetTimeCommand);

        this->setUnsignedInt(0x310, 12, this->hmiSetRecordTime);
        this->setUnsignedInt(0x310, 14, this->hmiSetRecordMileage);
        this->setUnsignedChar(0x310, 31, this->hmiSecurityCode);

        this->setUnsignedInt32(0x311, 0, this->hmiSetTotalMileage);
        this->setUnsignedInt32(0x311, 4, this->hmiSetTotalCompressor1);
        this->setUnsignedInt32(0x311, 8, this->hmiSetTotalCompressor2);
        this->setUnsignedInt32(0x311, 12, this->hmiSetTotalConsumption);
        this->setUnsignedInt32(0x311, 16, this->hmiSetTotalSivConsumption);
        this->setUnsignedInt32(0x311, 20, this->hmiSetTotalTractionConsumption);
        this->setUnsignedInt32(0x311, 24, this->hmiSetTotalBcuConsumption);
        this->setUnsignedInt32(0x311, 28, this->hmiSetTotalRegeneratePower);

        this->setBool(0x312, 18, 7, this->hmiSetWheelCommandA1);
        this->setBool(0x312, 18, 6, this->hmiSetWheelCommandB1);
        this->setBool(0x312, 18, 5, this->hmiSetWheelCommandC1);
        this->setBool(0x312, 18, 4, this->hmiSetWheelCommandD1);
        this->setBool(0x312, 18, 3, this->hmiSetWheelCommandD2);
        this->setBool(0x312, 18, 2, this->hmiSetWheelCommandC2);
        this->setBool(0x312, 18, 1, this->hmiSetWheelCommandB2);
        this->setBool(0x312, 18, 0, this->hmiSetWheelCommandA2);

        this->setUnsignedChar(0x312, 19, this->hmiWheelDiameterA1 - 770);
        this->setUnsignedChar(0x312, 20, this->hmiWheelDiameterB1 - 770);
        this->setUnsignedChar(0x312, 21, this->hmiWheelDiameterC1 - 770);
        this->setUnsignedChar(0x312, 22, this->hmiWheelDiameterD1 - 770);
        this->setUnsignedChar(0x312, 23, this->hmiWheelDiameterD2 - 770);
        this->setUnsignedChar(0x312, 24, this->hmiWheelDiameterC2 - 770);
        this->setUnsignedChar(0x312, 25, this->hmiWheelDiameterB2 - 770);
        this->setUnsignedChar(0x312, 26, this->hmiWheelDiameterA2 - 770);

        this->setBool(0x313, 1, 7, this->hmiSetVehicleNumberCommand);
        this->setUnsignedChar(0x313, 2, this->hmiSetVehicleNumber.toUShort());

        this->setBool(0x312, 27, 2, this->hmiSivCutoutA1);
        this->setBool(0x312, 27, 1, this->hmiSivCutoutC1);
        this->setBool(0x312, 27, 0, this->hmiSivCutoutC2);
        this->setBool(0x312, 28, 7, this->hmiSivCutoutA2);

        this->setBool(0x312, 28, 6, this->hmiDcuBrakeResistorTestB1);
        this->setBool(0x312, 28, 5, this->hmiDcuBrakeResistorTestC1);
        this->setBool(0x312, 28, 4, this->hmiDcuBrakeResistorTestD1);
        this->setBool(0x312, 28, 3, this->hmiDcuBrakeResistorTestD2);
        this->setBool(0x312, 28, 2, this->hmiDcuBrakeResistorTestC2);
        this->setBool(0x312, 28, 1, this->hmiDcuBrakeResistorTestB2);

        this->setBool(0x313, 3, 7, this->hmiBrakeSelfCheckFlag);

        this->setUnsignedChar(0x312, 2, this->hmiAirConditionerModeA1);
        this->setUnsignedChar(0x312, 3, this->hmiAirConditionerModeB1);
        this->setUnsignedChar(0x312, 4, this->hmiAirConditionerModeC1);
        this->setUnsignedChar(0x312, 5, this->hmiAirConditionerModeD1);
        this->setUnsignedChar(0x312, 6, this->hmiAirConditionerModeD2);
        this->setUnsignedChar(0x312, 7, this->hmiAirConditionerModeC2);
        this->setUnsignedChar(0x312, 8, this->hmiAirConditionerModeB2);
        this->setUnsignedChar(0x312, 9, this->hmiAirConditionerModeA2);

        this->setUnsignedChar(0x312, 10, this->hmiAirConditionerTemperatureA1);
        this->setUnsignedChar(0x312, 11, this->hmiAirConditionerTemperatureB1);
        this->setUnsignedChar(0x312, 12, this->hmiAirConditionerTemperatureC1);
        this->setUnsignedChar(0x312, 13, this->hmiAirConditionerTemperatureD1);
        this->setUnsignedChar(0x312, 14, this->hmiAirConditionerTemperatureD2);
        this->setUnsignedChar(0x312, 15, this->hmiAirConditionerTemperatureC2);
        this->setUnsignedChar(0x312, 16, this->hmiAirConditionerTemperatureB2);
        this->setUnsignedChar(0x312, 17, this->hmiAirConditionerTemperatureA2);

        this->setBool(0x312, 0, 7, this->hmiSetAirConditionerModeCommandA1);
        this->setBool(0x312, 0, 6, this->hmiSetAirConditionerModeCommandB1);
        this->setBool(0x312, 0, 5, this->hmiSetAirConditionerModeCommandC1);
        this->setBool(0x312, 0, 4, this->hmiSetAirConditionerModeCommandD1);
        this->setBool(0x312, 0, 3, this->hmiSetAirConditionerModeCommandD2);
        this->setBool(0x312, 0, 2, this->hmiSetAirConditionerModeCommandC2);
        this->setBool(0x312, 0, 1, this->hmiSetAirConditionerModeCommandB2);
        this->setBool(0x312, 0, 0, this->hmiSetAirConditionerModeCommandA2);

        this->setBool(0x312, 1, 7, this->hmiSetAirConditionerTemperatureCommandA1);
        this->setBool(0x312, 1, 6, this->hmiSetAirConditionerTemperatureCommandB1);
        this->setBool(0x312, 1, 5, this->hmiSetAirConditionerTemperatureCommandC1);
        this->setBool(0x312, 1, 4, this->hmiSetAirConditionerTemperatureCommandD1);
        this->setBool(0x312, 1, 3, this->hmiSetAirConditionerTemperatureCommandD2);
        this->setBool(0x312, 1, 2, this->hmiSetAirConditionerTemperatureCommandC2);
        this->setBool(0x312, 1, 1, this->hmiSetAirConditionerTemperatureCommandB2);
        this->setBool(0x312, 1, 0, this->hmiSetAirConditionerTemperatureCommandA2);

        this->setBool(0x312, 28, 0, this->hmiAirConditionerFireMode);
        this->setBool(0x312, 27, 7, this->hmiAirConditionerPreCoolMode);

        this->setBool(0x313, 3, 6, this->hmiCompressorTestCommand);

        this->setBool(0x313, 3, 5, this->hmiElectricCutout);

        this->hmiModifyMileageFlagA2 = this->getBool(0x320, 10, 5);
        this->hmiModifyCompressor1FlagA2 = this->getBool(0x320, 10 ,5);
        this->hmiModifyCompressor2FlagA2 = this->getBool(0x320, 10, 4);
        this->hmiModifyTotalFlagA2 = this->getBool(0x320, 10, 2);
        this->hmiModifyAuxiliaryFlagA2 = this->getBool(0x320, 10, 1);
        this->hmiModifyTractionFlagA2 = this->getBool(0x320, 10, 1);
        this->hmiModifyBrakeFlagA2 = this->getBool(0x320, 11, 7);
        this->hmiModifyRegenerateFlagA2 = this->getBool(0x320, 11, 6);

        static int i = 0;

        switch (i = i ++ % 5)
        {
        case 1:
            this->setUnsignedChar(0x313, 4, 1);
            this->setUnsignedInt32(0x313, 6, this->hmiTimeMileage);
            this->setUnsignedInt32(0x313, 10, this->hmiTimeCompressor1);
            this->setUnsignedInt32(0x313, 14, this->hmiTimeCompressor2);
            this->setUnsignedInt32(0x313, 18, this->hmiTimeConsumption);
            break;
        case 2:
            this->setUnsignedChar(0x313, 4, 2);
            this->setUnsignedInt32(0x313, 6, this->hmiTimeSivConsumption);
            this->setUnsignedInt32(0x313, 10, this->hmiTimeTractionConsumption);
            this->setUnsignedInt32(0x313, 14, this->hmiTimeBcuConsumption);
            this->setUnsignedInt32(0x313, 18, this->hmiTimeRegeneratePower);
            break;
        case 3:
            this->setUnsignedChar(0x313, 4, 3);
            this->setUnsignedInt32(0x313, 6, 0);
            this->setUnsignedInt32(0x313, 10, this->hmiDistanceCompressor1);
            this->setUnsignedInt32(0x313, 14, this->hmiDistanceCompressor2);
            this->setUnsignedInt32(0x313, 18, this->hmiDistanceConsumption);
            break;
        case 4:
            this->setUnsignedChar(0x313, 4, 4);
            this->setUnsignedInt32(0x313, 6, this->hmiDistanceSivConsumption);
            this->setUnsignedInt32(0x313, 10, this->hmiDistanceTractionConsumption);
            this->setUnsignedInt32(0x313, 14, this->hmiDistanceBcuConsumption);
            this->setUnsignedInt32(0x313, 18, this->hmiDistanceRegeneratePower);
            break;
        }
    }
    else if (2 == this->hmiPosition)
    {
        this->hmiVersionA2.sprintf("%d.%d", _HMI_VERSION_MAIN, _HMI_VERSION_MINOR);
        this->hmiVersionA1.sprintf("%d.%d", this->getUnsignedChar(0x310, 2), this->getUnsignedChar(0x310, 3));

        this->setUnsignedInt(0x320, 0, this->hmiLifeSignal ++);
        this->setUnsignedChar(0x320, 2, _HMI_VERSION_MAIN);
        this->setUnsignedChar(0x320, 3, _HMI_VERSION_MINOR);
        this->setUnsignedChar(0x320, 4, this->hmiSetDateTime.toString("yy").toInt());
        this->setUnsignedChar(0x320, 5, this->hmiSetDateTime.toString("MM").toInt());
        this->setUnsignedChar(0x320, 6, this->hmiSetDateTime.toString("dd").toInt());
        this->setUnsignedChar(0x320, 7, this->hmiSetDateTime.toString("hh").toInt());
        this->setUnsignedChar(0x320, 8, this->hmiSetDateTime.toString("mm").toInt());
        this->setUnsignedChar(0x320, 9, this->hmiSetDateTime.toString("ss").toInt());

        this->setBool(0x323, 0, 7, this->hmiFireAlarmResetCommand);
        this->setBool(0x323, 0, 6, this->hmiFireAlarmResetCommand);
        this->setBool(0x323, 0, 5, this->hmiFireAlarmResetCommand);
        this->setBool(0x323, 0, 4, this->hmiFireAlarmResetCommand);
        this->setBool(0x323, 0, 3, this->hmiFireAlarmResetCommand);
        this->setBool(0x323, 0, 2, this->hmiFireAlarmResetCommand);
        this->setBool(0x323, 0, 1, this->hmiFireAlarmResetCommand);
        this->setBool(0x323, 0, 0, this->hmiFireAlarmResetCommand);

        this->setBool(0x320, 10, 5, this->hmiSetTotalMileageFlag);
        this->setBool(0x320, 10, 4, this->hmiSetTotalCompressor1Flag);
        this->setBool(0x320, 10, 3, this->hmiSetTotalCompressor2Flag);
        this->setBool(0x320, 10, 2, this->hmiSetTotalConsumptionFlag);
        this->setBool(0x320, 10, 1, this->hmiSetTotalSivConsumptionFlag);
        this->setBool(0x320, 10, 0, this->hmiSetTotalTractionConsumptionFlag);
        this->setBool(0x320, 11, 7, this->hmiSetTotalBcuConsumptionFlag);
        this->setBool(0x320, 11, 6, this->hmiSetTotalRegeneratePowerFlag);
        this->setBool(0x320, 11, 5, this->hmiSetRecordTimeFlag);
        this->setBool(0x320, 11, 4, this->hmiSetRecordMileageFlag);

        this->setBool(0x323, 3, 4, this->hmiAcceleratedSpeedTest);

        this->setUnsignedInt(0x320, 12, this->hmiSetRecordTime);
        this->setUnsignedInt(0x320, 14, this->hmiSetRecordMileage);
        this->setUnsignedChar(0x320, 31, this->hmiSecurityCode);

        this->setBool(0x320, 10, 7, this->hmiSetTimeCommand);

        this->setUnsignedInt32(0x321, 0, this->hmiSetTotalMileage);
        this->setUnsignedInt32(0x321, 4, this->hmiSetTotalCompressor1);
        this->setUnsignedInt32(0x321, 8, this->hmiSetTotalCompressor2);
        this->setUnsignedInt32(0x321, 12, this->hmiSetTotalConsumption);
        this->setUnsignedInt32(0x321, 16, this->hmiSetTotalSivConsumption);
        this->setUnsignedInt32(0x321, 20, this->hmiSetTotalTractionConsumption);
        this->setUnsignedInt32(0x321, 24, this->hmiSetTotalBcuConsumption);
        this->setUnsignedInt32(0x321, 28, this->hmiSetTotalRegeneratePower);

        this->setBool(0x322, 18, 7, this->hmiSetWheelCommandA1);
        this->setBool(0x322, 18, 6, this->hmiSetWheelCommandB1);
        this->setBool(0x322, 18, 5, this->hmiSetWheelCommandC1);
        this->setBool(0x322, 18, 4, this->hmiSetWheelCommandD1);
        this->setBool(0x322, 18, 3, this->hmiSetWheelCommandD2);
        this->setBool(0x322, 18, 2, this->hmiSetWheelCommandC2);
        this->setBool(0x322, 18, 1, this->hmiSetWheelCommandB2);
        this->setBool(0x322, 18, 0, this->hmiSetWheelCommandA2);

        this->setUnsignedChar(0x322, 19, this->hmiWheelDiameterA1 - 770);
        this->setUnsignedChar(0x322, 20, this->hmiWheelDiameterB1 - 770);
        this->setUnsignedChar(0x322, 21, this->hmiWheelDiameterC1 - 770);
        this->setUnsignedChar(0x322, 22, this->hmiWheelDiameterD1 - 770);
        this->setUnsignedChar(0x322, 23, this->hmiWheelDiameterD2 - 770);
        this->setUnsignedChar(0x322, 24, this->hmiWheelDiameterC2 - 770);
        this->setUnsignedChar(0x322, 25, this->hmiWheelDiameterB2 - 770);
        this->setUnsignedChar(0x322, 26, this->hmiWheelDiameterA2 - 770);

        this->setBool(0x323, 1, 7, this->hmiSetVehicleNumberCommand);
        this->setUnsignedChar(0x323, 2, this->hmiSetVehicleNumber.toUShort());

        this->setBool(0x322, 27, 2, this->hmiSivCutoutA1);
        this->setBool(0x322, 27, 1, this->hmiSivCutoutC1);
        this->setBool(0x322, 27, 0, this->hmiSivCutoutC2);
        this->setBool(0x322, 28, 7, this->hmiSivCutoutA2);

        this->setBool(0x322, 28, 6, this->hmiDcuBrakeResistorTestB1);
        this->setBool(0x322, 28, 5, this->hmiDcuBrakeResistorTestC1);
        this->setBool(0x322, 28, 4, this->hmiDcuBrakeResistorTestD1);
        this->setBool(0x322, 28, 3, this->hmiDcuBrakeResistorTestD2);
        this->setBool(0x322, 28, 2, this->hmiDcuBrakeResistorTestC2);
        this->setBool(0x322, 28, 1, this->hmiDcuBrakeResistorTestB2);

        this->setBool(0x323, 3, 7, this->hmiBrakeSelfCheckFlag);

        this->setUnsignedChar(0x322, 2, this->hmiAirConditionerModeA1);
        this->setUnsignedChar(0x322, 3, this->hmiAirConditionerModeB1);
        this->setUnsignedChar(0x322, 4, this->hmiAirConditionerModeC1);
        this->setUnsignedChar(0x322, 5, this->hmiAirConditionerModeD1);
        this->setUnsignedChar(0x322, 6, this->hmiAirConditionerModeD2);
        this->setUnsignedChar(0x322, 7, this->hmiAirConditionerModeC2);
        this->setUnsignedChar(0x322, 8, this->hmiAirConditionerModeB2);
        this->setUnsignedChar(0x322, 9, this->hmiAirConditionerModeA2);

        this->setUnsignedChar(0x322, 10, this->hmiAirConditionerTemperatureA1);
        this->setUnsignedChar(0x322, 11, this->hmiAirConditionerTemperatureB1);
        this->setUnsignedChar(0x322, 12, this->hmiAirConditionerTemperatureC1);
        this->setUnsignedChar(0x322, 13, this->hmiAirConditionerTemperatureD1);
        this->setUnsignedChar(0x322, 14, this->hmiAirConditionerTemperatureD2);
        this->setUnsignedChar(0x322, 15, this->hmiAirConditionerTemperatureC2);
        this->setUnsignedChar(0x322, 16, this->hmiAirConditionerTemperatureB2);
        this->setUnsignedChar(0x322, 17, this->hmiAirConditionerTemperatureA2);

        this->setBool(0x322, 0, 7, this->hmiSetAirConditionerModeCommandA1);
        this->setBool(0x322, 0, 6, this->hmiSetAirConditionerModeCommandB1);
        this->setBool(0x322, 0, 5, this->hmiSetAirConditionerModeCommandC1);
        this->setBool(0x322, 0, 4, this->hmiSetAirConditionerModeCommandD1);
        this->setBool(0x322, 0, 3, this->hmiSetAirConditionerModeCommandD2);
        this->setBool(0x322, 0, 2, this->hmiSetAirConditionerModeCommandC2);
        this->setBool(0x322, 0, 1, this->hmiSetAirConditionerModeCommandB2);
        this->setBool(0x322, 0, 0, this->hmiSetAirConditionerModeCommandA2);

        this->setBool(0x322, 1, 7, this->hmiSetAirConditionerTemperatureCommandA1);
        this->setBool(0x322, 1, 6, this->hmiSetAirConditionerTemperatureCommandB1);
        this->setBool(0x322, 1, 5, this->hmiSetAirConditionerTemperatureCommandC1);
        this->setBool(0x322, 1, 4, this->hmiSetAirConditionerTemperatureCommandD1);
        this->setBool(0x322, 1, 3, this->hmiSetAirConditionerTemperatureCommandD2);
        this->setBool(0x322, 1, 2, this->hmiSetAirConditionerTemperatureCommandC2);
        this->setBool(0x322, 1, 1, this->hmiSetAirConditionerTemperatureCommandB2);
        this->setBool(0x322, 1, 0, this->hmiSetAirConditionerTemperatureCommandA2);

        this->setBool(0x322, 28, 0, this->hmiAirConditionerFireMode);
        this->setBool(0x322, 27, 7, this->hmiAirConditionerPreCoolMode);

        this->setBool(0x323, 3, 6, this->hmiCompressorTestCommand);

        this->setBool(0x323, 3, 5, this->hmiElectricCutout);

        // the running record that stored in hmi 1
        switch (this->getUnsignedChar(0x313, 4))
        {
        case 1:
            this->hmiTimeMileage = this->getUnsignedInt32(0x313, 6);
            this->hmiTimeCompressor1 = this->getUnsignedInt32(0x313, 10);
            this->hmiTimeCompressor2 = this->getUnsignedInt32(0x313, 14);
            this->hmiTimeConsumption = this->getUnsignedInt32(0x313, 18);
            break;
        case 2:
            this->hmiTimeSivConsumption = this->getUnsignedInt32(0x313, 6);
            this->hmiTimeTractionConsumption = this->getUnsignedInt32(0x313, 10);
            this->hmiTimeBcuConsumption = this->getUnsignedInt32(0x313, 14);
            this->hmiTimeRegeneratePower = this->getUnsignedInt32(0x313, 18);
            break;
        case 3:
            this->hmiDistanceCompressor1 = this->getUnsignedInt32(0x313, 10);
            this->hmiDistanceCompressor2 = this->getUnsignedInt32(0x313, 14);
            this->hmiDistanceConsumption = this->getUnsignedInt32(0x313, 18);
            break;
        case 4:
            this->hmiDistanceSivConsumption = this->getUnsignedInt32(0x313, 6);
            this->hmiDistanceTractionConsumption = this->getUnsignedInt32(0x313, 10);
            this->hmiDistanceBcuConsumption = this->getUnsignedInt32(0x313, 14);
            this->hmiDistanceRegeneratePower = this->getUnsignedInt32(0x313, 18);
            break;
        default:
            this->hmiTimeMileage = 0;
            this->hmiTimeCompressor1 = 0;
            this->hmiTimeCompressor2 = 0;
            this->hmiTimeSivConsumption = 0;
            this->hmiTimeTractionConsumption = 0;
            this->hmiTimeBcuConsumption = 0;
            this->hmiTimeRegeneratePower = 0;
            this->hmiTimeConsumption = 0;

            this->hmiDistanceCompressor1 = 0;
            this->hmiDistanceCompressor2 = 0;
            this->hmiDistanceSivConsumption = 0;
            this->hmiDistanceTractionConsumption = 0;
            this->hmiDistanceBcuConsumption = 0;
            this->hmiDistanceRegeneratePower = 0;
            this->hmiDistanceConsumption = 0;
        }
    }
}
