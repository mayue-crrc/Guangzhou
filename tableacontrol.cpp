#include "tableacontrol.h"
#include "ui_tableacontrol.h"
#include "global.h"
#include <QDebug>

#define SIGNAL_ACTIVE ("background-color: green;")
#define SIGNAL_UNACTIVE ("background-color: gray;")
#define SIGNAL_NULL ("background-color: black;")

TableAControl::TableAControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableAControl)
{
    ui->setupUi(this);

    this->line1 << ui->lblDeviceName1
                << ui->lblVersion1A1 << ui->lblVersion1B1 << ui->lblVersion1C1 << ui->lblVersion1D1
                << ui->lblVersion1D2 << ui->lblVersion1C2 << ui->lblVersion1B2 << ui->lblVersion1A2;

    this->line2 << ui->lblDeviceName2
                << ui->lblVersion2A1 << ui->lblVersion2B1 << ui->lblVersion2C1 << ui->lblVersion2D1
                << ui->lblVersion2D2 << ui->lblVersion2C2 << ui->lblVersion2B2 << ui->lblVersion2A2;

    this->line3 << ui->lblDeviceName3
                << ui->lblVersion3A1 << ui->lblVersion3B1 << ui->lblVersion3C1 << ui->lblVersion3D1
                << ui->lblVersion3D2 << ui->lblVersion3C2 << ui->lblVersion3B2 << ui->lblVersion3A2;

    this->line4 << ui->lblDeviceName4
                << ui->lblVersion4A1 << ui->lblVersion4B1 << ui->lblVersion4C1 << ui->lblVersion4D1
                << ui->lblVersion4D2 << ui->lblVersion4C2 << ui->lblVersion4B2 << ui->lblVersion4A2;

    this->line5 << ui->lblDeviceName5
                << ui->lblVersion5A1 << ui->lblVersion5B1 << ui->lblVersion5C1 << ui->lblVersion5D1
                << ui->lblVersion5D2 << ui->lblVersion5C2 << ui->lblVersion5B2 << ui->lblVersion5A2;

    this->line6 << ui->lblDeviceName6
                << ui->lblVersion6A1 << ui->lblVersion6B1 << ui->lblVersion6C1 << ui->lblVersion6D1
                << ui->lblVersion6D2 << ui->lblVersion6C2 << ui->lblVersion6B2 << ui->lblVersion6A2;

    this->line7 << ui->lblDeviceName7
                << ui->lblVersion7A1 << ui->lblVersion7B1 << ui->lblVersion7C1 << ui->lblVersion7D1
                << ui->lblVersion7D2 << ui->lblVersion7C2 << ui->lblVersion7B2 << ui->lblVersion7A2;

    this->line8 << ui->lblDeviceName8
                << ui->lblVersion8A1 << ui->lblVersion8B1 << ui->lblVersion8C1 << ui->lblVersion8D1
                << ui->lblVersion8D2 << ui->lblVersion8C2 << ui->lblVersion8B2 << ui->lblVersion8A2;

    this->line9 << ui->lblDeviceName9
                << ui->lblVersion9A1 << ui->lblVersion9B1 << ui->lblVersion9C1 << ui->lblVersion9D1
                << ui->lblVersion9D2 << ui->lblVersion9C2 << ui->lblVersion9B2 << ui->lblVersion9A2;

    this->line10 << ui->lblDeviceName10
                 << ui->lblVersion10A1 << ui->lblVersion10B1 << ui->lblVersion10C1 << ui->lblVersion10D1
                 << ui->lblVersion10D2 << ui->lblVersion10C2 << ui->lblVersion10B2 << ui->lblVersion10A2;

    this->line11 << ui->lblDeviceName11
                 << ui->lblVersion11A1 << ui->lblVersion11B1 << ui->lblVersion11C1 << ui->lblVersion11D1
                 << ui->lblVersion11D2 << ui->lblVersion11C2 << ui->lblVersion11B2 << ui->lblVersion11A2;
}

TableAControl::~TableAControl()
{
    delete ui;
}

void TableAControl::fillLine(int line, const QList<QString> &contents)
{
    if (line > 11 || line < 0)
    {
        _LOG << "the line does not exist";

        return;
    }
    else if (contents.size() != 9)
    {
        _LOG << "the content size is not right";

        return;
    }

    switch (line)
    {
    case 1:
        this->fill(this->line1, contents);
        break;
    case 2:
        this->fill(this->line2, contents);
        break;
    case 3:
        this->fill(this->line3, contents);
        break;
    case 4:
        this->fill(this->line4, contents);
        break;
    case 5:
        this->fill(this->line5, contents);
        break;
    case 6:
        this->fill(this->line6, contents);
        break;
    case 7:
        this->fill(this->line7, contents);
        break;
    case 8:
        this->fill(this->line8, contents);
        break;
    case 9:
        this->fill(this->line9, contents);
        break;
    case 10:
        this->fill(this->line10, contents);
        break;
    case 11:
        this->fill(this->line11, contents);
        break;
    }
}

void TableAControl::fill(QList<QLabel *> &line, const QList<QString> &content)
{
    if (line.size() == 9 && content.size() == 9)
    {
        for (int i = 0; i < line.size(); i ++)
        {
            if (content.at(i) == QString("true"))
            {
                line.at(i)->setText(QString("1"));
                // line.at(i)->setStyleSheet(SIGNAL_ACTIVE);
            }
            else if (content.at(i) == QString("false"))
            {
                line.at(i)->setText(QString("0"));
                // line.at(i)->setStyleSheet(SIGNAL_UNACTIVE);
            }
            else
            {
                line.at(i)->setStyleSheet(SIGNAL_NULL);
                line.at(i)->setText(content.at(i));
            }
        }
    }
    else
    {
        _LOG << "the line or the content has wrong size";
    }
}
