/********************************************************************************
** Form generated from reading UI file 'colorcheck.ui'
**
** Created: Tue Aug 1 13:56:20 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORCHECK_H
#define UI_COLORCHECK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorCheck
{
public:
    QPushButton *btnCheckColor;

    void setupUi(QWidget *ColorCheck)
    {
        if (ColorCheck->objectName().isEmpty())
            ColorCheck->setObjectName(QString::fromUtf8("ColorCheck"));
        ColorCheck->resize(1024, 768);
        ColorCheck->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"	border:0px;\n"
"}"));
        btnCheckColor = new QPushButton(ColorCheck);
        btnCheckColor->setObjectName(QString::fromUtf8("btnCheckColor"));
        btnCheckColor->setGeometry(QRect(0, 0, 1024, 768));
        btnCheckColor->setFocusPolicy(Qt::NoFocus);
        btnCheckColor->setStyleSheet(QString::fromUtf8("border-image: url(:/images/colorCheck1.png);"));

        retranslateUi(ColorCheck);

        QMetaObject::connectSlotsByName(ColorCheck);
    } // setupUi

    void retranslateUi(QWidget *ColorCheck)
    {
        ColorCheck->setWindowTitle(QApplication::translate("ColorCheck", "Form", 0, QApplication::UnicodeUTF8));
        btnCheckColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColorCheck: public Ui_ColorCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORCHECK_H
