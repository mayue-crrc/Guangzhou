/********************************************************************************
** Form generated from reading UI file 'keyboardverticality.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARDVERTICALITY_H
#define UI_KEYBOARDVERTICALITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyboardVerticality
{
public:
    QPushButton *btn6;
    QPushButton *btn9;
    QPushButton *btn4;
    QPushButton *btn3;
    QPushButton *btnBack;
    QPushButton *btn8;
    QPushButton *btnConfirm;
    QPushButton *btnDel;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *btn7;
    QPushButton *btn5;
    QPushButton *btn0;

    void setupUi(QWidget *KeyboardVerticality)
    {
        if (KeyboardVerticality->objectName().isEmpty())
            KeyboardVerticality->setObjectName(QString::fromUtf8("KeyboardVerticality"));
        KeyboardVerticality->resize(281, 259);
        KeyboardVerticality->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white"
                        "; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btn6 = new QPushButton(KeyboardVerticality);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(190, 60, 85, 41));
        btn6->setStyleSheet(QString::fromUtf8(""));
        btn9 = new QPushButton(KeyboardVerticality);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(190, 110, 85, 41));
        btn9->setStyleSheet(QString::fromUtf8(""));
        btn4 = new QPushButton(KeyboardVerticality);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(10, 60, 85, 41));
        btn4->setStyleSheet(QString::fromUtf8(""));
        btn3 = new QPushButton(KeyboardVerticality);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(190, 10, 85, 41));
        btn3->setStyleSheet(QString::fromUtf8(""));
        btnBack = new QPushButton(KeyboardVerticality);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(190, 210, 85, 41));
        btnBack->setStyleSheet(QString::fromUtf8(""));
        btn8 = new QPushButton(KeyboardVerticality);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(100, 110, 85, 41));
        btn8->setStyleSheet(QString::fromUtf8(""));
        btnConfirm = new QPushButton(KeyboardVerticality);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(10, 210, 85, 41));
        btnConfirm->setStyleSheet(QString::fromUtf8(""));
        btnDel = new QPushButton(KeyboardVerticality);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setGeometry(QRect(100, 160, 175, 41));
        btnDel->setStyleSheet(QString::fromUtf8(""));
        btn2 = new QPushButton(KeyboardVerticality);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(100, 10, 85, 41));
        btn2->setStyleSheet(QString::fromUtf8(""));
        btn1 = new QPushButton(KeyboardVerticality);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(10, 10, 85, 41));
        btn1->setStyleSheet(QString::fromUtf8(""));
        btn7 = new QPushButton(KeyboardVerticality);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(10, 110, 85, 41));
        btn7->setStyleSheet(QString::fromUtf8(""));
        btn5 = new QPushButton(KeyboardVerticality);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(100, 60, 85, 41));
        btn5->setStyleSheet(QString::fromUtf8(""));
        btn0 = new QPushButton(KeyboardVerticality);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(10, 160, 85, 41));
        btn0->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(KeyboardVerticality);

        QMetaObject::connectSlotsByName(KeyboardVerticality);
    } // setupUi

    void retranslateUi(QWidget *KeyboardVerticality)
    {
        KeyboardVerticality->setWindowTitle(QApplication::translate("KeyboardVerticality", "Form", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("KeyboardVerticality", "6", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("KeyboardVerticality", "9", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("KeyboardVerticality", "4", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("KeyboardVerticality", "3", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("KeyboardVerticality", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("KeyboardVerticality", "8", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("KeyboardVerticality", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnDel->setText(QApplication::translate("KeyboardVerticality", "DEL", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("KeyboardVerticality", "2", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("KeyboardVerticality", "1", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("KeyboardVerticality", "7", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("KeyboardVerticality", "5", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("KeyboardVerticality", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KeyboardVerticality: public Ui_KeyboardVerticality {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDVERTICALITY_H
