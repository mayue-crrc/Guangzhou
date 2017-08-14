/********************************************************************************
** Form generated from reading UI file 'braketestpage.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRAKETESTPAGE_H
#define UI_BRAKETESTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrakeTestPage
{
public:
    QPushButton *btnBack;
    QLabel *lblBogie2ResultD2;
    QLabel *lblOutdoorTemperatureC1;
    QLabel *lblBogie2ResultA2;
    QLabel *lblOutdoorTemperatureB2;
    QLabel *lblBogie2ResultC2;
    QLabel *lblBogie1ResultD1;
    QLabel *lblOutdoorTemperatureD1;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *lblOutdoorTemperatureC2;
    QLabel *lblBogie1ResultB2;
    QLabel *lblBogie1ResultD2;
    QLabel *lblOutdoorTemperatureA2;
    QLabel *lblBogie2ResultC1;
    QLabel *lblBogie2ResultB2;
    QLabel *lblBogie2ResultB1;
    QLabel *lblBogie1ResultA1;
    QLabel *lblBogie1ResultC1;
    QLabel *lblCheckReadyA1;
    QLabel *lblCheckReadyA2;
    QLabel *lblBogie1ResultA2;
    QLabel *lblBogie2ResultA1;
    QLabel *lblBogie2ResultD1;
    QLabel *lblBogie1ResultB1;
    QLabel *lblOutdoorTemperatureD2;
    QLabel *lblOutdoorTemperatureA1;
    QLabel *lblOutdoorTemperatureB1;
    QLabel *label_32;
    QLabel *lblBogie1ResultC2;
    QLabel *label_31;
    QPushButton *btnCheck;
    QLabel *lblTips;
    QLabel *label_35;
    QLabel *lblUncheckTimeA1;
    QLabel *lblUncheckTimeA2;
    QLabel *label_6;

    void setupUi(QWidget *BrakeTestPage)
    {
        if (BrakeTestPage->objectName().isEmpty())
            BrakeTestPage->setObjectName(QString::fromUtf8("BrakeTestPage"));
        BrakeTestPage->resize(1024, 600);
        BrakeTestPage->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnBack = new QPushButton(BrakeTestPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(850, 490, 90, 50));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lblBogie2ResultD2 = new QLabel(BrakeTestPage);
        lblBogie2ResultD2->setObjectName(QString::fromUtf8("lblBogie2ResultD2"));
        lblBogie2ResultD2->setGeometry(QRect(591, 224, 91, 40));
        lblBogie2ResultD2->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureC1 = new QLabel(BrakeTestPage);
        lblOutdoorTemperatureC1->setObjectName(QString::fromUtf8("lblOutdoorTemperatureC1"));
        lblOutdoorTemperatureC1->setGeometry(QRect(413, 72, 91, 40));
        lblOutdoorTemperatureC1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblOutdoorTemperatureC1->setAlignment(Qt::AlignCenter);
        lblBogie2ResultA2 = new QLabel(BrakeTestPage);
        lblBogie2ResultA2->setObjectName(QString::fromUtf8("lblBogie2ResultA2"));
        lblBogie2ResultA2->setGeometry(QRect(858, 224, 91, 40));
        lblBogie2ResultA2->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureB2 = new QLabel(BrakeTestPage);
        lblOutdoorTemperatureB2->setObjectName(QString::fromUtf8("lblOutdoorTemperatureB2"));
        lblOutdoorTemperatureB2->setGeometry(QRect(769, 72, 91, 40));
        lblOutdoorTemperatureB2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblOutdoorTemperatureB2->setAlignment(Qt::AlignCenter);
        lblBogie2ResultC2 = new QLabel(BrakeTestPage);
        lblBogie2ResultC2->setObjectName(QString::fromUtf8("lblBogie2ResultC2"));
        lblBogie2ResultC2->setGeometry(QRect(680, 224, 91, 40));
        lblBogie2ResultC2->setAlignment(Qt::AlignCenter);
        lblBogie1ResultD1 = new QLabel(BrakeTestPage);
        lblBogie1ResultD1->setObjectName(QString::fromUtf8("lblBogie1ResultD1"));
        lblBogie1ResultD1->setGeometry(QRect(502, 186, 91, 40));
        lblBogie1ResultD1->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureD1 = new QLabel(BrakeTestPage);
        lblOutdoorTemperatureD1->setObjectName(QString::fromUtf8("lblOutdoorTemperatureD1"));
        lblOutdoorTemperatureD1->setGeometry(QRect(502, 72, 91, 40));
        lblOutdoorTemperatureD1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblOutdoorTemperatureD1->setAlignment(Qt::AlignCenter);
        label_29 = new QLabel(BrakeTestPage);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(66, 72, 171, 40));
        label_29->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(BrakeTestPage);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(66, 148, 171, 40));
        label_30->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureC2 = new QLabel(BrakeTestPage);
        lblOutdoorTemperatureC2->setObjectName(QString::fromUtf8("lblOutdoorTemperatureC2"));
        lblOutdoorTemperatureC2->setGeometry(QRect(680, 72, 91, 40));
        lblOutdoorTemperatureC2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblOutdoorTemperatureC2->setAlignment(Qt::AlignCenter);
        lblBogie1ResultB2 = new QLabel(BrakeTestPage);
        lblBogie1ResultB2->setObjectName(QString::fromUtf8("lblBogie1ResultB2"));
        lblBogie1ResultB2->setGeometry(QRect(769, 186, 91, 40));
        lblBogie1ResultB2->setAlignment(Qt::AlignCenter);
        lblBogie1ResultD2 = new QLabel(BrakeTestPage);
        lblBogie1ResultD2->setObjectName(QString::fromUtf8("lblBogie1ResultD2"));
        lblBogie1ResultD2->setGeometry(QRect(591, 186, 91, 40));
        lblBogie1ResultD2->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureA2 = new QLabel(BrakeTestPage);
        lblOutdoorTemperatureA2->setObjectName(QString::fromUtf8("lblOutdoorTemperatureA2"));
        lblOutdoorTemperatureA2->setGeometry(QRect(858, 72, 91, 40));
        lblOutdoorTemperatureA2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblOutdoorTemperatureA2->setAlignment(Qt::AlignCenter);
        lblBogie2ResultC1 = new QLabel(BrakeTestPage);
        lblBogie2ResultC1->setObjectName(QString::fromUtf8("lblBogie2ResultC1"));
        lblBogie2ResultC1->setGeometry(QRect(413, 224, 91, 40));
        lblBogie2ResultC1->setAlignment(Qt::AlignCenter);
        lblBogie2ResultB2 = new QLabel(BrakeTestPage);
        lblBogie2ResultB2->setObjectName(QString::fromUtf8("lblBogie2ResultB2"));
        lblBogie2ResultB2->setGeometry(QRect(769, 224, 91, 40));
        lblBogie2ResultB2->setAlignment(Qt::AlignCenter);
        lblBogie2ResultB1 = new QLabel(BrakeTestPage);
        lblBogie2ResultB1->setObjectName(QString::fromUtf8("lblBogie2ResultB1"));
        lblBogie2ResultB1->setGeometry(QRect(324, 224, 91, 40));
        lblBogie2ResultB1->setAlignment(Qt::AlignCenter);
        lblBogie1ResultA1 = new QLabel(BrakeTestPage);
        lblBogie1ResultA1->setObjectName(QString::fromUtf8("lblBogie1ResultA1"));
        lblBogie1ResultA1->setGeometry(QRect(235, 186, 91, 40));
        lblBogie1ResultA1->setAlignment(Qt::AlignCenter);
        lblBogie1ResultC1 = new QLabel(BrakeTestPage);
        lblBogie1ResultC1->setObjectName(QString::fromUtf8("lblBogie1ResultC1"));
        lblBogie1ResultC1->setGeometry(QRect(413, 186, 91, 40));
        lblBogie1ResultC1->setAlignment(Qt::AlignCenter);
        lblCheckReadyA1 = new QLabel(BrakeTestPage);
        lblCheckReadyA1->setObjectName(QString::fromUtf8("lblCheckReadyA1"));
        lblCheckReadyA1->setGeometry(QRect(235, 148, 358, 40));
        lblCheckReadyA1->setAlignment(Qt::AlignCenter);
        lblCheckReadyA2 = new QLabel(BrakeTestPage);
        lblCheckReadyA2->setObjectName(QString::fromUtf8("lblCheckReadyA2"));
        lblCheckReadyA2->setGeometry(QRect(591, 148, 358, 40));
        lblCheckReadyA2->setAlignment(Qt::AlignCenter);
        lblBogie1ResultA2 = new QLabel(BrakeTestPage);
        lblBogie1ResultA2->setObjectName(QString::fromUtf8("lblBogie1ResultA2"));
        lblBogie1ResultA2->setGeometry(QRect(858, 186, 91, 40));
        lblBogie1ResultA2->setAlignment(Qt::AlignCenter);
        lblBogie2ResultA1 = new QLabel(BrakeTestPage);
        lblBogie2ResultA1->setObjectName(QString::fromUtf8("lblBogie2ResultA1"));
        lblBogie2ResultA1->setGeometry(QRect(235, 224, 91, 40));
        lblBogie2ResultA1->setAlignment(Qt::AlignCenter);
        lblBogie2ResultD1 = new QLabel(BrakeTestPage);
        lblBogie2ResultD1->setObjectName(QString::fromUtf8("lblBogie2ResultD1"));
        lblBogie2ResultD1->setGeometry(QRect(502, 224, 91, 40));
        lblBogie2ResultD1->setAlignment(Qt::AlignCenter);
        lblBogie1ResultB1 = new QLabel(BrakeTestPage);
        lblBogie1ResultB1->setObjectName(QString::fromUtf8("lblBogie1ResultB1"));
        lblBogie1ResultB1->setGeometry(QRect(324, 186, 91, 40));
        lblBogie1ResultB1->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureD2 = new QLabel(BrakeTestPage);
        lblOutdoorTemperatureD2->setObjectName(QString::fromUtf8("lblOutdoorTemperatureD2"));
        lblOutdoorTemperatureD2->setGeometry(QRect(591, 72, 91, 40));
        lblOutdoorTemperatureD2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblOutdoorTemperatureD2->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureA1 = new QLabel(BrakeTestPage);
        lblOutdoorTemperatureA1->setObjectName(QString::fromUtf8("lblOutdoorTemperatureA1"));
        lblOutdoorTemperatureA1->setGeometry(QRect(235, 72, 91, 40));
        lblOutdoorTemperatureA1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblOutdoorTemperatureA1->setAlignment(Qt::AlignCenter);
        lblOutdoorTemperatureB1 = new QLabel(BrakeTestPage);
        lblOutdoorTemperatureB1->setObjectName(QString::fromUtf8("lblOutdoorTemperatureB1"));
        lblOutdoorTemperatureB1->setGeometry(QRect(324, 72, 91, 40));
        lblOutdoorTemperatureB1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
""));
        lblOutdoorTemperatureB1->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(BrakeTestPage);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(66, 224, 171, 40));
        label_32->setAlignment(Qt::AlignCenter);
        lblBogie1ResultC2 = new QLabel(BrakeTestPage);
        lblBogie1ResultC2->setObjectName(QString::fromUtf8("lblBogie1ResultC2"));
        lblBogie1ResultC2->setGeometry(QRect(680, 186, 91, 40));
        lblBogie1ResultC2->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(BrakeTestPage);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(66, 186, 171, 40));
        label_31->setAlignment(Qt::AlignCenter);
        btnCheck = new QPushButton(BrakeTestPage);
        btnCheck->setObjectName(QString::fromUtf8("btnCheck"));
        btnCheck->setGeometry(QRect(70, 490, 90, 50));
        btnCheck->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"}"));
        lblTips = new QLabel(BrakeTestPage);
        lblTips->setObjectName(QString::fromUtf8("lblTips"));
        lblTips->setGeometry(QRect(66, 330, 883, 111));
        lblTips->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"color: rgb(0, 255, 0);"));
        lblTips->setAlignment(Qt::AlignCenter);
        label_35 = new QLabel(BrakeTestPage);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(66, 110, 171, 40));
        label_35->setAlignment(Qt::AlignCenter);
        lblUncheckTimeA1 = new QLabel(BrakeTestPage);
        lblUncheckTimeA1->setObjectName(QString::fromUtf8("lblUncheckTimeA1"));
        lblUncheckTimeA1->setGeometry(QRect(235, 110, 358, 40));
        lblUncheckTimeA1->setAlignment(Qt::AlignCenter);
        lblUncheckTimeA2 = new QLabel(BrakeTestPage);
        lblUncheckTimeA2->setObjectName(QString::fromUtf8("lblUncheckTimeA2"));
        lblUncheckTimeA2->setGeometry(QRect(591, 110, 358, 40));
        lblUncheckTimeA2->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(BrakeTestPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(38, 355, 60, 61));
        label_6->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 0px;\n"
"color: black;\n"
"border-radius: 5px;"));
        label_6->setAlignment(Qt::AlignCenter);

        retranslateUi(BrakeTestPage);

        QMetaObject::connectSlotsByName(BrakeTestPage);
    } // setupUi

    void retranslateUi(QWidget *BrakeTestPage)
    {
        BrakeTestPage->setWindowTitle(QApplication::translate("BrakeTestPage", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("BrakeTestPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lblBogie2ResultD2->setText(QString());
        lblOutdoorTemperatureC1->setText(QApplication::translate("BrakeTestPage", "C1", 0, QApplication::UnicodeUTF8));
        lblBogie2ResultA2->setText(QString());
        lblOutdoorTemperatureB2->setText(QApplication::translate("BrakeTestPage", "B2", 0, QApplication::UnicodeUTF8));
        lblBogie2ResultC2->setText(QString());
        lblBogie1ResultD1->setText(QString());
        lblOutdoorTemperatureD1->setText(QApplication::translate("BrakeTestPage", "D1", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("BrakeTestPage", "\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("BrakeTestPage", "\350\207\252\346\243\200\345\207\206\345\244\207", 0, QApplication::UnicodeUTF8));
        lblOutdoorTemperatureC2->setText(QApplication::translate("BrakeTestPage", "C2", 0, QApplication::UnicodeUTF8));
        lblBogie1ResultB2->setText(QString());
        lblBogie1ResultD2->setText(QString());
        lblOutdoorTemperatureA2->setText(QApplication::translate("BrakeTestPage", "A2", 0, QApplication::UnicodeUTF8));
        lblBogie2ResultC1->setText(QString());
        lblBogie2ResultB2->setText(QString());
        lblBogie2ResultB1->setText(QString());
        lblBogie1ResultA1->setText(QString());
        lblBogie1ResultC1->setText(QString());
        lblCheckReadyA1->setText(QString());
        lblCheckReadyA2->setText(QString());
        lblBogie1ResultA2->setText(QString());
        lblBogie2ResultA1->setText(QString());
        lblBogie2ResultD1->setText(QString());
        lblBogie1ResultB1->setText(QString());
        lblOutdoorTemperatureD2->setText(QApplication::translate("BrakeTestPage", "D2", 0, QApplication::UnicodeUTF8));
        lblOutdoorTemperatureA1->setText(QApplication::translate("BrakeTestPage", "A1", 0, QApplication::UnicodeUTF8));
        lblOutdoorTemperatureB1->setText(QApplication::translate("BrakeTestPage", "B1", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("BrakeTestPage", "\350\275\254\345\220\221\346\236\2662\350\207\252\346\243\200\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        lblBogie1ResultC2->setText(QString());
        label_31->setText(QApplication::translate("BrakeTestPage", "\350\275\254\345\220\221\346\236\2661\350\207\252\346\243\200\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        btnCheck->setText(QApplication::translate("BrakeTestPage", "\345\220\257\345\212\250\350\207\252\346\243\200", 0, QApplication::UnicodeUTF8));
        lblTips->setText(QApplication::translate("BrakeTestPage", " \345\234\250\350\207\252\346\243\200\345\207\206\345\244\207\344\277\241\345\217\267\346\230\257\347\273\277\350\211\262\344\270\224\345\217\270\346\234\272\345\256\244\345\215\240\346\234\211\347\232\204\346\235\241\344\273\266\344\270\213\357\274\214\345\215\225\345\207\273\345\220\257\345\212\250\350\207\252\346\243\200\346\214\211\351\222\256\357\274\214\345\276\205\350\207\252\346\243\200\345\256\214\346\210\220\345\220\216\357\274\214\n"
"\351\200\232\350\277\207\344\270\212\350\241\250\346\240\274\344\270\255\347\232\204\350\275\254\345\220\221\346\236\2661\345\222\2142\350\207\252\346\243\200\347\273\223\346\236\234\346\240\217\347\233\256\346\237\245\347\234\213\350\207\252\346\243\200\347\273\223\346\236\234\343\200\202", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("BrakeTestPage", "\346\234\252\350\207\252\346\243\200\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        lblUncheckTimeA1->setText(QString());
        lblUncheckTimeA2->setText(QString());
        label_6->setText(QApplication::translate("BrakeTestPage", "\346\223\215\344\275\234\n"
"\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BrakeTestPage: public Ui_BrakeTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRAKETESTPAGE_H
