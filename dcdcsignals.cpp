#include "database.h"

void Database::synchronizeDcdcSignals()
{
    this->dcdcNormalA1 = this->getBool(0xC10, 26, 4);
    this->dcdcNormalA2 = this->getBool(0xC80, 26, 4);

    this->dcdcKm2StateA1 = this->getBool(0xC10, 25, 2);
    this->dcdcK1StateA1 = this->getBool(0xC10, 25, 1);
    this->dcdcKm2StateA1 = this->getBool(0xC10, 25, 0);
    this->dcdcKm1DriverA1 = this->getBool(0xC10, 26, 7);
    this->dcdcKm2DriverA1 = this->getBool(0xC10, 26, 6);
    this->dcdcK1DriverA1 = this->getBool(0xC10, 26, 5);

    this->dcdcKm2StateA2 = this->getBool(0xC80, 25, 2);
    this->dcdcK1StateA2 = this->getBool(0xC80, 25, 1);
    this->dcdcKm2StateA2 = this->getBool(0xC80, 25, 0);
    this->dcdcKm1DriverA2 = this->getBool(0xC80, 26, 7);
    this->dcdcKm2DriverA2 = this->getBool(0xC80, 26, 6);
    this->dcdcK1DriverA2 = this->getBool(0xC80, 26, 5);

    this->dcdcOutputOverVoltageA1 = this->getBool(0xC10, 30, 7);
    this->dcdcOutputLowVoltageA1 = this->getBool(0xC10, 30, 6);
    this->dcdcOutputOverCurrentA1 = this->getBool(0xC10, 30, 5);
    this->dcdcChargeOverCurrentA1 = this->getBool(0xC10, 30, 4);
    this->dcdcInputLowVoltageA1 = this->getBool(0xC10, 30, 3);
    this->dcdcInputOverVoltageA1 = this->getBool(0xC10, 30, 2);

    this->dcdcOutputOverVoltageA2 = this->getBool(0xC80, 30, 7);
    this->dcdcOutputLowVoltageA2 = this->getBool(0xC80, 30, 6);
    this->dcdcOutputOverCurrentA2 = this->getBool(0xC80, 30, 5);
    this->dcdcChargeOverCurrentA2 = this->getBool(0xC80, 30, 4);
    this->dcdcInputLowVoltageA2 = this->getBool(0xC80, 30, 3);
    this->dcdcInputOverVoltageA2 = this->getBool(0xC80, 30, 2);

    this->dcdcEmergencyRunningA1 = this->getBool(0xC10, 24, 1);
    this->dcdcRunningStateA1 = this->getBool(0xC10, 25, 4);
    this->dcdcMinorErrorA1 = this->getBool(0xC10, 29, 2);
    this->dcdcMajorErrorA1 = this->getBool(0xC10, 29, 1);

    this->dcdcEmergencyRunningA2 = this->getBool(0xC80, 24, 1);
    this->dcdcRunningStateA2 = this->getBool(0xC80, 25, 4);
    this->dcdcMinorErrorA2 = this->getBool(0xC80, 29, 2);
    this->dcdcMajorErrorA2 = this->getBool(0xC80, 29, 1);

    this->dcdcBatteryTemperatureA1 = this->getSignedInt(0xC10, 20);
    this->dcdcBatteryTemperatureA2 = this->getSignedInt(0xC80, 20);

    this->dcdcInputCurrentA1 = this->getSignedInt(0xC10, 18);
    this->dcdcInputCurrentA2 = this->getSignedInt(0xC80, 18);

    this->dcdcInputVoltageA1 = this->getSignedInt(0xC10, 6);
    this->dcdcInputVoltageA2 = this->getSignedInt(0xC80, 6);

    this->dcdcCapacitor1VoltageA1 = this->getSignedInt(0xC10, 8);
    this->dcdcCapacitor2VoltageA1 = this->getSignedInt(0xC10, 10);
    this->dcdcOutputVoltageA1 = this->getSignedInt(0xC10, 12);
    this->dcdcOutputCurrentA1 = this->getSignedInt(0xC10, 14);
    this->dcdcChargeCurrentA1 = this->getSignedInt(0xC10, 16);

    this->dcdcCapacitor1VoltageA2 = this->getSignedInt(0xC80, 8);
    this->dcdcCapacitor2VoltageA2 = this->getSignedInt(0xC80, 10);
    this->dcdcOutputVoltageA2 = this->getSignedInt(0xC80, 12);
    this->dcdcOutputCurrentA2 = this->getSignedInt(0xC80, 14);
    this->dcdcChargeCurrentA2 = this->getSignedInt(0xC80, 16);

    // dcdc software version
    unsigned short int tempDcdc = 0;

    tempDcdc = this->getUnsignedInt(0xC10, 2);
    this->dcdcDspVersionA1.sprintf("%X.%X.%X", tempDcdc / 256, tempDcdc % 256 / 16, tempDcdc % 16);
    tempDcdc = this->getUnsignedInt(0xC80, 2);
    this->dcdcDspVersionA2.sprintf("%X.%X.%X", tempDcdc / 256, tempDcdc % 256 / 16, tempDcdc % 16);

    tempDcdc = this->getUnsignedInt(0xC10, 4);
    this->dcdcPlcVersionA1.sprintf("%X.%X.%X", tempDcdc / 256, tempDcdc % 256 / 16, tempDcdc % 16);
    tempDcdc = this->getUnsignedInt(0xC80, 4);
    this->dcdcPlcVersionA2.sprintf("%X.%X.%X", tempDcdc / 256, tempDcdc % 256 / 16, tempDcdc % 16);
}
