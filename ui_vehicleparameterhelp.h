/********************************************************************************
** Form generated from reading UI file 'vehicleparameterhelp.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEPARAMETERHELP_H
#define UI_VEHICLEPARAMETERHELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleParameterHelp
{
public:
    QLabel *label_15;
    QLabel *label_2;
    QLabel *label_30;
    QLabel *label_29;
    QLabel *label_9;
    QLabel *label_106;

    void setupUi(QWidget *VehicleParameterHelp)
    {
        if (VehicleParameterHelp->objectName().isEmpty())
            VehicleParameterHelp->setObjectName(QString::fromUtf8("VehicleParameterHelp"));
        VehicleParameterHelp->resize(1024, 600);
        VehicleParameterHelp->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        label_15 = new QLabel(VehicleParameterHelp);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(381, 260, 71, 21));
        label_15->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_15->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(VehicleParameterHelp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(222, 228, 91, 50));
        label_2->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(VehicleParameterHelp);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(648, 220, 35, 35));
        label_30->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/garagePowerStop.png);"));
        label_30->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_29 = new QLabel(VehicleParameterHelp);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(640, 260, 51, 21));
        label_29->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_29->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(VehicleParameterHelp);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(400, 220, 35, 35));
        label_9->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/garagePowerRun.png);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_106 = new QLabel(VehicleParameterHelp);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(320, 210, 491, 81));
        label_106->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_106->setAlignment(Qt::AlignCenter);
        label_106->raise();
        label_15->raise();
        label_2->raise();
        label_30->raise();
        label_29->raise();
        label_9->raise();

        retranslateUi(VehicleParameterHelp);

        QMetaObject::connectSlotsByName(VehicleParameterHelp);
    } // setupUi

    void retranslateUi(QWidget *VehicleParameterHelp)
    {
        VehicleParameterHelp->setWindowTitle(QApplication::translate("VehicleParameterHelp", "Form", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("VehicleParameterHelp", "\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VehicleParameterHelp", "\345\272\223\347\224\250\347\224\265\346\272\220", 0, QApplication::UnicodeUTF8));
        label_30->setText(QString());
        label_29->setText(QApplication::translate("VehicleParameterHelp", "\344\270\215\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
        label_106->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleParameterHelp: public Ui_VehicleParameterHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEPARAMETERHELP_H
