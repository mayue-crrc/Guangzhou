#include "edcufaultlist.h"
#include "database.h"
#include <QDebug>

EdcuFaultList::EdcuFaultList()
{
    this->database = NULL;
}

void EdcuFaultList::setSinkPort(QList<unsigned short int> &ports)
{
    if (ports.size() != 3)
    {
        _LOG << "the size of the ports is not enough";

        return;
    }
    else
    {
        this->hmiEdcu11 = ports.at(0);
        this->hmiEdcu12 = ports.at(1);
        this->hmiEdcu13 = ports.at(2);
    }
}

void EdcuFaultList::setSourcePort(QList<unsigned short int> &ports)
{
    if (ports.size() != 6)
    {
        _LOG << "the size of the ports is not enough";

        return;
    }
    else
    {
        this->edcu11 = ports.at(0);
        this->edcu12 = ports.at(1);
        this->edcu13 = ports.at(2);
        this->edcu21 = ports.at(3);
        this->edcu22 = ports.at(4);
        this->edcu23 = ports.at(5);
    }
}

void EdcuFaultList::installDatabase(Database *database)
{
    this->database = database;
}

void EdcuFaultList::copyPort(unsigned short int sink, unsigned short int source)
{
    for (int i = 0; i < 32; i ++)
    {
        this->database->setUnsignedChar(sink, i, this->database->getUnsignedChar(source, i));
    }
}

void EdcuFaultList::createList(bool edcu1Online, bool edcu2Online)
{
    if (this->database->getUnsignedChar(this->edcu12, 21) == 1 && true == edcu1Online)     // edcu1 master
    {
        this->copyPort(hmiEdcu11, this->edcu11);
        this->copyPort(hmiEdcu12, this->edcu12);
        this->copyPort(hmiEdcu13, this->edcu13);
    }
    else if (1 == this->database->getUnsignedChar(this->edcu22, 21) == 1 && true == edcu2Online)   // edcu2 master
    {
        this->copyPort(hmiEdcu11, this->edcu21);
        this->copyPort(hmiEdcu12, this->edcu22);
        this->copyPort(hmiEdcu13, this->edcu23);
    }
    else
    {
        // copy the port
        this->copyPort(hmiEdcu11, this->edcu11);
        this->copyPort(hmiEdcu12, this->edcu12);
        this->copyPort(hmiEdcu13, this->edcu13);

        // can fault
        this->database->setBool(hmiEdcu12, 23, 0, this->database->getBool(this->edcu12, 23, 0) || this->database->getBool(this->edcu22, 23, 0));

        if (this->database->getBool(this->edcu12, 22, 7))   // mdcu1 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 0, this->database->getUnsignedChar(this->edcu11, 0));
            this->database->setUnsignedChar(this->hmiEdcu11, 1, this->database->getUnsignedChar(this->edcu11, 1));
            this->database->setUnsignedChar(this->hmiEdcu11, 2, this->database->getUnsignedChar(this->edcu11, 2));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 0, this->database->getUnsignedChar(this->edcu12, 0));
            this->database->setUnsignedChar(this->hmiEdcu12, 1, this->database->getUnsignedChar(this->edcu12, 1));
            this->database->setBool(this->hmiEdcu12, 28, 7, this->database->getBool(this->edcu12, 28, 7));
        }
        else if (this->database->getBool(this->edcu22, 22, 7))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 0, this->database->getUnsignedChar(this->edcu21, 0));
            this->database->setUnsignedChar(this->hmiEdcu11, 1, this->database->getUnsignedChar(this->edcu21, 1));
            this->database->setUnsignedChar(this->hmiEdcu11, 2, this->database->getUnsignedChar(this->edcu21, 2));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 0, this->database->getUnsignedChar(this->edcu22, 0));
            this->database->setUnsignedChar(this->hmiEdcu12, 1, this->database->getUnsignedChar(this->edcu22, 1));
            this->database->setBool(this->hmiEdcu12, 28, 7, this->database->getBool(this->edcu22, 28, 7));
        }

        if (this->database->getBool(this->edcu12, 22, 6))   // mdcu2 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 3, this->database->getUnsignedChar(this->edcu11, 3));
            this->database->setUnsignedChar(this->hmiEdcu11, 4, this->database->getUnsignedChar(this->edcu11, 4));
            this->database->setUnsignedChar(this->hmiEdcu11, 5, this->database->getUnsignedChar(this->edcu11, 5));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 2, this->database->getUnsignedChar(this->edcu12, 2));
            this->database->setUnsignedChar(this->hmiEdcu12, 3, this->database->getUnsignedChar(this->edcu12, 3));
            this->database->setBool(this->hmiEdcu12, 28, 6, this->database->getBool(this->edcu12, 28, 6));
        }
        else if (this->database->getBool(this->edcu22, 22, 6))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 3, this->database->getUnsignedChar(this->edcu11, 3));
            this->database->setUnsignedChar(this->hmiEdcu11, 4, this->database->getUnsignedChar(this->edcu11, 4));
            this->database->setUnsignedChar(this->hmiEdcu11, 5, this->database->getUnsignedChar(this->edcu11, 5));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 2, this->database->getUnsignedChar(this->edcu22, 2));
            this->database->setUnsignedChar(this->hmiEdcu12, 3, this->database->getUnsignedChar(this->edcu22, 3));
            this->database->setBool(this->hmiEdcu12, 28, 6, this->database->getBool(this->edcu22, 28, 6));
        }

        if (this->database->getBool(this->edcu12, 22, 5))   // mdcu3 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 6, this->database->getUnsignedChar(this->edcu11, 6));
            this->database->setUnsignedChar(this->hmiEdcu11, 7, this->database->getUnsignedChar(this->edcu11, 7));
            this->database->setUnsignedChar(this->hmiEdcu11, 8, this->database->getUnsignedChar(this->edcu11, 8));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 4, this->database->getUnsignedChar(this->edcu12, 4));
            this->database->setUnsignedChar(this->hmiEdcu12, 5, this->database->getUnsignedChar(this->edcu12, 5));
            this->database->setBool(this->hmiEdcu12, 28, 5, this->database->getBool(this->edcu12, 28, 5));
        }
        else if (this->database->getBool(this->edcu22, 22, 5))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 6, this->database->getUnsignedChar(this->edcu11, 6));
            this->database->setUnsignedChar(this->hmiEdcu11, 7, this->database->getUnsignedChar(this->edcu11, 7));
            this->database->setUnsignedChar(this->hmiEdcu11, 8, this->database->getUnsignedChar(this->edcu11, 8));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 4, this->database->getUnsignedChar(this->edcu22, 4));
            this->database->setUnsignedChar(this->hmiEdcu12, 5, this->database->getUnsignedChar(this->edcu22, 5));
            this->database->setBool(this->hmiEdcu12, 28, 5, this->database->getBool(this->edcu22, 28, 5));
        }

        if (this->database->getBool(this->edcu12, 22, 4))   // mdcu4 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 9, this->database->getUnsignedChar(this->edcu11, 9));
            this->database->setUnsignedChar(this->hmiEdcu11, 10, this->database->getUnsignedChar(this->edcu11, 10));
            this->database->setUnsignedChar(this->hmiEdcu11, 11, this->database->getUnsignedChar(this->edcu11, 11));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 6, this->database->getUnsignedChar(this->edcu12, 6));
            this->database->setUnsignedChar(this->hmiEdcu12, 7, this->database->getUnsignedChar(this->edcu12, 7));
            this->database->setBool(this->hmiEdcu12, 28, 4, this->database->getBool(this->edcu12, 28, 4));
        }
        else if (this->database->getBool(this->edcu22, 22, 4))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 9, this->database->getUnsignedChar(this->edcu11, 9));
            this->database->setUnsignedChar(this->hmiEdcu11, 10, this->database->getUnsignedChar(this->edcu11, 10));
            this->database->setUnsignedChar(this->hmiEdcu11, 11, this->database->getUnsignedChar(this->edcu11, 11));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 6, this->database->getUnsignedChar(this->edcu22, 6));
            this->database->setUnsignedChar(this->hmiEdcu12, 7, this->database->getUnsignedChar(this->edcu22, 7));
            this->database->setBool(this->hmiEdcu12, 28, 4, this->database->getBool(this->edcu22, 28, 4));
        }

        if (this->database->getBool(this->edcu12, 22, 3))   // mdcu5 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 12, this->database->getUnsignedChar(this->edcu11, 12));
            this->database->setUnsignedChar(this->hmiEdcu11, 13, this->database->getUnsignedChar(this->edcu11, 13));
            this->database->setUnsignedChar(this->hmiEdcu11, 14, this->database->getUnsignedChar(this->edcu11, 14));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 8, this->database->getUnsignedChar(this->edcu12, 8));
            this->database->setUnsignedChar(this->hmiEdcu12, 9, this->database->getUnsignedChar(this->edcu12, 9));
            this->database->setBool(this->hmiEdcu12, 28, 3, this->database->getBool(this->edcu12, 28, 3));
        }
        else if (this->database->getBool(this->edcu22, 22, 3))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 12, this->database->getUnsignedChar(this->edcu11, 12));
            this->database->setUnsignedChar(this->hmiEdcu11, 13, this->database->getUnsignedChar(this->edcu11, 13));
            this->database->setUnsignedChar(this->hmiEdcu11, 14, this->database->getUnsignedChar(this->edcu11, 14));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 8, this->database->getUnsignedChar(this->edcu22, 8));
            this->database->setUnsignedChar(this->hmiEdcu12, 9, this->database->getUnsignedChar(this->edcu22, 9));
            this->database->setBool(this->hmiEdcu12, 28, 3, this->database->getBool(this->edcu22, 28, 3));
        }

        if (this->database->getBool(this->edcu12, 22, 2))   // mdcu6 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 15, this->database->getUnsignedChar(this->edcu11, 15));
            this->database->setUnsignedChar(this->hmiEdcu11, 16, this->database->getUnsignedChar(this->edcu11, 16));
            this->database->setUnsignedChar(this->hmiEdcu11, 17, this->database->getUnsignedChar(this->edcu11, 17));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 10, this->database->getUnsignedChar(this->edcu12, 10));
            this->database->setUnsignedChar(this->hmiEdcu12, 11, this->database->getUnsignedChar(this->edcu12, 11));
            this->database->setBool(this->hmiEdcu12, 28, 2, this->database->getBool(this->edcu12, 28, 2));
        }
        else if (this->database->getBool(this->edcu22, 22, 2))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 15, this->database->getUnsignedChar(this->edcu11, 15));
            this->database->setUnsignedChar(this->hmiEdcu11, 16, this->database->getUnsignedChar(this->edcu11, 16));
            this->database->setUnsignedChar(this->hmiEdcu11, 17, this->database->getUnsignedChar(this->edcu11, 17));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 10, this->database->getUnsignedChar(this->edcu22, 10));
            this->database->setUnsignedChar(this->hmiEdcu12, 11, this->database->getUnsignedChar(this->edcu22, 11));
            this->database->setBool(this->hmiEdcu12, 28, 2, this->database->getBool(this->edcu22, 28, 2));
        }

        if (this->database->getBool(this->edcu12, 22, 1))   // mdcu7 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 18, this->database->getUnsignedChar(this->edcu11, 20));
            this->database->setUnsignedChar(this->hmiEdcu11, 19, this->database->getUnsignedChar(this->edcu11, 19));
            this->database->setUnsignedChar(this->hmiEdcu11, 20, this->database->getUnsignedChar(this->edcu11, 20));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 12, this->database->getUnsignedChar(this->edcu12, 12));
            this->database->setUnsignedChar(this->hmiEdcu12, 13, this->database->getUnsignedChar(this->edcu12, 13));
            this->database->setBool(this->hmiEdcu12, 28, 1, this->database->getBool(this->edcu12, 28, 1));
        }
        else if (this->database->getBool(this->edcu22, 22, 1))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 18, this->database->getUnsignedChar(this->edcu11, 18));
            this->database->setUnsignedChar(this->hmiEdcu11, 19, this->database->getUnsignedChar(this->edcu11, 19));
            this->database->setUnsignedChar(this->hmiEdcu11, 20, this->database->getUnsignedChar(this->edcu11, 20));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 12, this->database->getUnsignedChar(this->edcu22, 12));
            this->database->setUnsignedChar(this->hmiEdcu12, 13, this->database->getUnsignedChar(this->edcu22, 13));
            this->database->setBool(this->hmiEdcu12, 28, 1, this->database->getBool(this->edcu22, 28, 1));
        }

        if (this->database->getBool(this->edcu12, 22, 0))   // mdcu8 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 21, this->database->getUnsignedChar(this->edcu11, 21));
            this->database->setUnsignedChar(this->hmiEdcu11, 22, this->database->getUnsignedChar(this->edcu11, 22));
            this->database->setUnsignedChar(this->hmiEdcu11, 23, this->database->getUnsignedChar(this->edcu11, 23));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 14, this->database->getUnsignedChar(this->edcu12, 14));
            this->database->setUnsignedChar(this->hmiEdcu12, 15, this->database->getUnsignedChar(this->edcu12, 15));
            this->database->setBool(this->hmiEdcu12, 28, 0, this->database->getBool(this->edcu12, 28, 0));
        }
        else if (this->database->getBool(this->edcu22, 22, 0))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 21, this->database->getUnsignedChar(this->edcu11, 21));
            this->database->setUnsignedChar(this->hmiEdcu11, 22, this->database->getUnsignedChar(this->edcu11, 22));
            this->database->setUnsignedChar(this->hmiEdcu11, 23, this->database->getUnsignedChar(this->edcu11, 23));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 14, this->database->getUnsignedChar(this->edcu22, 14));
            this->database->setUnsignedChar(this->hmiEdcu12, 15, this->database->getUnsignedChar(this->edcu22, 15));
            this->database->setBool(this->hmiEdcu12, 28, 0, this->database->getBool(this->edcu22, 28, 0));
        }

        if (this->database->getBool(this->edcu12, 23, 7))   // mdcu9 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 24, this->database->getUnsignedChar(this->edcu11, 24));
            this->database->setUnsignedChar(this->hmiEdcu11, 25, this->database->getUnsignedChar(this->edcu11, 25));
            this->database->setUnsignedChar(this->hmiEdcu11, 26, this->database->getUnsignedChar(this->edcu11, 26));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 16, this->database->getUnsignedChar(this->edcu12, 16));
            this->database->setUnsignedChar(this->hmiEdcu12, 17, this->database->getUnsignedChar(this->edcu12, 17));
            this->database->setBool(this->hmiEdcu12, 29, 7, this->database->getBool(this->edcu12, 29, 7));
        }
        else if (this->database->getBool(this->edcu22, 23, 7))
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 24, this->database->getUnsignedChar(this->edcu11, 24));
            this->database->setUnsignedChar(this->hmiEdcu11, 25, this->database->getUnsignedChar(this->edcu11, 25));
            this->database->setUnsignedChar(this->hmiEdcu11, 26, this->database->getUnsignedChar(this->edcu11, 26));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 16, this->database->getUnsignedChar(this->edcu22, 16));
            this->database->setUnsignedChar(this->hmiEdcu12, 17, this->database->getUnsignedChar(this->edcu22, 17));
            this->database->setBool(this->hmiEdcu12, 29, 7, this->database->getBool(this->edcu22, 29, 7));
        }

        if (this->database->getBool(this->edcu12, 23, 6))   // mdcu10 trust
        {
            // fault byte
            this->database->setUnsignedChar(this->hmiEdcu11, 27, this->database->getUnsignedChar(this->edcu11, 27));
            this->database->setUnsignedChar(this->hmiEdcu11, 28, this->database->getUnsignedChar(this->edcu11, 28));
            this->database->setUnsignedChar(this->hmiEdcu11, 29, this->database->getUnsignedChar(this->edcu11, 29));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 18, this->database->getUnsignedChar(this->edcu12, 18));
            this->database->setUnsignedChar(this->hmiEdcu12, 19, this->database->getUnsignedChar(this->edcu12, 19));
            this->database->setBool(this->hmiEdcu12, 29, 6, this->database->getBool(this->edcu12, 29, 6));
        }
        else if (this->database->getBool(this->edcu22, 23, 6))
        {
            // faylt byte
            this->database->setUnsignedChar(this->hmiEdcu11, 27, this->database->getUnsignedChar(this->edcu11, 27));
            this->database->setUnsignedChar(this->hmiEdcu11, 28, this->database->getUnsignedChar(this->edcu11, 28));
            this->database->setUnsignedChar(this->hmiEdcu11, 29, this->database->getUnsignedChar(this->edcu11, 29));

            // state byte
            this->database->setUnsignedChar(this->hmiEdcu12, 18, this->database->getUnsignedChar(this->edcu22, 18));
            this->database->setUnsignedChar(this->hmiEdcu12, 19, this->database->getUnsignedChar(this->edcu22, 19));
            this->database->setBool(this->hmiEdcu12, 29, 6, this->database->getBool(this->edcu22, 29, 6));
        }
    }
}
