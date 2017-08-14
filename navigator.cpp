#include "navigator.h"
#include "ui_navigator.h"
#include <QDebug>
#include <QLabel>
#include <QPushButton>
#include "global.h"

#define MY_BUTTON_DOWN ("background-color: rgb(0, 0, 255); border:2px solid white; border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \
                            stop: 0 gray, stop: 1 black); border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 gray, stop: 1 black); \
                                border-right-color: white; border-bottom-color: white;")
#define MY_BUTTON_UP ("background-color: rgb(113, 113, 198)")
#define MY_BUTTON_ERROR ("background-color: red; color: black;")
#define MY_BUTTON_BYPASS ("background-color: yellow; color: black;")

Navigator::Navigator(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Navigator)
{
    ui->setupUi(this);

    ui->btnLogo->installEventFilter(this);
    ui->btnVehicleState->installEventFilter(this);
    ui->btnVehicleParameter->installEventFilter(this);
    ui->btnAirConditioner->installEventFilter(this);
    ui->btnBypass->installEventFilter(this);
    ui->btnCase->installEventFilter(this);
    ui->btnFireAlarm->installEventFilter(this);
    ui->btnTroubleShooting->installEventFilter(this);

    this->buttons.append(ui->btnLogo);
    this->buttons.append(ui->btnVehicleState);
    this->buttons.append(ui->btnVehicleParameter);
    this->buttons.append(ui->btnAirConditioner);
    this->buttons.append(ui->btnBypass);
    this->buttons.append(ui->btnCase);
    this->buttons.append(ui->btnFireAlarm);
    this->buttons.append(ui->btnTroubleShooting);

    ui->btnVehicleState->setStyleSheet(MY_BUTTON_DOWN);
}

Navigator::~Navigator()
{
    delete ui;
}

bool Navigator::eventFilter(QObject *target, QEvent *event)
{
    if (event->type() != QEvent::MouseButtonPress)
    {
        return false;
    }

    for (int i = 0; i < this->buttons.size(); i ++)
    {
        if (target == buttons.at(i))
        {
            if (i == 0)
            {
                emit this->changePage(i);
            }
            else
            {
                buttons.at(i)->setStyleSheet(MY_BUTTON_DOWN);
                emit this->changePage(i);
            }
        }
        else
        {
            if (i == 0)
            {
                continue;
            }
            else
            {
                buttons.at(i)->setStyleSheet(MY_BUTTON_UP);
            }
        }
    }

    this->setButtonStateBySignals();

    return true;
}


void Navigator::updatePage()
{
    this->setButtonStateBySignals();
}

// to be called at two sites
void Navigator::setButtonStateBySignals()
{
    // if there is a fire alarm, turn red
    if (this->database->hmiFireAlarmA1 || this->database->hmiFireAlarmB1 || this->database->hmiFireAlarmC1 || this->database->hmiFireAlarmD1
            || this->database->hmiFireAlarmD2 || this->database->hmiFireAlarmC2 || this->database->hmiFireAlarmB2 || this->database->hmiFireAlarmA2)
    {
        ui->btnFireAlarm->setStyleSheet(MY_BUTTON_ERROR);
    }
    else if (uFireAlarmPage == this->currentPage)
    {
        ui->btnFireAlarm->setStyleSheet(MY_BUTTON_DOWN);
    }
    else
    {
        ui->btnFireAlarm->setStyleSheet(MY_BUTTON_UP);
    }

    // if there is a bypass, turn yellow
    if (this->database->watchOutByPassA1 || this->database->doorSafeByPassA1 || this->database->doorZeroSpeedByPassA1 || this->database->parkingBrkByPassA1
            || this->database->brakeNoRelByPassA1 || this->database->autoCouplerByPassA1 || this->database->trainIntegrityByPassA1 || this->database->mrpPresLowBypass2A1
            || this->database->mrpPresLowBypass1A1 || this->database->EBComBypassA1 || this->database->largeBypassA1)
    {
        ui->btnBypass->setStyleSheet(MY_BUTTON_BYPASS);
    }
    else if (this->database->watchOutByPassA2 || this->database->doorSafeByPassA2 || this->database->doorZeroSpeedByPassA2 || this->database->parkingBrkByPassA2
            || this->database->brakeNoRelByPassA2 || this->database->autoCouplerByPassA2 || this->database->trainIntegrityByPassA2 || this->database->mrpPresLowBypass2A2
            || this->database->mrpPresLowBypass1A2 || this->database->EBComBypassA2 || this->database->largeBypassA2)
    {
        ui->btnBypass->setStyleSheet(MY_BUTTON_BYPASS);
    }
    else if (uBypassPage == this->currentPage)
    {
        ui->btnBypass->setStyleSheet(MY_BUTTON_DOWN);
    }
    else
    {
        ui->btnBypass->setStyleSheet(MY_BUTTON_UP);
    }

    // if there is a error in acu, turn red
    if (this->database->acuMinorErrorA1 || this->database->acuMinorErrorB1 || this->database->acuMinorErrorC1 || this->database->acuMinorErrorD1
            || this->database->acuMinorErrorD2 || this->database->acuMinorErrorC2 || this->database->acuMinorErrorB2 || this->database->acuMinorErrorA2)
    {
        ui->btnAirConditioner->setStyleSheet(MY_BUTTON_ERROR);
    }
    else if (this->database->acuMajorErrorA1 || this->database->acuMajorErrorB1 || this->database->acuMajorErrorC1 || this->database->acuMajorErrorD1
                || this->database->acuMajorErrorD2 || this->database->acuMajorErrorC2 || this->database->acuMajorErrorB2 || this->database->acuMajorErrorA2)
    {
        ui->btnAirConditioner->setStyleSheet(MY_BUTTON_ERROR);
    }
    else if (uAirConditionerPage == this->currentPage)
    {
        ui->btnAirConditioner->setStyleSheet(MY_BUTTON_DOWN);
    }
    else
    {
        ui->btnAirConditioner->setStyleSheet(MY_BUTTON_UP);
    }
}
