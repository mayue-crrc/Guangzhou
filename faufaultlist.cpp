#include "faufaultlist.h"
#include <QDebug>
#include "database.h"

FauFaultList::FauFaultList()
{
}

void FauFaultList::installDatabase(Database *database)
{
    this->database = database;
}

void FauFaultList::copyPort(unsigned short sink, unsigned short source)
{
    for (int i = 0; i < 32; i ++)
    {
        this->database->setUnsignedChar(sink, i, this->database->getUnsignedChar(source, i));
    }
}

void FauFaultList::copyCombinePort(unsigned short sink, unsigned short source1, unsigned short int source2)
{
    for (int i = 0; i < 32; i ++)
    {
        this->database->setUnsignedChar(sink, i, this->database->getUnsignedChar(source1, i) | this->database->getUnsignedChar(source2, i));
    }
}

void FauFaultList::createList()
{
    if (this->database->fau1Online && false == this->database->fau2Online)
    {
        this->copyPort(0xF910, 0x910);
    }
    else if (false == this->database->fau1Online && this->database->fau2Online)
    {
        this->copyPort(0xF910, 0x980);
    }
    else if (this->database->fau1Online && this->database->fau2Online)
    {
        this->copyCombinePort(0xF910, 0x910, 0x980);
    }
}
