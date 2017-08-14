#include "allports.h"
#include "ui_allports.h"
#include <QPainter>
#include "global.h"
#include <QDebug>

AllPorts::AllPorts(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::AllPorts)
{
    ui->setupUi(this);

    this->buttons << ui->btnHmi << ui->btnCcuA << ui->btnCcuB << ui->btnErm << ui->btnRiom
                  << ui->btnSiv << ui->btnTcu << ui->btnBcuA << ui->btnBcuB
                  << ui->btnEdcuA << ui->btnEdcuB << ui->btnFau << ui->btnHvac
                  << ui->btnPa << ui->btnAtc << ui->btnDcdc << ui->btnTds;

    foreach (QPushButton *button, this->buttons)
    {
        connect(button, SIGNAL(pressed()), this, SLOT(myKeyPress()));
    }

    // set the first button down and set the page to the first
    ui->btnHmi->setStyleSheet(BUTTON_DOWN);
    this->page = uHmiPage;
}

AllPorts::~AllPorts()
{
    delete ui;
}

void AllPorts::updatePage()
{
    switch (this->page)
    {
    case uHmiPage:
        if (1 == this->database->hmiPosition)
        {
            this->getItsPorts(this->database->hmiA1Ports);
        }
        else if (2 == this->database->hmiPosition)
        {
            this->getItsPorts(this->database->hmiA2Ports);
        }

        break;
    case uRiomPage:
        this->getItsPorts(this->database->riomPorts);

        break;
    case uCcuPageA:
        this->getItsPorts(this->database->ccuPortsA);

        break;

    case uCcuPageB:
        this->getItsPorts(this->database->ccuPortsB);

        break;

    case uErmPage:
        this->getItsPorts(this->database->ermPorts);

        break;

    case uTcuPage:
        this->getItsPorts(this->database->tcuPorts);

        break;

    case uSivPage:
        this->getItsPorts(this->database->sivPorts);

        break;

    case uBcuPageA:
        this->getItsPorts(this->database->bcu1Ports);

        break;

    case uBcuPageB:
        this->getItsPorts(this->database->bcu2Ports);

        break;

    case uEdcuPageA:
        this->getItsPorts(this->database->edcu1Ports);

        break;

    case uEdcuPageB:
        this->getItsPorts(this->database->edcu2Ports);

        break;

    case uFauPage:
        this->getItsPorts(this->database->fauPorts);

        break;

    case uHvacPage:
        this->getItsPorts(this->database->hvacPorts);

        break;

    case uPaPage:
        this->getItsPorts(this->database->paPorts);

        break;

    case uDcdcPage:
        this->getItsPorts(this->database->dcdcPorts);

        break;

    case uTdsPage:
        this->getItsPorts(this->database->tdsPorts);

        break;

    case uAtcPage:
        this->getItsPorts(this->database->atcPorts);

        break;
    }

    this->update();
}

void AllPorts::paintEvent(QPaintEvent *)
{
    QMapIterator<unsigned short int, struct port_data> iterator(this->devicePorts);
    bool flag = false;

    QPainter painter(this);
    QRect rect;

    rect = QRect(0, 0, 1024, 768);
    painter.setPen(Qt::black);
    painter.setBrush(Qt::black);
    painter.drawRect(rect);

    for (int i = 0; i < 30; i ++)
    {
        // the first line is title so begin at the second line
        if (0 != i && iterator.hasNext())
        {
            iterator.next();
            flag = true;
        }
        else
        {
            flag = false;
        }

        for (int j = 0; j < 18; j ++)
        {
            rect = QRect(25 + 50 * j, 40 + 23 * i, 50, 23);

            painter.setPen(Qt::white);
            painter.setBrush(Qt::black);

            QFont font;
            font.setFamily("微软雅黑");
            font.setPixelSize(15);

            painter.setFont(font);
            painter.drawRect(rect);


            if (i % 3 == 0)
            {
                painter.setPen(Qt::yellow);
            }
            else if (i % 3 == 1)
            {
                painter.setPen(Qt::blue);
            }
            else
            {
                painter.setPen(Qt::green);
            }

            if (0 == i && 0 == j)
            {
                painter.drawText(rect, Qt::AlignCenter, QString("port"));
            }
            else if (0 == i && 17 == j)
            {
                painter.drawText(rect, Qt::AlignCenter, QString("cycle"));
            }
            else if (0 == i)
            {
                QString text;

                text.sprintf("%02d %02d", (j - 1) * 2, (j - 1) * 2 + 1);
                painter.drawText(rect, Qt::AlignCenter, text.toUpper());
            }
            else if (0 == j)    // port number
            {
                QString text;

                if (flag)
                {
                    text.sprintf("%03x", iterator.key());
                }
                else
                {
                    text = QString("");
                }

                painter.drawText(rect, Qt::AlignCenter, text.toUpper());
            }
            else if (j == 17)   // delay time
            {
                QString text;

                if (flag)
                {
                    // the mvb port is dead
                    if (65535 - iterator.value().time > this->database->getMvbCycleByPort(iterator.key()))
                    {
                        painter.save();
                        painter.setPen(Qt::white);
                        painter.setBrush(Qt::red);
                        painter.drawRect(rect);
                        painter.restore();
                    }

                    text = QString::number(65535 - iterator.value().time);
                }
                else
                {
                    text = QString("");
                }

                painter.drawText(rect, Qt::AlignCenter, text.toUpper());
            }
            else    // mvb data
            {
                QString text;

                if (flag)
                {
                    text.sprintf("%02X %02X", iterator.value().data[j - 1] / 256, iterator.value().data[j - 1] % 256);
                }
                else
                {
                    text = QString("");
                }

                painter.drawText(rect, Qt::AlignCenter, text.toUpper());
            }
        }
    }
}

void AllPorts::getItsPorts(QList<struct port *> ports)
{
    this->devicePorts.clear();

    foreach (unsigned short int address, this->database->ports.keys())
    {
        foreach (struct port *pointer, ports)
        {
            if (address == pointer->address)
            {
                this->devicePorts.insert(pointer->address, *(this->database->ports[pointer->address]));
            }
        }
    }
}

void AllPorts::myKeyPress()
{
    if (this->sender()->objectName() == QString("btnCcuA"))
    {
        this->page = uCcuPageA;
    }
    else if (this->sender()->objectName() == QString("btnCcuB"))
    {
        this->page = uCcuPageB;
    }
    else if (this->sender()->objectName() == QString("btnRiom"))
    {
        this->page = uRiomPage;
    }
    else if (this->sender()->objectName() == QString("btnErm"))
    {
        this->page = uErmPage;
    }
    else if (this->sender()->objectName() == QString("btnHmi"))
    {
        this->page = uHmiPage;
    }
    else if (this->sender()->objectName() == QString("btnSiv"))
    {
        this->page = uSivPage;
    }
    else if (this->sender()->objectName() == QString("btnBcuA"))
    {
        this->page = uBcuPageA;
    }
    else if (this->sender()->objectName() == QString("btnBcuB"))
    {
        this->page = uBcuPageB;
    }
    else if (this->sender()->objectName() == QString("btnTcu"))
    {
        this->page = uTcuPage;
    }
    else if (this->sender()->objectName() == QString("btnEdcuA"))
    {
        this->page = uEdcuPageA;
    }
    else if (this->sender()->objectName() == QString("btnEdcuB"))
    {
        this->page = uEdcuPageB;
    }
    else if (this->sender()->objectName() == QString("btnHvac"))
    {
        this->page = uHvacPage;
    }
    else if (this->sender()->objectName() == QString("btnFau"))
    {
        this->page = uFauPage;
    }
    else if (this->sender()->objectName() == QString("btnPa"))
    {
        this->page = uPaPage;
    }
    else if (this->sender()->objectName() == QString("btnDcdc"))
    {
        this->page = uDcdcPage;
    }
    else if (this->sender()->objectName() == QString("btnAtc"))
    {
        this->page = uAtcPage;
    }
    else if (this->sender()->objectName() == QString("btnTds"))
    {
        this->page = uTdsPage;
    }

    foreach (QPushButton *button, this->buttons)
    {
        if (this->sender()->objectName() == button->objectName())
        {
            button->setStyleSheet(BUTTON_DOWN);
        }
        else
        {
            button->setStyleSheet(BUTTON_UP);
        }
    }
}

void AllPorts::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}
