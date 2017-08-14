#include "database.h"

void Database::synchronizeSivSignals()
{
    // the signals of siv
    this->sivKm1FaultProtectA1 = this->getBool(0x610, 17, 7);
    this->sivKm2FaultProtectA1 = this->getBool(0x610, 17, 6);
    this->sivKmaFaultProtectA1 = this->getBool(0x610, 17, 5);
    this->sivKm1DriverSignalA1 = this->getBool(0x610, 28, 7);
    this->sivKm2DriverSignalA1 = this->getBool(0x610, 28, 6);
    this->sivKmaDriverSignalA1 = this->getBool(0x610, 28, 5);
    this->siv380vOkA1 = this->getBool(0x610, 29, 1);
    this->sivAcuBusActiveA1 = this->getBool(0x610, 30, 7);

    this->sivKm1FaultProtectC1 = this->getBool(0x630, 17, 7);
    this->sivKm2FaultProtectC1 = this->getBool(0x630, 17, 6);
    this->sivKmaFaultProtectC1 = this->getBool(0x630, 17, 5);
    this->sivKm1DriverSignalC1 = this->getBool(0x630, 28, 7);
    this->sivKm2DriverSignalC1 = this->getBool(0x630, 28, 6);
    this->sivKmaDriverSignalC1 = this->getBool(0x630, 28, 5);
    this->siv380vOkC1 = this->getBool(0x630, 29, 1);
    this->sivAcuBusActiveC1 = this->getBool(0x630, 30, 7);

    this->sivKm1FaultProtectC2 = this->getBool(0x660, 17, 7);
    this->sivKm2FaultProtectC2 = this->getBool(0x660, 17, 6);
    this->sivKmaFaultProtectC2 = this->getBool(0x660, 17, 5);
    this->sivKm1DriverSignalC2 = this->getBool(0x660, 28, 7);
    this->sivKm2DriverSignalC2 = this->getBool(0x660, 28, 6);
    this->sivKmaDriverSignalC2 = this->getBool(0x660, 28, 5);
    this->siv380vOkC2 = this->getBool(0x660, 29, 1);
    this->sivAcuBusActiveC2 = this->getBool(0x660, 30, 7);

    this->sivKm1FaultProtectA2 = this->getBool(0x680, 17, 7);
    this->sivKm2FaultProtectA2 = this->getBool(0x680, 17, 6);
    this->sivKmaFaultProtectA2 = this->getBool(0x680, 17, 5);
    this->sivKm1DriverSignalA2 = this->getBool(0x680, 28, 7);
    this->sivKm2DriverSignalA2 = this->getBool(0x680, 28, 6);
    this->sivKmaDriverSignalA2 = this->getBool(0x680, 28, 5);
    this->siv380vOkA2 = this->getBool(0x680, 29, 1);
    this->sivAcuBusActiveA2 = this->getBool(0x680, 30, 7);

    this->inputVoltageSivA1 = this->getUnsignedInt(0x611, 0);
    this->middleCapacitorVoltageSivA1 = this->getUnsignedInt(0x611, 2);
    this->inputCurrentSivA1 = this->getUnsignedInt(0x611, 4);
    this->bridgeACurrentA1 = this->getUnsignedInt(0x611, 6);
    this->bridgeBCurrentA1 = this->getUnsignedInt(0x611, 8);
    this->bridgeCCurrentA1 = this->getUnsignedInt(0x611, 10);
    this->acOutputUCurrentA1 = this->getUnsignedInt(0x611, 12);
    this->acOutputVCurrentA1 = this->getUnsignedInt(0x611, 14);
    this->acOutputWCurrentA1 = this->getUnsignedInt(0x611, 16);
    this->acOutputUvVoltageA1 = this->getUnsignedInt(0x611, 18);
    this->acOutputUwVoltageA1 = this->getUnsignedInt(0x611, 20);
    this->sivGeneratrixUvVoltageA1 = this->getUnsignedInt(0x611, 22);
    this->sivGeneratrixUwVoltageA1 = this->getUnsignedInt(0x611, 24);

    this->inputVoltageSivC1 = this->getUnsignedInt(0x631, 0);
    this->middleCapacitorVoltageSivC1 = this->getUnsignedInt(0x631, 2);
    this->inputCurrentSivC1 = this->getUnsignedInt(0x631, 4);
    this->bridgeACurrentC1 = this->getUnsignedInt(0x631, 6);
    this->bridgeBCurrentC1 = this->getUnsignedInt(0x631, 8);
    this->bridgeCCurrentC1 = this->getUnsignedInt(0x631, 10);
    this->acOutputUCurrentC1 = this->getUnsignedInt(0x631, 12);
    this->acOutputVCurrentC1 = this->getUnsignedInt(0x631, 14);
    this->acOutputWCurrentC1 = this->getUnsignedInt(0x631, 16);
    this->acOutputUvVoltageC1 = this->getUnsignedInt(0x631, 18);
    this->acOutputUwVoltageC1 = this->getUnsignedInt(0x631, 20);
    this->sivGeneratrixUvVoltageC1 = this->getUnsignedInt(0x631, 22);
    this->sivGeneratrixUwVoltageC1 = this->getUnsignedInt(0x631, 24);

    this->inputVoltageSivC2 = this->getUnsignedInt(0x661, 0);
    this->middleCapacitorVoltageSivC2 = this->getUnsignedInt(0x661, 2);
    this->inputCurrentSivC2 = this->getUnsignedInt(0x661, 4);
    this->bridgeACurrentC2 = this->getUnsignedInt(0x661, 6);
    this->bridgeBCurrentC2 = this->getUnsignedInt(0x661, 8);
    this->bridgeCCurrentC2 = this->getUnsignedInt(0x661, 10);
    this->acOutputUCurrentC2 = this->getUnsignedInt(0x661, 12);
    this->acOutputVCurrentC2 = this->getUnsignedInt(0x661, 14);
    this->acOutputWCurrentC2 = this->getUnsignedInt(0x661, 16);
    this->acOutputUvVoltageC2 = this->getUnsignedInt(0x661, 18);
    this->acOutputUwVoltageC2 = this->getUnsignedInt(0x661, 20);
    this->sivGeneratrixUvVoltageC2 = this->getUnsignedInt(0x661, 22);
    this->sivGeneratrixUwVoltageC2 = this->getUnsignedInt(0x661, 24);

    this->inputVoltageSivA2 = this->getUnsignedInt(0x681, 0);
    this->middleCapacitorVoltageSivA2 = this->getUnsignedInt(0x681, 2);
    this->inputCurrentSivA2 = this->getUnsignedInt(0x681, 4);
    this->bridgeACurrentA2 = this->getUnsignedInt(0x681, 6);
    this->bridgeBCurrentA2 = this->getUnsignedInt(0x681, 8);
    this->bridgeCCurrentA2 = this->getUnsignedInt(0x681, 10);
    this->acOutputUCurrentA2 = this->getUnsignedInt(0x681, 12);
    this->acOutputVCurrentA2 = this->getUnsignedInt(0x681, 14);
    this->acOutputWCurrentA2 = this->getUnsignedInt(0x681, 16);
    this->acOutputUvVoltageA2 = this->getUnsignedInt(0x681, 18);
    this->acOutputUwVoltageA2 = this->getUnsignedInt(0x681, 20);
    this->sivGeneratrixUvVoltageA2 = this->getUnsignedInt(0x681, 22);
    this->sivGeneratrixUwVoltageA2 = this->getUnsignedInt(0x681, 24);

    // the siv signals
    this->sivRunningStateA1 = this->getBool(0x610, 24, 5);
    this->sivStopStateA1 = this->getBool(0x610, 24, 4);
    this->sivMajorErrorA1 = this->getBool(0x610, 31, 7);
    this->sivMinorErrorA1 = this->getBool(0x610, 31, 6);

    this->sivRunningStateC1 = this->getBool(0x630, 24, 5);
    this->sivStopStateC1 = this->getBool(0x630, 24, 4);
    this->sivMajorErrorC1 = this->getBool(0x630, 31, 7);
    this->sivMinorErrorC1 = this->getBool(0x630, 31, 6);

    this->sivRunningStateC2 = this->getBool(0x660, 24, 5);
    this->sivStopStateC2 = this->getBool(0x660, 24, 4);
    this->sivMajorErrorC2 = this->getBool(0x660, 31, 7);
    this->sivMinorErrorC2 = this->getBool(0x660, 31, 6);

    this->sivRunningStateA2 = this->getBool(0x680, 24, 5);
    this->sivStopStateA2 = this->getBool(0x680, 24, 4);
    this->sivMajorErrorA2 = this->getBool(0x680, 31, 7);
    this->sivMinorErrorA2 = this->getBool(0x680, 31, 6);

    // siv software version
    unsigned short int tempSiv = 0;

    tempSiv = this->getUnsignedInt(0x610, 4);
    this->sivDspVersionA1.sprintf("%X.%X.%X", tempSiv / 256, tempSiv / 16 % 16, tempSiv % 16);
    tempSiv = this->getUnsignedInt(0x630, 4);
    this->sivDspVersionC1.sprintf("%X.%X.%X", tempSiv / 256, tempSiv / 16 % 16, tempSiv % 16);
    tempSiv = this->getUnsignedInt(0x660, 4);
    this->sivDspVersionC2.sprintf("%X.%X.%X", tempSiv / 256, tempSiv / 16 % 16, tempSiv % 16);
    tempSiv = this->getUnsignedInt(0x680, 4);
    this->sivDspVersionA2.sprintf("%X.%X.%X", tempSiv / 256, tempSiv / 16 % 16, tempSiv % 16);

    tempSiv = this->getUnsignedInt(0x610, 6);
    this->sivPlcVersionA1.sprintf("%X.%X.%X", tempSiv / 256, tempSiv / 16 % 16, tempSiv % 16);
    tempSiv = this->getUnsignedInt(0x630, 6);
    this->sivPlcVersionC1.sprintf("%X.%X.%X", tempSiv / 256, tempSiv / 16 % 16, tempSiv % 16);
    tempSiv = this->getUnsignedInt(0x660, 6);
    this->sivPlcVersionC2.sprintf("%X.%X.%X", tempSiv / 256, tempSiv / 16 % 16, tempSiv % 16);
    tempSiv = this->getUnsignedInt(0x680, 6);
    this->sivPlcVersionA2.sprintf("%X.%X.%X", tempSiv / 256, tempSiv / 16 % 16, tempSiv % 16);
}
