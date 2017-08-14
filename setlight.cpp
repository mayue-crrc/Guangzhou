#include "setlight.h"
#include "ui_setlight.h"
#include "h8.h"
#include "serial.h"
#include "command.h"
#include <QDebug>
#include "myfunction.h"

#define LABEL_ON ("background-color: rgb(0, 255, 0)")
#define LABEL_OFF ("background-color: gray")

SetLight::SetLight(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SetLight)
{
    ui->setupUi(this);

    this->lightLabels << ui->lblLevel0 << ui->lblLevel1 << ui->lblLevel2 << ui->lblLevel3 << ui->lblLevel4;
    this->voiceButtons << ui->btnLow << ui->btnMedium << ui->btnHigh;

    connect(ui->btnLeft, SIGNAL(clicked()), this, SLOT(setLightLevel()));
    connect(ui->btnRight, SIGNAL(clicked()), this, SLOT(setLightLevel()));
    connect(ui->btnManual, SIGNAL(clicked()), this, SLOT(setLightLevel()));
    connect(ui->btnAuto, SIGNAL(clicked()), this, SLOT(setLightLevel()));

    connect(ui->btnLow, SIGNAL(clicked()), this, SLOT(setVoice()));
    connect(ui->btnMedium, SIGNAL(clicked()), this, SLOT(setVoice()));
    connect(ui->btnHigh, SIGNAL(clicked()), this, SLOT(setVoice()));

    H8::initH8("/dev/ttyS2");
}

SetLight::~SetLight()
{
    delete ui;
}

void SetLight::setHmibackLight(int light)
{
    if (light >=0 && light <= 255)
    {
        // 0: automatic
        // 1: off
        // 2 - 255: manual
        H8::getH8()->setBrightness(light);
    }
    else
    {
        _LOG << "the hmi light is not in the range of [0, 255]";
    }

    if (0 == light)
    {
        this->myLightMode = uAutoMode;
    }
    else
    {
        this->myLightMode = uManualMode;
    }
}

void SetLight::showEvent(QShowEvent *)
{
    this->setLabelState(this->database->lightLevel / 50);

    if (uManualMode == this->myLightMode)
    {
        ui->btnAuto->setStyleSheet(BUTTON_UP);
        ui->btnManual->setStyleSheet(BUTTON_DOWN);
    }
    else if (uAutoMode == this->myLightMode)
    {
        ui->btnAuto->setStyleSheet(BUTTON_DOWN);
        ui->btnManual->setStyleSheet(BUTTON_UP);
    }
}

void SetLight::setLightLevel()
{
    if (this->sender() == ui->btnLeft)
    {
        if (uManualMode == this->myLightMode)
        {
            if (this->database->lightLevel >= 100)
            {
                this->database->lightLevel -= 50;
                this->setLabelState(this->database->lightLevel / 50);
                this->setHmibackLight(this->database->lightLevel);
            }
        }
    }
    else if (this->sender() == ui->btnRight)
    {
        if (uManualMode == this->myLightMode)
        {
            if (this->database->lightLevel <= 250)
            {
                this->database->lightLevel += 50;
                this->setLabelState(this->database->lightLevel / 50);
                this->setHmibackLight(this->database->lightLevel);
            }
        }
    }
    else if (this->sender() == ui->btnAuto)
    {
        this->myLightMode = uAutoMode;

        ui->btnAuto->setStyleSheet(BUTTON_DOWN);
        ui->btnManual->setStyleSheet(BUTTON_UP);

        this->database->lightLevel = 0;
        this->setHmibackLight(this->database->lightLevel);
        this->setLabelState(this->database->lightLevel);
    }
    else if (this->sender() == ui->btnManual)
    {
        this->myLightMode = uManualMode;

        this->database->lightLevel = 50;
        this->setLabelState(this->database->lightLevel / 50);
        this->setHmibackLight(this->database->lightLevel);

        ui->btnAuto->setStyleSheet(BUTTON_UP);
        ui->btnManual->setStyleSheet(BUTTON_DOWN);
    }

    MyFunction::set(QString("/BackLight/level"), this->database->lightLevel);
}

void SetLight::setVoice()
{
    if (this->sender() == ui->btnLow)
    {
        this->setSound(1);
        this->database->soundLevel = 3;
        H8::getH8()->activBuzzer(360 + this->database->soundLevel * 20, 50);
    }
    else if (this->sender() == ui->btnMedium)
    {
        this->setSound(2);
        this->database->soundLevel = 2;
        H8::getH8()->activBuzzer(360 + this->database->soundLevel * 20, 50);
    }
    else if (this->sender() == ui->btnHigh)
    {
        this->setSound(3);
        this->database->soundLevel = 1;
        H8::getH8()->activBuzzer(360 + this->database->soundLevel * 20, 50);
    }

    MyFunction::set(QString("/Buzzer/level"), this->database->soundLevel);
}

void SetLight::setSound(int level)
{
    ui->btnLow->setStyleSheet(BUTTON_UP);
    ui->btnMedium->setStyleSheet(BUTTON_UP);
    ui->btnHigh->setStyleSheet(BUTTON_UP);

    if (1 == level)
    {
        ui->btnLow->setStyleSheet(BUTTON_DOWN);
    }
    else if (2 == level)
    {
        ui->btnMedium->setStyleSheet(BUTTON_DOWN);
    }
    else if (3 == level)
    {
        ui->btnHigh->setStyleSheet(BUTTON_DOWN);
    }
}

void SetLight::setLabelState(int i)
{
    if (i >= 0 && i <= 5)
    {
        for (int j = 0; j < this->lightLabels.length(); j ++)
        {
            if (j < i)
            {
                this->lightLabels.at(j)->setStyleSheet(LABEL_ON);
            }
            else
            {
                this->lightLabels.at(j)->setStyleSheet(LABEL_OFF);
            }
        }
    }
}
