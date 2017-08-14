/********************************************************************************
** Form generated from reading UI file 'firealarm.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIREALARM_H
#define UI_FIREALARM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FireAlarm
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *lblfireAlarmA1;
    QLabel *lblfireAlarmB1;
    QLabel *lblfireAlarmC1;
    QLabel *lblfireAlarmD1;
    QLabel *lblfireAlarmD2;
    QLabel *lblfireAlarmC2;
    QLabel *lblfireAlarmB2;
    QLabel *lblfireAlarmA2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *btnSetting;
    QLabel *lblVehicleNumberA1;
    QLabel *lblVehicleNumberB1;
    QLabel *lblVehicleNumberC1;
    QLabel *lblVehicleNumberD1;
    QLabel *lblVehicleNumberD2;
    QLabel *lblVehicleNumberC2;
    QLabel *lblVehicleNumberB2;
    QLabel *lblVehicleNumberA2;
    QLabel *lblTip;

    void setupUi(QWidget *FireAlarm)
    {
        if (FireAlarm->objectName().isEmpty())
            FireAlarm->setObjectName(QString::fromUtf8("FireAlarm"));
        FireAlarm->resize(1024, 600);
        FireAlarm->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"    font: 20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	background-color: black;\n"
"}"));
        label = new QLabel(FireAlarm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 70, 121, 241));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 127);"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_2 = new QLabel(FireAlarm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 70, 121, 241));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 127);"));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3 = new QLabel(FireAlarm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 70, 121, 241));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 127);"));
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_4 = new QLabel(FireAlarm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 70, 121, 241));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 127);"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_5 = new QLabel(FireAlarm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(510, 70, 121, 241));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 127);"));
        label_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_6 = new QLabel(FireAlarm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(630, 70, 121, 241));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 127);"));
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_7 = new QLabel(FireAlarm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(750, 70, 121, 241));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 127);"));
        label_7->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_8 = new QLabel(FireAlarm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(870, 70, 121, 241));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 127);"));
        label_8->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lblfireAlarmA1 = new QLabel(FireAlarm);
        lblfireAlarmA1->setObjectName(QString::fromUtf8("lblfireAlarmA1"));
        lblfireAlarmA1->setGeometry(QRect(65, 190, 50, 50));
        lblfireAlarmA1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        lblfireAlarmB1 = new QLabel(FireAlarm);
        lblfireAlarmB1->setObjectName(QString::fromUtf8("lblfireAlarmB1"));
        lblfireAlarmB1->setGeometry(QRect(185, 190, 50, 50));
        lblfireAlarmB1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        lblfireAlarmC1 = new QLabel(FireAlarm);
        lblfireAlarmC1->setObjectName(QString::fromUtf8("lblfireAlarmC1"));
        lblfireAlarmC1->setGeometry(QRect(305, 190, 50, 50));
        lblfireAlarmC1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        lblfireAlarmD1 = new QLabel(FireAlarm);
        lblfireAlarmD1->setObjectName(QString::fromUtf8("lblfireAlarmD1"));
        lblfireAlarmD1->setGeometry(QRect(425, 190, 50, 50));
        lblfireAlarmD1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        lblfireAlarmD2 = new QLabel(FireAlarm);
        lblfireAlarmD2->setObjectName(QString::fromUtf8("lblfireAlarmD2"));
        lblfireAlarmD2->setGeometry(QRect(545, 190, 50, 50));
        lblfireAlarmD2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        lblfireAlarmC2 = new QLabel(FireAlarm);
        lblfireAlarmC2->setObjectName(QString::fromUtf8("lblfireAlarmC2"));
        lblfireAlarmC2->setGeometry(QRect(665, 190, 50, 50));
        lblfireAlarmC2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        lblfireAlarmB2 = new QLabel(FireAlarm);
        lblfireAlarmB2->setObjectName(QString::fromUtf8("lblfireAlarmB2"));
        lblfireAlarmB2->setGeometry(QRect(785, 190, 50, 50));
        lblfireAlarmB2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        lblfireAlarmA2 = new QLabel(FireAlarm);
        lblfireAlarmA2->setObjectName(QString::fromUtf8("lblfireAlarmA2"));
        lblfireAlarmA2->setGeometry(QRect(905, 190, 50, 50));
        lblfireAlarmA2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        label_17 = new QLabel(FireAlarm);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(40, 480, 50, 50));
        label_17->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOk.png);"));
        label_18 = new QLabel(FireAlarm);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(110, 480, 50, 50));
        label_18->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmWarning.png);"));
        label_19 = new QLabel(FireAlarm);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(180, 480, 50, 50));
        label_19->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmError.png);"));
        label_20 = new QLabel(FireAlarm);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(250, 480, 50, 50));
        label_20->setStyleSheet(QString::fromUtf8("border-image: url(:/images/fireAlarmOffLine.png);"));
        label_21 = new QLabel(FireAlarm);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(40, 540, 51, 41));
        label_21->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(FireAlarm);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(110, 540, 51, 41));
        label_22->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(FireAlarm);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(180, 540, 51, 41));
        label_23->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(FireAlarm);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(240, 540, 71, 41));
        label_24->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_24->setAlignment(Qt::AlignCenter);
        btnSetting = new QPushButton(FireAlarm);
        btnSetting->setObjectName(QString::fromUtf8("btnSetting"));
        btnSetting->setGeometry(QRect(824, 330, 161, 41));
        btnSetting->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:1px solid white;\n"
"}"));
        lblVehicleNumberA1 = new QLabel(FireAlarm);
        lblVehicleNumberA1->setObjectName(QString::fromUtf8("lblVehicleNumberA1"));
        lblVehicleNumberA1->setGeometry(QRect(30, 110, 121, 41));
        lblVehicleNumberA1->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: transparent;"));
        lblVehicleNumberA1->setAlignment(Qt::AlignCenter);
        lblVehicleNumberB1 = new QLabel(FireAlarm);
        lblVehicleNumberB1->setObjectName(QString::fromUtf8("lblVehicleNumberB1"));
        lblVehicleNumberB1->setGeometry(QRect(150, 110, 121, 41));
        lblVehicleNumberB1->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: transparent;"));
        lblVehicleNumberB1->setAlignment(Qt::AlignCenter);
        lblVehicleNumberC1 = new QLabel(FireAlarm);
        lblVehicleNumberC1->setObjectName(QString::fromUtf8("lblVehicleNumberC1"));
        lblVehicleNumberC1->setGeometry(QRect(270, 110, 121, 41));
        lblVehicleNumberC1->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: transparent;"));
        lblVehicleNumberC1->setAlignment(Qt::AlignCenter);
        lblVehicleNumberD1 = new QLabel(FireAlarm);
        lblVehicleNumberD1->setObjectName(QString::fromUtf8("lblVehicleNumberD1"));
        lblVehicleNumberD1->setGeometry(QRect(390, 110, 121, 41));
        lblVehicleNumberD1->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: transparent;"));
        lblVehicleNumberD1->setAlignment(Qt::AlignCenter);
        lblVehicleNumberD2 = new QLabel(FireAlarm);
        lblVehicleNumberD2->setObjectName(QString::fromUtf8("lblVehicleNumberD2"));
        lblVehicleNumberD2->setGeometry(QRect(510, 110, 121, 41));
        lblVehicleNumberD2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: transparent;"));
        lblVehicleNumberD2->setAlignment(Qt::AlignCenter);
        lblVehicleNumberC2 = new QLabel(FireAlarm);
        lblVehicleNumberC2->setObjectName(QString::fromUtf8("lblVehicleNumberC2"));
        lblVehicleNumberC2->setGeometry(QRect(630, 110, 121, 41));
        lblVehicleNumberC2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: transparent;"));
        lblVehicleNumberC2->setAlignment(Qt::AlignCenter);
        lblVehicleNumberB2 = new QLabel(FireAlarm);
        lblVehicleNumberB2->setObjectName(QString::fromUtf8("lblVehicleNumberB2"));
        lblVehicleNumberB2->setGeometry(QRect(750, 110, 121, 41));
        lblVehicleNumberB2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: transparent;"));
        lblVehicleNumberB2->setAlignment(Qt::AlignCenter);
        lblVehicleNumberA2 = new QLabel(FireAlarm);
        lblVehicleNumberA2->setObjectName(QString::fromUtf8("lblVehicleNumberA2"));
        lblVehicleNumberA2->setGeometry(QRect(870, 110, 121, 41));
        lblVehicleNumberA2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: transparent;"));
        lblVehicleNumberA2->setAlignment(Qt::AlignCenter);
        lblTip = new QLabel(FireAlarm);
        lblTip->setObjectName(QString::fromUtf8("lblTip"));
        lblTip->setGeometry(QRect(110, 400, 791, 40));
        lblTip->setStyleSheet(QString::fromUtf8("font: 20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: black;\n"
"border: 0px;\n"
"color: red;"));
        lblTip->setAlignment(Qt::AlignCenter);

        retranslateUi(FireAlarm);

        QMetaObject::connectSlotsByName(FireAlarm);
    } // setupUi

    void retranslateUi(QWidget *FireAlarm)
    {
        FireAlarm->setWindowTitle(QApplication::translate("FireAlarm", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        lblfireAlarmA1->setText(QString());
        lblfireAlarmB1->setText(QString());
        lblfireAlarmC1->setText(QString());
        lblfireAlarmD1->setText(QString());
        lblfireAlarmD2->setText(QString());
        lblfireAlarmC2->setText(QString());
        lblfireAlarmB2->setText(QString());
        lblfireAlarmA2->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QApplication::translate("FireAlarm", "\346\255\243\345\270\270", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("FireAlarm", "\347\201\253\350\255\246", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("FireAlarm", "\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("FireAlarm", "\351\200\232\350\256\257\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnSetting->setText(QApplication::translate("FireAlarm", "\346\225\264\350\275\246\347\201\253\347\201\276\351\207\215\345\220\257", 0, QApplication::UnicodeUTF8));
        lblVehicleNumberA1->setText(QApplication::translate("FireAlarm", "A001", 0, QApplication::UnicodeUTF8));
        lblVehicleNumberB1->setText(QApplication::translate("FireAlarm", "A001", 0, QApplication::UnicodeUTF8));
        lblVehicleNumberC1->setText(QApplication::translate("FireAlarm", "A001", 0, QApplication::UnicodeUTF8));
        lblVehicleNumberD1->setText(QApplication::translate("FireAlarm", "A001", 0, QApplication::UnicodeUTF8));
        lblVehicleNumberD2->setText(QApplication::translate("FireAlarm", "A001", 0, QApplication::UnicodeUTF8));
        lblVehicleNumberC2->setText(QApplication::translate("FireAlarm", "A001", 0, QApplication::UnicodeUTF8));
        lblVehicleNumberB2->setText(QApplication::translate("FireAlarm", "A001", 0, QApplication::UnicodeUTF8));
        lblVehicleNumberA2->setText(QApplication::translate("FireAlarm", "A001", 0, QApplication::UnicodeUTF8));
        lblTip->setText(QApplication::translate("FireAlarm", "   \350\257\267\345\234\250\345\217\270\346\234\272\345\256\244\345\215\240\346\234\211\346\235\241\344\273\266\344\270\213\357\274\214\346\211\247\350\241\214\346\225\264\350\275\246\347\201\253\347\201\276\351\207\215\345\220\257\346\214\207\344\273\244\357\274\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FireAlarm: public Ui_FireAlarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIREALARM_H
