#include "softwareversion.h"
#include "ui_softwareversion.h"
#include "vehiclelogo.h"
#include <QDebug>

#define _NETWORK_VERSION_MAX_PAGE 2
#define _CONVERTER_VERSION_MAX_PAGE 1
#define _DOOR_VERSION_MAX_PAGE 1
#define _OTHERS_VERSION_MAX_PAGE 1

enum
{
    uNetworkVersion,
    uConverterVersion,
    uDoorVersion,
    uOthersVersion
};

SoftwareVersion::SoftwareVersion(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SoftwareVersion)
{
    ui->setupUi(this);

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(130, 10, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();

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

    this->page = 1;
    this->item = uNetworkVersion;
    ui->btnNetwork->setStyleSheet(BUTTON_DOWN);
}

SoftwareVersion::~SoftwareVersion()
{
    delete ui;
}

void SoftwareVersion::updatePage()
{
    switch (this->item)
    {
    case uNetworkVersion:
        if (1 == this->page)
        {
            this->showNetworkVersionPage1();
        }
        else if (2 == this->page)
        {
            this->showNetworkVersionPage2();
        }

        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_NETWORK_VERSION_MAX_PAGE));

        break;
    case uConverterVersion:
        this->showConverterVersionPage1();
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_CONVERTER_VERSION_MAX_PAGE));
        break;
    case uDoorVersion:
        this->showDoorVersionPage1();
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_DOOR_VERSION_MAX_PAGE));
        break;
    case uOthersVersion:
        this->showOthersVersionPage1();
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_OTHERS_VERSION_MAX_PAGE));
        break;
    } 
}

void SoftwareVersion::showEvent(QShowEvent *)
{
    this->vehicleLogo->setLeftHeadState(false);
    this->vehicleLogo->setRightHeadState(false);
    this->vehicleLogo->setA1Number(QString("A1"));
    this->vehicleLogo->setB1Number(QString("B1"));
    this->vehicleLogo->setC1Number(QString("C1"));
    this->vehicleLogo->setD1Number(QString("D1"));
    this->vehicleLogo->setD2Number(QString("D2"));
    this->vehicleLogo->setC2Number(QString("C2"));
    this->vehicleLogo->setB2Number(QString("B2"));
    this->vehicleLogo->setA2Number(QString("A2"));
}

void SoftwareVersion::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

void SoftwareVersion::fillLine(QList<QLabel *> &line, QList<QString> &content)
{
    if (line.size() == 9 && content.size() == 9)
    {
        for (int i = 0; i < line.size(); i ++)
        {
            line.at(i)->setText(content.at(i));
        }
    }
    else
    {
        _LOG << "the line or the content has wrong size";
    }
}

void SoftwareVersion::showNetworkVersionPage1()
{
    QList<QString> content;

    content << QString("HMI")
            << this->database->hmiVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->hmiVersionA2;
    this->fillLine(this->line1, content);

    content.clear();

    content << QString("CCU OS")
            << this->database->ccu1OsVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->ccu2OsVersion;
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("CCU MVB")
            << this->database->ccu1MvbVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->ccu2MvbVersion;
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("CCU SDB")
            << this->database->ccu1SdbVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->ccu2SdbVersion;
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("CCU PLC")
            << this->database->ccu1PlcVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->ccu2PlcVersion;
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("RIOM GW")
            << this->database->riom1GwVersion << this->database->riom2GwVersion << this->database->riom3GwVersion << this->database->riom4GwVersion
            << this->database->riom5GwVersion << this->database->riom6GwVersion << this->database->riom7GwVersion << this->database->riom8GwVersion;
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("RIOM DI")
            << this->database->riom1DiVersion << this->database->riom2DiVersion << this->database->riom3DiVersion << this->database->riom4DiVersion
            << this->database->riom5DiVersion << this->database->riom6DiVersion << this->database->riom7DiVersion << this->database->riom8DiVersion;
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("RIOM DO")
            << this->database->riom1DoVersion << this->database->riom2DoVersion << this->database->riom3DoVersion << this->database->riom4DoVersion
            << this->database->riom5DoVersion << this->database->riom6DoVersion << this->database->riom7DoVersion << this->database->riom8DoVersion;
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("RIOM AX")
            << this->database->riom1AxVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->riom8AxVersion;
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("ERM OS")
            << this->database->erm1OsVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->erm2OsVersion;
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("ERM MVB")
            << this->database->erm1MvbVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->erm2MvbVersion;
    this->fillLine(this->line11, content);
}

void SoftwareVersion::showNetworkVersionPage2()
{
    QList<QString> content;

    content << QString("ERM SDB")
            << this->database->erm1SdbVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->erm2SdbVersion;
    this->fillLine(this->line1, content);

    content.clear();
    content << QString("ERM PLC")
            << this->database->erm1PlcVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->erm2PlcVersion;
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line11, content);
}

void SoftwareVersion::showConverterVersionPage1()
{
    QList<QString> content;

    content.clear();
    content << QString("BCG DSP")
            << this->database->dcdcDspVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->dcdcDspVersionA2;
    this->fillLine(this->line1, content);

    content.clear();
    content << QString("BCG PLC")
            << this->database->dcdcPlcVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->dcdcPlcVersionA2;
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("SIV DSP")
            << this->database->sivDspVersionA1 << QString("- -") << this->database->sivDspVersionC1 << QString("- -")
            << QString("- -") << this->database->sivDspVersionC2 << QString("- -") << this->database->sivDspVersionA2;
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("SIV PLC")
            << this->database->sivPlcVersionA1 << QString("- -") << this->database->sivPlcVersionC1 << QString("- -")
            << QString("- -") << this->database->sivPlcVersionC2 << QString("- -") << this->database->sivPlcVersionA2;
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("VVVF LGC")
            << QString("- -") << this->database->tcuLogicVersionB1 << this->database->tcuLogicVersionC1 << this->database->tcuLogicVersionD1
            << this->database->tcuLogicVersionD2 << this->database->tcuLogicVersionC2 << this->database->tcuLogicVersionB2 << QString("- -");
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("VVVF INV")
            << QString("- -") << this->database->tcuVvvfVersionB1 << this->database->tcuVvvfVersionC1 << this->database->tcuVvvfVersionD1
            << this->database->tcuVvvfVersionD2 << this->database->tcuVvvfVersionC2 << this->database->tcuVvvfVersionB2 << QString("- -");
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("VVVF ADH")
            << QString("- -") << this->database->tcuAdhereVersionB1 << this->database->tcuAdhereVersionC1 << this->database->tcuAdhereVersionD1
            << this->database->tcuAdhereVersionD2 << this->database->tcuAdhereVersionC2 << this->database->tcuAdhereVersionB2 << QString("- -");
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line11, content);
}

void SoftwareVersion::showDoorVersionPage1()
{
    QList<QString> content;

    content.clear();
    content << QString("Door 1")
            << this->database->door1VersionA1 << this->database->door1VersionB1 << this->database->door1VersionC1 << this->database->door1VersionD1
            << this->database->door1VersionD2 << this->database->door1VersionC2 << this->database->door1VersionB2 << this->database->door1VersionA2;
    this->fillLine(this->line1, content);

    content.clear();
    content << QString("Door 2")
            << this->database->door2VersionA1 << this->database->door2VersionB1 << this->database->door2VersionC1 << this->database->door2VersionD1
            << this->database->door2VersionD2 << this->database->door2VersionC2 << this->database->door2VersionB2 << this->database->door2VersionA2;
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("Door 3")
            << this->database->door3VersionA1 << this->database->door3VersionB1 << this->database->door3VersionC1 << this->database->door3VersionD1
            << this->database->door3VersionD2 << this->database->door3VersionC2 << this->database->door3VersionB2 << this->database->door3VersionA2;
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("Door 4")
            << this->database->door4VersionA1 << this->database->door4VersionB1 << this->database->door4VersionC1 << this->database->door4VersionD1
            << this->database->door4VersionD2 << this->database->door4VersionC2 << this->database->door4VersionB2 << this->database->door4VersionA2;
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("Door 5")
            << this->database->door5VersionA1 << this->database->door5VersionB1 << this->database->door5VersionC1 << this->database->door5VersionD1
            << this->database->door5VersionD2 << this->database->door5VersionC2 << this->database->door5VersionB2 << this->database->door5VersionA2;
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("Door 6")
            << this->database->door6VersionA1 << this->database->door6VersionB1 << this->database->door6VersionC1 << this->database->door6VersionD1
            << this->database->door6VersionD2 << this->database->door6VersionC2 << this->database->door6VersionB2 << this->database->door6VersionA2;
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("Door 7")
            << this->database->door7VersionA1 << this->database->door7VersionB1 << this->database->door7VersionC1 << this->database->door7VersionD1
            << this->database->door7VersionD2 << this->database->door7VersionC2 << this->database->door7VersionB2 << this->database->door7VersionA2;
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("Door 8")
            << this->database->door8VersionA1 << this->database->door8VersionB1 << this->database->door8VersionC1 << this->database->door8VersionD1
            << this->database->door8VersionD2 << this->database->door8VersionC2 << this->database->door8VersionB2 << this->database->door8VersionA2;
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("Door 9")
            << this->database->door9VersionA1 << this->database->door9VersionB1 << this->database->door9VersionC1 << this->database->door9VersionD1
            << this->database->door9VersionD2 << this->database->door9VersionC2 << this->database->door9VersionB2 << this->database->door9VersionA2;
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("Door 10")
            << this->database->door10VersionA1 << this->database->door10VersionB1 << this->database->door10VersionC1 << this->database->door10VersionD1
            << this->database->door10VersionD2 << this->database->door10VersionC2 << this->database->door10VersionB2 << this->database->door10VersionA2;
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line11, content);
}

void SoftwareVersion::showOthersVersionPage1()
{
    QList<QString> content;

    content.clear();
    content << QString("ATCC")
            << this->database->atcVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- - ") << QString("- -") << QString("- -") << QString("- -");
    this->fillLine(this->line1, content);

    content.clear();
    content << QString("ASCU")
            << this->database->paVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->paVersionA2;
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("FAMU")
            << this->database->fauVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->fauVersionA2;
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("TDS")
            << this->database->tdsSoftwareVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << QString("- -") ;
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("GWV")
            << this->database->bcuVersionA1 << QString("- -") << QString("- -") << this->database->bcuVersionD1
            << this->database->bcuVersionD2 << QString("- -") << QString("- -") << this->database->bcuVersionA2;
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("FAMU")
            << this->database->fauVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->fauVersionA2;
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("ACCP")
            << this->database->hvacVersionA1 << this->database->hvacVersionB1 << this->database->hvacVersionC1 << this->database->hvacVersionD1
            << this->database->hvacVersionD2 << this->database->hvacVersionC2 << this->database->hvacVersionB2 << this->database->hvacVersionA2;
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("LCU")
            << QString("") << QString("--") << QString("--") << QString("--")
            << QString("--") << QString("--") << QString("--") << QString("");
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line11, content);
}

void SoftwareVersion::showPage1()
{
    QList<QString> content;

    content << QString("HMI")
            << this->database->hmiVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->hmiVersionA2;
    this->fillLine(this->line1, content);

    content.clear();

    content << QString("CCU OS")
            << this->database->ccu1OsVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->ccu2OsVersion;
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("CCU MVB")
            << this->database->ccu1MvbVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->ccu2MvbVersion;
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("CCU SDB")
            << this->database->ccu1SdbVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->ccu2SdbVersion;
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("CCU PLC")
            << this->database->ccu1PlcVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->ccu2PlcVersion;
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("RIOM GW")
            << this->database->riom1GwVersion << this->database->riom2GwVersion << this->database->riom3GwVersion << this->database->riom4GwVersion
            << this->database->riom5GwVersion << this->database->riom6GwVersion << this->database->riom7GwVersion << this->database->riom8GwVersion;
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("RIOM DI")
            << this->database->riom1DiVersion << this->database->riom2DiVersion << this->database->riom3DiVersion << this->database->riom4DiVersion
            << this->database->riom5DiVersion << this->database->riom6DiVersion << this->database->riom7DiVersion << this->database->riom8DiVersion;
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("RIOM DO")
            << this->database->riom1DoVersion << this->database->riom2DoVersion << this->database->riom3DoVersion << this->database->riom4DoVersion
            << this->database->riom5DoVersion << this->database->riom6DoVersion << this->database->riom7DoVersion << this->database->riom8DoVersion;
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("RIOM AX")
            << this->database->riom1AxVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->riom8AxVersion;
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("ERM OS")
            << this->database->erm1OsVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->erm2OsVersion;
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("ERM MVB")
            << this->database->erm1MvbVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->erm2MvbVersion;
    this->fillLine(this->line11, content);
}

void SoftwareVersion::showPage2()
{
    QList<QString> content;

    content << QString("ERM SDB")
            << this->database->erm1SdbVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->erm2SdbVersion;
    this->fillLine(this->line1, content);

    content.clear();
    content << QString("ERM PLC")
            << this->database->erm1PlcVersion << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->erm2PlcVersion;
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("ATC")
            << this->database->atcVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- - ") << QString("- -") << QString("- -") << this->database->atcVersionA2;
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("PA")
            << this->database->paVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->paVersionA2;
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("FAU")
            << this->database->fauVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->fauVersionA2;
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("TDS")
            << QString("- -") << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << QString("- -");
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("BCU")
            << this->database->bcuVersionA1 << QString("- -") << QString("- -") << this->database->bcuVersionD1
            << this->database->bcuVersionD2 << QString("- -") << QString("- -") << this->database->bcuVersionA2;
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("ACU")
            << this->database->hvacVersionA1 << this->database->hvacVersionB1 << this->database->hvacVersionC1 << this->database->hvacVersionD1
            << this->database->hvacVersionD2 << this->database->hvacVersionC2 << this->database->hvacVersionB2 << this->database->hvacVersionA2;
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("DCDC DSP")
            << this->database->dcdcDspVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->dcdcDspVersionA2;
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("DCDC PLC")
            << this->database->dcdcDspVersionA1 << QString("- -") << QString("- -") << QString("- -")
            << QString("- -") << QString("- -") << QString("- -") << this->database->dcdcDspVersionA2;
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("SIV DSP")
            << this->database->sivPlcVersionA1 << QString("- -") << this->database->sivDspVersionC1 << QString("- -")
            << QString("- -") << this->database->sivDspVersionC2 << QString("- -") << this->database->sivPlcVersionA2;
    this->fillLine(this->line11, content);
}

void SoftwareVersion::showPage3()
{
    QList<QString> content;

    content.clear();
    content << QString("SIV PLC")
            << this->database->sivPlcVersionA1 << QString("- -") << this->database->sivPlcVersionC1 << QString("- -")
            << QString("- -") << this->database->sivPlcVersionC2 << QString("- -") << this->database->sivPlcVersionA2;
    this->fillLine(this->line1, content);

    content.clear();
    content << QString("DCU LGC")
            << QString("- -") << this->database->tcuLogicVersionB1 << this->database->tcuLogicVersionC1 << this->database->tcuLogicVersionD1
            << this->database->tcuLogicVersionD2 << this->database->tcuLogicVersionC2 << this->database->tcuLogicVersionB2 << QString("- -");
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("DCU INV")
            << QString("- -") << this->database->tcuVvvfVersionB1 << this->database->tcuVvvfVersionC1 << this->database->tcuVvvfVersionD1
            << this->database->tcuVvvfVersionD2 << this->database->tcuVvvfVersionC2 << this->database->tcuVvvfVersionB2 << QString("- -");
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("DCU ADH")
            << QString("- -") << this->database->tcuAdhereVersionB1 << this->database->tcuAdhereVersionC1 << this->database->tcuAdhereVersionD1
            << this->database->tcuAdhereVersionD2 << this->database->tcuAdhereVersionC2 << this->database->tcuAdhereVersionB1 << QString("- -");
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("Door 1")
            << this->database->door1VersionA1 << this->database->door1VersionB1 << this->database->door1VersionC1 << this->database->door1VersionD1
            << this->database->door1VersionD2 << this->database->door1VersionC2 << this->database->door1VersionB2 << this->database->door1VersionA2;
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("Door 2")
            << this->database->door2VersionA1 << this->database->door2VersionB1 << this->database->door2VersionC1 << this->database->door2VersionD1
            << this->database->door2VersionD2 << this->database->door2VersionC2 << this->database->door2VersionB2 << this->database->door2VersionA2;
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("Door 3")
            << this->database->door3VersionA1 << this->database->door3VersionB1 << this->database->door3VersionC1 << this->database->door3VersionD1
            << this->database->door3VersionD2 << this->database->door3VersionC2 << this->database->door3VersionB2 << this->database->door3VersionA2;
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("Door 4")
            << this->database->door4VersionA1 << this->database->door4VersionB1 << this->database->door4VersionC1 << this->database->door4VersionD1
            << this->database->door4VersionD2 << this->database->door4VersionC2 << this->database->door4VersionB2 << this->database->door4VersionA2;
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("Door 5")
            << this->database->door5VersionA1 << this->database->door5VersionB1 << this->database->door5VersionC1 << this->database->door5VersionD1
            << this->database->door5VersionD2 << this->database->door5VersionC2 << this->database->door5VersionB2 << this->database->door5VersionA2;
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("Door 6")
            << this->database->door6VersionA1 << this->database->door6VersionB1 << this->database->door6VersionC1 << this->database->door6VersionD1
            << this->database->door6VersionD2 << this->database->door6VersionC2 << this->database->door6VersionB2 << this->database->door6VersionA2;
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("Door 7")
            << this->database->door7VersionA1 << this->database->door7VersionB1 << this->database->door7VersionC1 << this->database->door7VersionD1
            << this->database->door7VersionD2 << this->database->door7VersionC2 << this->database->door7VersionB2 << this->database->door7VersionA2;
    this->fillLine(this->line11, content);
}

void SoftwareVersion::showPage4()
{
    QList<QString> content;

    content << QString("Door 8")
            << this->database->door8VersionA1 << this->database->door8VersionB1 << this->database->door8VersionC1 << this->database->door8VersionD1
            << this->database->door8VersionD2 << this->database->door8VersionC2 << this->database->door8VersionB2 << this->database->door8VersionA2;
    this->fillLine(this->line1, content);

    content.clear();
    content << QString("Door 9")
            << this->database->door9VersionA1 << this->database->door9VersionB1 << this->database->door9VersionC1 << this->database->door9VersionD1
            << this->database->door9VersionD2 << this->database->door9VersionC2 << this->database->door9VersionB2 << this->database->door9VersionA2;
    this->fillLine(this->line2, content);

    content.clear();
    content << QString("Door 10")
            << this->database->door10VersionA1 << this->database->door10VersionB1 << this->database->door10VersionC1 << this->database->door10VersionD1
            << this->database->door10VersionD2 << this->database->door10VersionC2 << this->database->door10VersionB2 << this->database->door10VersionA2;
    this->fillLine(this->line3, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line4, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line5, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line6, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line7, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line8, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line9, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line10, content);

    content.clear();
    content << QString("")
            << QString("") << QString("") << QString("") << QString("")
            << QString("") << QString("") << QString("") << QString("");
    this->fillLine(this->line11, content);
}

void SoftwareVersion::on_btnDown_clicked()
{
    switch (this->item)
    {
    case uNetworkVersion:

        if (this->page < _NETWORK_VERSION_MAX_PAGE)
        {
            this->page ++;
        }

        break;
    case uConverterVersion:

        if (this->page < _CONVERTER_VERSION_MAX_PAGE)
        {
            this->page ++;
        }

        break;
    case uDoorVersion:

        if (this->page < _DOOR_VERSION_MAX_PAGE)
        {
            this->page ++;
        }

        break;
    case uOthersVersion:

        if (this->page < _OTHERS_VERSION_MAX_PAGE)
        {
            this->page ++;
        }

        break;
    }
}

void SoftwareVersion::on_btnUp_clicked()
{
    if (this->page > 1)
    {
        this->page --;
    }

    switch (this->item)
    {
    case uNetworkVersion:
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_NETWORK_VERSION_MAX_PAGE));
        break;
    case uConverterVersion:
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_CONVERTER_VERSION_MAX_PAGE));
        break;
    case uDoorVersion:
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_DOOR_VERSION_MAX_PAGE));
        break;

    case uOthersVersion:
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_OTHERS_VERSION_MAX_PAGE));
        break;
    }
}

void SoftwareVersion::on_btnNetwork_pressed()
{
    this->page = 1;

    ui->btnNetwork->setStyleSheet(BUTTON_DOWN);
    ui->btnConverter->setStyleSheet(BUTTON_UP);
    ui->btnDoor->setStyleSheet(BUTTON_UP);
    ui->btnOthers->setStyleSheet(BUTTON_UP);

    this->item = uNetworkVersion;
}

void SoftwareVersion::on_btnConverter_pressed()
{
    this->page = 1;

    ui->btnNetwork->setStyleSheet(BUTTON_UP);
    ui->btnConverter->setStyleSheet(BUTTON_DOWN);
    ui->btnDoor->setStyleSheet(BUTTON_UP);
    ui->btnOthers->setStyleSheet(BUTTON_UP);

    this->item = uConverterVersion;
}

void SoftwareVersion::on_btnDoor_pressed()
{
    this->page = 1;

    ui->btnNetwork->setStyleSheet(BUTTON_UP);
    ui->btnConverter->setStyleSheet(BUTTON_UP);
    ui->btnDoor->setStyleSheet(BUTTON_DOWN);
    ui->btnOthers->setStyleSheet(BUTTON_UP);

    this->item = uDoorVersion;
}

void SoftwareVersion::on_btnOthers_pressed()
{
    this->page = 1;

    ui->btnNetwork->setStyleSheet(BUTTON_UP);
    ui->btnConverter->setStyleSheet(BUTTON_UP);
    ui->btnDoor->setStyleSheet(BUTTON_UP);
    ui->btnOthers->setStyleSheet(BUTTON_DOWN);

    this->item = uOthersVersion;
}
