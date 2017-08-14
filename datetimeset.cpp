#include "datetimeset.h"
#include "ui_datetimeset.h"
#include <QDateTime>
#include "keyboardhorizon.h"
#include "global.h"
#include <QDebug>
#include <QTimer>

#define LABEL_SELECTED ("color: white; background-color: rgb(0, 0, 255); border: 0px;	border:1px solid white;")
#define LABEL_UNSELECTED ("color: white; background-color: black; border: 0px; border:0px solid white;")

DateTimeSet::DateTimeSet(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DateTimeSet)
{
    ui->setupUi(this);

    this->keyboard = new KeyboardHorizon(this);
    this->keyboard->setGeometry(70, 460, this->keyboard->width(), this->keyboard->height());
    connect(this->keyboard, SIGNAL(myKeyPress(QString)), this, SLOT(myKeyPressEvent(QString)));
    this->keyboard->show();

    connect(ui->btnLeft, SIGNAL(clicked()), this, SLOT(selectLabel()));
    connect(ui->btnRight, SIGNAL(clicked()), this, SLOT(selectLabel()));

    this->labels.append(ui->lblYear);
    this->labels.append(ui->lblMonth);
    this->labels.append(ui->lblDay);
    this->labels.append(ui->lblHour);
    this->labels.append(ui->lblMinute);
    this->labels.append(ui->lblSecond);

    this->counter = 0;
    this->setSelectedLabel(this->counter);

    this->timer = new QTimer;
    this->timer->stop();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(resetHmiSetTimeCommand()));
}

void DateTimeSet::showEvent(QShowEvent *)
{
    this->year = QDateTime::currentDateTime().toString("yy").toInt();
    this->month = QDateTime::currentDateTime().toString("MM").toInt();
    this->day = QDateTime::currentDateTime().toString("dd").toInt();
    this->hour = QDateTime::currentDateTime().toString("hh").toInt();
    this->minute = QDateTime::currentDateTime().toString("mm").toInt();
    this->second = QDateTime::currentDateTime().toString("ss").toInt();

    ui->lblYear->setText(QString::number(this->year));
    ui->lblMonth->setText(QString::number(this->month));
    ui->lblDay->setText(QString::number(this->day));
    ui->lblHour->setText(QString::number(this->hour));
    ui->lblMinute->setText(QString::number(this->minute));
    ui->lblSecond->setText(QString::number(this->second));

    ui->lblTip->hide();
}

DateTimeSet::~DateTimeSet()
{
    delete ui;
}

void DateTimeSet::selectLabel()
{
    if (this->sender() == ui->btnLeft)
    {
        if (this->counter > 0)
        {
            this->counter --;
        }
    }
    else if (this->sender() == ui->btnRight)
    {
        if (this->counter < this->labels.size() - 1)
        {
            this->counter ++;
        }
    }

    this->setSelectedLabel(this->counter);
}

void DateTimeSet::setSelectedLabel(int index)
{
    for (int i = 0; i < this->labels.size(); i ++)
    {
        if (i == index)
        {
            this->labels.at(i)->setStyleSheet(LABEL_SELECTED);
        }
        else
        {
            this->labels.at(i)->setStyleSheet(LABEL_UNSELECTED);
        }
    }
}

void DateTimeSet::myKeyPressEvent(QString key)
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
        if (false == this->database->hmiThisCabinActive)
        {
            ui->lblTip->setText(QString("请在司机室占有条件下设置时间！"));
            ui->lblTip->show();

            return;
        }

        this->year = ui->lblYear->text().toInt();
        this->month = ui->lblMonth->text().toInt();
        this->day = ui->lblDay->text().toInt();
        this->hour = ui->lblHour->text().toInt();
        this->minute = ui->lblMinute->text().toInt();
        this->second = ui->lblSecond->text().toInt();

        if (QDate::isValid(2000 + this->year, this->month, this->day)
                && QTime::isValid(this->hour, this->minute, this->second))
        {
            this->keyboard->setConfirmState(false);

            this->database->hmiSetDateTime.setDate(QDate(2000 + this->year, this->month, this->day));
            this->database->hmiSetDateTime.setTime(QTime(this->hour, this->minute, this->second));

            _LOG << "a user has set the time to " << this->database->hmiSetDateTime.toString("yyyy-MM-dd hh:mm:ss");

            ui->lblTip->setText(QString("时间设置中，请等待..."));
            ui->lblTip->show();

            this->setHmiSetTimeCommand();
        }
        else
        {
            ui->lblTip->setText(QString("时间格式错误，请重新输入！"));
            ui->lblTip->show();
        }
    }
    else
    {
        QString text = this->labels.at(this->counter)->text();

        if (text.length() >= 2)
        {
            text.clear();
        }

        this->labels.at(this->counter)->setText(text.append(key));
    }
}

void DateTimeSet::setHmiSetTimeCommand()
{
    if (this->timer->isActive() == false)
    {
        this->database->hmiSetTimeCommand = true;
        this->database->hmiSecurityCode = 0xAA;
        this->timer->start(22000);

        this->keyboard->setConfirmState(false);
    }
}

void DateTimeSet::resetHmiSetTimeCommand()
{
    this->database->hmiSetTimeCommand = false;
    this->database->hmiSecurityCode = 0x55;
    this->keyboard->setConfirmState(true);

    ui->lblTip->setText(QString("时间设置完成！"));
    ui->lblTip->show();

    this->timer->stop();
}
