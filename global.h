#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdlib.h>
#include <PixyMvbLib.h>
#include <PixyTypes.h>
#include <QString>
#include <QDateTime>

#define _HMI_VERSION_MAIN 4
#define _HMI_VERSION_MINOR 0

#define USER_DEBUG_MODE

#define _LOG_MAX_SIZE (10 * 1024 * 1024)

enum pageIndex
{
    uSetLightPage = 0,
    uVehicleStatePage,
    uVehicleParameterPage,
    uAirConditionerPage,
    uBypassPage,
    uCasePage,
    uFireAlarmPage,
    uTroubleShootingLoginPage,
    uTroubleShootingPage,
    uTimeSetPage,
    uDiameterSetPage,
    uVehicleNumberSetPage,
    uVehicleTestPage,
    uDataRecordPage,
    uDataRecordSetPage,
    uNetworkPage,
    uColorCheckPage,
    uSoftwareVersionPage,
    uHistoryFaultPage,
    uPasswordSetPage,
    uDataRecordSetLoginPage,
    uVehicleStateHelpPage,
    uVehicleParameterHelpPage,
    uVehicleAirconditionerHelpPage,
    uDigtalIoA1Page,
    uDigtalIoA2Page,
    uDigtalIoOthersPage,
    uPortDataPage,
    uAllPortsPage,
    uHmiPositionSetPage,
    uBcuParametersPage,
    uDcdcParametersPage,
    uDcuParametersPage,
    uSivParametersPage,
    uMvbStatePage,
    uOthersParametersPage,
    uBrakeTestPage,
    uTractionTestPage,
    uSivTestPage,
    uCompressorTestPage,
    uHandShankTestPage,
    uLcuPage,
    uLcuTestPage,
    uAcceleratedSpeedPage,
    uMyCaseAllPage
};

enum pagePosition
{
    uTop = 0,
    uMiddle,
    uBottom,
    uHuge
};

enum port_size
{
    uFCode1 = 1,
    uFCode2,
    uFCode3,
    uFCode4
};

enum port_type
{
    uSinkPort,
    uSourcePort,
    uUserDefinePort,
};

struct port
{
    unsigned short int address;
    enum port_size size;
    enum port_type type;
    unsigned short int cycle;

    port(unsigned short int a, enum port_size s, enum port_type t, unsigned short int c)
    {
        this->address = a;
        this->size = s;
        this->type = t;
        this->cycle = c;
    }
};

struct port_data
{
    PIXYMVB_Data data;
    unsigned short int time;

    port_data()
    {
        memset(data, 0, sizeof data);
        time = 0;
    }
};

#define DI_LENGTH (24 + 1)
#define DO_LENGTH (16 + 1)
#define AX_LENGTH (8 + 1)

#define ON_STATE ("border-radius: 12px; border: 1px groove yellow; background-color: green;")
#define OFF_STATE ("border-radius: 12px; border: 1px groove yellow; background-color: gray;")

#define BUTTON_DOWN ("color: white; background-color: rgb(0, 0, 255); border:2px solid white; border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \
                            stop: 0 gray, stop: 1 black); border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop: 1 black); \
                                border-right-color: white; border-bottom-color: white;")
#define BUTTON_UP ("color: black; background-color: rgb(113, 113, 198); border:2px solid white; border-right-color: rgb(113, 113, 198); border-bottom-color: rgb(113, 113, 198);")

#define _LOG qDebug() << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") << __FILE__ << __LINE__

#define _NO_DATABASE_WARNING    \
                                if (this->database == NULL) \
                                { \
                                    _LOG << "no database"; \
                                \
                                    return; \
                                }

#endif // GLOBAL_H
