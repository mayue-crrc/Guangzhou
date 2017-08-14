/********************************************************************************
** Form generated from reading UI file 'compressortest.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPRESSORTEST_H
#define UI_COMPRESSORTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompressorTest
{
public:
    QPushButton *btnCompressorTest;
    QPushButton *btnBack;
    QLabel *lblTips;
    QLabel *label_6;

    void setupUi(QWidget *CompressorTest)
    {
        if (CompressorTest->objectName().isEmpty())
            CompressorTest->setObjectName(QString::fromUtf8("CompressorTest"));
        CompressorTest->resize(1024, 600);
        CompressorTest->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"}"));
        btnCompressorTest = new QPushButton(CompressorTest);
        btnCompressorTest->setObjectName(QString::fromUtf8("btnCompressorTest"));
        btnCompressorTest->setGeometry(QRect(390, 190, 241, 51));
        btnCompressorTest->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"}"));
        btnBack = new QPushButton(CompressorTest);
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
        lblTips = new QLabel(CompressorTest);
        lblTips->setObjectName(QString::fromUtf8("lblTips"));
        lblTips->setGeometry(QRect(70, 350, 883, 101));
        lblTips->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"color: rgb(0, 255, 0);"));
        lblTips->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(CompressorTest);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 370, 60, 61));
        label_6->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 0px;\n"
"color: black;\n"
"border-radius: 5px;"));
        label_6->setAlignment(Qt::AlignCenter);

        retranslateUi(CompressorTest);

        QMetaObject::connectSlotsByName(CompressorTest);
    } // setupUi

    void retranslateUi(QWidget *CompressorTest)
    {
        CompressorTest->setWindowTitle(QApplication::translate("CompressorTest", "Form", 0, QApplication::UnicodeUTF8));
        btnCompressorTest->setText(QApplication::translate("CompressorTest", "\345\220\257\345\212\250\347\251\272\345\216\213\346\234\272\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("CompressorTest", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lblTips->setText(QApplication::translate("CompressorTest", " \345\234\250\345\217\270\346\234\272\345\256\244\345\215\240\346\234\211\347\232\204\346\235\241\344\273\266\344\270\213\357\274\214\345\215\225\345\207\273\346\214\211\351\222\256\350\277\233\350\241\214\346\265\213\350\257\225\343\200\202\n"
"\346\214\211\351\224\256\346\214\211\344\270\213\345\220\257\345\212\250\346\265\213\350\257\225\357\274\214\346\214\211\351\224\256\345\274\271\350\265\267\345\217\226\346\266\210\346\265\213\350\257\225\343\200\202", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CompressorTest", "\346\223\215\344\275\234\n"
"\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CompressorTest: public Ui_CompressorTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPRESSORTEST_H
