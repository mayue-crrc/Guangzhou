/********************************************************************************
** Form generated from reading UI file 'vehiclelogo.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLELOGO_H
#define UI_VEHICLELOGO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleLogo
{
public:
    QLabel *lblC1;
    QLabel *lblD1;
    QLabel *lblRightHead2;
    QLabel *lblC2;
    QLabel *lblA2;
    QLabel *lblB1;
    QLabel *lblRightHead1;
    QLabel *lblA1;
    QLabel *lblD2;
    QLabel *lblB2;
    QLabel *lblLeftHead2;
    QLabel *lblLeftHead1;

    void setupUi(QWidget *VehicleLogo)
    {
        if (VehicleLogo->objectName().isEmpty())
            VehicleLogo->setObjectName(QString::fromUtf8("VehicleLogo"));
        VehicleLogo->resize(822, 81);
        VehicleLogo->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 0px groove, gray;\n"
"    border-color: gray;\n"
"	font: 23px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
"	background-color: rgb(133, 133, 198);\n"
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
        lblC1 = new QLabel(VehicleLogo);
        lblC1->setObjectName(QString::fromUtf8("lblC1"));
        lblC1->setGeometry(QRect(234, 10, 85, 61));
        lblC1->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblC1->setAlignment(Qt::AlignCenter);
        lblD1 = new QLabel(VehicleLogo);
        lblD1->setObjectName(QString::fromUtf8("lblD1"));
        lblD1->setGeometry(QRect(323, 10, 85, 61));
        lblD1->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblD1->setAlignment(Qt::AlignCenter);
        lblRightHead2 = new QLabel(VehicleLogo);
        lblRightHead2->setObjectName(QString::fromUtf8("lblRightHead2"));
        lblRightHead2->setGeometry(QRect(767, 10, 10, 61));
        lblRightHead2->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblRightHead2->setAlignment(Qt::AlignCenter);
        lblC2 = new QLabel(VehicleLogo);
        lblC2->setObjectName(QString::fromUtf8("lblC2"));
        lblC2->setGeometry(QRect(501, 10, 85, 61));
        lblC2->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblC2->setAlignment(Qt::AlignCenter);
        lblA2 = new QLabel(VehicleLogo);
        lblA2->setObjectName(QString::fromUtf8("lblA2"));
        lblA2->setGeometry(QRect(679, 10, 85, 61));
        lblA2->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblA2->setAlignment(Qt::AlignCenter);
        lblB1 = new QLabel(VehicleLogo);
        lblB1->setObjectName(QString::fromUtf8("lblB1"));
        lblB1->setGeometry(QRect(145, 10, 85, 61));
        lblB1->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblB1->setAlignment(Qt::AlignCenter);
        lblRightHead1 = new QLabel(VehicleLogo);
        lblRightHead1->setObjectName(QString::fromUtf8("lblRightHead1"));
        lblRightHead1->setGeometry(QRect(767, 10, 20, 61));
        lblRightHead1->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;\n"
"border-radius: 10px;"));
        lblRightHead1->setAlignment(Qt::AlignCenter);
        lblA1 = new QLabel(VehicleLogo);
        lblA1->setObjectName(QString::fromUtf8("lblA1"));
        lblA1->setGeometry(QRect(56, 10, 85, 61));
        lblA1->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblA1->setAlignment(Qt::AlignCenter);
        lblD2 = new QLabel(VehicleLogo);
        lblD2->setObjectName(QString::fromUtf8("lblD2"));
        lblD2->setGeometry(QRect(412, 10, 85, 61));
        lblD2->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblD2->setAlignment(Qt::AlignCenter);
        lblB2 = new QLabel(VehicleLogo);
        lblB2->setObjectName(QString::fromUtf8("lblB2"));
        lblB2->setGeometry(QRect(590, 10, 85, 61));
        lblB2->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblB2->setAlignment(Qt::AlignCenter);
        lblLeftHead2 = new QLabel(VehicleLogo);
        lblLeftHead2->setObjectName(QString::fromUtf8("lblLeftHead2"));
        lblLeftHead2->setGeometry(QRect(43, 10, 10, 61));
        lblLeftHead2->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;"));
        lblLeftHead2->setAlignment(Qt::AlignCenter);
        lblLeftHead1 = new QLabel(VehicleLogo);
        lblLeftHead1->setObjectName(QString::fromUtf8("lblLeftHead1"));
        lblLeftHead1->setGeometry(QRect(33, 10, 20, 61));
        lblLeftHead1->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"color: black;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 0px;\n"
"border-radius: 10px;"));
        lblLeftHead1->setAlignment(Qt::AlignCenter);
        lblLeftHead1->raise();
        lblC1->raise();
        lblD1->raise();
        lblRightHead2->raise();
        lblC2->raise();
        lblA2->raise();
        lblB1->raise();
        lblRightHead1->raise();
        lblA1->raise();
        lblD2->raise();
        lblB2->raise();
        lblLeftHead2->raise();

        retranslateUi(VehicleLogo);

        QMetaObject::connectSlotsByName(VehicleLogo);
    } // setupUi

    void retranslateUi(QWidget *VehicleLogo)
    {
        VehicleLogo->setWindowTitle(QApplication::translate("VehicleLogo", "Form", 0, QApplication::UnicodeUTF8));
        lblC1->setText(QString());
        lblD1->setText(QString());
        lblRightHead2->setText(QString());
        lblC2->setText(QString());
        lblA2->setText(QString());
        lblB1->setText(QString());
        lblRightHead1->setText(QString());
        lblA1->setText(QString());
        lblD2->setText(QString());
        lblB2->setText(QString());
        lblLeftHead2->setText(QString());
        lblLeftHead1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleLogo: public Ui_VehicleLogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLELOGO_H
