#include "database.h"

void Database::synchronizeErmSignals()
{
    this->ermTotalMileageA1 = this->getUnsignedInt32(0x211, 0);
    this->ermTotalCompressor1A1 = this->getUnsignedInt32(0x211, 8);
    this->ermTotalCompressor2A1 = this->getUnsignedInt32(0x211, 20);
    this->ermTotalSivConsumptionA1 = this->getUnsignedInt32(0x212, 0);
    this->ermTotalTractionConsumptionA1 = this->getUnsignedInt32(0x212, 12);
    this->ermTotalBcuConsumptionA1 = this->getUnsignedInt32(0x212, 24);
    this->ermTotalRegeneratePowerA1 = this->getUnsignedInt32(0x213, 4);
    this->ermTotalConsumptionA1 = this->getUnsignedInt32(0x213, 16);
    this->ermRecordTimeA1 = this->getUnsignedInt(0x213, 28) / 24;
    this->ermRecordMileageA1 = this->getUnsignedInt(0x213, 30);

    this->ermDistanceCompressor1A1 = this->getUnsignedInt32(0x211, 16);
    this->ermDistanceCompressor2A1 = this->getUnsignedInt32(0x211, 28);
    this->ermDistanceSivConsumptionA1 = this->getUnsignedInt32(0x212, 8);
    this->ermDistanceTractionConsumptionA1 = this->getUnsignedInt32(0x212, 20);
    this->ermDistanceBcuConsumptionA1 = this->getUnsignedInt32(0x213, 0);
    this->ermDistanceRegeneratePowerA1 = this->getUnsignedInt32(0x213, 12);
    this->ermDistanceConsumptionA1 = this->getUnsignedInt32(0x213, 24);

    this->ermTimeMileageA1 = this->getUnsignedInt32(0x211, 4);
    this->ermTimeCompressor1A1 = this->getUnsignedInt32(0x211, 12);
    this->ermTimeCompressor2A1 = this->getUnsignedInt32(0x211, 24);
    this->ermTimeSivConsumptionA1 = this->getUnsignedInt32(0x212, 4);
    this->ermTimeTractionConsumptionA1 = this->getUnsignedInt32(0x212, 16);
    this->ermTimeBcuConsumptionA1 = this->getUnsignedInt32(0x212, 28);
    this->ermTimeRegeneratePowerA1 = this->getUnsignedInt32(0x213, 8);
    this->ermTimeConsumptionA1 = this->getUnsignedInt32(0x213, 20);

    this->ermTotalMileageA2 = this->getUnsignedInt32(0x221, 0);
    this->ermTotalCompressor1A2 = this->getUnsignedInt32(0x221, 8);
    this->ermTotalCompressor2A2 = this->getUnsignedInt32(0x221, 20);
    this->ermTotalSivConsumptionA2 = this->getUnsignedInt32(0x222, 0);
    this->ermTotalTractionConsumptionA2 = this->getUnsignedInt32(0x222, 12);
    this->ermTotalBcuConsumptionA2 = this->getUnsignedInt32(0x222, 24);
    this->ermTotalRegeneratePowerA2 = this->getUnsignedInt32(0x223, 4);
    this->ermTotalConsumptionA2 = this->getUnsignedInt32(0x223, 16);
    this->ermRecordTimeA2 = this->getUnsignedInt(0x223, 28) / 24;
    this->ermRecordMileageA2 = this->getUnsignedInt(0x223, 30);

    this->ermDistanceCompressor1A2 = this->getUnsignedInt32(0x221, 16);
    this->ermDistanceCompressor2A2 = this->getUnsignedInt32(0x221, 28);
    this->ermDistanceSivConsumptionA2 = this->getUnsignedInt32(0x222, 8);
    this->ermDistanceTractionConsumptionA2 = this->getUnsignedInt32(0x222, 20);
    this->ermDistanceBcuConsumptionA2 = this->getUnsignedInt32(0x223, 0);
    this->ermDistanceRegeneratePowerA2 = this->getUnsignedInt32(0x223, 12);
    this->ermDistanceConsumptionA2 = this->getUnsignedInt32(0x223, 24);

    this->ermTimeMileageA2 = this->getUnsignedInt32(0x221, 4);
    this->ermTimeCompressor1A2 = this->getUnsignedInt32(0x221, 12);
    this->ermTimeCompressor2A2 = this->getUnsignedInt32(0x221, 24);
    this->ermTimeSivConsumptionA2 = this->getUnsignedInt32(0x222, 4);
    this->ermTimeTractionConsumptionA2 = this->getUnsignedInt32(0x222, 16);
    this->ermTimeBcuConsumptionA2 = this->getUnsignedInt32(0x222, 28);
    this->ermTimeRegeneratePowerA2 = this->getUnsignedInt32(0x223, 8);
    this->ermTimeConsumptionA2 = this->getUnsignedInt32(0x223, 20);

    if (this->erm1Online)
    {
        this->hmiTotalMileage = this->ermTotalMileageA1;
        this->hmiTotalCompressor1 = this->ermTotalCompressor1A1;
        this->hmiTotalCompressor2 = this->ermTotalCompressor2A1;
        this->hmiTotalSivConsumption = this->ermTotalSivConsumptionA1;
        this->hmiTotalTractionConsumption = this->ermTotalTractionConsumptionA1;
        this->hmiTotalBcuConsumption = this->ermTotalBcuConsumptionA1;
        this->hmiTotalRegeneratePower = this->ermTotalRegeneratePowerA1;
        this->hmiTotalConsumption = this->ermTotalConsumptionA1;
        this->hmiRecordTime = this->ermRecordTimeA1;
        this->hmiRecordMileage = this->ermRecordMileageA1;

        if (this->hmiRecordTime > 30)
        {
            this->hmiRecordTime = 30;
        }

        if (this->hmiRecordMileage > 1000)
        {
            this->hmiRecordMileage = 1000;
        }
    }
    else if (this->erm2Online)
    {
        this->hmiTotalMileage = this->ermTotalMileageA2;
        this->hmiTotalCompressor1 = this->ermTotalCompressor1A2;
        this->hmiTotalCompressor2 = this->ermTotalCompressor2A2;
        this->hmiTotalSivConsumption = this->ermTotalSivConsumptionA2;
        this->hmiTotalTractionConsumption = this->ermTotalTractionConsumptionA2;
        this->hmiTotalBcuConsumption = this->ermTotalBcuConsumptionA2;
        this->hmiTotalRegeneratePower = this->ermTotalRegeneratePowerA2;
        this->hmiTotalConsumption = this->ermTotalConsumptionA2;
        this->hmiRecordTime = this->ermRecordTimeA2;
        this->hmiRecordMileage = this->ermRecordMileageA2;

        if (this->hmiRecordTime > 30)
        {
            this->hmiRecordTime = 30;
        }

        if (this->hmiRecordMileage > 1000)
        {
            this->hmiRecordMileage = 1000;
        }
    }
    else
    {
        this->hmiTotalMileage = 0;
        this->hmiTotalCompressor1 = 0;
        this->hmiTotalCompressor2 = 0;
        this->hmiTotalSivConsumption = 0;
        this->hmiTotalTractionConsumption = 0;
        this->hmiTotalBcuConsumption = 0;
        this->hmiTotalRegeneratePower = 0;
        this->hmiTotalConsumption = 0;
        this->hmiRecordTime = 30;
        this->hmiRecordMileage = 1000;
    }

    if (false == this->erm1Online)
    {
        this->erm1OsVersion = QString("0");
        this->erm1MvbVersion = QString("0");
        this->erm1SdbVersion = QString("0");
        this->erm1PlcVersion = QString("0");
    }
    else
    {
        this->erm1OsVersion.sprintf("01.%03d", this->getUnsignedChar(0x210, 3));
        this->erm1MvbVersion.sprintf("01.%03d", this->getUnsignedChar(0x210, 4));
        this->erm1SdbVersion.sprintf("01.%03d", this->getUnsignedChar(0x210, 5));
        this->erm1PlcVersion.sprintf("01.%03d", this->getUnsignedChar(0x210, 2));
    }

    if (false == this->erm2Online)
    {
        this->erm2OsVersion = QString("0");
        this->erm2MvbVersion = QString("0");
        this->erm2SdbVersion = QString("0");
        this->erm2PlcVersion = QString("0");
    }
    else
    {
        this->erm2OsVersion.sprintf("01.%03d", this->getUnsignedChar(0x220, 3));
        this->erm2MvbVersion.sprintf("01.%03d", this->getUnsignedChar(0x220, 4));
        this->erm2SdbVersion.sprintf("01.%03d", this->getUnsignedChar(0x220, 5));
        this->erm2PlcVersion.sprintf("01.%03d", this->getUnsignedChar(0x220, 2));
    }
}
