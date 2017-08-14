/********************************************************************************
** Form generated from reading UI file 'troubleshootinglogin.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TROUBLESHOOTINGLOGIN_H
#define UI_TROUBLESHOOTINGLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TroubleShootingLogin
{
public:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *btnDel;
    QPushButton *btnConfirm;
    QPushButton *btnCancel;
    QLabel *lblPassword;
    QLabel *label_2;
    QLabel *lblPasswordWrong;

    void setupUi(QWidget *TroubleShootingLogin)
    {
        if (TroubleShootingLogin->objectName().isEmpty())
            TroubleShootingLogin->setObjectName(QString::fromUtf8("TroubleShootingLogin"));
        TroubleShootingLogin->resize(1024, 600);
        TroubleShootingLogin->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 20px, \"SimHei\";\n"
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
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btn1 = new QPushButton(TroubleShootingLogin);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(570, 140, 85, 41));
        btn1->setStyleSheet(QString::fromUtf8(""));
        btn2 = new QPushButton(TroubleShootingLogin);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(660, 140, 85, 41));
        btn2->setStyleSheet(QString::fromUtf8(""));
        btn3 = new QPushButton(TroubleShootingLogin);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(750, 140, 85, 41));
        btn3->setStyleSheet(QString::fromUtf8(""));
        btn4 = new QPushButton(TroubleShootingLogin);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(570, 190, 85, 41));
        btn4->setStyleSheet(QString::fromUtf8(""));
        btn5 = new QPushButton(TroubleShootingLogin);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(660, 190, 85, 41));
        btn5->setStyleSheet(QString::fromUtf8(""));
        btn6 = new QPushButton(TroubleShootingLogin);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(750, 190, 85, 41));
        btn6->setStyleSheet(QString::fromUtf8(""));
        btn7 = new QPushButton(TroubleShootingLogin);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(570, 240, 85, 41));
        btn7->setStyleSheet(QString::fromUtf8(""));
        btn8 = new QPushButton(TroubleShootingLogin);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(660, 240, 85, 41));
        btn8->setStyleSheet(QString::fromUtf8(""));
        btn9 = new QPushButton(TroubleShootingLogin);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(750, 240, 85, 41));
        btn9->setStyleSheet(QString::fromUtf8(""));
        btn0 = new QPushButton(TroubleShootingLogin);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(570, 290, 85, 41));
        btn0->setStyleSheet(QString::fromUtf8(""));
        btnDel = new QPushButton(TroubleShootingLogin);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setGeometry(QRect(660, 290, 175, 41));
        btnDel->setStyleSheet(QString::fromUtf8(""));
        btnConfirm = new QPushButton(TroubleShootingLogin);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(570, 340, 85, 41));
        btnConfirm->setStyleSheet(QString::fromUtf8(""));
        btnCancel = new QPushButton(TroubleShootingLogin);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(750, 340, 85, 41));
        btnCancel->setStyleSheet(QString::fromUtf8(""));
        lblPassword = new QLabel(TroubleShootingLogin);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setGeometry(QRect(160, 230, 231, 50));
        lblPassword->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(TroubleShootingLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 170, 231, 50));
        label_2->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblPasswordWrong = new QLabel(TroubleShootingLogin);
        lblPasswordWrong->setObjectName(QString::fromUtf8("lblPasswordWrong"));
        lblPasswordWrong->setGeometry(QRect(160, 300, 231, 50));
        lblPasswordWrong->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"color: red;"));
        lblPasswordWrong->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(TroubleShootingLogin);

        QMetaObject::connectSlotsByName(TroubleShootingLogin);
    } // setupUi

    void retranslateUi(QWidget *TroubleShootingLogin)
    {
        TroubleShootingLogin->setWindowTitle(QApplication::translate("TroubleShootingLogin", "Form", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("TroubleShootingLogin", "1", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("TroubleShootingLogin", "2", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("TroubleShootingLogin", "3", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("TroubleShootingLogin", "4", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("TroubleShootingLogin", "5", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("TroubleShootingLogin", "6", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("TroubleShootingLogin", "7", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("TroubleShootingLogin", "8", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("TroubleShootingLogin", "9", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("TroubleShootingLogin", "0", 0, QApplication::UnicodeUTF8));
        btnDel->setText(QApplication::translate("TroubleShootingLogin", "DEL", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("TroubleShootingLogin", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("TroubleShootingLogin", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        lblPassword->setText(QString());
        label_2->setText(QApplication::translate("TroubleShootingLogin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        lblPasswordWrong->setText(QApplication::translate("TroubleShootingLogin", "\345\257\206\347\240\201\351\224\231\350\257\257\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\357\274\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TroubleShootingLogin: public Ui_TroubleShootingLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TROUBLESHOOTINGLOGIN_H
