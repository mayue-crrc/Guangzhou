/********************************************************************************
** Form generated from reading UI file 'datetimeset.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMESET_H
#define UI_DATETIMESET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateTimeSet
{
public:
    QLabel *label_107;
    QLabel *label_7;
    QPushButton *btnLeft;
    QPushButton *btnRight;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *lblYear;
    QLabel *lblMonth;
    QLabel *lblDay;
    QLabel *lblHour;
    QLabel *lblMinute;
    QLabel *lblSecond;
    QLabel *lblTip;

    void setupUi(QWidget *DateTimeSet)
    {
        if (DateTimeSet->objectName().isEmpty())
            DateTimeSet->setObjectName(QString::fromUtf8("DateTimeSet"));
        DateTimeSet->resize(1024, 600);
        DateTimeSet->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"}"));
        label_107 = new QLabel(DateTimeSet);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(110, 90, 801, 150));
        label_107->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_107->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(DateTimeSet);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(420, 70, 151, 40));
        label_7->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        label_7->setAlignment(Qt::AlignCenter);
        btnLeft = new QPushButton(DateTimeSet);
        btnLeft->setObjectName(QString::fromUtf8("btnLeft"));
        btnLeft->setGeometry(QRect(120, 250, 91, 41));
        btnLeft->setFocusPolicy(Qt::NoFocus);
        btnLeft->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnRight = new QPushButton(DateTimeSet);
        btnRight->setObjectName(QString::fromUtf8("btnRight"));
        btnRight->setGeometry(QRect(810, 250, 91, 41));
        btnRight->setFocusPolicy(Qt::NoFocus);
        btnRight->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        label_8 = new QLabel(DateTimeSet);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(270, 140, 51, 40));
        label_8->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;\n"
"font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(DateTimeSet);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(760, 140, 51, 40));
        label_9->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;\n"
"font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(DateTimeSet);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(570, 140, 51, 40));
        label_10->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;\n"
"font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(DateTimeSet);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(670, 140, 51, 40));
        label_11->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;\n"
"font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(DateTimeSet);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(470, 140, 51, 40));
        label_12->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;\n"
"font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(DateTimeSet);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(370, 140, 51, 40));
        label_13->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;\n"
"font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_13->setAlignment(Qt::AlignCenter);
        lblYear = new QLabel(DateTimeSet);
        lblYear->setObjectName(QString::fromUtf8("lblYear"));
        lblYear->setGeometry(QRect(190, 140, 81, 40));
        lblYear->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        lblYear->setAlignment(Qt::AlignCenter);
        lblMonth = new QLabel(DateTimeSet);
        lblMonth->setObjectName(QString::fromUtf8("lblMonth"));
        lblMonth->setGeometry(QRect(320, 140, 51, 40));
        lblMonth->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        lblMonth->setAlignment(Qt::AlignCenter);
        lblDay = new QLabel(DateTimeSet);
        lblDay->setObjectName(QString::fromUtf8("lblDay"));
        lblDay->setGeometry(QRect(420, 140, 51, 40));
        lblDay->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        lblDay->setAlignment(Qt::AlignCenter);
        lblHour = new QLabel(DateTimeSet);
        lblHour->setObjectName(QString::fromUtf8("lblHour"));
        lblHour->setGeometry(QRect(520, 140, 51, 40));
        lblHour->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        lblHour->setAlignment(Qt::AlignCenter);
        lblMinute = new QLabel(DateTimeSet);
        lblMinute->setObjectName(QString::fromUtf8("lblMinute"));
        lblMinute->setGeometry(QRect(620, 140, 51, 40));
        lblMinute->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        lblMinute->setAlignment(Qt::AlignCenter);
        lblSecond = new QLabel(DateTimeSet);
        lblSecond->setObjectName(QString::fromUtf8("lblSecond"));
        lblSecond->setGeometry(QRect(710, 140, 51, 40));
        lblSecond->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        lblSecond->setAlignment(Qt::AlignCenter);
        lblTip = new QLabel(DateTimeSet);
        lblTip->setObjectName(QString::fromUtf8("lblTip"));
        lblTip->setGeometry(QRect(110, 320, 791, 40));
        lblTip->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: red;"));
        lblTip->setAlignment(Qt::AlignCenter);

        retranslateUi(DateTimeSet);

        QMetaObject::connectSlotsByName(DateTimeSet);
    } // setupUi

    void retranslateUi(QWidget *DateTimeSet)
    {
        DateTimeSet->setWindowTitle(QApplication::translate("DateTimeSet", "Form", 0, QApplication::UnicodeUTF8));
        label_107->setText(QString());
        label_7->setText(QApplication::translate("DateTimeSet", "\346\227\266\351\227\264\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnLeft->setText(QApplication::translate("DateTimeSet", "\342\227\200", 0, QApplication::UnicodeUTF8));
        btnRight->setText(QApplication::translate("DateTimeSet", "\342\226\266", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DateTimeSet", "\345\271\264", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DateTimeSet", "\347\247\222", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DateTimeSet", "\346\227\266", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("DateTimeSet", "\345\210\206", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("DateTimeSet", "\346\227\245", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("DateTimeSet", "\346\234\210", 0, QApplication::UnicodeUTF8));
        lblYear->setText(QApplication::translate("DateTimeSet", "2016", 0, QApplication::UnicodeUTF8));
        lblMonth->setText(QApplication::translate("DateTimeSet", "00", 0, QApplication::UnicodeUTF8));
        lblDay->setText(QApplication::translate("DateTimeSet", "00", 0, QApplication::UnicodeUTF8));
        lblHour->setText(QApplication::translate("DateTimeSet", "00", 0, QApplication::UnicodeUTF8));
        lblMinute->setText(QApplication::translate("DateTimeSet", "00", 0, QApplication::UnicodeUTF8));
        lblSecond->setText(QApplication::translate("DateTimeSet", "00", 0, QApplication::UnicodeUTF8));
        lblTip->setText(QApplication::translate("DateTimeSet", "\346\227\240\346\225\210\347\232\204\346\227\266\351\227\264\346\240\274\345\274\217\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\357\274\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DateTimeSet: public Ui_DateTimeSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMESET_H
