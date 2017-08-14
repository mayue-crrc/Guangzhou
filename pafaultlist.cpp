#include "pafaultlist.h"
#include "database.h"
#include <QDebug>
#include "database.h"

PaFaultList::PaFaultList()
{

}

void PaFaultList::copyPort(unsigned short sink, unsigned short source)
{
    for (int i = 0; i < 32; i ++)
    {
        this->database->setUnsignedChar(sink, i, this->database->getUnsignedChar(source, i));
    }
}

void PaFaultList::installDatabase(Database *database)
{
    this->database = database;
}

void PaFaultList::createList()
{
    if (this->database->pa1Online && this->database->ccuCabinActiveA1)
    {
        this->copyPort(0xF810, 0x810);
        this->copyPort(0xF811, 0x811);
    }
    else if (this->database->pa2Online && this->database->ccuCabinActiveA2)
    {
        this->copyPort(0xF810, 0x820);
        this->copyPort(0xF811, 0x821);
    }
    else if (this->database->pa1Online)
    {
        this->copyPort(0xF810, 0x810);
        this->copyPort(0xF811, 0x811);
    }
    else if (this->database->pa2Online)
    {
        this->copyPort(0xF810, 0x820);
        this->copyPort(0xF811, 0x821);
    }
}
