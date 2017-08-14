#include "database.h"

void Database::synchronizeAtcSignals()
{
    this->atcAmMode = this->getBool(0xB10, 0, 7);
    this->atcAtbMode = this->getBool(0xB10, 0, 6);
    this->atcPmMode = this->getBool(0xB10, 0, 5);
    this->atcRmf1Mode = this->getBool(0xB10, 0, 4);
    this->atcRmf2Mode = this->getBool(0xB10, 0, 3);
    this->atcRmrMode = this->getBool(0xB10, 0, 2);
    this->atcCbtcMode = this->getBool(0xB10, 1, 2);

    this->atcFinalStatiion = this->getUnsignedInt(0xB11, 2);
    this->atcNextStation = this->getUnsignedInt(0xB11, 4);
    this->atcCurrentStation = this->getUnsignedInt(0xB11, 6);

    // atc software version, still some issues on it
    quint32 temp32 = 0;

    // the same version
    temp32 = this->getUnsignedInt32(0xB11, 24);
    this->atcVersionA1.sprintf("%d.%d.%d", temp32 / 256 / 256, temp32 % 256 / 256, temp32 % 256);
    this->atcVersionA2.sprintf("%d.%d.%d", temp32 / 256 / 256, temp32 % 256 / 256, temp32 % 256);
}
