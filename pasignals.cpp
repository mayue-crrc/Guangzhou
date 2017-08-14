#include "database.h"

void Database::synchronizePaSignals()
{
    // pa software version, still some issues on it
    this->paVersionA1.sprintf("%d", this->getUnsignedInt(0x810, 26));
    this->paVersionA2.sprintf("%d", this->getUnsignedInt(0x820, 28));
}
