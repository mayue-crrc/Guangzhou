/********************************************************************************
** Form generated from reading UI file 'buzzer.ui'
**
** Created: Thu Mar 3 19:27:47 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUZZER_H
#define UI_BUZZER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Buzzer
{
public:

    void setupUi(QWidget *Buzzer)
    {
        if (Buzzer->objectName().isEmpty())
            Buzzer->setObjectName(QString::fromUtf8("Buzzer"));
        Buzzer->resize(800, 450);
        Buzzer->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 13pt;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 12pt;\n"
"    color: black;\n"
"	background-color: rgb(133, 133, 198);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}"));

        retranslateUi(Buzzer);

        QMetaObject::connectSlotsByName(Buzzer);
    } // setupUi

    void retranslateUi(QWidget *Buzzer)
    {
        Buzzer->setWindowTitle(QApplication::translate("Buzzer", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Buzzer: public Ui_Buzzer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUZZER_H
