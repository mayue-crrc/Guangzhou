/********************************************************************************
** Form generated from reading UI file 'firealarmreset.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIREALARMRESET_H
#define UI_FIREALARMRESET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FireAlarmReset
{
public:
    QPushButton *btnReset;
    QPushButton *btnCancel;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *FireAlarmReset)
    {
        if (FireAlarmReset->objectName().isEmpty())
            FireAlarmReset->setObjectName(QString::fromUtf8("FireAlarmReset"));
        FireAlarmReset->resize(430, 195);
        FireAlarmReset->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
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
        btnReset = new QPushButton(FireAlarmReset);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setGeometry(QRect(70, 120, 91, 41));
        btnReset->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        btnCancel = new QPushButton(FireAlarmReset);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(270, 120, 91, 41));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label = new QLabel(FireAlarmReset);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 291, 41));
        label->setStyleSheet(QString::fromUtf8("color: white;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(FireAlarmReset);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 430, 195));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"background-color: black;\n"
"border:2px solid white;"));
        label_2->raise();
        btnReset->raise();
        btnCancel->raise();
        label->raise();

        retranslateUi(FireAlarmReset);

        QMetaObject::connectSlotsByName(FireAlarmReset);
    } // setupUi

    void retranslateUi(QWidget *FireAlarmReset)
    {
        FireAlarmReset->setWindowTitle(QApplication::translate("FireAlarmReset", "Form", 0, QApplication::UnicodeUTF8));
        btnReset->setText(QApplication::translate("FireAlarmReset", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("FireAlarmReset", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FireAlarmReset", "\347\201\253\347\201\276\346\212\245\350\255\246\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FireAlarmReset: public Ui_FireAlarmReset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIREALARMRESET_H
