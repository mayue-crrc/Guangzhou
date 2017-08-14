/********************************************************************************
** Form generated from reading UI file 'passwordset.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDSET_H
#define UI_PASSWORDSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordSet
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btn1Origin;
    QPushButton *btn1New;
    QPushButton *btn1Confirm;
    QLabel *lbl1Tips;
    QPushButton *btn1Set;
    QPushButton *btn2Confirm;
    QLabel *label_6;
    QLabel *lbl2Tips;
    QPushButton *btn2Set;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *btn2Origin;
    QPushButton *btn2New;
    QLabel *label_106;
    QLabel *label_107;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QWidget *PasswordSet)
    {
        if (PasswordSet->objectName().isEmpty())
            PasswordSet->setObjectName(QString::fromUtf8("PasswordSet"));
        PasswordSet->resize(1024, 600);
        PasswordSet->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        label_2 = new QLabel(PasswordSet);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 125, 121, 50));
        label_2->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(PasswordSet);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 195, 121, 50));
        label_3->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(PasswordSet);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 265, 121, 50));
        label_4->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_4->setAlignment(Qt::AlignCenter);
        btn1Origin = new QPushButton(PasswordSet);
        btn1Origin->setObjectName(QString::fromUtf8("btn1Origin"));
        btn1Origin->setGeometry(QRect(190, 125, 261, 50));
        btn1Origin->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 0, 255);\n"
"border:2px solid white;\n"
"border-radius: 5px;\n"
""));
        btn1New = new QPushButton(PasswordSet);
        btn1New->setObjectName(QString::fromUtf8("btn1New"));
        btn1New->setGeometry(QRect(190, 195, 261, 50));
        btn1New->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border-radius: 5px;\n"
"border:2px solid white;\n"
"\n"
"\n"
""));
        btn1Confirm = new QPushButton(PasswordSet);
        btn1Confirm->setObjectName(QString::fromUtf8("btn1Confirm"));
        btn1Confirm->setGeometry(QRect(190, 265, 261, 50));
        btn1Confirm->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 5px;"));
        lbl1Tips = new QLabel(PasswordSet);
        lbl1Tips->setObjectName(QString::fromUtf8("lbl1Tips"));
        lbl1Tips->setGeometry(QRect(60, 335, 291, 50));
        lbl1Tips->setStyleSheet(QString::fromUtf8("color: red;\n"
"border: 0px;"));
        lbl1Tips->setAlignment(Qt::AlignCenter);
        btn1Set = new QPushButton(PasswordSet);
        btn1Set->setObjectName(QString::fromUtf8("btn1Set"));
        btn1Set->setGeometry(QRect(370, 335, 81, 40));
        btn2Confirm = new QPushButton(PasswordSet);
        btn2Confirm->setObjectName(QString::fromUtf8("btn2Confirm"));
        btn2Confirm->setGeometry(QRect(710, 265, 261, 50));
        btn2Confirm->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 5px;"));
        label_6 = new QLabel(PasswordSet);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(570, 265, 121, 50));
        label_6->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_6->setAlignment(Qt::AlignCenter);
        lbl2Tips = new QLabel(PasswordSet);
        lbl2Tips->setObjectName(QString::fromUtf8("lbl2Tips"));
        lbl2Tips->setGeometry(QRect(580, 335, 291, 50));
        lbl2Tips->setStyleSheet(QString::fromUtf8("color: red;\n"
"border: 0px;"));
        lbl2Tips->setAlignment(Qt::AlignCenter);
        btn2Set = new QPushButton(PasswordSet);
        btn2Set->setObjectName(QString::fromUtf8("btn2Set"));
        btn2Set->setGeometry(QRect(890, 335, 81, 40));
        label_8 = new QLabel(PasswordSet);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 125, 121, 50));
        label_8->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(PasswordSet);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(570, 195, 121, 50));
        label_9->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_9->setAlignment(Qt::AlignCenter);
        btn2Origin = new QPushButton(PasswordSet);
        btn2Origin->setObjectName(QString::fromUtf8("btn2Origin"));
        btn2Origin->setGeometry(QRect(710, 125, 261, 50));
        btn2Origin->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 5px;\n"
""));
        btn2New = new QPushButton(PasswordSet);
        btn2New->setObjectName(QString::fromUtf8("btn2New"));
        btn2New->setGeometry(QRect(710, 195, 261, 50));
        btn2New->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: black;\n"
"border:2px solid white;\n"
"border-radius: 5px;"));
        label_106 = new QLabel(PasswordSet);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(30, 75, 451, 321));
        label_106->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_106->setAlignment(Qt::AlignCenter);
        label_107 = new QLabel(PasswordSet);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(550, 75, 451, 321));
        label_107->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_107->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(PasswordSet);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 50, 151, 50));
        label_10->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 0px groove, gray;\n"
"    border-color: gray;\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(PasswordSet);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(570, 50, 151, 50));
        label_11->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 0px groove, gray;\n"
"    border-color: gray;\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_11->setAlignment(Qt::AlignCenter);
        label_107->raise();
        label_106->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        btn1Origin->raise();
        btn1New->raise();
        btn1Confirm->raise();
        lbl1Tips->raise();
        btn1Set->raise();
        btn2Confirm->raise();
        label_6->raise();
        lbl2Tips->raise();
        btn2Set->raise();
        label_8->raise();
        label_9->raise();
        btn2Origin->raise();
        btn2New->raise();
        label_10->raise();
        label_11->raise();

        retranslateUi(PasswordSet);

        QMetaObject::connectSlotsByName(PasswordSet);
    } // setupUi

    void retranslateUi(QWidget *PasswordSet)
    {
        PasswordSet->setWindowTitle(QApplication::translate("PasswordSet", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PasswordSet", "\345\216\237\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PasswordSet", "\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PasswordSet", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        btn1Origin->setText(QString());
        btn1New->setText(QString());
        btn1Confirm->setText(QString());
        lbl1Tips->setText(QApplication::translate("PasswordSet", "\346\217\220\347\244\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btn1Set->setText(QApplication::translate("PasswordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btn2Confirm->setText(QString());
        label_6->setText(QApplication::translate("PasswordSet", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        lbl2Tips->setText(QApplication::translate("PasswordSet", "\346\217\220\347\244\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btn2Set->setText(QApplication::translate("PasswordSet", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PasswordSet", "\345\216\237\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PasswordSet", "\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        btn2Origin->setText(QString());
        btn2New->setText(QString());
        label_106->setText(QString());
        label_107->setText(QString());
        label_10->setText(QApplication::translate("PasswordSet", "\346\243\200\344\277\256\347\231\273\345\275\225\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PasswordSet", "\346\225\260\346\215\256\350\256\276\347\275\256\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PasswordSet: public Ui_PasswordSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDSET_H
