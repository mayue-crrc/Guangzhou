/********************************************************************************
** Form generated from reading UI file 'devicestatenavigator.ui'
**
** Created: Thu Jun 16 19:43:49 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESTATENAVIGATOR_H
#define UI_DEVICESTATENAVIGATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceStateNavigator
{
public:
    QPushButton *btnTds;
    QPushButton *btnEdcuB;
    QPushButton *btnDcdc;
    QPushButton *btnPa;
    QPushButton *btnHvac;
    QPushButton *btnFau;
    QPushButton *btnDcu;
    QPushButton *btnSiv;
    QPushButton *btnBack;
    QPushButton *btnBcu;
    QPushButton *btnAtc;
    QLabel *label;

    void setupUi(QWidget *DeviceStateNavigator)
    {
        if (DeviceStateNavigator->objectName().isEmpty())
            DeviceStateNavigator->setObjectName(QString::fromUtf8("DeviceStateNavigator"));
        DeviceStateNavigator->resize(91, 490);
        DeviceStateNavigator->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"	border-radius: 5px;\n"
"}"));
        btnTds = new QPushButton(DeviceStateNavigator);
        btnTds->setObjectName(QString::fromUtf8("btnTds"));
        btnTds->setGeometry(QRect(10, 410, 71, 30));
        btnTds->setStyleSheet(QString::fromUtf8(""));
        btnEdcuB = new QPushButton(DeviceStateNavigator);
        btnEdcuB->setObjectName(QString::fromUtf8("btnEdcuB"));
        btnEdcuB->setGeometry(QRect(10, 170, 71, 30));
        btnEdcuB->setStyleSheet(QString::fromUtf8(""));
        btnDcdc = new QPushButton(DeviceStateNavigator);
        btnDcdc->setObjectName(QString::fromUtf8("btnDcdc"));
        btnDcdc->setGeometry(QRect(10, 90, 71, 30));
        btnDcdc->setStyleSheet(QString::fromUtf8(""));
        btnPa = new QPushButton(DeviceStateNavigator);
        btnPa->setObjectName(QString::fromUtf8("btnPa"));
        btnPa->setGeometry(QRect(10, 250, 71, 30));
        btnPa->setStyleSheet(QString::fromUtf8(""));
        btnHvac = new QPushButton(DeviceStateNavigator);
        btnHvac->setObjectName(QString::fromUtf8("btnHvac"));
        btnHvac->setGeometry(QRect(10, 290, 71, 30));
        btnHvac->setStyleSheet(QString::fromUtf8(""));
        btnFau = new QPushButton(DeviceStateNavigator);
        btnFau->setObjectName(QString::fromUtf8("btnFau"));
        btnFau->setGeometry(QRect(10, 210, 71, 30));
        btnFau->setStyleSheet(QString::fromUtf8(""));
        btnDcu = new QPushButton(DeviceStateNavigator);
        btnDcu->setObjectName(QString::fromUtf8("btnDcu"));
        btnDcu->setGeometry(QRect(10, 10, 71, 30));
        btnDcu->setStyleSheet(QString::fromUtf8(""));
        btnSiv = new QPushButton(DeviceStateNavigator);
        btnSiv->setObjectName(QString::fromUtf8("btnSiv"));
        btnSiv->setGeometry(QRect(10, 50, 71, 30));
        btnSiv->setStyleSheet(QString::fromUtf8(""));
        btnBack = new QPushButton(DeviceStateNavigator);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(10, 450, 71, 31));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}"));
        btnBcu = new QPushButton(DeviceStateNavigator);
        btnBcu->setObjectName(QString::fromUtf8("btnBcu"));
        btnBcu->setGeometry(QRect(10, 130, 71, 30));
        btnBcu->setStyleSheet(QString::fromUtf8(""));
        btnAtc = new QPushButton(DeviceStateNavigator);
        btnAtc->setObjectName(QString::fromUtf8("btnAtc"));
        btnAtc->setGeometry(QRect(10, 330, 71, 30));
        btnAtc->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(DeviceStateNavigator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 370, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8(",\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(DeviceStateNavigator);

        QMetaObject::connectSlotsByName(DeviceStateNavigator);
    } // setupUi

    void retranslateUi(QWidget *DeviceStateNavigator)
    {
        DeviceStateNavigator->setWindowTitle(QApplication::translate("DeviceStateNavigator", "Form", 0, QApplication::UnicodeUTF8));
        btnTds->setText(QApplication::translate("DeviceStateNavigator", "\342\226\274", 0, QApplication::UnicodeUTF8));
        btnEdcuB->setText(QApplication::translate("DeviceStateNavigator", "--", 0, QApplication::UnicodeUTF8));
        btnDcdc->setText(QApplication::translate("DeviceStateNavigator", "DCDC", 0, QApplication::UnicodeUTF8));
        btnPa->setText(QApplication::translate("DeviceStateNavigator", "--", 0, QApplication::UnicodeUTF8));
        btnHvac->setText(QApplication::translate("DeviceStateNavigator", "--", 0, QApplication::UnicodeUTF8));
        btnFau->setText(QApplication::translate("DeviceStateNavigator", "--", 0, QApplication::UnicodeUTF8));
        btnDcu->setText(QApplication::translate("DeviceStateNavigator", "DCU", 0, QApplication::UnicodeUTF8));
        btnSiv->setText(QApplication::translate("DeviceStateNavigator", "SIV", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("DeviceStateNavigator", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnBcu->setText(QApplication::translate("DeviceStateNavigator", "BCU", 0, QApplication::UnicodeUTF8));
        btnAtc->setText(QApplication::translate("DeviceStateNavigator", "\342\226\262", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DeviceStateNavigator", "1 / 1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeviceStateNavigator: public Ui_DeviceStateNavigator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESTATENAVIGATOR_H
