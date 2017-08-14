/********************************************************************************
** Form generated from reading UI file 'messagebox.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEBOX_H
#define UI_MESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageBox
{
public:
    QLabel *lblMessage;
    QPushButton *btnConfirm;
    QLabel *lblBackground;

    void setupUi(QWidget *MessageBox)
    {
        if (MessageBox->objectName().isEmpty())
            MessageBox->setObjectName(QString::fromUtf8("MessageBox"));
        MessageBox->resize(400, 200);
        MessageBox->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 0px groove, gray;\n"
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
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"}"));
        lblMessage = new QLabel(MessageBox);
        lblMessage->setObjectName(QString::fromUtf8("lblMessage"));
        lblMessage->setGeometry(QRect(10, 50, 381, 51));
        lblMessage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: red;\n"
"	border: 0px groove, gray;\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblMessage->setAlignment(Qt::AlignCenter);
        btnConfirm = new QPushButton(MessageBox);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(147, 149, 101, 41));
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
        lblBackground = new QLabel(MessageBox);
        lblBackground->setObjectName(QString::fromUtf8("lblBackground"));
        lblBackground->setGeometry(QRect(0, 0, 400, 200));
        lblBackground->setStyleSheet(QString::fromUtf8("font: 75 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"background-color: black;\n"
"border:2px solid white;"));
        lblBackground->raise();
        lblMessage->raise();
        btnConfirm->raise();

        retranslateUi(MessageBox);

        QMetaObject::connectSlotsByName(MessageBox);
    } // setupUi

    void retranslateUi(QWidget *MessageBox)
    {
        MessageBox->setWindowTitle(QApplication::translate("MessageBox", "Form", 0, QApplication::UnicodeUTF8));
        lblMessage->setText(QApplication::translate("MessageBox", "TextLabel", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("MessageBox", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        lblBackground->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MessageBox: public Ui_MessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEBOX_H
