/********************************************************************************
** Form generated from reading UI file 'troubleshooting.ui'
**
** Created: Mon Jul 31 16:53:08 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TROUBLESHOOTING_H
#define UI_TROUBLESHOOTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TroubleShooting
{
public:
    QLabel *label_106;
    QLabel *label_107;
    QLabel *label_108;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *btnTimeSet;
    QPushButton *btnDiameterSet;
    QPushButton *btnVehicleNumber;
    QPushButton *btnVehicleTest;
    QPushButton *btnAccumulation;
    QPushButton *btnFaultRecord;
    QPushButton *btnMvbPort;
    QPushButton *btnVersion;
    QPushButton *btnIOUnit;
    QPushButton *btnDeviceState;
    QPushButton *btnNetwork;
    QPushButton *btnColorCheck;
    QPushButton *btnChangePassword;
    QPushButton *btnAllPorts;
    QPushButton *btnHmiPositionSet;
    QPushButton *btnBusState;
    QPushButton *btnLcu;

    void setupUi(QWidget *TroubleShooting)
    {
        if (TroubleShooting->objectName().isEmpty())
            TroubleShooting->setObjectName(QString::fromUtf8("TroubleShooting"));
        TroubleShooting->resize(1024, 600);
        TroubleShooting->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 23px, \"SimHei\";\n"
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
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        label_106 = new QLabel(TroubleShooting);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(20, 30, 981, 150));
        label_106->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_106->setAlignment(Qt::AlignCenter);
        label_107 = new QLabel(TroubleShooting);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(20, 220, 981, 150));
        label_107->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_107->setAlignment(Qt::AlignCenter);
        label_108 = new QLabel(TroubleShooting);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setGeometry(QRect(20, 420, 981, 150));
        label_108->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_108->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(TroubleShooting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 10, 131, 40));
        label_6->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(TroubleShooting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 200, 151, 40));
        label_7->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(TroubleShooting);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 400, 131, 40));
        label_8->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        label_8->setAlignment(Qt::AlignCenter);
        btnTimeSet = new QPushButton(TroubleShooting);
        btnTimeSet->setObjectName(QString::fromUtf8("btnTimeSet"));
        btnTimeSet->setGeometry(QRect(60, 85, 120, 45));
        btnDiameterSet = new QPushButton(TroubleShooting);
        btnDiameterSet->setObjectName(QString::fromUtf8("btnDiameterSet"));
        btnDiameterSet->setGeometry(QRect(190, 85, 120, 45));
        btnVehicleNumber = new QPushButton(TroubleShooting);
        btnVehicleNumber->setObjectName(QString::fromUtf8("btnVehicleNumber"));
        btnVehicleNumber->setGeometry(QRect(320, 85, 120, 45));
        btnVehicleTest = new QPushButton(TroubleShooting);
        btnVehicleTest->setObjectName(QString::fromUtf8("btnVehicleTest"));
        btnVehicleTest->setGeometry(QRect(450, 85, 120, 45));
        btnAccumulation = new QPushButton(TroubleShooting);
        btnAccumulation->setObjectName(QString::fromUtf8("btnAccumulation"));
        btnAccumulation->setGeometry(QRect(60, 280, 120, 45));
        btnFaultRecord = new QPushButton(TroubleShooting);
        btnFaultRecord->setObjectName(QString::fromUtf8("btnFaultRecord"));
        btnFaultRecord->setGeometry(QRect(190, 280, 120, 45));
        btnMvbPort = new QPushButton(TroubleShooting);
        btnMvbPort->setObjectName(QString::fromUtf8("btnMvbPort"));
        btnMvbPort->setGeometry(QRect(60, 480, 120, 45));
        btnVersion = new QPushButton(TroubleShooting);
        btnVersion->setObjectName(QString::fromUtf8("btnVersion"));
        btnVersion->setGeometry(QRect(190, 480, 120, 45));
        btnIOUnit = new QPushButton(TroubleShooting);
        btnIOUnit->setObjectName(QString::fromUtf8("btnIOUnit"));
        btnIOUnit->setGeometry(QRect(320, 480, 120, 45));
        btnDeviceState = new QPushButton(TroubleShooting);
        btnDeviceState->setObjectName(QString::fromUtf8("btnDeviceState"));
        btnDeviceState->setGeometry(QRect(450, 480, 120, 45));
        btnNetwork = new QPushButton(TroubleShooting);
        btnNetwork->setObjectName(QString::fromUtf8("btnNetwork"));
        btnNetwork->setGeometry(QRect(580, 480, 120, 45));
        btnColorCheck = new QPushButton(TroubleShooting);
        btnColorCheck->setObjectName(QString::fromUtf8("btnColorCheck"));
        btnColorCheck->setGeometry(QRect(710, 480, 120, 45));
        btnChangePassword = new QPushButton(TroubleShooting);
        btnChangePassword->setObjectName(QString::fromUtf8("btnChangePassword"));
        btnChangePassword->setGeometry(QRect(710, 85, 120, 45));
        btnAllPorts = new QPushButton(TroubleShooting);
        btnAllPorts->setObjectName(QString::fromUtf8("btnAllPorts"));
        btnAllPorts->setGeometry(QRect(710, 280, 120, 45));
        btnAllPorts->setFocusPolicy(Qt::NoFocus);
        btnAllPorts->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: black;\n"
"	border:1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"}"));
        btnHmiPositionSet = new QPushButton(TroubleShooting);
        btnHmiPositionSet->setObjectName(QString::fromUtf8("btnHmiPositionSet"));
        btnHmiPositionSet->setGeometry(QRect(580, 85, 120, 45));
        btnBusState = new QPushButton(TroubleShooting);
        btnBusState->setObjectName(QString::fromUtf8("btnBusState"));
        btnBusState->setGeometry(QRect(840, 280, 120, 45));
        btnBusState->setFocusPolicy(Qt::NoFocus);
        btnBusState->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: black;\n"
"	border:1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"}"));
        btnLcu = new QPushButton(TroubleShooting);
        btnLcu->setObjectName(QString::fromUtf8("btnLcu"));
        btnLcu->setGeometry(QRect(840, 480, 120, 45));

        retranslateUi(TroubleShooting);

        QMetaObject::connectSlotsByName(TroubleShooting);
    } // setupUi

    void retranslateUi(QWidget *TroubleShooting)
    {
        TroubleShooting->setWindowTitle(QApplication::translate("TroubleShooting", "Form", 0, QApplication::UnicodeUTF8));
        label_106->setText(QString());
        label_107->setText(QString());
        label_108->setText(QString());
        label_6->setText(QApplication::translate("TroubleShooting", "\350\256\276\345\256\232\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TroubleShooting", "\350\256\260\345\275\225\344\270\216\344\270\213\350\275\275\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TroubleShooting", "\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        btnTimeSet->setText(QApplication::translate("TroubleShooting", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        btnDiameterSet->setText(QApplication::translate("TroubleShooting", "\350\275\256\345\276\204", 0, QApplication::UnicodeUTF8));
        btnVehicleNumber->setText(QApplication::translate("TroubleShooting", "\350\275\246\345\217\267", 0, QApplication::UnicodeUTF8));
        btnVehicleTest->setText(QApplication::translate("TroubleShooting", "\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnAccumulation->setText(QApplication::translate("TroubleShooting", "\347\264\257\350\256\241\351\207\217", 0, QApplication::UnicodeUTF8));
        btnFaultRecord->setText(QApplication::translate("TroubleShooting", "\346\225\205\351\232\234\345\261\245\345\216\206", 0, QApplication::UnicodeUTF8));
        btnMvbPort->setText(QApplication::translate("TroubleShooting", "\347\253\257\345\217\243\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnVersion->setText(QApplication::translate("TroubleShooting", "\347\211\210\346\234\254", 0, QApplication::UnicodeUTF8));
        btnIOUnit->setText(QApplication::translate("TroubleShooting", "I / O", 0, QApplication::UnicodeUTF8));
        btnDeviceState->setText(QApplication::translate("TroubleShooting", "\347\212\266\346\200\201\345\217\202\346\225\260\346\230\216\347\273\206", 0, QApplication::UnicodeUTF8));
        btnNetwork->setText(QApplication::translate("TroubleShooting", "\347\275\221\347\273\234\351\200\232\350\256\257", 0, QApplication::UnicodeUTF8));
        btnColorCheck->setText(QApplication::translate("TroubleShooting", "\345\261\217\345\271\225\350\211\262\345\275\251", 0, QApplication::UnicodeUTF8));
        btnChangePassword->setText(QApplication::translate("TroubleShooting", "\345\257\206\347\240\201\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnAllPorts->setText(QApplication::translate("TroubleShooting", "\345\205\250\351\203\250\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        btnHmiPositionSet->setText(QApplication::translate("TroubleShooting", "\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        btnBusState->setText(QApplication::translate("TroubleShooting", "\346\200\273\347\272\277\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        btnLcu->setText(QApplication::translate("TroubleShooting", "LCU\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TroubleShooting: public Ui_TroubleShooting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TROUBLESHOOTING_H
