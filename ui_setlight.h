/********************************************************************************
** Form generated from reading UI file 'setlight.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETLIGHT_H
#define UI_SETLIGHT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetLight
{
public:
    QLabel *label_106;
    QLabel *label_107;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *btnManual;
    QPushButton *btnAuto;
    QPushButton *btnLeft;
    QLabel *lblLevel0;
    QLabel *lblLevel1;
    QLabel *lblLevel2;
    QLabel *lblLevel3;
    QLabel *lblLevel4;
    QPushButton *btnRight;
    QPushButton *btnLow;
    QPushButton *btnMedium;
    QPushButton *btnHigh;

    void setupUi(QWidget *SetLight)
    {
        if (SetLight->objectName().isEmpty())
            SetLight->setObjectName(QString::fromUtf8("SetLight"));
        SetLight->resize(1024, 600);
        SetLight->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        label_106 = new QLabel(SetLight);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(230, 70, 561, 221));
        label_106->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_106->setAlignment(Qt::AlignCenter);
        label_107 = new QLabel(SetLight);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(230, 370, 561, 121));
        label_107->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_107->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(SetLight);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 50, 131, 40));
        label_6->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(SetLight);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 350, 131, 40));
        label_7->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        label_7->setAlignment(Qt::AlignCenter);
        btnManual = new QPushButton(SetLight);
        btnManual->setObjectName(QString::fromUtf8("btnManual"));
        btnManual->setGeometry(QRect(280, 210, 90, 51));
        btnAuto = new QPushButton(SetLight);
        btnAuto->setObjectName(QString::fromUtf8("btnAuto"));
        btnAuto->setGeometry(QRect(650, 210, 90, 51));
        btnLeft = new QPushButton(SetLight);
        btnLeft->setObjectName(QString::fromUtf8("btnLeft"));
        btnLeft->setGeometry(QRect(320, 110, 51, 81));
        btnLeft->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        lblLevel0 = new QLabel(SetLight);
        lblLevel0->setObjectName(QString::fromUtf8("lblLevel0"));
        lblLevel0->setGeometry(QRect(390, 110, 41, 81));
        lblLevel1 = new QLabel(SetLight);
        lblLevel1->setObjectName(QString::fromUtf8("lblLevel1"));
        lblLevel1->setGeometry(QRect(440, 110, 41, 81));
        lblLevel2 = new QLabel(SetLight);
        lblLevel2->setObjectName(QString::fromUtf8("lblLevel2"));
        lblLevel2->setGeometry(QRect(490, 110, 41, 81));
        lblLevel3 = new QLabel(SetLight);
        lblLevel3->setObjectName(QString::fromUtf8("lblLevel3"));
        lblLevel3->setGeometry(QRect(540, 110, 41, 81));
        lblLevel4 = new QLabel(SetLight);
        lblLevel4->setObjectName(QString::fromUtf8("lblLevel4"));
        lblLevel4->setGeometry(QRect(590, 110, 41, 81));
        btnRight = new QPushButton(SetLight);
        btnRight->setObjectName(QString::fromUtf8("btnRight"));
        btnRight->setGeometry(QRect(650, 110, 51, 81));
        btnRight->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnLow = new QPushButton(SetLight);
        btnLow->setObjectName(QString::fromUtf8("btnLow"));
        btnLow->setGeometry(QRect(280, 410, 90, 51));
        btnMedium = new QPushButton(SetLight);
        btnMedium->setObjectName(QString::fromUtf8("btnMedium"));
        btnMedium->setGeometry(QRect(470, 410, 90, 51));
        btnHigh = new QPushButton(SetLight);
        btnHigh->setObjectName(QString::fromUtf8("btnHigh"));
        btnHigh->setGeometry(QRect(650, 410, 90, 51));

        retranslateUi(SetLight);

        QMetaObject::connectSlotsByName(SetLight);
    } // setupUi

    void retranslateUi(QWidget *SetLight)
    {
        SetLight->setWindowTitle(QApplication::translate("SetLight", "Form", 0, QApplication::UnicodeUTF8));
        label_106->setText(QString());
        label_107->setText(QString());
        label_6->setText(QApplication::translate("SetLight", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SetLight", "\345\243\260\351\237\263\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        btnManual->setText(QApplication::translate("SetLight", "\346\211\213\345\212\250\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        btnAuto->setText(QApplication::translate("SetLight", "\350\207\252\345\212\250\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        btnLeft->setText(QApplication::translate("SetLight", "\342\227\200", 0, QApplication::UnicodeUTF8));
        lblLevel0->setText(QString());
        lblLevel1->setText(QString());
        lblLevel2->setText(QString());
        lblLevel3->setText(QString());
        lblLevel4->setText(QString());
        btnRight->setText(QApplication::translate("SetLight", "\342\226\266", 0, QApplication::UnicodeUTF8));
        btnLow->setText(QApplication::translate("SetLight", "\344\275\216", 0, QApplication::UnicodeUTF8));
        btnMedium->setText(QApplication::translate("SetLight", "\344\270\255", 0, QApplication::UnicodeUTF8));
        btnHigh->setText(QApplication::translate("SetLight", "\351\253\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetLight: public Ui_SetLight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETLIGHT_H
