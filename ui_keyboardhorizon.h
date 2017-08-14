/********************************************************************************
** Form generated from reading UI file 'keyboardhorizon.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARDHORIZON_H
#define UI_KEYBOARDHORIZON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyboardHorizon
{
public:
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn6;
    QPushButton *btn0;
    QPushButton *btn8;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn7;
    QPushButton *btn5;
    QPushButton *btnDel;
    QPushButton *btn9;
    QPushButton *btnConfirm;
    QPushButton *btnBack;

    void setupUi(QWidget *KeyboardHorizon)
    {
        if (KeyboardHorizon->objectName().isEmpty())
            KeyboardHorizon->setObjectName(QString::fromUtf8("KeyboardHorizon"));
        KeyboardHorizon->resize(909, 109);
        KeyboardHorizon->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btn3 = new QPushButton(KeyboardHorizon);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(190, 60, 81, 41));
        btn4 = new QPushButton(KeyboardHorizon);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(280, 60, 81, 41));
        btn6 = new QPushButton(KeyboardHorizon);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(460, 60, 81, 41));
        btn0 = new QPushButton(KeyboardHorizon);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(820, 60, 81, 41));
        btn8 = new QPushButton(KeyboardHorizon);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(640, 60, 81, 41));
        btn1 = new QPushButton(KeyboardHorizon);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(10, 60, 81, 41));
        btn2 = new QPushButton(KeyboardHorizon);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(100, 60, 81, 41));
        btn7 = new QPushButton(KeyboardHorizon);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(550, 60, 81, 41));
        btn5 = new QPushButton(KeyboardHorizon);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(370, 60, 81, 41));
        btnDel = new QPushButton(KeyboardHorizon);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setGeometry(QRect(640, 10, 81, 41));
        btn9 = new QPushButton(KeyboardHorizon);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(730, 60, 81, 41));
        btnConfirm = new QPushButton(KeyboardHorizon);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(730, 10, 81, 41));
        btnBack = new QPushButton(KeyboardHorizon);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(820, 10, 81, 41));

        retranslateUi(KeyboardHorizon);

        QMetaObject::connectSlotsByName(KeyboardHorizon);
    } // setupUi

    void retranslateUi(QWidget *KeyboardHorizon)
    {
        KeyboardHorizon->setWindowTitle(QApplication::translate("KeyboardHorizon", "Form", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("KeyboardHorizon", "3", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("KeyboardHorizon", "4", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("KeyboardHorizon", "6", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("KeyboardHorizon", "0", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("KeyboardHorizon", "8", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("KeyboardHorizon", "1", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("KeyboardHorizon", "2", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("KeyboardHorizon", "7", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("KeyboardHorizon", "5", 0, QApplication::UnicodeUTF8));
        btnDel->setText(QApplication::translate("KeyboardHorizon", "DEL", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("KeyboardHorizon", "9", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("KeyboardHorizon", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("KeyboardHorizon", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KeyboardHorizon: public Ui_KeyboardHorizon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDHORIZON_H
