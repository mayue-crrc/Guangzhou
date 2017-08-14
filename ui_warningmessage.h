/********************************************************************************
** Form generated from reading UI file 'warningmessage.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGMESSAGE_H
#define UI_WARNINGMESSAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WarningMessage
{
public:
    QPushButton *btnConfirm;
    QLabel *lblMessage;

    void setupUi(QWidget *WarningMessage)
    {
        if (WarningMessage->objectName().isEmpty())
            WarningMessage->setObjectName(QString::fromUtf8("WarningMessage"));
        WarningMessage->resize(430, 195);
        WarningMessage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: red;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: red;\n"
"	border: 0px groove, gray;\n"
"    background-color: transparent;\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
        btnConfirm = new QPushButton(WarningMessage);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(170, 140, 91, 41));
        btnConfirm->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lblMessage = new QLabel(WarningMessage);
        lblMessage->setObjectName(QString::fromUtf8("lblMessage"));
        lblMessage->setGeometry(QRect(10, 60, 411, 41));
        lblMessage->setStyleSheet(QString::fromUtf8("color: white;"));
        lblMessage->setAlignment(Qt::AlignCenter);

        retranslateUi(WarningMessage);

        QMetaObject::connectSlotsByName(WarningMessage);
    } // setupUi

    void retranslateUi(QWidget *WarningMessage)
    {
        WarningMessage->setWindowTitle(QApplication::translate("WarningMessage", "Form", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("WarningMessage", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        lblMessage->setText(QApplication::translate("WarningMessage", "\347\201\253\347\201\276\346\212\245\350\255\246\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WarningMessage: public Ui_WarningMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGMESSAGE_H
