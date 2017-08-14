#include "database.h"


void Database::synchronizeAcuSignals()
{
    this->acuDeloadA1 = this->getBool(0xA10, 21, 7);
    this->acuDeloadB1 = this->getBool(0xA20, 21, 7);
    this->acuDeloadC1 = this->getBool(0xA30, 21, 7);
    this->acuDeloadD1 = this->getBool(0xA40, 21, 7);
    this->acuDeloadD2 = this->getBool(0xA50, 21, 7);
    this->acuDeloadC2 = this->getBool(0xA60, 21, 7);
    this->acuDeloadB2 = this->getBool(0xA70, 21, 7);
    this->acuDeloadA2 = this->getBool(0xA80, 21, 7);

    // the acu signals
    this->acuTargetTemperatureA1 = this->getUnsignedInt(0xA10, 4) - 30;
    this->acuIndoorTemperatureA1 = this->getUnsignedInt(0xA10, 6) - 30;
    this->acuOutdoorTemperatureA1 = this->getUnsignedInt(0xA10, 8) - 30;

    this->acuTargetTemperatureB1 = this->getUnsignedInt(0xA20, 4) - 30;
    this->acuIndoorTemperatureB1 = this->getUnsignedInt(0xA20, 6) - 30;
    this->acuOutdoorTemperatureB1 = this->getUnsignedInt(0xA20, 8) - 30;

    this->acuTargetTemperatureC1 = this->getUnsignedInt(0xA30, 4) - 30;
    this->acuIndoorTemperatureC1 = this->getUnsignedInt(0xA30, 6) - 30;
    this->acuOutdoorTemperatureC1 = this->getUnsignedInt(0xA30, 8) - 30;

    this->acuTargetTemperatureD1 = this->getUnsignedInt(0xA40, 4) - 30;
    this->acuIndoorTemperatureD1 = this->getUnsignedInt(0xA40, 6) - 30;
    this->acuOutdoorTemperatureD1 = this->getUnsignedInt(0xA40, 8) - 30;

    this->acuTargetTemperatureD2 = this->getUnsignedInt(0xA50, 4) - 30;
    this->acuIndoorTemperatureD2 = this->getUnsignedInt(0xA50, 6) - 30;
    this->acuOutdoorTemperatureD2 = this->getUnsignedInt(0xA50, 8) - 30;

    this->acuTargetTemperatureC2 = this->getUnsignedInt(0xA60, 4) - 30;
    this->acuIndoorTemperatureC2 = this->getUnsignedInt(0xA60, 6) - 30;
    this->acuOutdoorTemperatureC2 = this->getUnsignedInt(0xA60, 8) - 30;

    this->acuTargetTemperatureB2 = this->getUnsignedInt(0xA70, 4) - 30;
    this->acuIndoorTemperatureB2 = this->getUnsignedInt(0xA70, 6) - 30;
    this->acuOutdoorTemperatureB2 = this->getUnsignedInt(0xA70, 8) - 30;

    this->acuTargetTemperatureA2 = this->getUnsignedInt(0xA80, 4) - 30;
    this->acuIndoorTemperatureA2 = this->getUnsignedInt(0xA80, 6) - 30;
    this->acuOutdoorTemperatureA2 = this->getUnsignedInt(0xA80, 8) - 30;

    // the acu state signals
    this->acuStopA1 = this->getBool(0xA10, 14, 7);
    this->acuVentilateA1 = this->getBool(0xA10, 14, 6);
    this->acuPreCoolA1 = this->getBool(0xA10, 14, 5);
    this->acuManualCoolA1 = this->getBool(0xA10, 14, 3);
    this->acuAutoCoolA1 = this->getBool(0xA10, 14, 1);
    this->acuAutoA1 = this->getBool(0xA10, 15, 4);
    this->acuEmergencyA1 = this->getBool(0xA10, 15, 2);
    this->acuFireModeA1 = this->getBool(0xA10, 15, 1);

    this->acuStopB1 = this->getBool(0xA20, 14, 7);
    this->acuVentilateB1 = this->getBool(0xA20, 14, 6);
    this->acuPreCoolB1 = this->getBool(0xA20, 14, 5);
    this->acuManualCoolB1 = this->getBool(0xA20, 14, 3);
    this->acuAutoCoolB1 = this->getBool(0xA20, 14, 1);
    this->acuAutoB1 = this->getBool(0xA20, 15, 4);
    this->acuEmergencyB1 = this->getBool(0xA20, 15, 2);
    this->acuFireModeB1 = this->getBool(0xA20, 15, 1);

    this->acuStopC1 = this->getBool(0xA30, 14, 7);
    this->acuVentilateC1 = this->getBool(0xA30, 14, 6);
    this->acuPreCoolC1 = this->getBool(0xA30, 14, 5);
    this->acuManualCoolC1 = this->getBool(0xA30, 14, 3);
    this->acuAutoCoolC1 = this->getBool(0xA30, 14, 1);
    this->acuAutoC1 = this->getBool(0xA30, 15, 4);
    this->acuEmergencyC1 = this->getBool(0xA30, 15, 2);
    this->acuFireModeC1 = this->getBool(0xA30, 15, 1);

    this->acuStopD1 = this->getBool(0xA40, 14, 7);
    this->acuVentilateD1 = this->getBool(0xA40, 14, 6);
    this->acuPreCoolD1 = this->getBool(0xA40, 14, 5);
    this->acuManualCoolD1 = this->getBool(0xA40, 14, 3);
    this->acuAutoCoolD1 = this->getBool(0xA40, 14, 1);
    this->acuAutoD1 = this->getBool(0xA40, 15, 4);
    this->acuEmergencyD1 = this->getBool(0xA40, 15, 2);
    this->acuFireModeD1 = this->getBool(0xA40, 15, 1);

    this->acuStopD2 = this->getBool(0xA50, 14, 7);
    this->acuVentilateD2 = this->getBool(0xA50, 14, 6);
    this->acuPreCoolD2 = this->getBool(0xA50, 14, 5);
    this->acuManualCoolD2 = this->getBool(0xA50, 14, 3);
    this->acuAutoCoolD2 = this->getBool(0xA50, 14, 1);
    this->acuAutoD2 = this->getBool(0xA50, 15, 4);
    this->acuEmergencyD2 = this->getBool(0xA50, 15, 2);
    this->acuFireModeD2 = this->getBool(0xA50, 15, 1);

    this->acuStopC2 = this->getBool(0xA60, 14, 7);
    this->acuVentilateC2 = this->getBool(0xA60, 14, 6);
    this->acuPreCoolC2 = this->getBool(0xA60, 14, 5);
    this->acuManualCoolC2 = this->getBool(0xA60, 14, 3);
    this->acuAutoCoolC2 = this->getBool(0xA60, 14, 1);
    this->acuAutoC2 = this->getBool(0xA60, 15, 4);
    this->acuEmergencyC2 = this->getBool(0xA60, 15, 2);
    this->acuFireModeC2 = this->getBool(0xA60, 15, 1);

    this->acuStopB2 = this->getBool(0xA70, 14, 7);
    this->acuVentilateB2 = this->getBool(0xA70, 14, 6);
    this->acuPreCoolB2 = this->getBool(0xA70, 14, 5);
    this->acuManualCoolB2 = this->getBool(0xA70, 14, 3);
    this->acuAutoCoolB2 = this->getBool(0xA70, 14, 1);
    this->acuAutoB2 = this->getBool(0xA70, 15, 4);
    this->acuEmergencyB2 = this->getBool(0xA70, 15, 2);
    this->acuFireModeB2 = this->getBool(0xA70, 15, 1);

    this->acuStopA2 = this->getBool(0xA80, 14, 7);
    this->acuVentilateA2 = this->getBool(0xA80, 14, 6);
    this->acuPreCoolA2 = this->getBool(0xA80, 14, 5);
    this->acuManualCoolA2 = this->getBool(0xA80, 14, 3);
    this->acuAutoCoolA2 = this->getBool(0xA80, 14, 1);
    this->acuAutoA2 = this->getBool(0xA80, 15, 4);
    this->acuEmergencyA2 = this->getBool(0xA80, 15, 2);
    this->acuFireModeA2 = this->getBool(0xA80, 15, 1);

    // acu state signals
    this->acuSet1Compressor1RunA1 = this->getBool(0xA10, 16, 7);
    this->acuSet1Compressor2RunA1 = this->getBool(0xA10, 16, 6);
    this->acuSet2Compressor1RunA1 = this->getBool(0xA10, 17, 7);
    this->acuSet2Compressor2RunA1 = this->getBool(0xA10, 17, 6);

    this->acuSet1Compressor1ConverterErrorA1 = this->getBool(0xA10, 24, 7);
    this->acuSet1Compressor2ConverterErrorA1 = this->getBool(0xA10, 24, 6);
    this->acuSet1Compressor1OverLoadA1 = this->getBool(0xA10, 24, 5);
    this->acuSet1Compressor2OverLoadA1 = this->getBool(0xA10, 24, 4);
    this->acuSet1Compressor1HighVoltageErrorA1 = this->getBool(0xA10, 24, 3);
    this->acuSet1Compressor2HighVoltageErrorA1 = this->getBool(0xA10, 24, 2);
    this->acuSet1Compressor1LowVoltageErrorA1 = this->getBool(0xA10, 24, 1);
    this->acuSet1Compressor2LowVoltageErrorA1 = this->getBool(0xA10, 24, 0);

    this->acuSet2Compressor1ConverterErrorA1 = this->getBool(0xA10, 25, 7);
    this->acuSet2Compressor2ConverterErrorA1 = this->getBool(0xA10, 25, 6);
    this->acuSet2Compressor1OverLoadA1 = this->getBool(0xA10, 25, 5);
    this->acuSet2Compressor2OverLoadA1 = this->getBool(0xA10, 25, 4);
    this->acuSet2Compressor1HighVoltageErrorA1 = this->getBool(0xA10, 25, 3);
    this->acuSet2Compressor2HighVoltageErrorA1 = this->getBool(0xA10, 25, 2);
    this->acuSet2Compressor1LowVoltageErrorA1 = this->getBool(0xA10, 25, 1);
    this->acuSet2Compressor2LowVoltageErrorA1 = this->getBool(0xA10, 25, 0);

    this->acuLittleErrorA1 = this->getBool(0xA10, 29, 7);
    this->acuMinorErrorA1 = this->getBool(0xA10, 29, 6);
    this->acuMajorErrorA1 = this->getBool(0xA10, 29, 5);

    this->acuSet1Compressor1RunB1 = this->getBool(0xA20, 16, 7);
    this->acuSet1Compressor2RunB1 = this->getBool(0xA20, 16, 6);
    this->acuSet2Compressor1RunB1 = this->getBool(0xA20, 17, 7);
    this->acuSet2Compressor2RunB1 = this->getBool(0xA20, 17, 6);

    this->acuSet1Compressor1ConverterErrorB1 = this->getBool(0xA20, 24, 7);
    this->acuSet1Compressor2ConverterErrorB1 = this->getBool(0xA20, 24, 6);
    this->acuSet1Compressor1OverLoadB1 = this->getBool(0xA20, 24, 5);
    this->acuSet1Compressor2OverLoadB1 = this->getBool(0xA20, 24, 4);
    this->acuSet1Compressor1HighVoltageErrorB1 = this->getBool(0xA20, 24, 3);
    this->acuSet1Compressor2HighVoltageErrorB1 = this->getBool(0xA20, 24, 2);
    this->acuSet1Compressor1LowVoltageErrorB1 = this->getBool(0xA20, 24, 1);
    this->acuSet1Compressor2LowVoltageErrorB1 = this->getBool(0xA20, 24, 0);

    this->acuSet2Compressor1ConverterErrorB1 = this->getBool(0xA20, 25, 7);
    this->acuSet2Compressor2ConverterErrorB1 = this->getBool(0xA20, 25, 6);
    this->acuSet2Compressor1OverLoadB1 = this->getBool(0xA20, 25, 5);
    this->acuSet2Compressor2OverLoadB1 = this->getBool(0xA20, 25, 4);
    this->acuSet2Compressor1HighVoltageErrorB1 = this->getBool(0xA20, 25, 3);
    this->acuSet2Compressor2HighVoltageErrorB1 = this->getBool(0xA20, 25, 2);
    this->acuSet2Compressor1LowVoltageErrorB1 = this->getBool(0xA20, 25, 1);
    this->acuSet2Compressor2LowVoltageErrorB1 = this->getBool(0xA20, 25, 0);

    this->acuLittleErrorB1 = this->getBool(0xA20, 29, 7);
    this->acuMinorErrorB1 = this->getBool(0xA20, 29, 6);
    this->acuMajorErrorB1 = this->getBool(0xA20, 29, 5);

    this->acuSet1Compressor1RunC1 = this->getBool(0xA30, 16, 7);
    this->acuSet1Compressor2RunC1 = this->getBool(0xA30, 16, 6);
    this->acuSet2Compressor1RunC1 = this->getBool(0xA30, 17, 7);
    this->acuSet2Compressor2RunC1 = this->getBool(0xA30, 17, 6);

    this->acuSet1Compressor1ConverterErrorC1 = this->getBool(0xA30, 24, 7);
    this->acuSet1Compressor2ConverterErrorC1 = this->getBool(0xA30, 24, 6);
    this->acuSet1Compressor1OverLoadC1 = this->getBool(0xA30, 24, 5);
    this->acuSet1Compressor2OverLoadC1 = this->getBool(0xA30, 24, 4);
    this->acuSet1Compressor1HighVoltageErrorC1 = this->getBool(0xA30, 24, 3);
    this->acuSet1Compressor2HighVoltageErrorC1 = this->getBool(0xA30, 24, 2);
    this->acuSet1Compressor1LowVoltageErrorC1 = this->getBool(0xA30, 24, 1);
    this->acuSet1Compressor2LowVoltageErrorC1 = this->getBool(0xA30, 24, 0);

    this->acuSet2Compressor1ConverterErrorC1 = this->getBool(0xA30, 25, 7);
    this->acuSet2Compressor2ConverterErrorC1 = this->getBool(0xA30, 25, 6);
    this->acuSet2Compressor1OverLoadC1 = this->getBool(0xA30, 25, 5);
    this->acuSet2Compressor2OverLoadC1 = this->getBool(0xA30, 25, 4);
    this->acuSet2Compressor1HighVoltageErrorC1 = this->getBool(0xA30, 25, 3);
    this->acuSet2Compressor2HighVoltageErrorC1 = this->getBool(0xA30, 25, 2);
    this->acuSet2Compressor1LowVoltageErrorC1 = this->getBool(0xA30, 25, 1);
    this->acuSet2Compressor2LowVoltageErrorC1 = this->getBool(0xA30, 25, 0);

    this->acuLittleErrorC1 = this->getBool(0xA30, 29, 7);
    this->acuMinorErrorC1 = this->getBool(0xA30, 29, 6);
    this->acuMajorErrorC1 = this->getBool(0xA30, 29, 5);

    this->acuSet1Compressor1RunD1 = this->getBool(0xA40, 16, 7);
    this->acuSet1Compressor2RunD1 = this->getBool(0xA40, 16, 6);
    this->acuSet2Compressor1RunD1 = this->getBool(0xA40, 17, 7);
    this->acuSet2Compressor2RunD1 = this->getBool(0xA40, 17, 6);

    this->acuSet1Compressor1ConverterErrorD1 = this->getBool(0xA40, 24, 7);
    this->acuSet1Compressor2ConverterErrorD1 = this->getBool(0xA40, 24, 6);
    this->acuSet1Compressor1OverLoadD1 = this->getBool(0xA40, 24, 5);
    this->acuSet1Compressor2OverLoadD1 = this->getBool(0xA40, 24, 4);
    this->acuSet1Compressor1HighVoltageErrorD1 = this->getBool(0xA40, 24, 3);
    this->acuSet1Compressor2HighVoltageErrorD1 = this->getBool(0xA40, 24, 2);
    this->acuSet1Compressor1LowVoltageErrorD1 = this->getBool(0xA40, 24, 1);
    this->acuSet1Compressor2LowVoltageErrorD1 = this->getBool(0xA40, 24, 0);

    this->acuSet2Compressor1ConverterErrorD1 = this->getBool(0xA40, 25, 7);
    this->acuSet2Compressor2ConverterErrorD1 = this->getBool(0xA40, 25, 6);
    this->acuSet2Compressor1OverLoadD1 = this->getBool(0xA40, 25, 5);
    this->acuSet2Compressor2OverLoadD1 = this->getBool(0xA40, 25, 4);
    this->acuSet2Compressor1HighVoltageErrorD1 = this->getBool(0xA40, 25, 3);
    this->acuSet2Compressor2HighVoltageErrorD1 = this->getBool(0xA40, 25, 2);
    this->acuSet2Compressor1LowVoltageErrorD1 = this->getBool(0xA40, 25, 1);
    this->acuSet2Compressor2LowVoltageErrorD1 = this->getBool(0xA40, 25, 0);

    this->acuLittleErrorD1 = this->getBool(0xA40, 29, 7);
    this->acuMinorErrorD1 = this->getBool(0xA40, 29, 6);
    this->acuMajorErrorD1 = this->getBool(0xA40, 29, 5);

    this->acuSet1Compressor1RunD2 = this->getBool(0xA50, 16, 7);
    this->acuSet1Compressor2RunD2 = this->getBool(0xA50, 16, 6);
    this->acuSet2Compressor1RunD2 = this->getBool(0xA50, 17, 7);
    this->acuSet2Compressor2RunD2 = this->getBool(0xA50, 17, 6);

    this->acuSet1Compressor1ConverterErrorD2 = this->getBool(0xA50, 24, 7);
    this->acuSet1Compressor2ConverterErrorD2 = this->getBool(0xA50, 24, 6);
    this->acuSet1Compressor1OverLoadD2 = this->getBool(0xA50, 24, 5);
    this->acuSet1Compressor2OverLoadD2 = this->getBool(0xA50, 24, 4);
    this->acuSet1Compressor1HighVoltageErrorD2 = this->getBool(0xA50, 24, 3);
    this->acuSet1Compressor2HighVoltageErrorD2 = this->getBool(0xA50, 24, 2);
    this->acuSet1Compressor1LowVoltageErrorD2 = this->getBool(0xA50, 24, 1);
    this->acuSet1Compressor2LowVoltageErrorD2 = this->getBool(0xA50, 24, 0);

    this->acuSet2Compressor1ConverterErrorD2 = this->getBool(0xA50, 25, 7);
    this->acuSet2Compressor2ConverterErrorD2 = this->getBool(0xA50, 25, 6);
    this->acuSet2Compressor1OverLoadD2 = this->getBool(0xA50, 25, 5);
    this->acuSet2Compressor2OverLoadD2 = this->getBool(0xA50, 25, 4);
    this->acuSet2Compressor1HighVoltageErrorD2 = this->getBool(0xA50, 25, 3);
    this->acuSet2Compressor2HighVoltageErrorD2 = this->getBool(0xA50, 25, 2);
    this->acuSet2Compressor1LowVoltageErrorD2 = this->getBool(0xA50, 25, 1);
    this->acuSet2Compressor2LowVoltageErrorD2 = this->getBool(0xA50, 25, 0);

    this->acuLittleErrorD2 = this->getBool(0xA50, 29, 7);
    this->acuMinorErrorD2 = this->getBool(0xA50, 29, 6);
    this->acuMajorErrorD2 = this->getBool(0xA50, 29, 5);

    this->acuSet1Compressor1RunC2 = this->getBool(0xA60, 16, 7);
    this->acuSet1Compressor2RunC2 = this->getBool(0xA60, 16, 6);
    this->acuSet2Compressor1RunC2 = this->getBool(0xA60, 17, 7);
    this->acuSet2Compressor2RunC2 = this->getBool(0xA60, 17, 6);

    this->acuSet1Compressor1ConverterErrorC2 = this->getBool(0xA60, 24, 7);
    this->acuSet1Compressor2ConverterErrorC2 = this->getBool(0xA60, 24, 6);
    this->acuSet1Compressor1OverLoadC2 = this->getBool(0xA60, 24, 5);
    this->acuSet1Compressor2OverLoadC2 = this->getBool(0xA60, 24, 4);
    this->acuSet1Compressor1HighVoltageErrorC2 = this->getBool(0xA60, 24, 3);
    this->acuSet1Compressor2HighVoltageErrorC2 = this->getBool(0xA60, 24, 2);
    this->acuSet1Compressor1LowVoltageErrorC2 = this->getBool(0xA60, 24, 1);
    this->acuSet1Compressor2LowVoltageErrorC2 = this->getBool(0xA60, 24, 0);

    this->acuSet2Compressor1ConverterErrorC2 = this->getBool(0xA60, 25, 7);
    this->acuSet2Compressor2ConverterErrorC2 = this->getBool(0xA60, 25, 6);
    this->acuSet2Compressor1OverLoadC2 = this->getBool(0xA60, 25, 5);
    this->acuSet2Compressor2OverLoadC2 = this->getBool(0xA60, 25, 4);
    this->acuSet2Compressor1HighVoltageErrorC2 = this->getBool(0xA60, 25, 3);
    this->acuSet2Compressor2HighVoltageErrorC2 = this->getBool(0xA60, 25, 2);
    this->acuSet2Compressor1LowVoltageErrorC2 = this->getBool(0xA60, 25, 1);
    this->acuSet2Compressor2LowVoltageErrorC2 = this->getBool(0xA60, 25, 0);

    this->acuLittleErrorC2 = this->getBool(0xA60, 29, 7);
    this->acuMinorErrorC2 = this->getBool(0xA60, 29, 6);
    this->acuMajorErrorC2 = this->getBool(0xA60, 29, 5);

    this->acuSet1Compressor1RunB2 = this->getBool(0xA70, 16, 7);
    this->acuSet1Compressor2RunB2 = this->getBool(0xA70, 16, 6);
    this->acuSet2Compressor1RunB2 = this->getBool(0xA70, 17, 7);
    this->acuSet2Compressor2RunB2 = this->getBool(0xA70, 17, 6);

    this->acuSet1Compressor1ConverterErrorB2 = this->getBool(0xA70, 24, 7);
    this->acuSet1Compressor2ConverterErrorB2 = this->getBool(0xA70, 24, 6);
    this->acuSet1Compressor1OverLoadB2 = this->getBool(0xA70, 24, 5);
    this->acuSet1Compressor2OverLoadB2 = this->getBool(0xA70, 24, 4);
    this->acuSet1Compressor1HighVoltageErrorB2 = this->getBool(0xA70, 24, 3);
    this->acuSet1Compressor2HighVoltageErrorB2 = this->getBool(0xA70, 24, 2);
    this->acuSet1Compressor1LowVoltageErrorB2 = this->getBool(0xA70, 24, 1);
    this->acuSet1Compressor2LowVoltageErrorB2 = this->getBool(0xA70, 24, 0);

    this->acuSet2Compressor1ConverterErrorB2 = this->getBool(0xA70, 25, 7);
    this->acuSet2Compressor2ConverterErrorB2 = this->getBool(0xA70, 25, 6);
    this->acuSet2Compressor1OverLoadB2 = this->getBool(0xA70, 25, 5);
    this->acuSet2Compressor2OverLoadB2 = this->getBool(0xA70, 25, 4);
    this->acuSet2Compressor1HighVoltageErrorB2 = this->getBool(0xA70, 25, 3);
    this->acuSet2Compressor2HighVoltageErrorB2 = this->getBool(0xA70, 25, 2);
    this->acuSet2Compressor1LowVoltageErrorB2 = this->getBool(0xA70, 25, 1);
    this->acuSet2Compressor2LowVoltageErrorB2 = this->getBool(0xA70, 25, 0);

    this->acuLittleErrorB2 = this->getBool(0xA70, 29, 7);
    this->acuMinorErrorB2 = this->getBool(0xA70, 29, 6);
    this->acuMajorErrorB2 = this->getBool(0xA70, 29, 5);

    this->acuSet1Compressor1RunA2 = this->getBool(0xA80, 16, 7);
    this->acuSet1Compressor2RunA2 = this->getBool(0xA80, 16, 6);
    this->acuSet2Compressor1RunA2 = this->getBool(0xA80, 17, 7);
    this->acuSet2Compressor2RunA2 = this->getBool(0xA80, 17, 6);

    this->acuSet1Compressor1ConverterErrorA2 = this->getBool(0xA80, 24, 7);
    this->acuSet1Compressor2ConverterErrorA2 = this->getBool(0xA80, 24, 6);
    this->acuSet1Compressor1OverLoadA2 = this->getBool(0xA80, 24, 5);
    this->acuSet1Compressor2OverLoadA2 = this->getBool(0xA80, 24, 4);
    this->acuSet1Compressor1HighVoltageErrorA2 = this->getBool(0xA80, 24, 3);
    this->acuSet1Compressor2HighVoltageErrorA2 = this->getBool(0xA80, 24, 2);
    this->acuSet1Compressor1LowVoltageErrorA2 = this->getBool(0xA80, 24, 1);
    this->acuSet1Compressor2LowVoltageErrorA2 = this->getBool(0xA80, 24, 0);

    this->acuSet2Compressor1ConverterErrorA2 = this->getBool(0xA80, 25, 7);
    this->acuSet2Compressor2ConverterErrorA2 = this->getBool(0xA80, 25, 6);
    this->acuSet2Compressor1OverLoadA2 = this->getBool(0xA80, 25, 5);
    this->acuSet2Compressor2OverLoadA2 = this->getBool(0xA80, 25, 4);
    this->acuSet2Compressor1HighVoltageErrorA2 = this->getBool(0xA80, 25, 3);
    this->acuSet2Compressor2HighVoltageErrorA2 = this->getBool(0xA80, 25, 2);
    this->acuSet2Compressor1LowVoltageErrorA2 = this->getBool(0xA80, 25, 1);
    this->acuSet2Compressor2LowVoltageErrorA2 = this->getBool(0xA80, 25, 0);

    this->acuLittleErrorA2 = this->getBool(0xA80, 29, 7);
    this->acuMinorErrorA2 = this->getBool(0xA80, 29, 6);
    this->acuMajorErrorA2 = this->getBool(0xA80, 29, 5);

    // hvac software version
    unsigned short int tempHvac = 0;

    tempHvac = this->getUnsignedInt(0xA10, 2);
    this->hvacVersionA1.sprintf("%d.%d", tempHvac / 256, tempHvac % 256);
    tempHvac = this->getUnsignedInt(0xA20, 2);
    this->hvacVersionB1.sprintf("%d.%d", tempHvac / 256, tempHvac % 256);
    tempHvac = this->getUnsignedInt(0xA30, 2);
    this->hvacVersionC1.sprintf("%d.%d", tempHvac / 256, tempHvac % 256);
    tempHvac = this->getUnsignedInt(0xA40, 2);
    this->hvacVersionD1.sprintf("%d.%d", tempHvac / 256, tempHvac % 256);
    tempHvac = this->getUnsignedInt(0xA50, 2);
    this->hvacVersionD2.sprintf("%d.%d", tempHvac / 256, tempHvac % 256);
    tempHvac = this->getUnsignedInt(0xA60, 2);
    this->hvacVersionC2.sprintf("%d.%d", tempHvac / 256, tempHvac % 256);
    tempHvac = this->getUnsignedInt(0xA70, 2);
    this->hvacVersionB2.sprintf("%d.%d", tempHvac / 256, tempHvac % 256);
    tempHvac = this->getUnsignedInt(0xA80, 2);
    this->hvacVersionA2.sprintf("%d.%d", tempHvac / 256, tempHvac % 256);

}
