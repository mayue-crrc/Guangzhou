/********************************************************************************
** Form generated from reading UI file 'mytest.ui'
**
** Created: Mon Mar 28 23:28:25 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTEST_H
#define UI_MYTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTest
{
public:

    void setupUi(QWidget *MyTest)
    {
        if (MyTest->objectName().isEmpty())
            MyTest->setObjectName(QString::fromUtf8("MyTest"));
        MyTest->resize(400, 300);

        retranslateUi(MyTest);

        QMetaObject::connectSlotsByName(MyTest);
    } // setupUi

    void retranslateUi(QWidget *MyTest)
    {
        MyTest->setWindowTitle(QApplication::translate("MyTest", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyTest: public Ui_MyTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTEST_H
