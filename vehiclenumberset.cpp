#include "vehiclenumberset.h"
#include "ui_vehiclenumberset.h"
#include "keyboardverticality.h"
#include "global.h"
#include "myfunction.h"
#include <QDebug>
#include <QTimer>

VehicleNumberSet::VehicleNumberSet(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleNumberSet)
{
    ui->setupUi(this);

    this->keyboardVerticality = new KeyboardVerticality(this);
    this->keyboardVerticality->setGeometry(620, 140, this->keyboardVerticality->width(), this->keyboardVerticality->height());
    connect(this->keyboardVerticality, SIGNAL(myKeyPress(QString)), this, SLOT(keyboardEvent(QString)));
    this->keyboardVerticality->show();

    this->buttons.append(ui->btnA1);
    this->buttons.append(ui->btnB1);
    this->buttons.append(ui->btnC1);
    this->buttons.append(ui->btnD1);
    this->buttons.append(ui->btnD2);
    this->buttons.append(ui->btnC2);
    this->buttons.append(ui->btnB2);
    this->buttons.append(ui->btnA2);

    foreach (QPushButton *button, this->buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(mySelect()));
    }

    ui->btnA1->setStyleSheet(BUTTON_DOWN);
    this->counter = 0;

    this->vehicleNumber << &(this->database->vehicleNumberA1)
                        << &(this->database->vehicleNumberB1)
                        << &(this->database->vehicleNumberC1)
                        << &(this->database->vehicleNumberD1)
                        << &(this->database->vehicleNumberD2)
                        << &(this->database->vehicleNumberC2)
                        << &(this->database->vehicleNumberB2)
                        << &(this->database->vehicleNumberA2);

    this->timer = new QTimer();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(resetCommand()));
}

VehicleNumberSet::~VehicleNumberSet()
{
    delete ui;
}

void VehicleNumberSet::keyboardEvent(QString key)
{
    if (QString("确定") == key.trimmed())
    {
        if (false == this->database->hmiThisCabinActive)
        {
            ui->lblWrong->setText(QString("请在司机室占有条件下设置车号！"));
            ui->lblWrong->show();

            return;
        }

        QString text = ui->lblNewNumber->text();

        if (text.length() != 3)
        {
            ui->lblWrong->setText(QString("警告：车号必须是三位数！"));
            ui->lblWrong->show();

            return;
        }

        // if the vehicle number of A1 is set, the other vehicle number would be set automatically
        if (0 == this->counter)
        {
            QString  tempQString;

            this->database->hmiSetVehicleNumber = text;

            *(this->vehicleNumber.at(0)) = tempQString.sprintf("%03d", text.toInt());
            *(this->vehicleNumber.at(1)) = tempQString.sprintf("%03d", text.toInt());
            *(this->vehicleNumber.at(2)) = tempQString.sprintf("%03d", text.toInt());
            *(this->vehicleNumber.at(3)) = tempQString.sprintf("%03d", text.toInt());
            *(this->vehicleNumber.at(4)) = tempQString.sprintf("%03d", text.toInt() + 1);
            *(this->vehicleNumber.at(5)) = tempQString.sprintf("%03d", text.toInt() + 1);
            *(this->vehicleNumber.at(6)) = tempQString.sprintf("%03d", text.toInt() + 1);
            *(this->vehicleNumber.at(7)) = tempQString.sprintf("%03d", text.toInt() + 1);

            MyFunction::set("/VehicleNumber/A1", tempQString.sprintf("%03d", text.toInt()));
            MyFunction::set("/VehicleNumber/B1", tempQString.sprintf("%03d", text.toInt()));
            MyFunction::set("/VehicleNumber/C1", tempQString.sprintf("%03d", text.toInt()));
            MyFunction::set("/VehicleNumber/D1", tempQString.sprintf("%03d", text.toInt()));
            MyFunction::set("/VehicleNumber/D2", tempQString.sprintf("%03d", text.toInt() + 1));
            MyFunction::set("/VehicleNumber/C2", tempQString.sprintf("%03d", text.toInt() + 1));
            MyFunction::set("/VehicleNumber/B2", tempQString.sprintf("%03d", text.toInt() + 1));
            MyFunction::set("/VehicleNumber/A2", tempQString.sprintf("%03d", text.toInt() + 1));

            this->keyboardVerticality->setConfirmState(false);
            this->database->hmiSecurityCode = 0xAA;
            this->database->hmiSetVehicleNumberCommand = true;
            this->timer->start(5000);
        }
        else
        {
            *(this->vehicleNumber.at(this->counter)) = text;
        }

        ui->lblOriginNumber->setText(text);

        QString path;

        switch (this->counter)
        {
        case 0:
            path = QString("/VehicleNumber/A1");
            break;
        case 1:
            path = QString("/VehicleNumber/B1");;
            break;
        case 2:
            path = QString("/VehicleNumber/C1");
            break;
        case 3:
            path = QString("/VehicleNumber/D1");
            break;
        case 4:
            path = QString("/VehicleNumber/A2");
            break;
        case 5:
            path = QString("/VehicleNumber/B2");
            break;
        case 6:
            path = QString("/VehicleNumber/C2");
            break;
        case 7:
            path = QString("/VehicleNumber/D2");
            break;
        default:
            path = QString("/VehicleNumber/A1");
        }

        MyFunction::set(path, text);

        _LOG << "the vehicle" << this->counter + 1 << "\'s number has been set as" << text;

        ui->lblWrong->hide();
    }
    else if(QString("返回") == key.trimmed())
    {
        emit this->changePage(uTroubleShootingPage);
    }
    else if (QString("DEL") == key.trimmed())
    {
        ui->lblNewNumber->setText(QString(""));
    }
    else
    {
        QString text = ui->lblNewNumber->text();

        if (text.length() >= 3)
        {
            text.clear();
        }

        ui->lblNewNumber->setText(text.append(key));
    }
}

void VehicleNumberSet::mySelect()
{
    for (int i = 0; i < this->buttons.length(); i ++)
    {
        if (this->sender()->objectName() == this->buttons.at(i)->objectName())
        {
            buttons.at(i)->setStyleSheet(BUTTON_DOWN);
            this->counter = i;
        }
        else
        {
            buttons.at(i)->setStyleSheet(BUTTON_UP);
        }
    }

    QString text = *(this->vehicleNumber.at(this->counter));
    ui->lblOriginNumber->setText(text);
}

void VehicleNumberSet::updatePage()
{
    _NO_DATABASE_WARNING
}

void VehicleNumberSet::showEvent(QShowEvent *)
{
    ui->lblWrong->hide();

    QString text = *(this->vehicleNumber.at(this->counter));
    ui->lblOriginNumber->setText(text);
}

void VehicleNumberSet::resetCommand()
{
    this->timer->stop();
    this->database->hmiSecurityCode = 0x55;
    this->database->hmiSetVehicleNumberCommand = false;
    this->keyboardVerticality->setConfirmState(true);
}
