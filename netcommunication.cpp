#include "netcommunication.h"
#include "ui_netcommunication.h"
#include "global.h"
#include "vehiclelogo.h"

#define _OFFLINE ("font: 15px; color: rgb(0,0,0); background-color: red; border: 1px solid gray;")
#define _ONLINE ("font: 15px; color: rgb(0,0,0); background-color: rgb(0, 255, 0); border: 1px solid gray;")
#define _SLAVE_ONLINE ("font: 15px; color: rgb(0,0,0); background-color: yellow; border: 1px solid gray;")

NetCommunication::NetCommunication(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::NetCommunication)
{
    ui->setupUi(this);

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(95, 20, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();
}

NetCommunication::~NetCommunication()
{
    delete ui;
}

void NetCommunication::updatePage()
{
    if (1 == this->database->hmiPosition)
    {
        this->setDeviceState(ui->hmiA1, true);
        this->setDeviceState(ui->hmiA2, this->database->hmi2Online);
    }
    else if (2 == this->database->hmiPosition)
    {
        this->setDeviceState(ui->hmiA1, this->database->hmi1Online);
        this->setDeviceState(ui->hmiA2, true);
    }

    // Mr. Chong want to cancel the device slave state, so delete it but reserve the master and slave function
    // this->setDeviceStateMaster(ui->ccuA1, this->database->ccuOnline && this->database->ccu1Online, this->database->ccu1OnlineMain);
    // this->setDeviceStateMaster(ui->ccuA2, this->database->ccuOnline && this->database->ccu2Online, this->database->ccu2OnlineMain);
    this->setDeviceState(ui->ccuA1, this->database->ccuOnline && this->database->ccu1Online);
    this->setDeviceState(ui->ccuA2, this->database->ccuOnline && this->database->ccu2Online);

    // set the repeater state
    this->setDeviceState(ui->lblRptB1, this->database->riom2GwOnline);
    this->setDeviceState(ui->lblRptC1, this->database->riom3GwOnline);
    this->setDeviceState(ui->lblRptC2, this->database->riom6GwOnline);
    this->setDeviceState(ui->lblRptB2, this->database->riom7GwOnline);

    this->setDeviceState(ui->ermA1, this->database->erm1Online);
    this->setDeviceState(ui->ermA2, this->database->erm2Online);

    // Mr. Chong want to cancel the device slave state, so delete it but reserve the master and slave function
    // this->setDeviceStateMaster(ui->riomA1, this->database->riom1GwOnline, this->database->riom1Di1Online && this->database->riom1Di2Online
    //                                                                            && this->database->riom1Di3Online && this->database->riom1Di4Online
    //                                                                            && this->database->riom1Di5Online && this->database->riom1DoOnline
    //                                                                            && this->database->riom1AxOnline);
    // this->setDeviceStateMaster(ui->riomB1, this->database->riom2GwOnline, this->database->riom2DiOnline && this->database->riom2DoOnline);
    // this->setDeviceStateMaster(ui->riomC1, this->database->riom3GwOnline, this->database->riom3DiOnline && this->database->riom3DoOnline);
    // this->setDeviceStateMaster(ui->riomD1, this->database->riom4GwOnline, this->database->riom4DiOnline && this->database->riom4DoOnline);
    // this->setDeviceStateMaster(ui->riomD2, this->database->riom5GwOnline, this->database->riom5DiOnline && this->database->riom5DoOnline);
    // this->setDeviceStateMaster(ui->riomC2, this->database->riom6GwOnline, this->database->riom6DiOnline && this->database->riom6DoOnline);
    // this->setDeviceStateMaster(ui->riomB2, this->database->riom7GwOnline, this->database->riom7DiOnline && this->database->riom7DoOnline);
    // this->setDeviceStateMaster(ui->riomA2, this->database->riom8GwOnline, this->database->riom8Di1Online && this->database->riom8Di2Online
    //                                                                           && this->database->riom8Di3Online && this->database->riom8Di4Online
    //                                                                           && this->database->riom8Di5Online && this->database->riom8DoOnline
    //                                                                           && this->database->riom8AxOnline);
    this->setDeviceState(ui->riomA1, this->database->riom1GwOnline && this->database->riom1Di1Online && this->database->riom1Di2Online
                                                                   && this->database->riom1Di3Online && this->database->riom1Di4Online
                                                                   && this->database->riom1Di5Online && this->database->riom1DoOnline
                                                                   && this->database->riom1AxOnline);
    this->setDeviceState(ui->riomB1, this->database->riom2GwOnline && this->database->riom2DiOnline && this->database->riom2DoOnline);
    this->setDeviceState(ui->riomC1, this->database->riom3GwOnline && this->database->riom3DiOnline && this->database->riom3DoOnline);
    this->setDeviceState(ui->riomD1, this->database->riom4GwOnline && this->database->riom4DiOnline && this->database->riom4DoOnline);
    this->setDeviceState(ui->riomD2, this->database->riom5GwOnline && this->database->riom5DiOnline && this->database->riom5DoOnline);
    this->setDeviceState(ui->riomC2, this->database->riom6GwOnline && this->database->riom6DiOnline && this->database->riom6DoOnline);
    this->setDeviceState(ui->riomB2, this->database->riom7GwOnline && this->database->riom7DiOnline && this->database->riom7DoOnline);
    this->setDeviceState(ui->riomA2, this->database->riom8GwOnline && this->database->riom8Di1Online && this->database->riom8Di2Online
                                                                   && this->database->riom8Di3Online && this->database->riom8Di4Online
                                                                   && this->database->riom8Di5Online && this->database->riom8DoOnline
                                                                   && this->database->riom8AxOnline);

    // both atc online if there is one online for it is impossible to check both
    this->setDeviceState(ui->atcA1, this->database->atc1Online);
    // this->setDeviceState(ui->lblAtcA2, this->database->atc1Online);

    this->setDeviceState(ui->paA1, this->database->pa1Online);
    this->setDeviceState(ui->paA2, this->database->pa2Online);

    this->setDeviceState(ui->hvacA1, this->database->hvac1Online);
    this->setDeviceState(ui->hvacB1, this->database->hvac2Online);
    this->setDeviceState(ui->hvacC1, this->database->hvac3Online);
    this->setDeviceState(ui->hvacD1, this->database->hvac4Online);
    this->setDeviceState(ui->hvacD2, this->database->hvac5Online);
    this->setDeviceState(ui->hvacC2, this->database->hvac6Online);
    this->setDeviceState(ui->hvacB2, this->database->hvac7Online);
    this->setDeviceState(ui->hvacA2, this->database->hvac8Online);

    this->setDeviceState(ui->edcu1A1, this->database->edcu1OnlineA1);
    this->setDeviceState(ui->edcu2A1, this->database->edcu2OnlineA1);
    this->setDeviceState(ui->edcu1B1, this->database->edcu1OnlineB1);
    this->setDeviceState(ui->edcu2B1, this->database->edcu2OnlineB1);
    this->setDeviceState(ui->edcu1C1, this->database->edcu1OnlineC1);
    this->setDeviceState(ui->edcu2C1, this->database->edcu2OnlineC1);
    this->setDeviceState(ui->edcu1D1, this->database->edcu1OnlineD1);
    this->setDeviceState(ui->edcu2D1, this->database->edcu2OnlineD1);
    this->setDeviceState(ui->edcu1D2, this->database->edcu1OnlineD2);
    this->setDeviceState(ui->edcu2D2, this->database->edcu2OnlineD2);
    this->setDeviceState(ui->edcu1C2, this->database->edcu1OnlineC2);
    this->setDeviceState(ui->edcu2C2, this->database->edcu2OnlineC2);
    this->setDeviceState(ui->edcu1B2, this->database->edcu1OnlineB2);
    this->setDeviceState(ui->edcu2B2, this->database->edcu2OnlineB2);
    this->setDeviceState(ui->edcu1A2, this->database->edcu1OnlineA2);
    this->setDeviceState(ui->edcu2A2, this->database->edcu2OnlineA2);

    this->setDeviceState(ui->fauA1, this->database->fau1Online);
    this->setDeviceState(ui->fauA2, this->database->fau2Online);

    this->setDeviceState(ui->sivA1, this->database->siv1Online);
    this->setDeviceState(ui->sivC1, this->database->siv2Online);
    this->setDeviceState(ui->sivC2, this->database->siv3Online);
    this->setDeviceState(ui->sivA2, this->database->siv4Online);

    this->setDeviceState(ui->bcuA1, this->database->bcu1Online);
    this->setDeviceState(ui->bcuD1, this->database->bcu2Online);
    this->setDeviceState(ui->bcuD2, this->database->bcu3Online);
    this->setDeviceState(ui->bcuA2, this->database->bcu4Online);

    this->setDeviceState(ui->tcuB1, this->database->tcu1Online);
    this->setDeviceState(ui->tcuC1, this->database->tcu2Online);
    this->setDeviceState(ui->tcuD1, this->database->tcu3Online);
    this->setDeviceState(ui->tcuD2, this->database->tcu4Online);
    this->setDeviceState(ui->tcuC2, this->database->tcu5Online);
    this->setDeviceState(ui->tcuB2, this->database->tcu6Online);

    this->setDeviceState(ui->dcdcA1, this->database->dcdc1Online);
    this->setDeviceState(ui->dcdcA2, this->database->dcdc2Online);

    // this->setDeviceState(ui->lblTdsA1, this->database->tdsOnline);
}

void NetCommunication::showEvent(QShowEvent *)
{
    this->vehicleLogo->setLeftHeadState(false);
    this->vehicleLogo->setRightHeadState(false);
    this->vehicleLogo->setA1Number(QString("A1"));
    this->vehicleLogo->setB1Number(QString("B1"));
    this->vehicleLogo->setC1Number(QString("C1"));
    this->vehicleLogo->setD1Number(QString("D1"));
    this->vehicleLogo->setD2Number(QString("D2"));
    this->vehicleLogo->setC2Number(QString("C2"));
    this->vehicleLogo->setB2Number(QString("B2"));
    this->vehicleLogo->setA2Number(QString("A2"));

    // ui->lblTdsA1->hide();
    // ui->lnTdsMvbA->hide();
    // ui->lnTdsMvbB->hide();

    ui->lblLcuLine1A1->hide();
    ui->lblLcuLine2A1->hide();
    ui->lblLcuA1->hide();

    ui->lblLcuLine1A2->hide();
    ui->lblLcuLine2A2->hide();
    ui->lblLcuA2->hide();
}

void NetCommunication::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

void NetCommunication::setDeviceState(QLabel *label, bool state)
{
    if (state)
    {
        label->setStyleSheet(_ONLINE);
    }
    else
    {
        label->setStyleSheet(_OFFLINE);
    }
}

void NetCommunication::setDeviceStateMaster(QLabel *label, bool state, bool master)
{
    if (false == state)
    {
        label->setStyleSheet(_OFFLINE);
    }
    else if (true == state && true == master)
    {
        label->setStyleSheet(_ONLINE);
    }
    else if (true == state && false == master)
    {
        label->setStyleSheet(_SLAVE_ONLINE);
    }
}
