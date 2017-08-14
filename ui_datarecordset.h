/********************************************************************************
** Form generated from reading UI file 'datarecordset.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATARECORDSET_H
#define UI_DATARECORDSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataRecordSet
{
public:
    QPushButton *btnMileageSet;
    QPushButton *btnCompressor1Set;
    QPushButton *btnCompressor2Set;
    QPushButton *btnConsumptionSet;
    QPushButton *btnRecordTimeSet;
    QPushButton *btnRecordDistanceSet;
    QPushButton *btnSivConsumptionSet;
    QPushButton *btnTractionConsumptionSet;
    QPushButton *btnBrakeConsuptionSet;
    QPushButton *btnRegeneratePowerSet;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_41;
    QLabel *label_42;
    QPushButton *btnMileage;
    QPushButton *btnCompressor1;
    QPushButton *btnCompressor2;
    QPushButton *btnConsumption;
    QPushButton *btnTotalTime;
    QPushButton *btnTotalMileage;
    QPushButton *btnSivConsumption;
    QPushButton *btnTractionConsumption;
    QPushButton *btnBrakeConsuption;
    QPushButton *btnRegeneratePower;
    QLabel *lblErrorTip;

    void setupUi(QWidget *DataRecordSet)
    {
        if (DataRecordSet->objectName().isEmpty())
            DataRecordSet->setObjectName(QString::fromUtf8("DataRecordSet"));
        DataRecordSet->resize(1024, 600);
        DataRecordSet->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"}"));
        btnMileageSet = new QPushButton(DataRecordSet);
        btnMileageSet->setObjectName(QString::fromUtf8("btnMileageSet"));
        btnMileageSet->setGeometry(QRect(450, 47, 85, 41));
        btnMileageSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnCompressor1Set = new QPushButton(DataRecordSet);
        btnCompressor1Set->setObjectName(QString::fromUtf8("btnCompressor1Set"));
        btnCompressor1Set->setGeometry(QRect(450, 107, 85, 41));
        btnCompressor1Set->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnCompressor2Set = new QPushButton(DataRecordSet);
        btnCompressor2Set->setObjectName(QString::fromUtf8("btnCompressor2Set"));
        btnCompressor2Set->setGeometry(QRect(450, 167, 85, 41));
        btnCompressor2Set->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnConsumptionSet = new QPushButton(DataRecordSet);
        btnConsumptionSet->setObjectName(QString::fromUtf8("btnConsumptionSet"));
        btnConsumptionSet->setGeometry(QRect(450, 227, 85, 41));
        btnConsumptionSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnRecordTimeSet = new QPushButton(DataRecordSet);
        btnRecordTimeSet->setObjectName(QString::fromUtf8("btnRecordTimeSet"));
        btnRecordTimeSet->setGeometry(QRect(450, 317, 85, 41));
        btnRecordTimeSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnRecordDistanceSet = new QPushButton(DataRecordSet);
        btnRecordDistanceSet->setObjectName(QString::fromUtf8("btnRecordDistanceSet"));
        btnRecordDistanceSet->setGeometry(QRect(450, 377, 85, 41));
        btnRecordDistanceSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnSivConsumptionSet = new QPushButton(DataRecordSet);
        btnSivConsumptionSet->setObjectName(QString::fromUtf8("btnSivConsumptionSet"));
        btnSivConsumptionSet->setGeometry(QRect(870, 47, 85, 41));
        btnSivConsumptionSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnTractionConsumptionSet = new QPushButton(DataRecordSet);
        btnTractionConsumptionSet->setObjectName(QString::fromUtf8("btnTractionConsumptionSet"));
        btnTractionConsumptionSet->setGeometry(QRect(870, 107, 85, 41));
        btnTractionConsumptionSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnBrakeConsuptionSet = new QPushButton(DataRecordSet);
        btnBrakeConsuptionSet->setObjectName(QString::fromUtf8("btnBrakeConsuptionSet"));
        btnBrakeConsuptionSet->setGeometry(QRect(870, 167, 85, 41));
        btnBrakeConsuptionSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnRegeneratePowerSet = new QPushButton(DataRecordSet);
        btnRegeneratePowerSet->setObjectName(QString::fromUtf8("btnRegeneratePowerSet"));
        btnRegeneratePowerSet->setGeometry(QRect(870, 227, 85, 41));
        btnRegeneratePowerSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        label_37 = new QLabel(DataRecordSet);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(180, 47, 91, 40));
        label_37->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_37->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(DataRecordSet);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(80, 99, 191, 51));
        label_38->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_38->setAlignment(Qt::AlignCenter);
        label_39 = new QLabel(DataRecordSet);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(80, 160, 191, 51));
        label_39->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_39->setAlignment(Qt::AlignCenter);
        label_40 = new QLabel(DataRecordSet);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(180, 227, 91, 40));
        label_40->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_40->setAlignment(Qt::AlignCenter);
        label_43 = new QLabel(DataRecordSet);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(600, 47, 91, 40));
        label_43->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_43->setAlignment(Qt::AlignCenter);
        label_44 = new QLabel(DataRecordSet);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(600, 107, 91, 40));
        label_44->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_44->setAlignment(Qt::AlignCenter);
        label_45 = new QLabel(DataRecordSet);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(570, 167, 121, 40));
        label_45->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_45->setAlignment(Qt::AlignCenter);
        label_46 = new QLabel(DataRecordSet);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(600, 227, 91, 40));
        label_46->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_46->setAlignment(Qt::AlignCenter);
        label_41 = new QLabel(DataRecordSet);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(60, 309, 221, 51));
        label_41->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_41->setAlignment(Qt::AlignCenter);
        label_42 = new QLabel(DataRecordSet);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(60, 370, 221, 51));
        label_42->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_42->setAlignment(Qt::AlignCenter);
        btnMileage = new QPushButton(DataRecordSet);
        btnMileage->setObjectName(QString::fromUtf8("btnMileage"));
        btnMileage->setGeometry(QRect(290, 47, 150, 40));
        btnMileage->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 0, 255);\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnCompressor1 = new QPushButton(DataRecordSet);
        btnCompressor1->setObjectName(QString::fromUtf8("btnCompressor1"));
        btnCompressor1->setGeometry(QRect(290, 107, 150, 40));
        btnCompressor1->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnCompressor2 = new QPushButton(DataRecordSet);
        btnCompressor2->setObjectName(QString::fromUtf8("btnCompressor2"));
        btnCompressor2->setGeometry(QRect(290, 167, 150, 40));
        btnCompressor2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnConsumption = new QPushButton(DataRecordSet);
        btnConsumption->setObjectName(QString::fromUtf8("btnConsumption"));
        btnConsumption->setGeometry(QRect(290, 227, 150, 40));
        btnConsumption->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnTotalTime = new QPushButton(DataRecordSet);
        btnTotalTime->setObjectName(QString::fromUtf8("btnTotalTime"));
        btnTotalTime->setGeometry(QRect(290, 317, 150, 40));
        btnTotalTime->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnTotalMileage = new QPushButton(DataRecordSet);
        btnTotalMileage->setObjectName(QString::fromUtf8("btnTotalMileage"));
        btnTotalMileage->setGeometry(QRect(290, 377, 150, 40));
        btnTotalMileage->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnSivConsumption = new QPushButton(DataRecordSet);
        btnSivConsumption->setObjectName(QString::fromUtf8("btnSivConsumption"));
        btnSivConsumption->setGeometry(QRect(710, 47, 150, 40));
        btnSivConsumption->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnTractionConsumption = new QPushButton(DataRecordSet);
        btnTractionConsumption->setObjectName(QString::fromUtf8("btnTractionConsumption"));
        btnTractionConsumption->setGeometry(QRect(710, 107, 150, 40));
        btnTractionConsumption->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnBrakeConsuption = new QPushButton(DataRecordSet);
        btnBrakeConsuption->setObjectName(QString::fromUtf8("btnBrakeConsuption"));
        btnBrakeConsuption->setGeometry(QRect(710, 167, 150, 40));
        btnBrakeConsuption->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        btnRegeneratePower = new QPushButton(DataRecordSet);
        btnRegeneratePower->setObjectName(QString::fromUtf8("btnRegeneratePower"));
        btnRegeneratePower->setGeometry(QRect(710, 227, 150, 40));
        btnRegeneratePower->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 2px;"));
        lblErrorTip = new QLabel(DataRecordSet);
        lblErrorTip->setObjectName(QString::fromUtf8("lblErrorTip"));
        lblErrorTip->setGeometry(QRect(390, 430, 331, 51));
        lblErrorTip->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"color: red;"));
        lblErrorTip->setAlignment(Qt::AlignCenter);

        retranslateUi(DataRecordSet);

        QMetaObject::connectSlotsByName(DataRecordSet);
    } // setupUi

    void retranslateUi(QWidget *DataRecordSet)
    {
        DataRecordSet->setWindowTitle(QApplication::translate("DataRecordSet", "Form", 0, QApplication::UnicodeUTF8));
        btnMileageSet->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCompressor1Set->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCompressor2Set->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnConsumptionSet->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnRecordTimeSet->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnRecordDistanceSet->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnSivConsumptionSet->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnTractionConsumptionSet->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnBrakeConsuptionSet->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnRegeneratePowerSet->setText(QApplication::translate("DataRecordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("DataRecordSet", "\351\207\214\347\250\213", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("DataRecordSet", "1\345\215\225\345\205\203\345\216\213\347\274\251\346\234\272\345\267\245\344\275\234\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("DataRecordSet", "2\345\215\225\345\205\203\345\216\213\347\274\251\346\234\272\345\267\245\344\275\234\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("DataRecordSet", "\346\200\273\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("DataRecordSet", "\350\276\205\345\212\251\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("DataRecordSet", "\347\211\265\345\274\225\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("DataRecordSet", "\347\224\265\351\230\273\345\210\266\345\212\250\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("DataRecordSet", "\345\206\215\347\224\237\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("DataRecordSet", "\346\234\200\350\277\221\350\277\220\350\241\214\350\256\241\346\225\260\346\227\266\351\227\264\357\274\210H\357\274\211", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("DataRecordSet", "\346\234\200\350\277\221\350\277\220\350\241\214\350\256\241\346\225\260\351\207\214\347\250\213\357\274\210Km\357\274\211", 0, QApplication::UnicodeUTF8));
        btnMileage->setText(QString());
        btnCompressor1->setText(QString());
        btnCompressor2->setText(QString());
        btnConsumption->setText(QString());
        btnTotalTime->setText(QString());
        btnTotalMileage->setText(QString());
        btnSivConsumption->setText(QString());
        btnTractionConsumption->setText(QString());
        btnBrakeConsuption->setText(QString());
        btnRegeneratePower->setText(QString());
        lblErrorTip->setText(QApplication::translate("DataRecordSet", "\346\225\260\346\215\256\350\276\223\345\205\245\351\224\231\350\257\257\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\357\274\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DataRecordSet: public Ui_DataRecordSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATARECORDSET_H
