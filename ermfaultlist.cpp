#include "ermfaultlist.h"
#include "database.h"

ErmFaultList::ErmFaultList()
{
}

void ErmFaultList::installDatabase(Database *database)
{
    this->database = database;
}

void ErmFaultList::copyPort(unsigned short sink, unsigned short source)
{
    for (int i = 0; i < 32; i ++)
    {
        this->database->setUnsignedChar(sink, i, this->database->getUnsignedChar(source, i));
    }
}

void ErmFaultList::createList(bool erm1Online, bool erm2Online)
{
    if (erm1Online)
    {
        this->copyPort(0xF210, 0x210);
        this->copyPort(0xF211, 0x211);
        this->copyPort(0xF212, 0x212);
        this->copyPort(0xF213, 0x213);
    }
    else if (erm2Online)
    {
        this->copyPort(0xF210, 0x220);
        this->copyPort(0xF211, 0x221);
        this->copyPort(0xF212, 0x222);
        this->copyPort(0xF213, 0x223);
    }
}
