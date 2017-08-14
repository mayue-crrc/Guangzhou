/********************************************************************************
** Form generated from reading UI file 'vehiclenumberset.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLENUMBERSET_H
#define UI_VEHICLENUMBERSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleNumberSet
{
public:
    QPushButton *btnA1;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *lblOriginNumber;
    QLabel *lblNewNumber;
    QPushButton *btnB1;
    QPushButton *btnC1;
    QPushButton *btnD1;
    QPushButton *btnA2;
    QPushButton *btnB2;
    QPushButton *btnC2;
    QPushButton *btnD2;
    QLabel *lblWrong;

    void setupUi(QWidget *VehicleNumberSet)
    {
        if (VehicleNumberSet->objectName().isEmpty())
            VehicleNumberSet->setObjectName(QString::fromUtf8("VehicleNumberSet"));
        VehicleNumberSet->resize(1024, 600);
        VehicleNumberSet->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        btnA1 = new QPushButton(VehicleNumberSet);
        btnA1->setObjectName(QString::fromUtf8("btnA1"));
        btnA1->setGeometry(QRect(70, 140, 101, 41));
        label_37 = new QLabel(VehicleNumberSet);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(150, 290, 91, 40));
        label_37->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_37->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(VehicleNumberSet);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(150, 360, 91, 40));
        label_38->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_38->setAlignment(Qt::AlignCenter);
        lblOriginNumber = new QLabel(VehicleNumberSet);
        lblOriginNumber->setObjectName(QString::fromUtf8("lblOriginNumber"));
        lblOriginNumber->setGeometry(QRect(260, 290, 151, 40));
        lblOriginNumber->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        lblOriginNumber->setAlignment(Qt::AlignCenter);
        lblNewNumber = new QLabel(VehicleNumberSet);
        lblNewNumber->setObjectName(QString::fromUtf8("lblNewNumber"));
        lblNewNumber->setGeometry(QRect(260, 360, 151, 40));
        lblNewNumber->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: blue;"));
        lblNewNumber->setAlignment(Qt::AlignCenter);
        btnB1 = new QPushButton(VehicleNumberSet);
        btnB1->setObjectName(QString::fromUtf8("btnB1"));
        btnB1->setGeometry(QRect(180, 140, 101, 41));
        btnC1 = new QPushButton(VehicleNumberSet);
        btnC1->setObjectName(QString::fromUtf8("btnC1"));
        btnC1->setGeometry(QRect(290, 140, 101, 41));
        btnD1 = new QPushButton(VehicleNumberSet);
        btnD1->setObjectName(QString::fromUtf8("btnD1"));
        btnD1->setGeometry(QRect(400, 140, 101, 41));
        btnA2 = new QPushButton(VehicleNumberSet);
        btnA2->setObjectName(QString::fromUtf8("btnA2"));
        btnA2->setGeometry(QRect(70, 190, 101, 41));
        btnB2 = new QPushButton(VehicleNumberSet);
        btnB2->setObjectName(QString::fromUtf8("btnB2"));
        btnB2->setGeometry(QRect(180, 190, 101, 41));
        btnC2 = new QPushButton(VehicleNumberSet);
        btnC2->setObjectName(QString::fromUtf8("btnC2"));
        btnC2->setGeometry(QRect(290, 190, 101, 41));
        btnD2 = new QPushButton(VehicleNumberSet);
        btnD2->setObjectName(QString::fromUtf8("btnD2"));
        btnD2->setGeometry(QRect(400, 190, 101, 41));
        lblWrong = new QLabel(VehicleNumberSet);
        lblWrong->setObjectName(QString::fromUtf8("lblWrong"));
        lblWrong->setGeometry(QRect(130, 440, 301, 40));
        lblWrong->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"color: red;"));
        lblWrong->setAlignment(Qt::AlignCenter);

        retranslateUi(VehicleNumberSet);

        QMetaObject::connectSlotsByName(VehicleNumberSet);
    } // setupUi

    void retranslateUi(QWidget *VehicleNumberSet)
    {
        VehicleNumberSet->setWindowTitle(QApplication::translate("VehicleNumberSet", "Form", 0, QApplication::UnicodeUTF8));
        btnA1->setText(QApplication::translate("VehicleNumberSet", "A1", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("VehicleNumberSet", "\345\216\237\345\210\227\350\275\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("VehicleNumberSet", "\346\226\260\345\210\227\350\275\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        lblOriginNumber->setText(QString());
        lblNewNumber->setText(QString());
        btnB1->setText(QApplication::translate("VehicleNumberSet", "B1", 0, QApplication::UnicodeUTF8));
        btnC1->setText(QApplication::translate("VehicleNumberSet", "C1", 0, QApplication::UnicodeUTF8));
        btnD1->setText(QApplication::translate("VehicleNumberSet", "D1", 0, QApplication::UnicodeUTF8));
        btnA2->setText(QApplication::translate("VehicleNumberSet", "A2", 0, QApplication::UnicodeUTF8));
        btnB2->setText(QApplication::translate("VehicleNumberSet", "B2", 0, QApplication::UnicodeUTF8));
        btnC2->setText(QApplication::translate("VehicleNumberSet", "C2", 0, QApplication::UnicodeUTF8));
        btnD2->setText(QApplication::translate("VehicleNumberSet", "D2", 0, QApplication::UnicodeUTF8));
        lblWrong->setText(QApplication::translate("VehicleNumberSet", "\350\255\246\345\221\212\357\274\232\350\275\246\345\217\267\345\277\205\351\241\273\346\230\257\344\270\211\344\275\215\346\225\260\357\274\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleNumberSet: public Ui_VehicleNumberSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLENUMBERSET_H
