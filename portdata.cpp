#include "portdata.h"
#include "ui_portdata.h"
#include <QDebug>
#include "global.h"
#include <QPainter>
#include "messagebox.h"

#define _BUTTON_DOWN ("color: rgb(2, 232, 2); background-color: rgb(0, 0, 255);")
#define _BUTTON_UP ("color: rgb(2, 232, 2); background-color: rgb(24, 24, 24);")

PortData::PortData(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::PortData)
{
    ui->setupUi(this);

    this->inputFlag = false;
    this->port = QString("110");

    QList<QPushButton *> buttons;

    buttons << ui->btn0 << ui->btn1 << ui->btn2 << ui->btn3 << ui->btn4 << ui->btn5 << ui->btn6 << ui->btn7 << ui->btn8
            << ui->btn9 << ui->btnA << ui->btnB << ui->btnC << ui->btnD << ui->btnE << ui->btnF << ui->btnDel;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(keyboardEvent()));
    }

    this->messageBox = new MessageBox(this);
    this->messageBox->setGeometry((this->width() - this->messageBox->width()) / 2,
                                        (this->height() - this->messageBox->height()) / 2,
                                            this->messageBox->width(),
                                                this->messageBox->height());
    this->messageBox->hide();

    this->pointer = new unsigned short int[16];
}

PortData::~PortData()
{
    delete ui;
}

void PortData::updatePage()
{
    this->update();
}

void PortData::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect background(0, 0, 1024, 640);

    painter.setBrush(Qt::black);
    painter.setPen(Qt::black);
    painter.drawRect(background);

    for (int i = 0; i < 17; i ++)
    {
        for (int j = 0; j < 20; j ++)
        {
            QRect rect(12 + 50 * j, 5 + 37 * i, 50, 37);

            if (0 == i || 0 == j)     // the title row and the title column
            {
                painter.setPen(QPen(Qt::gray, 1));
                painter.setBrush(QColor(71, 71, 71));
            }
            else
            {
                painter.setPen(QPen(Qt::gray, 1));
                painter.setBrush(Qt::black);
            }

            if (0 == i && 0 == j)   // judge select or not
            {
                if (true == this->inputFlag)
                {
                    painter.setBrush(QColor(0, 0, 255));
                }
                else
                {
                    painter.setBrush(QColor(71, 71, 71));
                }
            }

            // draw the background
            painter.drawRect(rect);

            QFont font;
            font.setFamily("微软雅黑");
            font.setPixelSize(15);
            painter.setFont(font);

            QString text;

            this->database->getPortData(this->port.toUInt(NULL, 16), pointer);

            if (0 == i && 0 == j)
            {
                painter.setPen(QPen(QColor(6, 235, 6), 1));
                painter.setBrush(Qt::transparent);

                text = this->port;
            }
            else if (0 == j)
            {
                painter.setPen(QPen(QColor(242, 174, 62), 1));
                painter.setBrush(Qt::transparent);

                text.sprintf("%d", (i - 1) * 2);
            }
            else if (0 == i && (1 == j || 2 == j || 11 == j))
            {
                painter.setPen(QPen(QColor(0, 136, 191), 1));
                painter.setBrush(Qt::transparent);

                text = QString("Value");
            }
            else if (1 == j || 2 == j || 11 == j)
            {
                painter.setPen(QPen(QColor(0, 136, 191), 1));
                painter.setBrush(Qt::transparent);
            }
            else if (0 == i)
            {
                painter.setPen(QPen(QColor(242, 174, 62), 1));
                painter.setBrush(Qt::transparent);

                if (j <=10)
                {
                    text.sprintf("b%d", j - 3);
                }
                else
                {
                    text.sprintf("b%d", j - 4);
                }
            }
            else
            {
                painter.setPen(QPen(Qt::white, 1));
                painter.setBrush(Qt::transparent);
            }

            if (i != 0 && 1 == j)
            {
                text = QString::number(this->pointer[i - 1]);
            }
            else if (i != 0 && 2 == j)
            {
                text = QString::number(this->pointer[i - 1] % 256);
            }
            else if (i != 0 && 11 == j)
            {
                text = QString::number(this->pointer[i - 1] / 256);
            }
            else if (i != 0 && j >= 3 && j <= 10)
            {
                text = QString::number((this->pointer[i - 1] >> (j - 3)) & 0x0001);
            }
            else if (i != 0 && j >= 12 && j <= 19)
            {
                text = QString::number((this->pointer[i - 1] >> (j - 12 + 8)) & 0x0001);
            }

            painter.drawText(rect, Qt::AlignCenter, text);
        }
    }
}

void PortData::on_btnInputPort_clicked()
{
    if (this->inputFlag)
    {
        this->inputFlag = false;
        ui->btnInputPort->setStyleSheet(_BUTTON_UP);
    }
    else
    {
        this->inputFlag = true;
        ui->btnInputPort->setStyleSheet(_BUTTON_DOWN);
    }
}

void PortData::on_btnSearch_clicked()
{
    this->inputFlag = false;
    ui->btnInputPort->setStyleSheet(_BUTTON_UP);

    qDebug() << this->port.toUInt(NULL, 16);

    if (this->database->testPortExist(this->port.toUInt(NULL, 16)) == false)
    {
        this->messageBox->setMessage(QString("该端口不存在，请重新输入！"));
        this->messageBox->show();
    }
}

void PortData::on_btnBack_clicked()
{
    this->changePage(uTroubleShootingPage);
}

void PortData::keyboardEvent()
{
    if (false == this->inputFlag)
    {
        return;
    }

    QString text = ((QPushButton *)this->sender())->text();

    if (text == QString("Del"))
    {
        this->port.clear();
    }
    else if (this->port.size() < 3)
    {
        this->port.append(text);
    }
}
