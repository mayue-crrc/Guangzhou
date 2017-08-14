/********************************************************************************
** Form generated from reading UI file 'navigator.ui'
**
** Created: Fri Jul 28 15:13:39 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATOR_H
#define UI_NAVIGATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Navigator
{
public:
    QPushButton *btnVehicleState;
    QPushButton *btnVehicleParameter;
    QPushButton *btnAirConditioner;
    QPushButton *btnBypass;
    QPushButton *btnCase;
    QPushButton *btnFireAlarm;
    QPushButton *btnTroubleShooting;
    QLabel *label;
    QPushButton *btnLogo;

    void setupUi(QWidget *Navigator)
    {
        if (Navigator->objectName().isEmpty())
            Navigator->setObjectName(QString::fromUtf8("Navigator"));
        Navigator->resize(1024, 68);
        Navigator->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"    border:2px solid white; \n"
"	border-right-color: rgb(113, 113, 198);\n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        btnVehicleState = new QPushButton(Navigator);
        btnVehicleState->setObjectName(QString::fromUtf8("btnVehicleState"));
        btnVehicleState->setGeometry(QRect(260, 18, 100, 40));
        btnVehicleState->setFocusPolicy(Qt::NoFocus);
        btnVehicleParameter = new QPushButton(Navigator);
        btnVehicleParameter->setObjectName(QString::fromUtf8("btnVehicleParameter"));
        btnVehicleParameter->setGeometry(QRect(370, 18, 100, 40));
        btnVehicleParameter->setFocusPolicy(Qt::NoFocus);
        btnAirConditioner = new QPushButton(Navigator);
        btnAirConditioner->setObjectName(QString::fromUtf8("btnAirConditioner"));
        btnAirConditioner->setGeometry(QRect(480, 18, 100, 40));
        btnAirConditioner->setFocusPolicy(Qt::NoFocus);
        btnBypass = new QPushButton(Navigator);
        btnBypass->setObjectName(QString::fromUtf8("btnBypass"));
        btnBypass->setGeometry(QRect(590, 18, 100, 40));
        btnBypass->setFocusPolicy(Qt::NoFocus);
        btnCase = new QPushButton(Navigator);
        btnCase->setObjectName(QString::fromUtf8("btnCase"));
        btnCase->setGeometry(QRect(700, 18, 100, 40));
        btnCase->setFocusPolicy(Qt::NoFocus);
        btnFireAlarm = new QPushButton(Navigator);
        btnFireAlarm->setObjectName(QString::fromUtf8("btnFireAlarm"));
        btnFireAlarm->setGeometry(QRect(810, 18, 100, 40));
        btnFireAlarm->setFocusPolicy(Qt::NoFocus);
        btnTroubleShooting = new QPushButton(Navigator);
        btnTroubleShooting->setObjectName(QString::fromUtf8("btnTroubleShooting"));
        btnTroubleShooting->setGeometry(QRect(920, 18, 100, 40));
        btnTroubleShooting->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(Navigator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 2));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: white;\n"
"}"));
        btnLogo = new QPushButton(Navigator);
        btnLogo->setObjectName(QString::fromUtf8("btnLogo"));
        btnLogo->setGeometry(QRect(40, 2, 51, 65));
        btnLogo->setFocusPolicy(Qt::NoFocus);
        btnLogo->setStyleSheet(QString::fromUtf8("border-width: 0px;\n"
"border-image: url(:/images/logo.png);\n"
"background-color: black;\n"
""));

        retranslateUi(Navigator);

        QMetaObject::connectSlotsByName(Navigator);
    } // setupUi

    void retranslateUi(QWidget *Navigator)
    {
        Navigator->setWindowTitle(QApplication::translate("Navigator", "Form", 0, QApplication::UnicodeUTF8));
        btnVehicleState->setText(QApplication::translate("Navigator", "\350\275\246\350\276\206\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        btnVehicleParameter->setText(QApplication::translate("Navigator", "\350\275\246\350\276\206\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        btnAirConditioner->setText(QApplication::translate("Navigator", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        btnBypass->setText(QApplication::translate("Navigator", "\346\227\201\350\267\257\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btnCase->setText(QApplication::translate("Navigator", "\344\272\213\344\273\266", 0, QApplication::UnicodeUTF8));
        btnFireAlarm->setText(QApplication::translate("Navigator", "\347\203\237\347\201\253\346\212\245\350\255\246", 0, QApplication::UnicodeUTF8));
        btnTroubleShooting->setText(QApplication::translate("Navigator", "\346\243\200\344\277\256", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        btnLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Navigator: public Ui_Navigator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATOR_H
