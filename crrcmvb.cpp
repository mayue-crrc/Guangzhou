#include "crrcmvb.h"
#include <QDebug>

#define CRRC_MVB_VERSION 1.4

CrrcMvb::CrrcMvb()
{
}

// parameter
// int deviceId: the id of the mvb device
bool CrrcMvb::initializeMvb(int deviceId)
{
    unsigned short int value = 0;

    value = pixymvb_CfgHWInit(PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, deviceId, _CRRC_MVB_SUPERVISION_TIME);

    if (PIXYMVB_OK == value)
    {
        return true;
    }
    else
    {
        qDebug() << "fail to initialize the mvb board card, please check it";

        return false;
    }
}

// no parameter
bool CrrcMvb::setMvbOperation()
{
    unsigned short int value = 0;

    value = pixymvb_ChangeState(PIXYMVB_OPERATION_STATE);

    if (PIXYMVB_OK == value)
    {
        return true;
    }
    else
    {
        qDebug() << "fail to set the mvb board card to operation state, please check it";

        return false;
    }
}

// no parameter
bool CrrcMvb::setMvbStop()
{
    unsigned short int value = 0;

    value = pixymvb_ChangeState(PIXYMVB_STOP_STATE);

    if (PIXYMVB_OK == value)
    {
        return true;
    }
    else
    {
        qDebug() << "fail to set the mvb board card to stop state, please check it";

        return false;
    }
}

// parameters
// int port: the port address
// enum crrc_port_type size: the port size(FCode0, 1, 2, 4)
// enum crrc_port_size type: the port type(source or sink)
// int cycle: the feature cycle of the port
bool CrrcMvb::addPort(unsigned short int port, enum crrc_port_size size, enum crrc_port_type type, unsigned short int cycle)
{
    if (port > 0x0FFF)
    {
        qDebug() << "port" << port << " is a invalid, please check it";
    }

    unsigned short int value = 0;

    if (uSinkPort == type)
    {
        value = pixymvb_AddPort(port, PIXYMVB_SNKPORT, 0x01 << size, NULL);
    }
    else if (uSourcePort == type)
    {
        value = pixymvb_AddPort(port, PIXYMVB_SRCPORT, 0x01 << size, NULL);
    }

    if (this->portData.contains(port) == false)
    {
        this->portData.insert(port, new crrc_port_data(cycle));
        this->portConfigure << new struct crrc_port(port, size, type, cycle);
    }
    else
    {
        qDebug() << "the port has already been in the port list";
    }

    if (PIXYMVB_OK == value)
    {        
        return true;
    }
    else
    {
        qDebug() << "fail to add the port to the mvb board card, please check it";

        return false;
    }
}

// not finished
bool CrrcMvb::addSourcePort(unsigned short port, unsigned char size, unsigned short cycle)
{
    if (port > 0x0FFF)
    {
        qDebug() << "port" << port << " is a invalid, please check it";
    }

    unsigned short int value = 0;

    value = pixymvb_AddPort(port, PIXYMVB_SRCPORT, 0x01 << size, NULL);

    if (this->portData.contains(port) == false)
    {
        this->portData.insert(port, new crrc_port_data(cycle));
        // this->portConfigure << new struct crrc_port(port, size, uSourcePort, cycle);
    }
    else
    {
        qDebug() << "the port has already been in the port list";
    }

    if (PIXYMVB_OK == value)
    {
        return true;
    }
    else
    {
        qDebug() << "fail to add the port to the mvb board card, please check it";

        return false;
    }
}

// not finished
bool CrrcMvb::addSinkPort(unsigned short port, unsigned char size, unsigned short cycle)
{
    if (port > 0x0FFF)
    {
        qDebug() << "port" << port << " is a invalid, please check it";
    }

    unsigned short int value = 0;

    value = pixymvb_AddPort(port, PIXYMVB_SNKPORT, 0x01 << size, NULL);

    if (this->portData.contains(port) == false)
    {
        this->portData.insert(port, new crrc_port_data(cycle));
        // this->portConfigure << new struct crrc_port(port, size, uSinkPort, cycle);
    }
    else
    {
        qDebug() << "the port has already been in the port list";
    }

    if (PIXYMVB_OK == value)
    {
        return true;
    }
    else
    {
        qDebug() << "fail to add the port to the mvb board card, please check it";

        return false;
    }
}

void CrrcMvb::synchronizeMvbData()
{
    unsigned short int value = 0;

    foreach (struct crrc_port *pointer, this->portConfigure)
    {
        if (portData.contains(pointer->port) == false)
        {
            qDebug() << "there is not port" << pointer->port << "in the list, please add it before use";
        }

        if (uSinkPort == pointer->type)
        {
            value = pixymvb_GetPort(pointer->port, &(portData[pointer->port]->data), &(portData[pointer->port]->cycle));
        }
        else if (uSourcePort == pointer->type)
        {
            value = pixymvb_PutPort(pointer->port, &(portData[pointer->port]->data));
        }

        if (PIXYMVB_OK != value)
        {
            qDebug() << "fail to synchronize port" << pointer->port << "with the mvb bus, the error code is" << value;
        }
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// unsigned short int bitOffset: the bit offset in data stream
bool CrrcMvb::getBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset)
{
    unsigned char *pointer = NULL, value = 0;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            value = *(pointer + byteOffset - 1);
        }
        else
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            value = *(pointer + byteOffset + 1);
        }
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return false;
    }

    if (bitOffset < 8)
    {
        value = value & (0x80 >> bitOffset);
    }
    else
    {
        qDebug() << "the bit offset is too long" << port;

        return false;
    }

    if (value == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
unsigned char CrrcMvb::getUnsignedChar(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL, value = 0;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            value = *(pointer + byteOffset - 1);
        }
        else
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            value = *(pointer + byteOffset + 1);
        }

        return value;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
unsigned short int CrrcMvb::getUnsignedInt(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL;
    unsigned short int value = 0;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        pointer = (unsigned char *)(this->portData[port]->data);
        value = *(unsigned short int *)(pointer + byteOffset);

        return value;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
signed short int CrrcMvb::getSignedInt(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL;
    signed short int value = 0;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        pointer = (unsigned char *)(this->portData[port]->data);
        value = *(signed short int *)(pointer + byteOffset);

        return value;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

// no parameter
unsigned short int CrrcMvb::getPortSum()
{
    return this->portConfigure.size();
}

// parameter
// unsigned short int port: the port whose cycle want to get
unsigned short int CrrcMvb::getPortCycle(unsigned short int port)
{
    if (this->portData.contains(port) == false)
    {
        qDebug() << "the port" << port << "is not in the list, please check it";

        return 65535;
    }
    else
    {
        return 65535 - this->portData[port]->cycle;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// unsigned short int bitOffset: the bit offset in data stream
// bool signal: the signal would be sent on mvb bus
void CrrcMvb::setBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset, bool signal)
{
    unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            pointer = pointer + byteOffset - 1;
        }
        else
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            pointer = pointer + byteOffset + 1;
        }
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
    }

    if (bitOffset > 8)
    {
        qDebug() << "the bit offset is too long" << port;

        return;
    }

    if (true == signal)
    {
        *pointer = *pointer | (0x80 >> bitOffset);
    }
    else
    {
        *pointer = *pointer & ~(0x80 >> bitOffset);
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// unsigned char signal: the signal would be sent on mvb bus
void CrrcMvb::setUnsignedChar(unsigned short int port, unsigned short int byteOffset, unsigned char signal)
{
    unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            *(pointer + byteOffset - 1) = signal;
        }
        else
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            *(pointer + byteOffset + 1) = signal;
        }
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// signed char signal: the signal would be sent on mvb bus
void CrrcMvb::setSignedChar(unsigned short int port, unsigned short int byteOffset, signed char signal)
{
    signed char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (signed char *)(this->portData[port]->data);
            *(pointer + byteOffset - 1) = signal;
        }
        else
        {
            pointer = (signed char *)(this->portData[port]->data);
            *(pointer + byteOffset + 1) = signal;
        }
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// signed short int signal: the signal would be sent on mvb bus
void CrrcMvb::setUnsignedInt(unsigned short int port, unsigned short int byteOffset, unsigned short int signal)
{
    unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        pointer = (unsigned char *)(this->portData[port]->data);
        *(unsigned short int *)(pointer + byteOffset) = signal;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// signed short int signal: the signal would be sent on mvb bus
void CrrcMvb::setSignedInt(unsigned short int port, unsigned short int byteOffset, signed short int signal)
{
    unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        pointer = (unsigned char *)(this->portData[port]->data);
        *(signed short int *)(pointer + byteOffset) = signal;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
    }
}


QString CrrcMvb::getVersion()
{
    return QString::number(CRRC_MVB_VERSION);
}
