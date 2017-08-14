/********************************************************************************
** Form generated from reading UI file 'airconditionerhelp.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRCONDITIONERHELP_H
#define UI_AIRCONDITIONERHELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AirConditionerHelp
{
public:
    QLabel *label_11;
    QLabel *label_18;
    QLabel *label_16;
    QLabel *label_36;
    QLabel *label_21;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_26;
    QLabel *label_107;
    QLabel *label_19;
    QLabel *label_17;
    QLabel *label_3;
    QLabel *label_30;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_2;
    QLabel *label_106;
    QLabel *label_25;
    QLabel *label_27;
    QLabel *label_13;
    QLabel *label_12;

    void setupUi(QWidget *AirConditionerHelp)
    {
        if (AirConditionerHelp->objectName().isEmpty())
            AirConditionerHelp->setObjectName(QString::fromUtf8("AirConditionerHelp"));
        AirConditionerHelp->resize(1024, 600);
        AirConditionerHelp->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        label_11 = new QLabel(AirConditionerHelp);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(520, 170, 35, 35));
        label_11->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/airConditionerCool.png);"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_18 = new QLabel(AirConditionerHelp);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(572, 210, 51, 21));
        label_18->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_18->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(AirConditionerHelp);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(452, 210, 51, 21));
        label_16->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_16->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(AirConditionerHelp);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(321, 210, 71, 21));
        label_36->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_36->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(AirConditionerHelp);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(600, 300, 35, 35));
        label_21->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: gray;"));
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_37 = new QLabel(AirConditionerHelp);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(340, 170, 35, 35));
        label_37->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/airConditionerRun.png);"));
        label_37->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_38 = new QLabel(AirConditionerHelp);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(342, 300, 35, 35));
        label_38->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: red;"));
        label_38->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_39 = new QLabel(AirConditionerHelp);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(323, 340, 71, 21));
        label_39->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_39->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(AirConditionerHelp);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(460, 170, 35, 35));
        label_10->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/airConditionerMajorError.png);"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9 = new QLabel(AirConditionerHelp);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(400, 170, 35, 35));
        label_9->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/airConditionerStop.png);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_26 = new QLabel(AirConditionerHelp);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(452, 340, 71, 21));
        label_26->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_26->setAlignment(Qt::AlignCenter);
        label_107 = new QLabel(AirConditionerHelp);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(322, 290, 491, 81));
        label_107->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_107->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(AirConditionerHelp);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(692, 210, 121, 21));
        label_19->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_19->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(AirConditionerHelp);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(503, 210, 71, 21));
        label_17->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_17->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(AirConditionerHelp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(172, 308, 141, 50));
        label_3->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(AirConditionerHelp);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(642, 170, 35, 35));
        label_30->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/airConditionerMinorError.png);"));
        label_30->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_15 = new QLabel(AirConditionerHelp);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(381, 210, 71, 21));
        label_15->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_15->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(AirConditionerHelp);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(471, 300, 35, 35));
        label_14->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: rgb(0, 255, 0);"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_28 = new QLabel(AirConditionerHelp);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(739, 300, 35, 35));
        label_28->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: yellow;"));
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_29 = new QLabel(AirConditionerHelp);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(634, 210, 51, 21));
        label_29->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_29->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(AirConditionerHelp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(222, 178, 91, 50));
        label_2->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_106 = new QLabel(AirConditionerHelp);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(320, 160, 491, 81));
        label_106->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_106->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(AirConditionerHelp);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(592, 340, 51, 21));
        label_25->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_25->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(AirConditionerHelp);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(722, 340, 71, 21));
        label_27->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: transparent;\n"
"font: 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_27->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(AirConditionerHelp);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(734, 170, 35, 35));
        label_13->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/airConditionerNoPower.png);"));
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QLabel(AirConditionerHelp);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(580, 170, 35, 35));
        label_12->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"border-image: url(:/images/airConditionerVentilate.png);"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_106->raise();
        label_107->raise();
        label_11->raise();
        label_18->raise();
        label_16->raise();
        label_36->raise();
        label_21->raise();
        label_37->raise();
        label_38->raise();
        label_39->raise();
        label_10->raise();
        label_9->raise();
        label_26->raise();
        label_19->raise();
        label_17->raise();
        label_3->raise();
        label_30->raise();
        label_15->raise();
        label_14->raise();
        label_28->raise();
        label_29->raise();
        label_2->raise();
        label_25->raise();
        label_27->raise();
        label_13->raise();
        label_12->raise();

        retranslateUi(AirConditionerHelp);

        QMetaObject::connectSlotsByName(AirConditionerHelp);
    } // setupUi

    void retranslateUi(QWidget *AirConditionerHelp)
    {
        AirConditionerHelp->setWindowTitle(QApplication::translate("AirConditionerHelp", "Form", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_18->setText(QApplication::translate("AirConditionerHelp", "\347\264\247\346\200\245\351\200\232\351\243\216", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("AirConditionerHelp", "\344\270\245\351\207\215\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("AirConditionerHelp", "\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        label_21->setText(QString());
        label_37->setText(QString());
        label_38->setText(QString());
        label_39->setText(QApplication::translate("AirConditionerHelp", "\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        label_9->setText(QString());
        label_26->setText(QApplication::translate("AirConditionerHelp", "\345\267\245\344\275\234", 0, QApplication::UnicodeUTF8));
        label_107->setText(QString());
        label_19->setText(QApplication::translate("AirConditionerHelp", "\346\227\240\347\224\265\346\210\226\346\227\240\346\263\225\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("AirConditionerHelp", "\345\210\266\345\206\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AirConditionerHelp", "\347\251\272\350\260\203\345\216\213\347\274\251\346\234\272\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label_30->setText(QString());
        label_15->setText(QApplication::translate("AirConditionerHelp", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        label_14->setText(QString());
        label_28->setText(QString());
        label_29->setText(QApplication::translate("AirConditionerHelp", "\344\270\255\347\255\211\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AirConditionerHelp", "\347\251\272\350\260\203\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label_106->setText(QString());
        label_25->setText(QApplication::translate("AirConditionerHelp", "\345\276\205\346\234\272", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("AirConditionerHelp", "\351\200\232\350\256\257\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AirConditionerHelp: public Ui_AirConditionerHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRCONDITIONERHELP_H
