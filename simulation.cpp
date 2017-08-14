#include "simulation.h"
#include "ui_simulation.h"

Simulation::Simulation(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Simulation)
{
    ui->setupUi(this);

    this->setWindowTitle(QString("Simulation"));
}

Simulation::~Simulation()
{
    delete ui;
}

void Simulation::on_btnClose_clicked()
{
    this->close();
}

void Simulation::on_btnConfirm_clicked()
{
    unsigned short int port = 0, byteOffset = 0, bitOffset = 0, value = 0;

    if (ui->lndPort->text().isEmpty() == false)
    {
        port = ui->lndPort->text().toInt(0, 16);
    }
    else
    {
        this->setMessage(QString("the port is invalid"));

        return;
    }

    if (ui->lndByteOffset->text().isEmpty() == false)
    {
        byteOffset = ui->lndByteOffset->text().toInt(0, 10);
    }
    else
    {
        this->setMessage(QString("the byte offset is invalid"));

        return;
    }

    if (this->database->ports.contains(port) == false)
    {
        this->setMessage(QString("the port is not is the list"));

        return;
    }
    else if (byteOffset > 32)
    {
        this->setMessage(QString("the byte offset is out of range"));

        return;
    }

    if (ui->lndBitOffset->text().isEmpty() == true)
    {
        if (ui->lndValue->text().isEmpty() == true)
        {
            this->setMessage(QString("the value is invalid"));
        }
        else
        {
            // can not judge the value type of the variable
            // value = ui->lndValue->text().toInt(0, 10);

            if (ui->cbType->itemText(ui->cbType->currentIndex()) == QString("char"))
            {
                this->database->setUnsignedChar(port, byteOffset, ui->lndValue->text().toInt());

                QString text;
                this->setMessage(text.sprintf("Port %03x ByteOffset %d = %d", port, byteOffset, ui->lndValue->text().toInt(0, 10)));
            }
            else if (ui->cbType->itemText(ui->cbType->currentIndex()) == QString("int"))
            {
                this->database->setSignedInt(port, byteOffset, ui->lndValue->text().toInt(0, 10));

                QString text;
                this->setMessage(text.sprintf("Port %03x ByteOffset %d = %d", port, byteOffset, ui->lndValue->text().toInt(0, 10)));
            }
            else if (ui->cbType->itemText(ui->cbType->currentIndex()) == QString("uint"))
            {
                this->database->setUnsignedInt(port, byteOffset, ui->lndValue->text().toUInt(0, 10));

                QString text;
                this->setMessage(text.sprintf("Port %03x ByteOffset %d = %d", port, byteOffset, ui->lndValue->text().toUInt(0, 10)));
            }
        }
    }
    else
    {
        value = ui->lndValue->text().toInt(0, 10);
        bitOffset = ui->lndBitOffset->text().toInt(0, 10);

        this->database->setBool(port, byteOffset, bitOffset, value != 0);

        QString text;

        this->setMessage(text.sprintf("Port %03x ByteOffset %d  BitOffset %d = %d", port, byteOffset, bitOffset, value));
    }
}

void Simulation::setMessage(QString message)
{
    ui->txtMessage->textCursor().insertText(QString("\n") + message);
    ui->txtMessage->moveCursor(QTextCursor::End);
}
