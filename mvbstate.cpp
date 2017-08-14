#include "mvbstate.h"
#include "ui_mvbstate.h"
#include "vehiclelogo.h"

MvbState::MvbState(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MvbState)
{
    ui->setupUi(this);

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(180, 245 - 150, this->vehicleLogo->width(), this->vehicleLogo->height());
}

void MvbState::updatePage()
{
    ui->lblLatA1->setText(this->boolToQString(this->database->riomLatA1));
    ui->lblLatB1->setText(this->boolToQString(this->database->riomLatB1));
    ui->lblLatC1->setText(this->boolToQString(this->database->riomLatC1));
    ui->lblLatD1->setText(this->boolToQString(this->database->riomLatD1));
    ui->lblLatD2->setText(this->boolToQString(this->database->riomLatD2));
    ui->lblLatC2->setText(this->boolToQString(this->database->riomLatC2));
    ui->lblLatB2->setText(this->boolToQString(this->database->riomLatB2));
    ui->lblLatA2->setText(this->boolToQString(this->database->riomLatA2));

    this->setRldState(ui->lblRldA1, this->database->riomRldA1);
    this->setRldState(ui->lblRldB1, this->database->riomRldB1);
    this->setRldState(ui->lblRldC1, this->database->riomRldC1);
    this->setRldState(ui->lblRldD1, this->database->riomRldD1);
    this->setRldState(ui->lblRldD2, this->database->riomRldD2);
    this->setRldState(ui->lblRldC2, this->database->riomRldC2);
    this->setRldState(ui->lblRldB2, this->database->riomRldB2);
    this->setRldState(ui->lblRldA2, this->database->riomRldA2);

    ui->lblAirCondiitionerDeloadA1->setText(this->boolToQString(this->database->acuDeloadA1));
    ui->lblAirCondiitionerDeloadB1->setText(this->boolToQString(this->database->acuDeloadB1));
    ui->lblAirCondiitionerDeloadC1->setText(this->boolToQString(this->database->acuDeloadC1));
    ui->lblAirCondiitionerDeloadD1->setText(this->boolToQString(this->database->acuDeloadD1));
    ui->lblAirCondiitionerDeloadD2->setText(this->boolToQString(this->database->acuDeloadD2));
    ui->lblAirCondiitionerDeloadC2->setText(this->boolToQString(this->database->acuDeloadC2));
    ui->lblAirCondiitionerDeloadB2->setText(this->boolToQString(this->database->acuDeloadB2));
    ui->lblAirCondiitionerDeloadA2->setText(this->boolToQString(this->database->acuDeloadA2));

    ui->lblCcuAirCondiitionerDeloadA1->setText(this->boolToQString(this->database->ccuAirConditionerDeloadA1));
    ui->lblCcuAirCondiitionerDeloadB1->setText(this->boolToQString(this->database->ccuAirConditionerDeloadB1));
    ui->lblCcuAirCondiitionerDeloadC1->setText(this->boolToQString(this->database->ccuAirConditionerDeloadC1));
    ui->lblCcuAirCondiitionerDeloadD1->setText(this->boolToQString(this->database->ccuAirConditionerDeloadD1));
    ui->lblCcuAirCondiitionerDeloadD2->setText(this->boolToQString(this->database->ccuAirConditionerDeloadD2));
    ui->lblCcuAirCondiitionerDeloadC2->setText(this->boolToQString(this->database->ccuAirConditionerDeloadC2));
    ui->lblCcuAirCondiitionerDeloadB2->setText(this->boolToQString(this->database->ccuAirConditionerDeloadB2));
    ui->lblCcuAirCondiitionerDeloadA2->setText(this->boolToQString(this->database->ccuAirConditionerDeloadA2));

    ui->lblCcuTime->setText(QDateTime(QDate(this->database->ccuYear + 2000, this->database->ccuMonth, this->database->ccuDay),
                                      QTime(this->database->ccuHour, this->database->ccuMinute, this->database->ccuSecond)).toString("yyyy-MM-dd hh:mm:ss"));
}

void MvbState::showEvent(QShowEvent *)
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
}

MvbState::~MvbState()
{
    delete ui;
}

void MvbState::on_btnBack_clicked()
{
    this->changePage(uTroubleShootingPage);
}

QString MvbState::boolToQString(bool signal)
{
    if (signal)
    {
        return QString("1");
    }
    else
    {
        return QString("0");
    }
}

void MvbState::setRldState(QLabel *label, bool state)
{
    if (state)
    {
        label->setStyleSheet("background-color: red");
        label->setText(this->boolToQString(state));
    }
    else
    {
        label->setStyleSheet("background-color: black");
        label->setText(this->boolToQString(state));
    }
}
