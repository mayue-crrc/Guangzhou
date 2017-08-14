#include "compressortest.h"
#include "ui_compressortest.h"
#include <QDebug>

CompressorTest::CompressorTest(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::CompressorTest)
{
    ui->setupUi(this);

    this->timer = new QTimer;
    connect(this->timer, SIGNAL(timeout()), this, SLOT(commandReset()));
}

CompressorTest::~CompressorTest()
{
    delete ui;
}

void CompressorTest::showEvent(QShowEvent *)
{
    if (true == this->database->hmiCompressorTestCommand)
    {
        ui->btnCompressorTest->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnCompressorTest->setStyleSheet(BUTTON_UP);
    }
}

void CompressorTest::on_btnBack_clicked()
{
    emit this->changePage(uVehicleTestPage);
}

void CompressorTest::on_btnCompressorTest_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (true == this->database->hmiCompressorTestCommand)
    {
        this->database->hmiCompressorTestCommand = false;
        ui->btnCompressorTest->setStyleSheet(BUTTON_UP);
    }
    else
    {
        this->database->hmiCompressorTestCommand = true;
        ui->btnCompressorTest->setStyleSheet(BUTTON_DOWN);
    }

    this->database->hmiSecurityCode = 0xAA;

    this->timer->start(5000);

    _LOG << "a user starts the compressor test";
}

void CompressorTest::commandReset()
{
    this->timer->stop();
    this->database->hmiSecurityCode = 0x55;

    qDebug() << "reset the command of compressor test";
}
