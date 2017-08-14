/********************************************************************************
** Form generated from reading UI file 'sivtest.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIVTEST_H
#define UI_SIVTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SivTest
{
public:
    QPushButton *btnSivCutoutA2;
    QPushButton *btnSivCutoutA1;
    QPushButton *btnSivCutoutC2;
    QPushButton *btnSivCutoutC1;
    QPushButton *btnBack;
    QLabel *lblTips;
    QLabel *label_6;

    void setupUi(QWidget *SivTest)
    {
        if (SivTest->objectName().isEmpty())
            SivTest->setObjectName(QString::fromUtf8("SivTest"));
        SivTest->resize(1024, 600);
        SivTest->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnSivCutoutA2 = new QPushButton(SivTest);
        btnSivCutoutA2->setObjectName(QString::fromUtf8("btnSivCutoutA2"));
        btnSivCutoutA2->setGeometry(QRect(570, 140, 241, 51));
        btnSivCutoutA2->setStyleSheet(QString::fromUtf8(""));
        btnSivCutoutA1 = new QPushButton(SivTest);
        btnSivCutoutA1->setObjectName(QString::fromUtf8("btnSivCutoutA1"));
        btnSivCutoutA1->setGeometry(QRect(210, 60, 241, 51));
        btnSivCutoutA1->setStyleSheet(QString::fromUtf8(""));
        btnSivCutoutC2 = new QPushButton(SivTest);
        btnSivCutoutC2->setObjectName(QString::fromUtf8("btnSivCutoutC2"));
        btnSivCutoutC2->setGeometry(QRect(210, 140, 241, 51));
        btnSivCutoutC2->setStyleSheet(QString::fromUtf8(""));
        btnSivCutoutC1 = new QPushButton(SivTest);
        btnSivCutoutC1->setObjectName(QString::fromUtf8("btnSivCutoutC1"));
        btnSivCutoutC1->setGeometry(QRect(570, 60, 241, 51));
        btnSivCutoutC1->setStyleSheet(QString::fromUtf8(""));
        btnBack = new QPushButton(SivTest);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(910, 520, 85, 51));
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
        lblTips = new QLabel(SivTest);
        lblTips->setObjectName(QString::fromUtf8("lblTips"));
        lblTips->setGeometry(QRect(70, 350, 883, 101));
        lblTips->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"color: rgb(0, 255, 0);"));
        lblTips->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(SivTest);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 370, 60, 61));
        label_6->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 0px;\n"
"color: black;\n"
"border-radius: 5px;"));
        label_6->setAlignment(Qt::AlignCenter);

        retranslateUi(SivTest);

        QMetaObject::connectSlotsByName(SivTest);
    } // setupUi

    void retranslateUi(QWidget *SivTest)
    {
        SivTest->setWindowTitle(QApplication::translate("SivTest", "Form", 0, QApplication::UnicodeUTF8));
        btnSivCutoutA2->setText(QApplication::translate("SivTest", "SIV\345\210\207\351\231\244(A2\350\275\246)", 0, QApplication::UnicodeUTF8));
        btnSivCutoutA1->setText(QApplication::translate("SivTest", "SIV\345\210\207\351\231\244(A1\350\275\246)", 0, QApplication::UnicodeUTF8));
        btnSivCutoutC2->setText(QApplication::translate("SivTest", "SIV\345\210\207\351\231\244(C2\350\275\246)", 0, QApplication::UnicodeUTF8));
        btnSivCutoutC1->setText(QApplication::translate("SivTest", "SIV\345\210\207\351\231\244(C1\350\275\246)", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("SivTest", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lblTips->setText(QApplication::translate("SivTest", " \345\234\250\345\217\270\346\234\272\345\256\244\345\215\240\346\234\211\347\232\204\346\235\241\344\273\266\344\270\213\357\274\214\345\215\225\345\207\273\346\214\211\351\222\256\350\277\233\350\241\214\346\265\213\350\257\225\343\200\202\n"
"\346\214\211\351\222\256\346\214\211\344\270\213\350\241\250\347\244\272\346\277\200\346\264\273\346\265\213\350\257\225\357\274\214\346\214\211\351\224\256\345\274\271\350\265\267\350\241\250\347\244\272\345\217\226\346\266\210\346\265\213\350\257\225\343\200\202", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SivTest", "\346\223\215\344\275\234\n"
"\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SivTest: public Ui_SivTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIVTEST_H
