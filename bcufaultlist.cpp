#include "bcufaultlist.h"
#include "global.h"
#include "database.h"
#include <QDebug>

BcuFaultList::BcuFaultList()
{
}

void BcuFaultList::setSinkPort(QList<unsigned short> &ports)
{
    if (ports.size() != 11)
    {
        _LOG << "the size of port is not enough";

        return;
    }

    this->hmiBcu0 = ports.at(0);
    this->hmiBcu1 = ports.at(1);
    this->hmiBcu2 = ports.at(2);
    this->hmiBcu3 = ports.at(3);
    this->hmiBcu4 = ports.at(4);
    this->hmiBcu5 = ports.at(5);
    this->hmiBcu6 = ports.at(6);
    this->hmiBcu7 = ports.at(7);
    this->hmiBcu8 = ports.at(8);
    this->hmiBcu9 = ports.at(9);
    this->hmiBcuA = ports.at(10);
}

void BcuFaultList::setSourcePort(QList<unsigned short> &ports)
{
    if (ports.size() != 22)
    {
        _LOG << "the size of port is not enough";

        return;
    }

    this->bcu10 = ports.at(0);
    this->bcu11 = ports.at(1);
    this->bcu12 = ports.at(2);
    this->bcu13 = ports.at(3);
    this->bcu14 = ports.at(4);
    this->bcu15 = ports.at(5);
    this->bcu16 = ports.at(6);
    this->bcu17 = ports.at(7);
    this->bcu18 = ports.at(8);
    this->bcu19 = ports.at(9);
    this->bcu1A = ports.at(10);

    this->bcu20 = ports.at(11);
    this->bcu21 = ports.at(12);
    this->bcu22 = ports.at(13);
    this->bcu23 = ports.at(14);
    this->bcu24 = ports.at(15);
    this->bcu25 = ports.at(16);
    this->bcu26 = ports.at(17);
    this->bcu27 = ports.at(18);
    this->bcu28 = ports.at(19);
    this->bcu29 = ports.at(20);
    this->bcu2A = ports.at(21);
}

void BcuFaultList::installDatabase(Database *database)
{
    this->database = database;
}

void BcuFaultList::copyPort(unsigned short sink, unsigned short source)
{
    for (int i = 0; i < 32; i ++)
    {
        this->database->setUnsignedChar(sink, i, this->database->getUnsignedChar(source, i));
    }
}

void BcuFaultList::createList(bool bcu1Online, bool bcu2Online)
{
    if (true == this->database->getBool(bcu1A, 1, 7) && bcu1Online)
    {
        this->copyPort(hmiBcu0, bcu10);
        this->copyPort(hmiBcu1, bcu11);
        this->copyPort(hmiBcu2, bcu12);
        this->copyPort(hmiBcu3, bcu13);
        this->copyPort(hmiBcu4, bcu14);
        this->copyPort(hmiBcu5, bcu15);
        this->copyPort(hmiBcu6, bcu16);
        this->copyPort(hmiBcu7, bcu17);
        this->copyPort(hmiBcu8, bcu18);
        this->copyPort(hmiBcu9, bcu19);
        this->copyPort(hmiBcuA, bcu1A);
    }
    else if (true == this->database->getBool(bcu2A, 1, 7) && bcu2Online)
    {
        this->copyPort(hmiBcu0, bcu20);
        this->copyPort(hmiBcu1, bcu21);
        this->copyPort(hmiBcu2, bcu22);
        this->copyPort(hmiBcu3, bcu23);
        this->copyPort(hmiBcu4, bcu24);
        this->copyPort(hmiBcu5, bcu25);
        this->copyPort(hmiBcu6, bcu26);
        this->copyPort(hmiBcu7, bcu27);
        this->copyPort(hmiBcu8, bcu28);
        this->copyPort(hmiBcu9, bcu29);
        this->copyPort(hmiBcuA, bcu2A);
    }
}
