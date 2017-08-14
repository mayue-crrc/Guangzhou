/********************************************************************************
** Form generated from reading UI file 'digitalio.ui'
**
** Created: Thu Apr 14 17:45:20 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALIO_H
#define UI_DIGITALIO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigitalIO
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_11;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;

    void setupUi(QWidget *DigitalIO)
    {
        if (DigitalIO->objectName().isEmpty())
            DigitalIO->setObjectName(QString::fromUtf8("DigitalIO"));
        DigitalIO->resize(1024, 600);
        DigitalIO->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        pushButton = new QPushButton(DigitalIO);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(930, 50, 81, 35));
        pushButton_11 = new QPushButton(DigitalIO);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(930, 510, 81, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}"));
        label = new QLabel(DigitalIO);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(935, 420, 71, 41));
        QFont font;
        font.setFamily(QString::fromUtf8(",\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(DigitalIO);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(930, 90, 81, 35));
        pushButton_3 = new QPushButton(DigitalIO);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(930, 130, 81, 35));
        pushButton_4 = new QPushButton(DigitalIO);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(930, 170, 81, 35));
        pushButton_5 = new QPushButton(DigitalIO);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(930, 210, 81, 35));
        pushButton_6 = new QPushButton(DigitalIO);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(930, 250, 81, 35));
        pushButton_7 = new QPushButton(DigitalIO);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(930, 290, 81, 35));
        pushButton_9 = new QPushButton(DigitalIO);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(930, 330, 81, 35));
        pushButton_10 = new QPushButton(DigitalIO);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(930, 380, 81, 35));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}"));
        pushButton_12 = new QPushButton(DigitalIO);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(930, 460, 81, 35));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}"));

        retranslateUi(DigitalIO);

        QMetaObject::connectSlotsByName(DigitalIO);
    } // setupUi

    void retranslateUi(QWidget *DigitalIO)
    {
        DigitalIO->setWindowTitle(QApplication::translate("DigitalIO", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DigitalIO", "TC1", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("DigitalIO", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DigitalIO", "1 / 1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DigitalIO", "MP1", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("DigitalIO", "M1", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("DigitalIO", "MP2", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("DigitalIO", "M2", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("DigitalIO", "M3", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("DigitalIO", "MP3", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("DigitalIO", "TC2", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("DigitalIO", "\342\226\262", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("DigitalIO", "\342\226\274", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DigitalIO: public Ui_DigitalIO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALIO_H
