#include "systemtest.h"
#include "ui_systemtest.h"
#include "global.h"
#include <QDebug>

#define TEST_BUTTON_DOWN ("background-color: rgb(0, 0, 255); border-radius: 8px;")
#define TEST_BUTTON_UP ("background-color: black; border-radius: 8px;")

SystemTest::SystemTest(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SystemTest)
{
    ui->setupUi(this);

    this->buttons << ui->btnBrakeTest << ui->btnBrakeResistorTest << ui->btnSivTest
                  << ui->btnCompressorTest << ui->btnHandShank << ui->btnAcceleratedSpeed
                  << ui->btnLcuTest;


    foreach (QPushButton *button, this->buttons)
    {
        connect(button, SIGNAL(pressed()), this, SLOT(mySelect()));
    }

    ui->btnBrakeTest->setStyleSheet(TEST_BUTTON_DOWN);

    ui->btnLcuTest->hide();
}

void SystemTest::showEvent(QShowEvent *)
{
}

SystemTest::~SystemTest()
{
    delete ui;
}

void SystemTest::mySelect()
{
    foreach (QPushButton *button, this->buttons)
    {
        if (button == this->sender())
        {
            ((QPushButton *)this->sender())->setStyleSheet(TEST_BUTTON_DOWN);
        }
        else
        {
            button->setStyleSheet(TEST_BUTTON_UP);
        }
    }
}

bool SystemTest::getButtonState(QPushButton *button)
{
    QPalette palette = button->palette();
    QBrush brush = palette.background();
    QColor color = brush.color();

    if (color == QColor(0, 0, 255))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void SystemTest::on_btnConfirm_clicked()
{
    this->changePage(uBrakeTestPage);

    if (this->getButtonState(ui->btnBrakeTest))
    {
        this->changePage(uBrakeTestPage);
    }
    else if (this->getButtonState(ui->btnBrakeResistorTest))
    {
        this->changePage(uTractionTestPage);
    }
    else if (this->getButtonState(ui->btnSivTest))
    {
        this->changePage(uSivTestPage);
    }
    else if (this->getButtonState(ui->btnCompressorTest))
    {
        this->changePage(uCompressorTestPage);
    }
    else if (this->getButtonState(ui->btnHandShank))
    {
        this->changePage(uHandShankTestPage);
    }
    else if (this->getButtonState(ui->btnAcceleratedSpeed))
    {
        this->changePage(uAcceleratedSpeedPage);
    }
    else if (this->getButtonState(ui->btnLcuTest))
    {
        this->changePage(uLcuTestPage);
    }
}

void SystemTest::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}
