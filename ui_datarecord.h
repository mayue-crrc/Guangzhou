/********************************************************************************
** Form generated from reading UI file 'datarecord.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATARECORD_H
#define UI_DATARECORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataRecord
{
public:
    QPushButton *btnRecordSet;
    QPushButton *btnBack;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *lblTitle1;
    QLabel *lblBrakeComsuption1;
    QLabel *lblRegeneratePower1;
    QLabel *lblSivComsuption1;
    QLabel *lblTcuComsuption1;
    QLabel *lblCompressor1Time1;
    QLabel *lblCompressor2Time1;
    QLabel *lblAllConsumption1;
    QLabel *lblMileage1;
    QLabel *lblTime;
    QLabel *lblAllConsumption2;
    QLabel *lblSivComsuption2;
    QLabel *lblBrakeComsuption2;
    QLabel *lblCompressor1Time2;
    QLabel *lblCompressor2Time2;
    QLabel *lblTcuComsuption2;
    QLabel *lblRegeneratePower2;
    QLabel *lblMileage2;
    QLabel *lblDistance;
    QLabel *lblAllConsumption3;
    QLabel *lblSivComsuption3;
    QLabel *lblBrakeComsuption3;
    QLabel *lblCompressor1Time3;
    QLabel *lblCompressor2Time3;
    QLabel *lblTcuComsuption3;
    QLabel *lblRegeneratePower3;
    QLabel *lblMileage3;
    QLabel *label_56;
    QLabel *label_57;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *label_61;
    QLabel *label_62;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_107;
    QLabel *lblTip;

    void setupUi(QWidget *DataRecord)
    {
        if (DataRecord->objectName().isEmpty())
            DataRecord->setObjectName(QString::fromUtf8("DataRecord"));
        DataRecord->resize(1024, 600);
        DataRecord->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"	border:2px solid white"
                        "; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnRecordSet = new QPushButton(DataRecord);
        btnRecordSet->setObjectName(QString::fromUtf8("btnRecordSet"));
        btnRecordSet->setGeometry(QRect(940, 90, 71, 61));
        btnBack = new QPushButton(DataRecord);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(940, 450, 71, 61));
        btnBack->setStyleSheet(QString::fromUtf8(""));
        label_20 = new QLabel(DataRecord);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(48, 82, 190, 50));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(DataRecord);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(48, 130, 190, 50));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(DataRecord);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(48, 178, 190, 50));
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(DataRecord);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(48, 226, 190, 50));
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(DataRecord);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(48, 274, 190, 50));
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(DataRecord);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(48, 322, 190, 50));
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(DataRecord);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(48, 370, 190, 50));
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(DataRecord);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(48, 418, 190, 50));
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_27->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(DataRecord);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(48, 466, 190, 50));
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_28->setAlignment(Qt::AlignCenter);
        lblTitle1 = new QLabel(DataRecord);
        lblTitle1->setObjectName(QString::fromUtf8("lblTitle1"));
        lblTitle1->setGeometry(QRect(236, 82, 170, 50));
        lblTitle1->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1->setAlignment(Qt::AlignCenter);
        lblBrakeComsuption1 = new QLabel(DataRecord);
        lblBrakeComsuption1->setObjectName(QString::fromUtf8("lblBrakeComsuption1"));
        lblBrakeComsuption1->setGeometry(QRect(236, 418, 170, 50));
        lblBrakeComsuption1->setAlignment(Qt::AlignCenter);
        lblRegeneratePower1 = new QLabel(DataRecord);
        lblRegeneratePower1->setObjectName(QString::fromUtf8("lblRegeneratePower1"));
        lblRegeneratePower1->setGeometry(QRect(236, 466, 170, 50));
        lblRegeneratePower1->setAlignment(Qt::AlignCenter);
        lblSivComsuption1 = new QLabel(DataRecord);
        lblSivComsuption1->setObjectName(QString::fromUtf8("lblSivComsuption1"));
        lblSivComsuption1->setGeometry(QRect(236, 322, 170, 50));
        lblSivComsuption1->setAlignment(Qt::AlignCenter);
        lblTcuComsuption1 = new QLabel(DataRecord);
        lblTcuComsuption1->setObjectName(QString::fromUtf8("lblTcuComsuption1"));
        lblTcuComsuption1->setGeometry(QRect(236, 370, 170, 50));
        lblTcuComsuption1->setAlignment(Qt::AlignCenter);
        lblCompressor1Time1 = new QLabel(DataRecord);
        lblCompressor1Time1->setObjectName(QString::fromUtf8("lblCompressor1Time1"));
        lblCompressor1Time1->setGeometry(QRect(236, 178, 170, 50));
        lblCompressor1Time1->setAlignment(Qt::AlignCenter);
        lblCompressor2Time1 = new QLabel(DataRecord);
        lblCompressor2Time1->setObjectName(QString::fromUtf8("lblCompressor2Time1"));
        lblCompressor2Time1->setGeometry(QRect(236, 226, 170, 50));
        lblCompressor2Time1->setAlignment(Qt::AlignCenter);
        lblAllConsumption1 = new QLabel(DataRecord);
        lblAllConsumption1->setObjectName(QString::fromUtf8("lblAllConsumption1"));
        lblAllConsumption1->setGeometry(QRect(236, 274, 170, 50));
        lblAllConsumption1->setAlignment(Qt::AlignCenter);
        lblMileage1 = new QLabel(DataRecord);
        lblMileage1->setObjectName(QString::fromUtf8("lblMileage1"));
        lblMileage1->setGeometry(QRect(236, 130, 170, 50));
        lblMileage1->setAlignment(Qt::AlignCenter);
        lblTime = new QLabel(DataRecord);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));
        lblTime->setGeometry(QRect(404, 82, 190, 50));
        lblTime->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTime->setAlignment(Qt::AlignCenter);
        lblAllConsumption2 = new QLabel(DataRecord);
        lblAllConsumption2->setObjectName(QString::fromUtf8("lblAllConsumption2"));
        lblAllConsumption2->setGeometry(QRect(404, 274, 190, 50));
        lblAllConsumption2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        lblAllConsumption2->setAlignment(Qt::AlignCenter);
        lblSivComsuption2 = new QLabel(DataRecord);
        lblSivComsuption2->setObjectName(QString::fromUtf8("lblSivComsuption2"));
        lblSivComsuption2->setGeometry(QRect(404, 322, 190, 50));
        lblSivComsuption2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        lblSivComsuption2->setAlignment(Qt::AlignCenter);
        lblBrakeComsuption2 = new QLabel(DataRecord);
        lblBrakeComsuption2->setObjectName(QString::fromUtf8("lblBrakeComsuption2"));
        lblBrakeComsuption2->setGeometry(QRect(404, 418, 190, 50));
        lblBrakeComsuption2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        lblBrakeComsuption2->setAlignment(Qt::AlignCenter);
        lblCompressor1Time2 = new QLabel(DataRecord);
        lblCompressor1Time2->setObjectName(QString::fromUtf8("lblCompressor1Time2"));
        lblCompressor1Time2->setGeometry(QRect(404, 178, 190, 50));
        lblCompressor1Time2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        lblCompressor1Time2->setAlignment(Qt::AlignCenter);
        lblCompressor2Time2 = new QLabel(DataRecord);
        lblCompressor2Time2->setObjectName(QString::fromUtf8("lblCompressor2Time2"));
        lblCompressor2Time2->setGeometry(QRect(404, 226, 190, 50));
        lblCompressor2Time2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        lblCompressor2Time2->setAlignment(Qt::AlignCenter);
        lblTcuComsuption2 = new QLabel(DataRecord);
        lblTcuComsuption2->setObjectName(QString::fromUtf8("lblTcuComsuption2"));
        lblTcuComsuption2->setGeometry(QRect(404, 370, 190, 50));
        lblTcuComsuption2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        lblTcuComsuption2->setAlignment(Qt::AlignCenter);
        lblRegeneratePower2 = new QLabel(DataRecord);
        lblRegeneratePower2->setObjectName(QString::fromUtf8("lblRegeneratePower2"));
        lblRegeneratePower2->setGeometry(QRect(404, 466, 190, 50));
        lblRegeneratePower2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        lblRegeneratePower2->setAlignment(Qt::AlignCenter);
        lblMileage2 = new QLabel(DataRecord);
        lblMileage2->setObjectName(QString::fromUtf8("lblMileage2"));
        lblMileage2->setGeometry(QRect(404, 130, 190, 50));
        lblMileage2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        lblMileage2->setAlignment(Qt::AlignCenter);
        lblDistance = new QLabel(DataRecord);
        lblDistance->setObjectName(QString::fromUtf8("lblDistance"));
        lblDistance->setGeometry(QRect(592, 82, 210, 50));
        lblDistance->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblDistance->setAlignment(Qt::AlignCenter);
        lblAllConsumption3 = new QLabel(DataRecord);
        lblAllConsumption3->setObjectName(QString::fromUtf8("lblAllConsumption3"));
        lblAllConsumption3->setGeometry(QRect(592, 274, 210, 50));
        lblAllConsumption3->setAlignment(Qt::AlignCenter);
        lblSivComsuption3 = new QLabel(DataRecord);
        lblSivComsuption3->setObjectName(QString::fromUtf8("lblSivComsuption3"));
        lblSivComsuption3->setGeometry(QRect(592, 322, 210, 50));
        lblSivComsuption3->setAlignment(Qt::AlignCenter);
        lblBrakeComsuption3 = new QLabel(DataRecord);
        lblBrakeComsuption3->setObjectName(QString::fromUtf8("lblBrakeComsuption3"));
        lblBrakeComsuption3->setGeometry(QRect(592, 418, 210, 50));
        lblBrakeComsuption3->setAlignment(Qt::AlignCenter);
        lblCompressor1Time3 = new QLabel(DataRecord);
        lblCompressor1Time3->setObjectName(QString::fromUtf8("lblCompressor1Time3"));
        lblCompressor1Time3->setGeometry(QRect(592, 178, 210, 50));
        lblCompressor1Time3->setAlignment(Qt::AlignCenter);
        lblCompressor2Time3 = new QLabel(DataRecord);
        lblCompressor2Time3->setObjectName(QString::fromUtf8("lblCompressor2Time3"));
        lblCompressor2Time3->setGeometry(QRect(592, 226, 210, 50));
        lblCompressor2Time3->setAlignment(Qt::AlignCenter);
        lblTcuComsuption3 = new QLabel(DataRecord);
        lblTcuComsuption3->setObjectName(QString::fromUtf8("lblTcuComsuption3"));
        lblTcuComsuption3->setGeometry(QRect(592, 370, 210, 50));
        lblTcuComsuption3->setAlignment(Qt::AlignCenter);
        lblRegeneratePower3 = new QLabel(DataRecord);
        lblRegeneratePower3->setObjectName(QString::fromUtf8("lblRegeneratePower3"));
        lblRegeneratePower3->setGeometry(QRect(592, 466, 210, 50));
        lblRegeneratePower3->setAlignment(Qt::AlignCenter);
        lblMileage3 = new QLabel(DataRecord);
        lblMileage3->setObjectName(QString::fromUtf8("lblMileage3"));
        lblMileage3->setGeometry(QRect(592, 130, 210, 50));
        lblMileage3->setAlignment(Qt::AlignCenter);
        label_56 = new QLabel(DataRecord);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(800, 82, 90, 50));
        label_56->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        label_56->setAlignment(Qt::AlignCenter);
        label_57 = new QLabel(DataRecord);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(800, 274, 90, 50));
        label_57->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        label_57->setAlignment(Qt::AlignCenter);
        label_58 = new QLabel(DataRecord);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(800, 322, 90, 50));
        label_58->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        label_58->setAlignment(Qt::AlignCenter);
        label_59 = new QLabel(DataRecord);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(800, 418, 90, 50));
        label_59->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        label_59->setAlignment(Qt::AlignCenter);
        label_60 = new QLabel(DataRecord);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(800, 178, 90, 50));
        label_60->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        label_60->setAlignment(Qt::AlignCenter);
        label_61 = new QLabel(DataRecord);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(800, 226, 90, 50));
        label_61->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        label_61->setAlignment(Qt::AlignCenter);
        label_62 = new QLabel(DataRecord);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(800, 370, 90, 50));
        label_62->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        label_62->setAlignment(Qt::AlignCenter);
        label_63 = new QLabel(DataRecord);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(800, 466, 90, 50));
        label_63->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        label_63->setAlignment(Qt::AlignCenter);
        label_64 = new QLabel(DataRecord);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(800, 130, 90, 50));
        label_64->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        label_64->setAlignment(Qt::AlignCenter);
        label_107 = new QLabel(DataRecord);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(920, 0, 2, 600));
        label_107->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: white;"));
        label_107->setAlignment(Qt::AlignCenter);
        lblTip = new QLabel(DataRecord);
        lblTip->setObjectName(QString::fromUtf8("lblTip"));
        lblTip->setGeometry(QRect(60, 530, 821, 51));
        lblTip->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"color: red;"));
        lblTip->setAlignment(Qt::AlignCenter);

        retranslateUi(DataRecord);

        QMetaObject::connectSlotsByName(DataRecord);
    } // setupUi

    void retranslateUi(QWidget *DataRecord)
    {
        DataRecord->setWindowTitle(QApplication::translate("DataRecord", "Form", 0, QApplication::UnicodeUTF8));
        btnRecordSet->setText(QApplication::translate("DataRecord", "\346\225\260\346\215\256\n"
"\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("DataRecord", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("DataRecord", "\347\264\257\350\256\241\345\217\202\346\225\260\345\220\215", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("DataRecord", "\351\207\214\347\250\213", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("DataRecord", "1\345\215\225\345\205\203\345\216\213\347\274\251\346\234\272\345\267\245\344\275\234\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("DataRecord", "2\345\215\225\345\205\203\345\216\213\347\274\251\346\234\272\345\267\245\344\275\234\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("DataRecord", "\346\200\273\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("DataRecord", "\350\276\205\345\212\251\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("DataRecord", "\347\211\265\345\274\225\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("DataRecord", "\347\224\265\351\230\273\345\210\266\345\212\250\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("DataRecord", "\345\206\215\347\224\237\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8));
        lblTitle1->setText(QApplication::translate("DataRecord", "\346\200\273\347\264\257\350\256\241\351\207\217", 0, QApplication::UnicodeUTF8));
        lblBrakeComsuption1->setText(QString());
        lblRegeneratePower1->setText(QString());
        lblSivComsuption1->setText(QString());
        lblTcuComsuption1->setText(QString());
        lblCompressor1Time1->setText(QString());
        lblCompressor2Time1->setText(QString());
        lblAllConsumption1->setText(QString());
        lblMileage1->setText(QString());
        lblTime->setText(QApplication::translate("DataRecord", "\346\234\200\350\277\221\350\277\220\350\241\21430\345\244\251\347\264\257\350\256\241\351\207\217", 0, QApplication::UnicodeUTF8));
        lblAllConsumption2->setText(QString());
        lblSivComsuption2->setText(QString());
        lblBrakeComsuption2->setText(QString());
        lblCompressor1Time2->setText(QString());
        lblCompressor2Time2->setText(QString());
        lblTcuComsuption2->setText(QString());
        lblRegeneratePower2->setText(QString());
        lblMileage2->setText(QString());
        lblDistance->setText(QApplication::translate("DataRecord", "\346\234\200\350\277\221\350\277\220\350\241\2141000Km\347\264\257\350\256\241\351\207\217", 0, QApplication::UnicodeUTF8));
        lblAllConsumption3->setText(QString());
        lblSivComsuption3->setText(QString());
        lblBrakeComsuption3->setText(QString());
        lblCompressor1Time3->setText(QString());
        lblCompressor2Time3->setText(QString());
        lblTcuComsuption3->setText(QString());
        lblRegeneratePower3->setText(QString());
        lblMileage3->setText(QApplication::translate("DataRecord", "--", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("DataRecord", "\345\215\225\344\275\215", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("DataRecord", "Kw\342\200\242h", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("DataRecord", "Kw\342\200\242h", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("DataRecord", "Kw\342\200\242h", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("DataRecord", "Min", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("DataRecord", "Min", 0, QApplication::UnicodeUTF8));
        label_62->setText(QApplication::translate("DataRecord", "Kw\342\200\242h", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("DataRecord", "Kw\342\200\242h", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("DataRecord", "Km", 0, QApplication::UnicodeUTF8));
        label_107->setText(QString());
        lblTip->setText(QApplication::translate("DataRecord", "\350\257\267\345\234\250\345\217\270\346\234\272\345\256\244\345\215\240\346\234\211\346\235\241\344\273\266\344\270\213\357\274\214\350\277\233\350\241\214\346\225\260\346\215\256\350\256\276\347\275\256\346\223\215\344\275\234\357\274\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DataRecord: public Ui_DataRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATARECORD_H
