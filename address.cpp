#include "address.h"
#include <QDebug>

Address::Address(enum data_type type, int i)
{
    this->port = -1;
    this->byte = 0;
    this->bit = 0;
    this->type = type;

    this->i = i;
}

Address::Address(enum data_type type, bool b)
{
    this->port = -1;
    this->byte = 0;
    this->bit = 0;
    this->type = type;

    this->b = b;
}

Address::Address(enum data_type type, QString s)
{
    this->port = -1;
    this->byte = 0;
    this->bit = 0;
    this->type = type;

    this->s = s;
}

Address::Address(unsigned short int port, int byte)
{
    this->port = port;
    this->byte = byte;
    this->type = uInt;
}

Address::Address(unsigned short int port, int byte, int bit)
{
    this->port = port;
    this->byte = byte;
    this->bit = bit;
    this->type = uBool;
}

QString Address::getString()
{
    if (uString == this->type)
    {
        return this->s;
    }
    else
    {
        qDebug() << "wrong data type from" << __FILE__ << __LINE__;

        return "";
    }
}

int Address::getInt()
{
    if (uInt == this->type)
    {
        return this->i;
    }
    else
    {
        qDebug() << "try to get wrong data type from" << __FILE__ << __LINE__;

        return 0;
    }
}

bool Address::getBool()
{
    if (uBool == this->type)
    {
        return this->b;
    }
    else
    {
        qDebug() << " try to get wrong data type from" << __FILE__ << __LINE__;

        return false;
    }
}

void Address::setString(QString s)
{
    if (uString == this->type)
    {
        this->s = s;
    }
    else
    {
        qDebug() << " try to set wrong data type from" << __FILE__ << __LINE__;
    }
}

void Address::setInt(int i)
{
    if (uInt == this->type)
    {
        this->i = i;
    }
    else
    {
        qDebug() << " try to set wrong data type from" << __FILE__ << __LINE__;
    }
}

void Address::setBool(bool b)
{
    if (uBool == this->type)
    {
        this->b = b;
    }
    else
    {
        qDebug() << " try to set wrong data type from" << __FILE__ << __LINE__;
    }
}
