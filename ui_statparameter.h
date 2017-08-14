/********************************************************************************
** Form generated from reading UI file 'statparameter.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATPARAMETER_H
#define UI_STATPARAMETER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatParameter
{
public:
    QPushButton *btnSiv;
    QPushButton *btnStep;
    QPushButton *btnUp;
    QPushButton *btnDown;
    QPushButton *btnBack;
    QPushButton *btnBcu;
    QPushButton *btnTcu;
    QPushButton *btnCharging;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *StatParameter)
    {
        if (StatParameter->objectName().isEmpty())
            StatParameter->setObjectName(QString::fromUtf8("StatParameter"));
        StatParameter->resize(1024, 600);
        StatParameter->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"}"));
        btnSiv = new QPushButton(StatParameter);
        btnSiv->setObjectName(QString::fromUtf8("btnSiv"));
        btnSiv->setGeometry(QRect(930, 60, 80, 51));
        btnStep = new QPushButton(StatParameter);
        btnStep->setObjectName(QString::fromUtf8("btnStep"));
        btnStep->setGeometry(QRect(930, 300, 80, 51));
        btnUp = new QPushButton(StatParameter);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setGeometry(QRect(930, 360, 80, 51));
        btnUp->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnDown = new QPushButton(StatParameter);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        btnDown->setGeometry(QRect(930, 420, 80, 51));
        btnDown->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 25px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnBack = new QPushButton(StatParameter);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(930, 509, 80, 51));
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
        btnBcu = new QPushButton(StatParameter);
        btnBcu->setObjectName(QString::fromUtf8("btnBcu"));
        btnBcu->setGeometry(QRect(930, 180, 80, 51));
        btnTcu = new QPushButton(StatParameter);
        btnTcu->setObjectName(QString::fromUtf8("btnTcu"));
        btnTcu->setGeometry(QRect(930, 120, 80, 51));
        btnCharging = new QPushButton(StatParameter);
        btnCharging->setObjectName(QString::fromUtf8("btnCharging"));
        btnCharging->setGeometry(QRect(930, 240, 80, 51));
        QFont font;
        font.setFamily(QString::fromUtf8(",\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btnCharging->setFont(font);
        label = new QLabel(StatParameter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(750, 540, 66, 41));
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(StatParameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(920, 10, 101, 581));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->raise();
        btnSiv->raise();
        btnStep->raise();
        btnUp->raise();
        btnDown->raise();
        btnBack->raise();
        btnBcu->raise();
        btnTcu->raise();
        btnCharging->raise();
        label->raise();

        retranslateUi(StatParameter);

        QMetaObject::connectSlotsByName(StatParameter);
    } // setupUi

    void retranslateUi(QWidget *StatParameter)
    {
        StatParameter->setWindowTitle(QApplication::translate("StatParameter", "Form", 0, QApplication::UnicodeUTF8));
        btnSiv->setText(QApplication::translate("StatParameter", "SIV", 0, QApplication::UnicodeUTF8));
        btnStep->setText(QApplication::translate("StatParameter", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QApplication::translate("StatParameter", "\342\226\262", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QApplication::translate("StatParameter", "\342\226\274", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("StatParameter", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnBcu->setText(QApplication::translate("StatParameter", "BCU", 0, QApplication::UnicodeUTF8));
        btnTcu->setText(QApplication::translate("StatParameter", "TCU", 0, QApplication::UnicodeUTF8));
        btnCharging->setText(QApplication::translate("StatParameter", "\345\205\205\347\224\265\346\234\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StatParameter", "1 / 1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StatParameter: public Ui_StatParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATPARAMETER_H
