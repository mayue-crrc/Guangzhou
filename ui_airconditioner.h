/********************************************************************************
** Form generated from reading UI file 'airconditioner.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRCONDITIONER_H
#define UI_AIRCONDITIONER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AirConditioner
{
public:
    QLabel *lblIndoorTemperatureA1;
    QLabel *label_61;
    QLabel *lblIndoorTemperatureD1;
    QLabel *lblTargetTemperatureA1;
    QLabel *lblTargetTemperatureC1;
    QLabel *lblOutdoorTemperatureD2;
    QLabel *label_31;
    QLabel *lblTargetTemperatureA2;
    QLabel *lblIndoorTemperatureA2;
    QLabel *lblTargetTemperatureB2;
    QLabel *label_70;
    QLabel *label_57;
    QLabel *lblOutdoorTemperatureD1;
    QLabel *label_20;
    QLabel *lblIndoorTemperatureC1;
    QLabel *lblOutdoorTemperatureA1;
    QLabel *lblOutdoorTemperatureC2;
    QLabel *lblOutdoorTemperatureB2;
    QLabel *lblTargetTemperatureD1;
    QLabel *label_62;
    QLabel *label_63;
    QLabel *label_32;
    QLabel *lblIndoorTemperatureB1;
    QLabel *label_64;
    QLabel *lblOutdoorTemperatureB1;
    QLabel *label_65;
    QLabel *lblIndoorTemperatureC2;
    QLabel *label_60;
    QLabel *label_67;
    QLabel *lblTargetTemperatureD2;
    QLabel *label_69;
    QLabel *lblOutdoorTemperatureA2;
    QLabel *label_56;
    QLabel *lblIndoorTemperatureD2;
    QLabel *lblIndoorTemperatureB2;
    QLabel *lblTargetTemperatureC2;
    QLabel *label_30;
    QLabel *label_71;
    QLabel *label_68;
    QLabel *lblTargetTemperatureB1;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *lblOutdoorTemperatureC1;
    QLabel *label_29;
    QLabel *label_66;
    QLabel *lblCompressor1A1;
    QLabel *lblCompressor2A1;
    QLabel *lblCompressor3A1;
    QLabel *lblCompressor4A1;
    QLabel *lblCompressor1B1;
    QLabel *lblCompressor4B1;
    QLabel *lblCompressor3B1;
    QLabel *lblCompressor2B1;
    QLabel *lblCompressor1C1;
    QLabel *lblCompressor4C1;
    QLabel *lblCompressor3C1;
    QLabel *lblCompressor2C1;
    QLabel *lblCompressor1D1;
    QLabel *lblCompressor4D1;
    QLabel *lblCompressor3D1;
    QLabel *lblCompressor2D1;
    QLabel *lblCompressor4D2;
    QLabel *lblCompressor1D2;
    QLabel *lblCompressor2D2;
    QLabel *lblCompressor3D2;
    QLabel *lblCompressor4B2;
    QLabel *lblCompressor3B2;
    QLabel *lblCompressor1B2;
    QLabel *lblCompressor2B2;
    QLabel *lblCompressor4C2;
    QLabel *lblCompressor3C2;
    QLabel *lblCompressor1C2;
    QLabel *lblCompressor2C2;
    QLabel *lblCompressor4A2;
    QLabel *lblCompressor3A2;
    QLabel *lblCompressor1A2;
    QLabel *lblCompressor2A2;
    QLabel *lblAirconditionerA1;
    QLabel *lblAirconditionerB1;
    QLabel *lblAirconditionerC1;
    QLabel *lblAirconditionerD1;
    QLabel *lblAirconditionerD2;
    QLabel *lblAirconditionerC2;
    QLabel *lblAirconditionerB2;
    QLabel *lblAirconditionerA2;
    QPushButton *btnTemperatureSet;
    QPushButton *btnModeSet;
    QLabel *label_106;
    QPushButton *btnA001;
    QPushButton *btnB001;
    QPushButton *btnC001;
    QPushButton *btnD001;
    QPushButton *btnD002;
    QPushButton *btnC002;
    QPushButton *btnB002;
    QPushButton *btnA002;
    QPushButton *btnAll;
    QPushButton *btnSetting;
    QPushButton *btnTemperatureUp;
    QPushButton *btnTemperatureDown;
    QLabel *lblSettedTemperature;
    QPushButton *btnAutoCool;
    QPushButton *btnManualCool;
    QPushButton *btnExitPreCool;
    QPushButton *btnEmergency;
    QLabel *label_107;
    QPushButton *btnAuto;
    QPushButton *btnFireMode;
    QPushButton *btnVentilate;

    void setupUi(QWidget *AirConditioner)
    {
        if (AirConditioner->objectName().isEmpty())
            AirConditioner->setObjectName(QString::fromUtf8("AirConditioner"));
        AirConditioner->resize(1024, 600);
        AirConditioner->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"}"));
        lblIndoorTemperatureA1 = new QLabel(AirConditioner);
        lblIndoorTemperatureA1->setObjectName(QString::fromUtf8("lblIndoorTemperatureA1"));
        lblIndoorTemperatureA1->setGeometry(QRect(177, 102, 91, 40));
        lblIndoorTemperatureA1->setAlignment(Qt::AlignCenter);
        label_61 = new QLabel(AirConditioner);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(444, 216, 91, 40));
        label_61->setAlignment(Qt::AlignCenter);
        lblIndoorTemperatureD1 = new QLabel(AirConditioner);
        lblIndoorTemperatureD1->setObjectName(QString::fromUtf8("lblIndoorTemperatureD1"));
        lblIndoorTemperatureD1->setGeometry(QRect(444, 102, 91, 40));
        lblIndoorTemperatureD1->setAlignment(Qt::AlignCenter);
        lblTargetTemperatureA1 = new QLabel(AirConditioner);
        lblTargetTemperatureA1->setObjectName(QString::fromUtf8("lblTargetTemperatureA1"));
        lblTargetTemperatureA1->setGeometry(QRect(177, 178, 91, 40));
        lblTargetTemperatureA1->setAlignment(Qt::AlignCenter);
        lblTargetTemperatureC1 = new QLabel(AirConditioner);
        lblTargetTemperatureC1->setObjectName(QString::fromUtf8("lblTargetTemperatureC1"));
        lblTargetTemperatureC1->setGeometry(QRect(355, 178, 91, 40));
        lblTargetTemperatureC1->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureD2 = new QLabel(AirConditioner);
        lblOutdoorTemperatureD2->setObjectName(QString::fromUtf8("lblOutdoorTemperatureD2"));
        lblOutdoorTemperatureD2->setGeometry(QRect(533, 140, 91, 40));
        lblOutdoorTemperatureD2->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(AirConditioner);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(8, 216, 171, 40));
        label_31->setAlignment(Qt::AlignCenter);
        lblTargetTemperatureA2 = new QLabel(AirConditioner);
        lblTargetTemperatureA2->setObjectName(QString::fromUtf8("lblTargetTemperatureA2"));
        lblTargetTemperatureA2->setGeometry(QRect(800, 178, 91, 40));
        lblTargetTemperatureA2->setAlignment(Qt::AlignCenter);
        lblIndoorTemperatureA2 = new QLabel(AirConditioner);
        lblIndoorTemperatureA2->setObjectName(QString::fromUtf8("lblIndoorTemperatureA2"));
        lblIndoorTemperatureA2->setGeometry(QRect(800, 102, 91, 40));
        lblIndoorTemperatureA2->setAlignment(Qt::AlignCenter);
        lblTargetTemperatureB2 = new QLabel(AirConditioner);
        lblTargetTemperatureB2->setObjectName(QString::fromUtf8("lblTargetTemperatureB2"));
        lblTargetTemperatureB2->setGeometry(QRect(711, 178, 91, 40));
        lblTargetTemperatureB2->setAlignment(Qt::AlignCenter);
        label_70 = new QLabel(AirConditioner);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(800, 254, 91, 40));
        label_70->setAlignment(Qt::AlignCenter);
        label_57 = new QLabel(AirConditioner);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(177, 216, 91, 40));
        label_57->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureD1 = new QLabel(AirConditioner);
        lblOutdoorTemperatureD1->setObjectName(QString::fromUtf8("lblOutdoorTemperatureD1"));
        lblOutdoorTemperatureD1->setGeometry(QRect(444, 140, 91, 40));
        lblOutdoorTemperatureD1->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(AirConditioner);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(8, 102, 171, 40));
        label_20->setAlignment(Qt::AlignCenter);
        lblIndoorTemperatureC1 = new QLabel(AirConditioner);
        lblIndoorTemperatureC1->setObjectName(QString::fromUtf8("lblIndoorTemperatureC1"));
        lblIndoorTemperatureC1->setGeometry(QRect(355, 102, 91, 40));
        lblIndoorTemperatureC1->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureA1 = new QLabel(AirConditioner);
        lblOutdoorTemperatureA1->setObjectName(QString::fromUtf8("lblOutdoorTemperatureA1"));
        lblOutdoorTemperatureA1->setGeometry(QRect(177, 140, 91, 40));
        lblOutdoorTemperatureA1->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureC2 = new QLabel(AirConditioner);
        lblOutdoorTemperatureC2->setObjectName(QString::fromUtf8("lblOutdoorTemperatureC2"));
        lblOutdoorTemperatureC2->setGeometry(QRect(622, 140, 91, 40));
        lblOutdoorTemperatureC2->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureB2 = new QLabel(AirConditioner);
        lblOutdoorTemperatureB2->setObjectName(QString::fromUtf8("lblOutdoorTemperatureB2"));
        lblOutdoorTemperatureB2->setGeometry(QRect(711, 140, 91, 40));
        lblOutdoorTemperatureB2->setAlignment(Qt::AlignCenter);
        lblTargetTemperatureD1 = new QLabel(AirConditioner);
        lblTargetTemperatureD1->setObjectName(QString::fromUtf8("lblTargetTemperatureD1"));
        lblTargetTemperatureD1->setGeometry(QRect(444, 178, 91, 40));
        lblTargetTemperatureD1->setAlignment(Qt::AlignCenter);
        label_62 = new QLabel(AirConditioner);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(533, 216, 91, 40));
        label_62->setAlignment(Qt::AlignCenter);
        label_63 = new QLabel(AirConditioner);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(711, 216, 91, 40));
        label_63->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(AirConditioner);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(8, 254, 171, 40));
        label_32->setAlignment(Qt::AlignCenter);
        lblIndoorTemperatureB1 = new QLabel(AirConditioner);
        lblIndoorTemperatureB1->setObjectName(QString::fromUtf8("lblIndoorTemperatureB1"));
        lblIndoorTemperatureB1->setGeometry(QRect(266, 102, 91, 40));
        lblIndoorTemperatureB1->setAlignment(Qt::AlignCenter);
        label_64 = new QLabel(AirConditioner);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(177, 254, 91, 40));
        label_64->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureB1 = new QLabel(AirConditioner);
        lblOutdoorTemperatureB1->setObjectName(QString::fromUtf8("lblOutdoorTemperatureB1"));
        lblOutdoorTemperatureB1->setGeometry(QRect(266, 140, 91, 40));
        lblOutdoorTemperatureB1->setAlignment(Qt::AlignCenter);
        label_65 = new QLabel(AirConditioner);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setGeometry(QRect(711, 254, 91, 40));
        label_65->setAlignment(Qt::AlignCenter);
        lblIndoorTemperatureC2 = new QLabel(AirConditioner);
        lblIndoorTemperatureC2->setObjectName(QString::fromUtf8("lblIndoorTemperatureC2"));
        lblIndoorTemperatureC2->setGeometry(QRect(622, 102, 91, 40));
        lblIndoorTemperatureC2->setAlignment(Qt::AlignCenter);
        label_60 = new QLabel(AirConditioner);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(622, 216, 91, 40));
        label_60->setAlignment(Qt::AlignCenter);
        label_67 = new QLabel(AirConditioner);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(355, 254, 91, 40));
        label_67->setAlignment(Qt::AlignCenter);
        lblTargetTemperatureD2 = new QLabel(AirConditioner);
        lblTargetTemperatureD2->setObjectName(QString::fromUtf8("lblTargetTemperatureD2"));
        lblTargetTemperatureD2->setGeometry(QRect(533, 178, 91, 40));
        lblTargetTemperatureD2->setAlignment(Qt::AlignCenter);
        label_69 = new QLabel(AirConditioner);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(533, 254, 91, 40));
        label_69->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureA2 = new QLabel(AirConditioner);
        lblOutdoorTemperatureA2->setObjectName(QString::fromUtf8("lblOutdoorTemperatureA2"));
        lblOutdoorTemperatureA2->setGeometry(QRect(800, 140, 91, 40));
        lblOutdoorTemperatureA2->setAlignment(Qt::AlignCenter);
        label_56 = new QLabel(AirConditioner);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(355, 216, 91, 40));
        label_56->setAlignment(Qt::AlignCenter);
        lblIndoorTemperatureD2 = new QLabel(AirConditioner);
        lblIndoorTemperatureD2->setObjectName(QString::fromUtf8("lblIndoorTemperatureD2"));
        lblIndoorTemperatureD2->setGeometry(QRect(533, 102, 91, 40));
        lblIndoorTemperatureD2->setAlignment(Qt::AlignCenter);
        lblIndoorTemperatureB2 = new QLabel(AirConditioner);
        lblIndoorTemperatureB2->setObjectName(QString::fromUtf8("lblIndoorTemperatureB2"));
        lblIndoorTemperatureB2->setGeometry(QRect(711, 102, 91, 40));
        lblIndoorTemperatureB2->setAlignment(Qt::AlignCenter);
        lblTargetTemperatureC2 = new QLabel(AirConditioner);
        lblTargetTemperatureC2->setObjectName(QString::fromUtf8("lblTargetTemperatureC2"));
        lblTargetTemperatureC2->setGeometry(QRect(622, 178, 91, 40));
        lblTargetTemperatureC2->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(AirConditioner);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(8, 178, 171, 40));
        label_30->setAlignment(Qt::AlignCenter);
        label_71 = new QLabel(AirConditioner);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(444, 254, 91, 40));
        label_71->setAlignment(Qt::AlignCenter);
        label_68 = new QLabel(AirConditioner);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(622, 254, 91, 40));
        label_68->setAlignment(Qt::AlignCenter);
        lblTargetTemperatureB1 = new QLabel(AirConditioner);
        lblTargetTemperatureB1->setObjectName(QString::fromUtf8("lblTargetTemperatureB1"));
        lblTargetTemperatureB1->setGeometry(QRect(266, 178, 91, 40));
        lblTargetTemperatureB1->setAlignment(Qt::AlignCenter);
        label_58 = new QLabel(AirConditioner);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(266, 216, 91, 40));
        label_58->setAlignment(Qt::AlignCenter);
        label_59 = new QLabel(AirConditioner);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(800, 216, 91, 40));
        label_59->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureC1 = new QLabel(AirConditioner);
        lblOutdoorTemperatureC1->setObjectName(QString::fromUtf8("lblOutdoorTemperatureC1"));
        lblOutdoorTemperatureC1->setGeometry(QRect(355, 140, 91, 40));
        lblOutdoorTemperatureC1->setAlignment(Qt::AlignCenter);
        label_29 = new QLabel(AirConditioner);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(8, 140, 171, 40));
        label_29->setAlignment(Qt::AlignCenter);
        label_66 = new QLabel(AirConditioner);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setGeometry(QRect(266, 254, 91, 40));
        label_66->setAlignment(Qt::AlignCenter);
        lblCompressor1A1 = new QLabel(AirConditioner);
        lblCompressor1A1->setObjectName(QString::fromUtf8("lblCompressor1A1"));
        lblCompressor1A1->setGeometry(QRect(183, 265, 20, 20));
        lblCompressor1A1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor1A1->setAlignment(Qt::AlignCenter);
        lblCompressor2A1 = new QLabel(AirConditioner);
        lblCompressor2A1->setObjectName(QString::fromUtf8("lblCompressor2A1"));
        lblCompressor2A1->setGeometry(QRect(203, 265, 20, 20));
        lblCompressor2A1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor2A1->setAlignment(Qt::AlignCenter);
        lblCompressor3A1 = new QLabel(AirConditioner);
        lblCompressor3A1->setObjectName(QString::fromUtf8("lblCompressor3A1"));
        lblCompressor3A1->setGeometry(QRect(223, 265, 20, 20));
        lblCompressor3A1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor3A1->setAlignment(Qt::AlignCenter);
        lblCompressor4A1 = new QLabel(AirConditioner);
        lblCompressor4A1->setObjectName(QString::fromUtf8("lblCompressor4A1"));
        lblCompressor4A1->setGeometry(QRect(243, 265, 20, 20));
        lblCompressor4A1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor4A1->setAlignment(Qt::AlignCenter);
        lblCompressor1B1 = new QLabel(AirConditioner);
        lblCompressor1B1->setObjectName(QString::fromUtf8("lblCompressor1B1"));
        lblCompressor1B1->setGeometry(QRect(272, 265, 20, 20));
        lblCompressor1B1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor1B1->setAlignment(Qt::AlignCenter);
        lblCompressor4B1 = new QLabel(AirConditioner);
        lblCompressor4B1->setObjectName(QString::fromUtf8("lblCompressor4B1"));
        lblCompressor4B1->setGeometry(QRect(332, 265, 20, 20));
        lblCompressor4B1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor4B1->setAlignment(Qt::AlignCenter);
        lblCompressor3B1 = new QLabel(AirConditioner);
        lblCompressor3B1->setObjectName(QString::fromUtf8("lblCompressor3B1"));
        lblCompressor3B1->setGeometry(QRect(312, 265, 20, 20));
        lblCompressor3B1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor3B1->setAlignment(Qt::AlignCenter);
        lblCompressor2B1 = new QLabel(AirConditioner);
        lblCompressor2B1->setObjectName(QString::fromUtf8("lblCompressor2B1"));
        lblCompressor2B1->setGeometry(QRect(292, 265, 20, 20));
        lblCompressor2B1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor2B1->setAlignment(Qt::AlignCenter);
        lblCompressor1C1 = new QLabel(AirConditioner);
        lblCompressor1C1->setObjectName(QString::fromUtf8("lblCompressor1C1"));
        lblCompressor1C1->setGeometry(QRect(361, 265, 20, 20));
        lblCompressor1C1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor1C1->setAlignment(Qt::AlignCenter);
        lblCompressor4C1 = new QLabel(AirConditioner);
        lblCompressor4C1->setObjectName(QString::fromUtf8("lblCompressor4C1"));
        lblCompressor4C1->setGeometry(QRect(421, 265, 20, 20));
        lblCompressor4C1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor4C1->setAlignment(Qt::AlignCenter);
        lblCompressor3C1 = new QLabel(AirConditioner);
        lblCompressor3C1->setObjectName(QString::fromUtf8("lblCompressor3C1"));
        lblCompressor3C1->setGeometry(QRect(401, 265, 20, 20));
        lblCompressor3C1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor3C1->setAlignment(Qt::AlignCenter);
        lblCompressor2C1 = new QLabel(AirConditioner);
        lblCompressor2C1->setObjectName(QString::fromUtf8("lblCompressor2C1"));
        lblCompressor2C1->setGeometry(QRect(381, 265, 21, 20));
        lblCompressor2C1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor2C1->setAlignment(Qt::AlignCenter);
        lblCompressor1D1 = new QLabel(AirConditioner);
        lblCompressor1D1->setObjectName(QString::fromUtf8("lblCompressor1D1"));
        lblCompressor1D1->setGeometry(QRect(450, 265, 20, 20));
        lblCompressor1D1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor1D1->setAlignment(Qt::AlignCenter);
        lblCompressor4D1 = new QLabel(AirConditioner);
        lblCompressor4D1->setObjectName(QString::fromUtf8("lblCompressor4D1"));
        lblCompressor4D1->setGeometry(QRect(510, 265, 20, 20));
        lblCompressor4D1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor4D1->setAlignment(Qt::AlignCenter);
        lblCompressor3D1 = new QLabel(AirConditioner);
        lblCompressor3D1->setObjectName(QString::fromUtf8("lblCompressor3D1"));
        lblCompressor3D1->setGeometry(QRect(490, 265, 20, 20));
        lblCompressor3D1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor3D1->setAlignment(Qt::AlignCenter);
        lblCompressor2D1 = new QLabel(AirConditioner);
        lblCompressor2D1->setObjectName(QString::fromUtf8("lblCompressor2D1"));
        lblCompressor2D1->setGeometry(QRect(470, 265, 20, 20));
        lblCompressor2D1->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor2D1->setAlignment(Qt::AlignCenter);
        lblCompressor4D2 = new QLabel(AirConditioner);
        lblCompressor4D2->setObjectName(QString::fromUtf8("lblCompressor4D2"));
        lblCompressor4D2->setGeometry(QRect(539, 265, 20, 20));
        lblCompressor4D2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor4D2->setAlignment(Qt::AlignCenter);
        lblCompressor1D2 = new QLabel(AirConditioner);
        lblCompressor1D2->setObjectName(QString::fromUtf8("lblCompressor1D2"));
        lblCompressor1D2->setGeometry(QRect(599, 265, 20, 20));
        lblCompressor1D2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor1D2->setAlignment(Qt::AlignCenter);
        lblCompressor2D2 = new QLabel(AirConditioner);
        lblCompressor2D2->setObjectName(QString::fromUtf8("lblCompressor2D2"));
        lblCompressor2D2->setGeometry(QRect(579, 265, 20, 20));
        lblCompressor2D2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor2D2->setAlignment(Qt::AlignCenter);
        lblCompressor3D2 = new QLabel(AirConditioner);
        lblCompressor3D2->setObjectName(QString::fromUtf8("lblCompressor3D2"));
        lblCompressor3D2->setGeometry(QRect(559, 265, 20, 20));
        lblCompressor3D2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor3D2->setAlignment(Qt::AlignCenter);
        lblCompressor4B2 = new QLabel(AirConditioner);
        lblCompressor4B2->setObjectName(QString::fromUtf8("lblCompressor4B2"));
        lblCompressor4B2->setGeometry(QRect(716, 265, 20, 20));
        lblCompressor4B2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor4B2->setAlignment(Qt::AlignCenter);
        lblCompressor3B2 = new QLabel(AirConditioner);
        lblCompressor3B2->setObjectName(QString::fromUtf8("lblCompressor3B2"));
        lblCompressor3B2->setGeometry(QRect(736, 265, 20, 20));
        lblCompressor3B2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor3B2->setAlignment(Qt::AlignCenter);
        lblCompressor1B2 = new QLabel(AirConditioner);
        lblCompressor1B2->setObjectName(QString::fromUtf8("lblCompressor1B2"));
        lblCompressor1B2->setGeometry(QRect(776, 265, 20, 20));
        lblCompressor1B2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor1B2->setAlignment(Qt::AlignCenter);
        lblCompressor2B2 = new QLabel(AirConditioner);
        lblCompressor2B2->setObjectName(QString::fromUtf8("lblCompressor2B2"));
        lblCompressor2B2->setGeometry(QRect(756, 265, 20, 20));
        lblCompressor2B2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor2B2->setAlignment(Qt::AlignCenter);
        lblCompressor4C2 = new QLabel(AirConditioner);
        lblCompressor4C2->setObjectName(QString::fromUtf8("lblCompressor4C2"));
        lblCompressor4C2->setGeometry(QRect(628, 265, 20, 20));
        lblCompressor4C2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor4C2->setAlignment(Qt::AlignCenter);
        lblCompressor3C2 = new QLabel(AirConditioner);
        lblCompressor3C2->setObjectName(QString::fromUtf8("lblCompressor3C2"));
        lblCompressor3C2->setGeometry(QRect(648, 265, 20, 20));
        lblCompressor3C2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor3C2->setAlignment(Qt::AlignCenter);
        lblCompressor1C2 = new QLabel(AirConditioner);
        lblCompressor1C2->setObjectName(QString::fromUtf8("lblCompressor1C2"));
        lblCompressor1C2->setGeometry(QRect(688, 265, 20, 20));
        lblCompressor1C2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor1C2->setAlignment(Qt::AlignCenter);
        lblCompressor2C2 = new QLabel(AirConditioner);
        lblCompressor2C2->setObjectName(QString::fromUtf8("lblCompressor2C2"));
        lblCompressor2C2->setGeometry(QRect(668, 265, 20, 20));
        lblCompressor2C2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor2C2->setAlignment(Qt::AlignCenter);
        lblCompressor4A2 = new QLabel(AirConditioner);
        lblCompressor4A2->setObjectName(QString::fromUtf8("lblCompressor4A2"));
        lblCompressor4A2->setGeometry(QRect(806, 265, 20, 20));
        lblCompressor4A2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor4A2->setAlignment(Qt::AlignCenter);
        lblCompressor3A2 = new QLabel(AirConditioner);
        lblCompressor3A2->setObjectName(QString::fromUtf8("lblCompressor3A2"));
        lblCompressor3A2->setGeometry(QRect(826, 265, 20, 20));
        lblCompressor3A2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor3A2->setAlignment(Qt::AlignCenter);
        lblCompressor1A2 = new QLabel(AirConditioner);
        lblCompressor1A2->setObjectName(QString::fromUtf8("lblCompressor1A2"));
        lblCompressor1A2->setGeometry(QRect(866, 265, 20, 20));
        lblCompressor1A2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor1A2->setAlignment(Qt::AlignCenter);
        lblCompressor2A2 = new QLabel(AirConditioner);
        lblCompressor2A2->setObjectName(QString::fromUtf8("lblCompressor2A2"));
        lblCompressor2A2->setGeometry(QRect(846, 265, 20, 20));
        lblCompressor2A2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"color: black;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblCompressor2A2->setAlignment(Qt::AlignCenter);
        lblAirconditionerA1 = new QLabel(AirConditioner);
        lblAirconditionerA1->setObjectName(QString::fromUtf8("lblAirconditionerA1"));
        lblAirconditionerA1->setGeometry(QRect(208, 221, 30, 30));
        lblAirconditionerA1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/airConditionerRun.png);"));
        lblAirconditionerA1->setAlignment(Qt::AlignCenter);
        lblAirconditionerB1 = new QLabel(AirConditioner);
        lblAirconditionerB1->setObjectName(QString::fromUtf8("lblAirconditionerB1"));
        lblAirconditionerB1->setGeometry(QRect(296, 221, 30, 30));
        lblAirconditionerB1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/airConditionerRun.png);"));
        lblAirconditionerB1->setAlignment(Qt::AlignCenter);
        lblAirconditionerC1 = new QLabel(AirConditioner);
        lblAirconditionerC1->setObjectName(QString::fromUtf8("lblAirconditionerC1"));
        lblAirconditionerC1->setGeometry(QRect(386, 221, 30, 30));
        lblAirconditionerC1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/airConditionerRun.png);"));
        lblAirconditionerC1->setAlignment(Qt::AlignCenter);
        lblAirconditionerD1 = new QLabel(AirConditioner);
        lblAirconditionerD1->setObjectName(QString::fromUtf8("lblAirconditionerD1"));
        lblAirconditionerD1->setGeometry(QRect(476, 221, 30, 30));
        lblAirconditionerD1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/airConditionerRun.png);"));
        lblAirconditionerD1->setAlignment(Qt::AlignCenter);
        lblAirconditionerD2 = new QLabel(AirConditioner);
        lblAirconditionerD2->setObjectName(QString::fromUtf8("lblAirconditionerD2"));
        lblAirconditionerD2->setGeometry(QRect(566, 221, 30, 30));
        lblAirconditionerD2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/airConditionerRun.png);"));
        lblAirconditionerD2->setAlignment(Qt::AlignCenter);
        lblAirconditionerC2 = new QLabel(AirConditioner);
        lblAirconditionerC2->setObjectName(QString::fromUtf8("lblAirconditionerC2"));
        lblAirconditionerC2->setGeometry(QRect(654, 221, 30, 30));
        lblAirconditionerC2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/airConditionerRun.png);"));
        lblAirconditionerC2->setAlignment(Qt::AlignCenter);
        lblAirconditionerB2 = new QLabel(AirConditioner);
        lblAirconditionerB2->setObjectName(QString::fromUtf8("lblAirconditionerB2"));
        lblAirconditionerB2->setGeometry(QRect(743, 221, 30, 30));
        lblAirconditionerB2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/airConditionerRun.png);"));
        lblAirconditionerB2->setAlignment(Qt::AlignCenter);
        lblAirconditionerA2 = new QLabel(AirConditioner);
        lblAirconditionerA2->setObjectName(QString::fromUtf8("lblAirconditionerA2"));
        lblAirconditionerA2->setGeometry(QRect(830, 221, 30, 30));
        lblAirconditionerA2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/airConditionerRun.png);"));
        lblAirconditionerA2->setAlignment(Qt::AlignCenter);
        btnTemperatureSet = new QPushButton(AirConditioner);
        btnTemperatureSet->setObjectName(QString::fromUtf8("btnTemperatureSet"));
        btnTemperatureSet->setGeometry(QRect(940, 40, 71, 61));
        btnModeSet = new QPushButton(AirConditioner);
        btnModeSet->setObjectName(QString::fromUtf8("btnModeSet"));
        btnModeSet->setGeometry(QRect(940, 120, 71, 61));
        label_106 = new QLabel(AirConditioner);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(8, 340, 883, 231));
        label_106->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_106->setAlignment(Qt::AlignCenter);
        btnA001 = new QPushButton(AirConditioner);
        btnA001->setObjectName(QString::fromUtf8("btnA001"));
        btnA001->setGeometry(QRect(40, 360, 85, 41));
        btnB001 = new QPushButton(AirConditioner);
        btnB001->setObjectName(QString::fromUtf8("btnB001"));
        btnB001->setGeometry(QRect(130, 360, 85, 41));
        btnC001 = new QPushButton(AirConditioner);
        btnC001->setObjectName(QString::fromUtf8("btnC001"));
        btnC001->setGeometry(QRect(220, 360, 85, 41));
        btnD001 = new QPushButton(AirConditioner);
        btnD001->setObjectName(QString::fromUtf8("btnD001"));
        btnD001->setGeometry(QRect(310, 360, 85, 41));
        btnD002 = new QPushButton(AirConditioner);
        btnD002->setObjectName(QString::fromUtf8("btnD002"));
        btnD002->setGeometry(QRect(400, 360, 85, 41));
        btnC002 = new QPushButton(AirConditioner);
        btnC002->setObjectName(QString::fromUtf8("btnC002"));
        btnC002->setGeometry(QRect(490, 360, 85, 41));
        btnB002 = new QPushButton(AirConditioner);
        btnB002->setObjectName(QString::fromUtf8("btnB002"));
        btnB002->setGeometry(QRect(580, 360, 85, 41));
        btnA002 = new QPushButton(AirConditioner);
        btnA002->setObjectName(QString::fromUtf8("btnA002"));
        btnA002->setGeometry(QRect(670, 360, 85, 41));
        btnAll = new QPushButton(AirConditioner);
        btnAll->setObjectName(QString::fromUtf8("btnAll"));
        btnAll->setGeometry(QRect(760, 360, 85, 41));
        btnSetting = new QPushButton(AirConditioner);
        btnSetting->setObjectName(QString::fromUtf8("btnSetting"));
        btnSetting->setGeometry(QRect(760, 510, 85, 41));
        btnSetting->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color:black;\n"
"	border:1px solid white;\n"
"}"));
        btnTemperatureUp = new QPushButton(AirConditioner);
        btnTemperatureUp->setObjectName(QString::fromUtf8("btnTemperatureUp"));
        btnTemperatureUp->setGeometry(QRect(130, 440, 85, 41));
        btnTemperatureUp->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnTemperatureDown = new QPushButton(AirConditioner);
        btnTemperatureDown->setObjectName(QString::fromUtf8("btnTemperatureDown"));
        btnTemperatureDown->setGeometry(QRect(220, 440, 85, 41));
        btnTemperatureDown->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        lblSettedTemperature = new QLabel(AirConditioner);
        lblSettedTemperature->setObjectName(QString::fromUtf8("lblSettedTemperature"));
        lblSettedTemperature->setGeometry(QRect(40, 440, 85, 40));
        lblSettedTemperature->setStyleSheet(QString::fromUtf8("font: 35px \"Digital-7\";"));
        lblSettedTemperature->setAlignment(Qt::AlignCenter);
        btnAutoCool = new QPushButton(AirConditioner);
        btnAutoCool->setObjectName(QString::fromUtf8("btnAutoCool"));
        btnAutoCool->setGeometry(QRect(40, 440, 85, 41));
        btnAutoCool->setStyleSheet(QString::fromUtf8(""));
        btnManualCool = new QPushButton(AirConditioner);
        btnManualCool->setObjectName(QString::fromUtf8("btnManualCool"));
        btnManualCool->setGeometry(QRect(130, 440, 85, 41));
        btnManualCool->setStyleSheet(QString::fromUtf8(""));
        btnExitPreCool = new QPushButton(AirConditioner);
        btnExitPreCool->setObjectName(QString::fromUtf8("btnExitPreCool"));
        btnExitPreCool->setGeometry(QRect(130, 510, 85, 41));
        btnExitPreCool->setStyleSheet(QString::fromUtf8(""));
        btnEmergency = new QPushButton(AirConditioner);
        btnEmergency->setObjectName(QString::fromUtf8("btnEmergency"));
        btnEmergency->setGeometry(QRect(220, 440, 85, 41));
        btnEmergency->setStyleSheet(QString::fromUtf8(""));
        label_107 = new QLabel(AirConditioner);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(930, 0, 2, 600));
        label_107->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: white;"));
        label_107->setAlignment(Qt::AlignCenter);
        btnAuto = new QPushButton(AirConditioner);
        btnAuto->setObjectName(QString::fromUtf8("btnAuto"));
        btnAuto->setGeometry(QRect(310, 440, 85, 41));
        btnAuto->setStyleSheet(QString::fromUtf8(""));
        btnFireMode = new QPushButton(AirConditioner);
        btnFireMode->setObjectName(QString::fromUtf8("btnFireMode"));
        btnFireMode->setGeometry(QRect(40, 510, 85, 41));
        btnFireMode->setStyleSheet(QString::fromUtf8(""));
        btnVentilate = new QPushButton(AirConditioner);
        btnVentilate->setObjectName(QString::fromUtf8("btnVentilate"));
        btnVentilate->setGeometry(QRect(400, 440, 85, 41));
        btnVentilate->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(AirConditioner);

        QMetaObject::connectSlotsByName(AirConditioner);
    } // setupUi

    void retranslateUi(QWidget *AirConditioner)
    {
        AirConditioner->setWindowTitle(QApplication::translate("AirConditioner", "Form", 0, QApplication::UnicodeUTF8));
        lblIndoorTemperatureA1->setText(QString());
        label_61->setText(QString());
        lblIndoorTemperatureD1->setText(QString());
        lblTargetTemperatureA1->setText(QString());
        lblTargetTemperatureC1->setText(QString());
        lblOutdoorTemperatureD2->setText(QString());
        label_31->setText(QApplication::translate("AirConditioner", "\347\251\272\350\260\203\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        lblTargetTemperatureA2->setText(QString());
        lblIndoorTemperatureA2->setText(QString());
        lblTargetTemperatureB2->setText(QString());
        label_70->setText(QString());
        label_57->setText(QString());
        lblOutdoorTemperatureD1->setText(QString());
        label_20->setText(QApplication::translate("AirConditioner", "\345\256\244\345\206\205\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        lblIndoorTemperatureC1->setText(QString());
        lblOutdoorTemperatureA1->setText(QString());
        lblOutdoorTemperatureC2->setText(QString());
        lblOutdoorTemperatureB2->setText(QString());
        lblTargetTemperatureD1->setText(QString());
        label_62->setText(QString());
        label_63->setText(QString());
        label_32->setText(QApplication::translate("AirConditioner", "\347\251\272\350\260\203\345\216\213\347\274\251\346\234\272\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        lblIndoorTemperatureB1->setText(QString());
        label_64->setText(QString());
        lblOutdoorTemperatureB1->setText(QString());
        label_65->setText(QString());
        lblIndoorTemperatureC2->setText(QString());
        label_60->setText(QString());
        label_67->setText(QString());
        lblTargetTemperatureD2->setText(QString());
        label_69->setText(QString());
        lblOutdoorTemperatureA2->setText(QString());
        label_56->setText(QString());
        lblIndoorTemperatureD2->setText(QString());
        lblIndoorTemperatureB2->setText(QString());
        lblTargetTemperatureC2->setText(QString());
        label_30->setText(QApplication::translate("AirConditioner", "\347\251\272\350\260\203\347\233\256\346\240\207\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_71->setText(QString());
        label_68->setText(QString());
        lblTargetTemperatureB1->setText(QString());
        label_58->setText(QString());
        label_59->setText(QString());
        lblOutdoorTemperatureC1->setText(QString());
        label_29->setText(QApplication::translate("AirConditioner", "\345\256\244\345\244\226\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_66->setText(QString());
        lblCompressor1A1->setText(QApplication::translate("AirConditioner", "1", 0, QApplication::UnicodeUTF8));
        lblCompressor2A1->setText(QApplication::translate("AirConditioner", "2", 0, QApplication::UnicodeUTF8));
        lblCompressor3A1->setText(QApplication::translate("AirConditioner", "3", 0, QApplication::UnicodeUTF8));
        lblCompressor4A1->setText(QApplication::translate("AirConditioner", "4", 0, QApplication::UnicodeUTF8));
        lblCompressor1B1->setText(QApplication::translate("AirConditioner", "1", 0, QApplication::UnicodeUTF8));
        lblCompressor4B1->setText(QApplication::translate("AirConditioner", "4", 0, QApplication::UnicodeUTF8));
        lblCompressor3B1->setText(QApplication::translate("AirConditioner", "3", 0, QApplication::UnicodeUTF8));
        lblCompressor2B1->setText(QApplication::translate("AirConditioner", "2", 0, QApplication::UnicodeUTF8));
        lblCompressor1C1->setText(QApplication::translate("AirConditioner", "1", 0, QApplication::UnicodeUTF8));
        lblCompressor4C1->setText(QApplication::translate("AirConditioner", "4", 0, QApplication::UnicodeUTF8));
        lblCompressor3C1->setText(QApplication::translate("AirConditioner", "3", 0, QApplication::UnicodeUTF8));
        lblCompressor2C1->setText(QApplication::translate("AirConditioner", "2", 0, QApplication::UnicodeUTF8));
        lblCompressor1D1->setText(QApplication::translate("AirConditioner", "1", 0, QApplication::UnicodeUTF8));
        lblCompressor4D1->setText(QApplication::translate("AirConditioner", "4", 0, QApplication::UnicodeUTF8));
        lblCompressor3D1->setText(QApplication::translate("AirConditioner", "3", 0, QApplication::UnicodeUTF8));
        lblCompressor2D1->setText(QApplication::translate("AirConditioner", "2", 0, QApplication::UnicodeUTF8));
        lblCompressor4D2->setText(QApplication::translate("AirConditioner", "4", 0, QApplication::UnicodeUTF8));
        lblCompressor1D2->setText(QApplication::translate("AirConditioner", "1", 0, QApplication::UnicodeUTF8));
        lblCompressor2D2->setText(QApplication::translate("AirConditioner", "2", 0, QApplication::UnicodeUTF8));
        lblCompressor3D2->setText(QApplication::translate("AirConditioner", "3", 0, QApplication::UnicodeUTF8));
        lblCompressor4B2->setText(QApplication::translate("AirConditioner", "4", 0, QApplication::UnicodeUTF8));
        lblCompressor3B2->setText(QApplication::translate("AirConditioner", "3", 0, QApplication::UnicodeUTF8));
        lblCompressor1B2->setText(QApplication::translate("AirConditioner", "1", 0, QApplication::UnicodeUTF8));
        lblCompressor2B2->setText(QApplication::translate("AirConditioner", "2", 0, QApplication::UnicodeUTF8));
        lblCompressor4C2->setText(QApplication::translate("AirConditioner", "4", 0, QApplication::UnicodeUTF8));
        lblCompressor3C2->setText(QApplication::translate("AirConditioner", "3", 0, QApplication::UnicodeUTF8));
        lblCompressor1C2->setText(QApplication::translate("AirConditioner", "1", 0, QApplication::UnicodeUTF8));
        lblCompressor2C2->setText(QApplication::translate("AirConditioner", "2", 0, QApplication::UnicodeUTF8));
        lblCompressor4A2->setText(QApplication::translate("AirConditioner", "4", 0, QApplication::UnicodeUTF8));
        lblCompressor3A2->setText(QApplication::translate("AirConditioner", "3", 0, QApplication::UnicodeUTF8));
        lblCompressor1A2->setText(QApplication::translate("AirConditioner", "1", 0, QApplication::UnicodeUTF8));
        lblCompressor2A2->setText(QApplication::translate("AirConditioner", "2", 0, QApplication::UnicodeUTF8));
        lblAirconditionerA1->setText(QString());
        lblAirconditionerB1->setText(QString());
        lblAirconditionerC1->setText(QString());
        lblAirconditionerD1->setText(QString());
        lblAirconditionerD2->setText(QString());
        lblAirconditionerC2->setText(QString());
        lblAirconditionerB2->setText(QString());
        lblAirconditionerA2->setText(QString());
        btnTemperatureSet->setText(QApplication::translate("AirConditioner", "\346\270\251\345\272\246\n"
"\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnModeSet->setText(QApplication::translate("AirConditioner", "\346\250\241\345\274\217\n"
"\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        label_106->setText(QString());
        btnA001->setText(QApplication::translate("AirConditioner", "A1", 0, QApplication::UnicodeUTF8));
        btnB001->setText(QApplication::translate("AirConditioner", "B1", 0, QApplication::UnicodeUTF8));
        btnC001->setText(QApplication::translate("AirConditioner", "C1", 0, QApplication::UnicodeUTF8));
        btnD001->setText(QApplication::translate("AirConditioner", "D1", 0, QApplication::UnicodeUTF8));
        btnD002->setText(QApplication::translate("AirConditioner", "D2", 0, QApplication::UnicodeUTF8));
        btnC002->setText(QApplication::translate("AirConditioner", "C2", 0, QApplication::UnicodeUTF8));
        btnB002->setText(QApplication::translate("AirConditioner", "B2", 0, QApplication::UnicodeUTF8));
        btnA002->setText(QApplication::translate("AirConditioner", "A2", 0, QApplication::UnicodeUTF8));
        btnAll->setText(QApplication::translate("AirConditioner", "\346\225\264\350\275\246", 0, QApplication::UnicodeUTF8));
        btnSetting->setText(QApplication::translate("AirConditioner", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnTemperatureUp->setText(QApplication::translate("AirConditioner", "\342\226\262", 0, QApplication::UnicodeUTF8));
        btnTemperatureDown->setText(QApplication::translate("AirConditioner", "\342\226\274", 0, QApplication::UnicodeUTF8));
        lblSettedTemperature->setText(QApplication::translate("AirConditioner", "23", 0, QApplication::UnicodeUTF8));
        btnAutoCool->setText(QApplication::translate("AirConditioner", "\350\207\252\345\212\250\345\206\267", 0, QApplication::UnicodeUTF8));
        btnManualCool->setText(QApplication::translate("AirConditioner", "\346\211\213\345\212\250\345\206\267", 0, QApplication::UnicodeUTF8));
        btnExitPreCool->setText(QApplication::translate("AirConditioner", "\351\200\200\345\207\272\351\242\204\345\206\267", 0, QApplication::UnicodeUTF8));
        btnEmergency->setText(QApplication::translate("AirConditioner", "\347\264\247\346\200\245\351\200\232\351\243\216", 0, QApplication::UnicodeUTF8));
        label_107->setText(QString());
        btnAuto->setText(QApplication::translate("AirConditioner", "\345\205\250\350\207\252\345\212\250", 0, QApplication::UnicodeUTF8));
        btnFireMode->setText(QApplication::translate("AirConditioner", "\347\201\253\347\201\276\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnVentilate->setText(QApplication::translate("AirConditioner", "\351\200\232\351\243\216", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AirConditioner: public Ui_AirConditioner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRCONDITIONER_H
