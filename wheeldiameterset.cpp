#include "wheeldiameterset.h"
#include "ui_wheeldiameterset.h"
#include "keyboardhorizon.h"
#include "vehiclelogo.h"
#include <QPushButton>
#include <QLabel>
#include <QDebug>
#include "global.h"
#include <QTimer>

#define LABEL_SELECTED ("background-color: rgb(0, 0, 255);")
#define LABEL_UNSELECTED ("background-color: black;")

#define BUTTON_SELECTED ("background-color: yellow;")
#define BUTTON_UNSELECTED ("background-color: rgb(113, 113, 198);")

WheelDiameterSet::WheelDiameterSet(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::WheelDiameterSet)
{
    ui->setupUi(this);

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(110, 70, this->vehicleLogo->width(), this->vehicleLogo->height());

    this->keyboard = new KeyboardHorizon(this);
    this->keyboard->setGeometry(70, 460, this->keyboard->width(), this->keyboard->height());
    connect(this->keyboard, SIGNAL(myKeyPress(QString)), this, SLOT(myKeyPressEvent(QString)));
    this->keyboard->show();

    this->buttons.append(ui->btnA1);
    this->buttons.append(ui->btnB1);
    this->buttons.append(ui->btnC1);
    this->buttons.append(ui->btnD1);
    this->buttons.append(ui->btnD2);
    this->buttons.append(ui->btnC2);
    this->buttons.append(ui->btnB2);
    this->buttons.append(ui->btnA2);

    this->labels.append(ui->lblNewA1);
    this->labels.append(ui->lblNewB1);
    this->labels.append(ui->lblNewC1);
    this->labels.append(ui->lblNewD1);
    this->labels.append(ui->lblNewD2);
    this->labels.append(ui->lblNewC2);
    this->labels.append(ui->lblNewB2);
    this->labels.append(ui->lblNewA2);

    this->originLabels.append(ui->lblOriginA1);
    this->originLabels.append(ui->lblOriginB1);
    this->originLabels.append(ui->lblOriginC1);
    this->originLabels.append(ui->lblOriginD1);
    this->originLabels.append(ui->lblOriginD2);
    this->originLabels.append(ui->lblOriginC2);
    this->originLabels.append(ui->lblOriginB2);
    this->originLabels.append(ui->lblOriginA2);

    this->counter = 0;
    this->selectButton(this->counter);

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(mySelectEvent()));
    }

    this->timer = new QTimer();
    this->timer->stop();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(wheelDiamterCommandReset()));
}

WheelDiameterSet::~WheelDiameterSet()
{
    delete ui;
}

void WheelDiameterSet::showEvent(QShowEvent *)
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

    this->database->hmiWheelDiameterA1 = this->database->ccuWheelDiameterA1;
    this->database->hmiWheelDiameterB1 = this->database->ccuWheelDiameterB1;
    this->database->hmiWheelDiameterC1 = this->database->ccuWheelDiameterC1;
    this->database->hmiWheelDiameterD1 = this->database->ccuWheelDiameterD1;
    this->database->hmiWheelDiameterD2 = this->database->ccuWheelDiameterD2;
    this->database->hmiWheelDiameterC2 = this->database->ccuWheelDiameterC2;
    this->database->hmiWheelDiameterB2 = this->database->ccuWheelDiameterB2;
    this->database->hmiWheelDiameterA2 = this->database->ccuWheelDiameterA2;

    ui->lblNewA1->setText(QString::number(this->database->ccuWheelDiameterA1));
    ui->lblNewB1->setText(QString::number(this->database->ccuWheelDiameterB1));
    ui->lblNewC1->setText(QString::number(this->database->ccuWheelDiameterC1));
    ui->lblNewD1->setText(QString::number(this->database->ccuWheelDiameterD1));
    ui->lblNewD2->setText(QString::number(this->database->ccuWheelDiameterD2));
    ui->lblNewC2->setText(QString::number(this->database->ccuWheelDiameterC2));
    ui->lblNewB2->setText(QString::number(this->database->ccuWheelDiameterB2));
    ui->lblNewA2->setText(QString::number(this->database->ccuWheelDiameterA2));

    ui->lblWarning->hide();
}

void WheelDiameterSet::updatePage()
{
    ui->lblOriginA1->setText(QString::number(this->database->ccuWheelDiameterA1));
    ui->lblOriginB1->setText(QString::number(this->database->ccuWheelDiameterB1));
    ui->lblOriginC1->setText(QString::number(this->database->ccuWheelDiameterC1));
    ui->lblOriginD1->setText(QString::number(this->database->ccuWheelDiameterD1));
    ui->lblOriginD2->setText(QString::number(this->database->ccuWheelDiameterD2));
    ui->lblOriginC2->setText(QString::number(this->database->ccuWheelDiameterC2));
    ui->lblOriginB2->setText(QString::number(this->database->ccuWheelDiameterB2));
    ui->lblOriginA2->setText(QString::number(this->database->ccuWheelDiameterA2));
}

void WheelDiameterSet::myKeyPressEvent(QString key)
{
    if (key.trimmed() == QString("DEL"))
    {
        this->labels.at(this->counter)->setText(QString(""));
    }
    else if (key.trimmed() == QString("返回"))
    {
        emit this->changePage(uTroubleShootingPage);
    }
    else if (key.trimmed() == QString("确定"))
    {
        QString text = this->labels.at(this->counter)->text();

        // this->originLabels.at(this->counter)->setText(text);

        if (this->timer->isActive() == false)
        {
            if (false == this->database->hmiThisCabinActive)
            {
                ui->lblWarning->setText(QString("请在司机室占有条件下设置轮径值！"));
                ui->lblWarning->show();

                return;
            }

            this->keyboard->setConfirmState(false);
            this->setWheelDiameterByIndex(this->counter);
            this->timer->start(5000);
        }

        qDebug() << __DATE__ << __TIME__ << "vehicle" << this->counter + 1 << "\'s wheel diameter has been set to" << text;
    }
    else
    {
        QString text = this->labels.at(this->counter)->text();

        if (text.length() >= 3)
        {
            text.clear();
        }

        this->labels.at(this->counter)->setText(text.append(key));
    }
}

void WheelDiameterSet::setWheelDiameterByIndex(int index)
{
    unsigned short int array[] = {ui->lblNewA1->text().toUShort(), ui->lblNewB1->text().toUShort(), ui->lblNewC1->text().toUShort(),
                                  ui->lblNewD1->text().toUShort(), ui->lblNewD2->text().toUShort(), ui->lblNewC2->text().toUShort(),
                                  ui->lblNewB2->text().toUShort(), ui->lblNewA2->text().toUShort()};

    for (int i = 0; i < (sizeof array / sizeof(unsigned short int)); i ++)
    {
        if (array[i] > 840 || array[i] < 770)
        {
            ui->lblWarning->setText(QString("设置失败，轮径值非法，新轮径值必须在[770mm，840mm]区间内！"));
            ui->lblWarning->show();
            return;
        }
    }

    ui->lblWarning->hide();

    this->database->hmiSecurityCode = 0xAA;

    switch (index)
    {
    case 0:
        this->database->hmiWheelDiameterA1 = ui->lblNewA1->text().toUShort();
        this->database->hmiSetWheelCommandA1 = true;
        break;
    case 1:
        this->database->hmiWheelDiameterB1 = ui->lblNewB1->text().toUShort();
        this->database->hmiSetWheelCommandB1 = true;
        break;
    case 2:
        this->database->hmiWheelDiameterC1 = ui->lblNewC1->text().toUShort();
        this->database->hmiSetWheelCommandC1 = true;
        break;
    case 3:
        this->database->hmiWheelDiameterD1 = ui->lblNewD1->text().toUShort();
        this->database->hmiSetWheelCommandD1 = true;
        break;
    case 4:
        this->database->hmiWheelDiameterD2 = ui->lblNewD2->text().toUShort();
        this->database->hmiSetWheelCommandD2 = true;
        break;
    case 5:
        this->database->hmiWheelDiameterC2 = ui->lblNewC2->text().toUShort();
        this->database->hmiSetWheelCommandC2 = true;
        break;
    case 6:
        this->database->hmiWheelDiameterB2 = ui->lblNewB2->text().toUShort();
        this->database->hmiSetWheelCommandB2 = true;
        break;
    case 7:
        this->database->hmiWheelDiameterA2 = ui->lblNewA2->text().toUShort();
        this->database->hmiSetWheelCommandA2 = true;
        break;
    }
}

void WheelDiameterSet::selectButton(int index)
{
    for (int i = 0; i < this->buttons.size(); i ++)
    {
        if (i == index)
        {
            this->buttons.at(i)->setStyleSheet(BUTTON_SELECTED);
            this->labels.at(i)->setStyleSheet(LABEL_SELECTED);
        }
        else
        {
            this->buttons.at(i)->setStyleSheet(BUTTON_UNSELECTED);
            this->labels.at(i)->setStyleSheet(LABEL_UNSELECTED);
        }
    }
}

void WheelDiameterSet::wheelDiamterCommandReset()
{
    this->timer->stop();

    this->database->hmiSetWheelCommandA1 = false;
    this->database->hmiSetWheelCommandB1 = false;
    this->database->hmiSetWheelCommandC1 = false;
    this->database->hmiSetWheelCommandD1 = false;
    this->database->hmiSetWheelCommandD2 = false;
    this->database->hmiSetWheelCommandC2 = false;
    this->database->hmiSetWheelCommandB2 = false;
    this->database->hmiSetWheelCommandA2 = false;

    this->database->hmiSecurityCode = 0x55;

    this->keyboard->setConfirmState(true);
}

void WheelDiameterSet::mySelectEvent()
{
    QString name = this->sender()->objectName();

    if (name == QString("btnA1"))
    {
        this->counter = 0;
        this->selectButton(this->counter);
    }
    else if(name == QString("btnB1"))
    {
        this->counter = 1;
        this->selectButton(this->counter);
    }
    else if (name == QString("btnC1"))
    {
        this->counter = 2;
        this->selectButton(this->counter);
    }
    else if (name == QString("btnD1"))
    {
        this->counter = 3;
        this->selectButton(this->counter);
    }
    else if (name == QString("btnD2"))
    {
        this->counter = 4;
        this->selectButton(this->counter);
    }
    else if (name == QString("btnC2"))
    {
        this->counter = 5;
        this->selectButton(this->counter);
    }
    else if (name == QString("btnB2"))
    {
        this->counter = 6;
        this->selectButton(this->counter);
    }
    else if (name == QString("btnA2"))
    {
        this->counter = 7;
        this->selectButton(this->counter);
    }
}
