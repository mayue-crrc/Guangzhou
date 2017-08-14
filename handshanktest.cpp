#include "handshanktest.h"
#include "ui_handshanktest.h"

HandShankTest::HandShankTest(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::HandShankTest)
{
    ui->setupUi(this);
}

HandShankTest::~HandShankTest()
{
    delete ui;
}

void HandShankTest::on_btnBack_clicked()
{
    emit this->changePage(uVehicleTestPage);
}


void HandShankTest::updatePage()
{
    ui->lblRiomA1->setText(QString("Channel 1: ") + QString::number(this->database->handleLevel1A1) +
                           QString("\nChannel 2: ") + QString::number(this->database->handleLevel2A1));

    ui->lblRiomA2->setText(QString("Channel 1: ") + QString::number(this->database->handleLevel1A2) +
                           QString("\nChannel 2: ") + QString::number(this->database->handleLevel2A2));

    QString temp;

    if (this->database->ccuDcuForwardAll)
    {
        temp = QString("向前: 有效   ");
    }
    else
    {
        temp = QString("向前: 无效   ");
    }

    if (this->database->ccuDcuBackwardAll)
    {
        temp += QString("向后: 有效   ");
    }
    else
    {
        temp += QString("向后: 无效   ");
    }

    if (this->database->ccuDcuTractionAll)
    {
        temp += QString("牵引: 有效   ");
    }
    else
    {
        temp += QString("牵引: 无效   ");
    }

    if (this->database->ccuDcuBrakeAll)
    {
        temp += QString("制动: 有效");
    }
    else
    {
        temp += QString("制动: 无效");
    }

    if (this->database->ccuDcuA1ForwardAll)
    {
        temp += QString("\n") + QString("A1向前: 有效    ");
    }
    else
    {
        temp += QString("\n") + QString("A1向前: 无效    ");
    }

    if (this->database->ccuDcuA1BackwardAll)
    {
        temp += QString("A1向后: 有效    ");
    }
    else
    {
        temp += QString("A1向后: 无效    ");
    }

    if (this->database->ccuDcuA2ForwardAll)
    {
        temp += QString("\n") + QString("A2向前: 有效    ");
    }
    else
    {
        temp += QString("\n") + QString("A2向前: 无效    ");
    }

    if (this->database->ccuDcuA2BackwardAll)
    {
        temp += QString("A2向后: 有效");
    }
    else
    {
        temp += QString("A2向后: 无效");
    }

    ui->lblCcuDcu->setText(temp);

    ui->lblDcuCcuB1->setText(this->createDcuContent(this->database->dcuDirectionForwardB1, this->database->dcuDirectionBackwardB1,
                                                        this->database->dcuTractionStateB1, this->database->dcuBrakeStateB1));
    ui->lblDcuCcuC1->setText(this->createDcuContent(this->database->dcuDirectionForwardC1, this->database->dcuDirectionBackwardC1,
                                                        this->database->dcuTractionStateC1, this->database->dcuBrakeStateC1));
    ui->lblDcuCcuD1->setText(this->createDcuContent(this->database->dcuDirectionForwardD1, this->database->dcuDirectionBackwardD1,
                                                        this->database->dcuTractionStateD1, this->database->dcuBrakeStateD1));
    ui->lblDcuCcuD2->setText(this->createDcuContent(this->database->dcuDirectionForwardD2, this->database->dcuDirectionBackwardD2,
                                                        this->database->dcuTractionStateD2, this->database->dcuBrakeStateD2));
    ui->lblDcuCcuC2->setText(this->createDcuContent(this->database->dcuDirectionForwardC2, this->database->dcuDirectionBackwardC2,
                                                        this->database->dcuTractionStateC2, this->database->dcuBrakeStateC2));
    ui->lblDcuCcuB2->setText(this->createDcuContent(this->database->dcuDirectionForwardB2, this->database->dcuDirectionBackwardB2,
                                                        this->database->dcuTractionStateB2, this->database->dcuBrakeStateB2));

    temp.clear();

    if (this->database->ccuBcuTractionAll)
    {
        temp = QString("牵引: 有效   ");
    }
    else
    {
        temp = QString("牵引: 无效   ");
    }

    if (this->database->ccuBcuBrakeAll)
    {
        temp = QString("制动: 有效   ");
    }
    else
    {
        temp = QString("制动: 无效   ");
    }

    temp += QString("制动级位: ") + QString::number(this->database->ccuBcuBrakeLevelAll) + QString("%");
    ui->lblCcuBcu->setText(temp);


}

QString HandShankTest::createDcuContent(bool forward, bool backward, bool traction, bool brake)
{
    QString temp;

    if (forward)
    {
        temp = QString("向前: 有效");
    }
    else
    {
        temp = QString("向前: 无效");
    }

    if (backward)
    {
        temp += QString("\n向后: 有效");
    }
    else
    {
        temp += QString("\n向后: 无效");
    }

    if (traction)
    {
        temp += QString("\n牵引: 有效");
    }
    else
    {
        temp += QString("\n牵引: 无效");
    }

    if (brake)
    {
        temp += QString("\n制动: 有效");
    }
    else
    {
        temp += QString("\n制动: 无效");
    }

    return temp;
}
