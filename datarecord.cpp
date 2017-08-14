#include "datarecord.h"
#include "ui_datarecord.h"
#include "global.h"

DataRecord::DataRecord(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DataRecord)
{
    ui->setupUi(this);
}

DataRecord::~DataRecord()
{
    delete ui;
}

void DataRecord::updatePage()
{
    // the titles
    ui->lblTime->setText(QString("最近运行") + QString::number(this->database->hmiRecordTime) + QString("天累计量"));
    ui->lblDistance->setText(QString("最近运行") + QString::number(this->database->hmiRecordMileage) + QString("Km累计量"));

    // the signals
    ui->lblMileage1->setText(QString::number(this->database->hmiTotalMileage));
    ui->lblMileage2->setText(QString::number(this->database->hmiTimeMileage));
    ui->lblMileage3->setText(QString("--"));

    ui->lblCompressor1Time1->setText(QString::number(this->database->hmiTotalCompressor1));
    ui->lblCompressor1Time2->setText(QString::number(this->database->hmiTimeCompressor1));
    ui->lblCompressor1Time3->setText(QString::number(this->database->hmiDistanceCompressor1));

    ui->lblCompressor2Time1->setText(QString::number(this->database->hmiTotalCompressor2));
    ui->lblCompressor2Time2->setText(QString::number(this->database->hmiTimeCompressor2));
    ui->lblCompressor2Time3->setText(QString::number(this->database->hmiDistanceCompressor2));

    ui->lblAllConsumption1->setText(QString::number(this->database->hmiTotalConsumption));
    ui->lblAllConsumption2->setText(QString::number(this->database->hmiTimeConsumption));
    ui->lblAllConsumption3->setText(QString::number(this->database->hmiDistanceConsumption));

    ui->lblSivComsuption1->setText(QString::number(this->database->hmiTotalSivConsumption));
    ui->lblSivComsuption2->setText(QString::number(this->database->hmiTimeSivConsumption));
    ui->lblSivComsuption3->setText(QString::number(this->database->hmiDistanceSivConsumption));

    ui->lblTcuComsuption1->setText(QString::number(this->database->hmiTotalTractionConsumption));
    ui->lblTcuComsuption2->setText(QString::number(this->database->hmiTimeTractionConsumption));
    ui->lblTcuComsuption3->setText(QString::number(this->database->hmiDistanceTractionConsumption));

    ui->lblBrakeComsuption1->setText(QString::number(this->database->hmiTotalBcuConsumption));
    ui->lblBrakeComsuption2->setText(QString::number(this->database->hmiTimeBcuConsumption));
    ui->lblBrakeComsuption3->setText(QString::number(this->database->hmiDistanceBcuConsumption));

    ui->lblRegeneratePower1->setText(QString::number(this->database->hmiTotalRegeneratePower));
    ui->lblRegeneratePower2->setText(QString::number(this->database->hmiTimeRegeneratePower));
    ui->lblRegeneratePower3->setText(QString::number(this->database->hmiDistanceRegeneratePower));
}

void DataRecord::on_btnRecordSet_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        ui->lblTip->show();

        return;
    }
    else
    {
        ui->lblTip->hide();
    }

    emit this->changePage(uDataRecordSetLoginPage);
}

void DataRecord::showEvent(QShowEvent *)
{
    ui->lblTip->hide();
}

void DataRecord::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}
