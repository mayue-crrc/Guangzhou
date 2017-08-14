#include "database.h"

void Database::synchronizeTdsSignals()
{
    this->tdsSoftwareVersion.sprintf("%d.%d.%d", this->getUnsignedChar(0xD10, 2), this->getUnsignedChar(0xD10, 3), this->getUnsignedChar(0xD10, 4));
}
