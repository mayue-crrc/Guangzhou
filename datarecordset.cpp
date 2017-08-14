#include "datarecordset.h"
#include "ui_datarecordset.h"
#include "keyboardhorizon.h"
#include <QDebug>
#include <QTimer>

#define _SELECTED ("color: white; background-color: rgb(0, 0, 255); border: 2px solid white; border-radius: 2px;")
#define _UNSELECTED ("color: white; background-color: black; border: 2px solid white; border-radius: 2px;")

#define _INVALID_TIME QString("时间不能大于720小时，请重新输入！")
#define _INVALID_DISTANCE QString("里程不能大于1000公里，请重新输入！")
#define _INVALID_INPUT QString("数据输入错误，请重新输入！")

DataRecordSet::DataRecordSet(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DataRecordSet)
{
    ui->setupUi(this);

    this->keyboardHorizon = new KeyboardHorizon(this);
    this->keyboardHorizon->setGeometry(60, 470, this->keyboardHorizon->width(), this->keyboardHorizon->height());
    connect(this->keyboardHorizon, SIGNAL(myKeyPress(QString)), this, SLOT(myKeyPressEvent(QString)));
    this->keyboardHorizon->hideButtonConfirm();
    this->keyboardHorizon->show();

    this->buttons << ui->btnMileage << ui->btnCompressor1 << ui->btnCompressor2 << ui->btnConsumption
                  << ui->btnTotalTime << ui->btnTotalMileage << ui->btnSivConsumption << ui->btnTractionConsumption
                  << ui->btnBrakeConsuption << ui->btnRegeneratePower;

    foreach(QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(mySelection()));
    }

    this->timer = new QTimer();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(resetFlag()));
    this->timer->stop();

    this->counter = 0;
}

DataRecordSet::~DataRecordSet()
{
    delete ui;
}

void DataRecordSet::mySelection()
{
    for (int i = 0; i < this->buttons.size(); i ++)
    {
        if (this->sender() == this->buttons.at(i))
        {
            this->buttons.at(i)->setStyleSheet(_SELECTED);

            this->counter = i;
        }
        else
        {
            this->buttons.at(i)->setStyleSheet(_UNSELECTED);
        }
    }
}

void DataRecordSet::myRecordSet()
{

}

void DataRecordSet::myKeyPressEvent(QString key)
{
    if (QString("返回") == key)
    {
        emit this->changePage(uDataRecordPage);
    }
    else if (QString("DEL") == key)
    {
        this->buttons.at(this->counter)->setText("");
    }
    else
    {
        QString text = this->buttons.at(this->counter)->text();

        this->buttons.at(this->counter)->setText(text + key);
    }
}

void DataRecordSet::showEvent(QShowEvent *)
{
    ui->btnMileage->setText(QString::number(this->database->hmiTotalMileage));
    ui->btnCompressor1->setText(QString::number(this->database->hmiTotalCompressor1));
    ui->btnCompressor2->setText(QString::number(this->database->hmiTotalCompressor2));
    ui->btnConsumption->setText(QString::number(this->database->hmiTotalConsumption));
    ui->btnSivConsumption->setText(QString::number(this->database->hmiTotalSivConsumption));
    ui->btnTractionConsumption->setText(QString::number(this->database->hmiTotalTractionConsumption));
    ui->btnBrakeConsuption->setText(QString::number(this->database->hmiTotalBcuConsumption));
    ui->btnRegeneratePower->setText(QString::number(this->database->hmiTotalRegeneratePower));
    ui->btnTotalTime->setText(QString::number(this->database->hmiRecordTime * 24));

    // the unit of receive time is hour and change it to day
    ui->btnTotalMileage->setText(QString::number(this->database->hmiRecordMileage));

    ui->lblErrorTip->hide();
}

void DataRecordSet::startTheTimer(unsigned short int time)
{
    if (this->timer->isActive())
    {
        return;
    }

    this->timer->start(time);
}

void DataRecordSet::on_btnMileageSet_clicked()
{
    if (ui->btnMileage->text().trimmed().toUInt() < 65535 * 65535)
    {
        this->database->hmiSetTotalMileage = ui->btnMileage->text().toUInt();
        this->database->hmiSetTotalMileageFlag = true;
        ui->btnMileageSet->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_INPUT);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnCompressor1Set_clicked()
{
    if (ui->btnCompressor1->text().trimmed().toUInt() < 65535 * 65535)
    {
        this->database->hmiSetTotalCompressor1 = ui->btnCompressor1->text().toUInt();
        this->database->hmiSetTotalCompressor1Flag = true;
        ui->btnCompressor1Set->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_INPUT);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnCompressor2Set_clicked()
{
    if (ui->btnCompressor2->text().trimmed().toUInt() < 65535 * 65535)
    {
        this->database->hmiSetTotalCompressor2 = ui->btnCompressor2->text().toUInt();
        this->database->hmiSetTotalCompressor2Flag = true;
        ui->btnCompressor2Set->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_INPUT);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnConsumptionSet_clicked()
{
    if (ui->btnConsumption->text().trimmed().toUInt() < 65535 * 65535)
    {
        this->database->hmiSetTotalConsumption = ui->btnConsumption->text().toUInt();
        this->database->hmiSetTotalConsumptionFlag = true;
        ui->btnConsumptionSet->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_INPUT);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnSivConsumptionSet_clicked()
{
    if (ui->btnSivConsumption->text().trimmed().toUInt() < 65535 * 65535)
    {
        this->database->hmiSetTotalSivConsumption = ui->btnSivConsumption->text().toUInt();
        this->database->hmiSetTotalSivConsumptionFlag = true;
        ui->btnSivConsumptionSet->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_INPUT);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnTractionConsumptionSet_clicked()
{
    if (ui->btnTractionConsumption->text().trimmed().toUInt() < 65535 * 65535)
    {
        this->database->hmiSetTotalTractionConsumption = ui->btnTractionConsumption->text().toUInt();
        this->database->hmiSetTotalTractionConsumptionFlag = true;
        ui->btnTractionConsumptionSet->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_INPUT);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnBrakeConsuptionSet_clicked()
{
    if (ui->btnBrakeConsuption->text().trimmed().toUInt() < 65535 * 65535)
    {
        this->database->hmiSetTotalBcuConsumption = ui->btnBrakeConsuption->text().toUInt();
        this->database->hmiSetTotalBcuConsumptionFlag = true;
        ui->btnBrakeConsuptionSet->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();

    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_INPUT);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnRegeneratePowerSet_clicked()
{
    if (ui->btnRegeneratePower->text().trimmed().toUInt() < 65535 * 65535)
    {
        this->database->hmiSetTotalRegeneratePower = ui->btnRegeneratePower->text().toUInt();
        this->database->hmiSetTotalRegeneratePowerFlag = true;
        ui->btnRegeneratePowerSet->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_INPUT);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnRecordTimeSet_clicked()
{
    if (ui->btnTotalTime->text().trimmed().toUInt() <= 24 * 30)
    {
        this->database->hmiSetRecordTime = ui->btnTotalTime->text().toUInt();
        this->database->hmiSetRecordTimeFlag = true;
        ui->btnRecordTimeSet->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_TIME);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::on_btnRecordDistanceSet_clicked()
{
    if (ui->btnTotalMileage->text().trimmed().toUInt() <= 1000)
    {
        this->database->hmiSetRecordMileage = ui->btnTotalMileage->text().toUInt();
        this->database->hmiSetRecordMileageFlag = true;
        ui->btnRecordDistanceSet->setEnabled(false);
        this->startTheTimer(5000);
        this->database->hmiSecurityCode = 0xAA;

        ui->lblErrorTip->hide();
    }
    else
    {
        ui->lblErrorTip->setText(_INVALID_DISTANCE);
        ui->lblErrorTip->show();
    }
}

void DataRecordSet::resetFlag()
{
    this->timer->stop();

    this->database->hmiSetTotalMileageFlag = false;
    this->database->hmiSetTotalCompressor1Flag = false;
    this->database->hmiSetTotalCompressor2Flag = false;
    this->database->hmiSetTotalSivConsumptionFlag = false;
    this->database->hmiSetTotalTractionConsumptionFlag = false;
    this->database->hmiSetTotalBcuConsumptionFlag = false;
    this->database->hmiSetTotalRegeneratePowerFlag = false;
    this->database->hmiSetTotalConsumptionFlag = false;
    this->database->hmiSetRecordMileageFlag = false;
    this->database->hmiSetRecordTimeFlag = false;
    this->database->hmiSecurityCode = 0x55;


    ui->btnMileageSet->setEnabled(true);
    ui->btnCompressor1Set->setEnabled(true);
    ui->btnCompressor2Set->setEnabled(true);
    ui->btnConsumptionSet->setEnabled(true);
    ui->btnBrakeConsuptionSet->setEnabled(true);
    ui->btnRegeneratePowerSet->setEnabled(true);
    ui->btnRecordTimeSet->setEnabled(true);
    ui->btnRecordDistanceSet->setEnabled(true);
    ui->btnSivConsumptionSet->setEnabled(true);
    ui->btnTractionConsumptionSet->setEnabled(true);
}
