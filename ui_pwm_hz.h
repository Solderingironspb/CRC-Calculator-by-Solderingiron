/********************************************************************************
** Form generated from reading UI file 'pwm_hz.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWM_HZ_H
#define UI_PWM_HZ_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PWM_HZ
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_6;
    QLineEdit *lineEdit_CounterPeriod_2;
    QLabel *label_2;
    QLabel *label_9;
    QLineEdit *LineEdit_Prescaler;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *LineEdit_TImerClock;
    QLineEdit *lineEdit_CounterPeriod;
    QLineEdit *LineEdit_Prescaler_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_FrequencyHz;
    QLineEdit *lineEdit_FrequencykHz;
    QLineEdit *lineEdit_FrequencyMHz;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PWM_HZ)
    {
        if (PWM_HZ->objectName().isEmpty())
            PWM_HZ->setObjectName(QString::fromUtf8("PWM_HZ"));
        PWM_HZ->resize(963, 425);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app8.png"), QSize(), QIcon::Normal, QIcon::Off);
        PWM_HZ->setWindowIcon(icon);
        centralwidget = new QWidget(PWM_HZ);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/STM32_Frecuency_calculator.png")));

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setPointSize(10);
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 5, 3, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        lineEdit_CounterPeriod_2 = new QLineEdit(centralwidget);
        lineEdit_CounterPeriod_2->setObjectName(QString::fromUtf8("lineEdit_CounterPeriod_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(11);
        lineEdit_CounterPeriod_2->setFont(font1);
        lineEdit_CounterPeriod_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_CounterPeriod_2, 2, 4, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 4, 3, 1, 1);

        LineEdit_Prescaler = new QLineEdit(centralwidget);
        LineEdit_Prescaler->setObjectName(QString::fromUtf8("LineEdit_Prescaler"));
        LineEdit_Prescaler->setFont(font1);

        gridLayout->addWidget(LineEdit_Prescaler, 1, 2, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 3, 3, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        LineEdit_TImerClock = new QLineEdit(centralwidget);
        LineEdit_TImerClock->setObjectName(QString::fromUtf8("LineEdit_TImerClock"));
        LineEdit_TImerClock->setFont(font1);

        gridLayout->addWidget(LineEdit_TImerClock, 0, 2, 1, 1);

        lineEdit_CounterPeriod = new QLineEdit(centralwidget);
        lineEdit_CounterPeriod->setObjectName(QString::fromUtf8("lineEdit_CounterPeriod"));
        lineEdit_CounterPeriod->setFont(font1);

        gridLayout->addWidget(lineEdit_CounterPeriod, 2, 2, 1, 1);

        LineEdit_Prescaler_2 = new QLineEdit(centralwidget);
        LineEdit_Prescaler_2->setObjectName(QString::fromUtf8("LineEdit_Prescaler_2"));
        LineEdit_Prescaler_2->setFont(font1);
        LineEdit_Prescaler_2->setReadOnly(true);

        gridLayout->addWidget(LineEdit_Prescaler_2, 1, 4, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        lineEdit_FrequencyHz = new QLineEdit(centralwidget);
        lineEdit_FrequencyHz->setObjectName(QString::fromUtf8("lineEdit_FrequencyHz"));
        lineEdit_FrequencyHz->setFont(font1);
        lineEdit_FrequencyHz->setReadOnly(true);

        gridLayout->addWidget(lineEdit_FrequencyHz, 3, 2, 1, 1);

        lineEdit_FrequencykHz = new QLineEdit(centralwidget);
        lineEdit_FrequencykHz->setObjectName(QString::fromUtf8("lineEdit_FrequencykHz"));
        lineEdit_FrequencykHz->setFont(font1);
        lineEdit_FrequencykHz->setReadOnly(true);

        gridLayout->addWidget(lineEdit_FrequencykHz, 4, 2, 1, 1);

        lineEdit_FrequencyMHz = new QLineEdit(centralwidget);
        lineEdit_FrequencyMHz->setObjectName(QString::fromUtf8("lineEdit_FrequencyMHz"));
        lineEdit_FrequencyMHz->setFont(font1);
        lineEdit_FrequencyMHz->setReadOnly(true);

        gridLayout->addWidget(lineEdit_FrequencyMHz, 5, 2, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_7->setFont(font2);

        gridLayout->addWidget(label_7, 3, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        PWM_HZ->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PWM_HZ);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 963, 22));
        PWM_HZ->setMenuBar(menubar);
        statusbar = new QStatusBar(PWM_HZ);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PWM_HZ->setStatusBar(statusbar);

        retranslateUi(PWM_HZ);

        QMetaObject::connectSlotsByName(PWM_HZ);
    } // setupUi

    void retranslateUi(QMainWindow *PWM_HZ)
    {
        PWM_HZ->setWindowTitle(QCoreApplication::translate("PWM_HZ", "STM32 TIMx Calculator", nullptr));
        label->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("PWM_HZ", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; font-size:10pt;\">\320\237\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\320\265:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; font-size:10pt;\">Timer clock - \321\207\320\260\321\201\321\202\320\276\321\202\320\260, \320\276\321\202 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \321\202\320\260\320\272\321\202\320\270\321\200\321\203\320\265\321"
                        "\202\321\201\321\217 \321\202\320\260\320\271\320\274\320\265\321\200 (\321\210\320\270\320\275\320\260 APBx)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; font-size:10pt;\">Prescaler - \320\277\321\200\320\265\320\264\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214 (\321\200\320\265\320\263\320\270\321\201\321\202\321\200 PSC)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; font-size:10pt;\">Counter period - \320\264\320\276 \321\201\320\272\320\276\320\273\321\214\320\272\320\270 \320\261\321\203\320\264\320\265\321\202 \321\201\321\207\320\270\321\202\320\260\321\202\321\214 \321\201\321\207\320\265\321\202\321\207\320\270\320\272 CNT. (\321\200\320\265\320\263\320\270\321\201\321\202\321\200 ARR)</span></p>\n"
"<p style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; font-size:10pt;\">Frecuency - \320\270\321\202\320\276\320\263\320\276\320\262\320\260\321\217 \321\207\320\260\321\201\321\202\320\276\321\202\320\260 \320\262 \320\223\321\206</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; font-size:10pt;\">\320\235\320\265 \320\267\320\260\320\261\321\213\320\262\320\260\320\271\321\202\320\265 \320\277\321\200\320\276 \320\276\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\321\217 \321\202\320\260\320\271\320\274\320\265\321\200\320\260.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; font-size:10pt;\">\320\235\320\260\320\277\321\200\320\270\320\274\320\265\321\200 \320"
                        "\275\320\260 STM32F103C8T6 \321\202\320\260\320\271\320\274\320\265\321\200\321\213 16bit, \320\260 \320\275\320\260 STM32F411CCU6 \320\265\321\201\321\202\321\214 \321\202\320\260\320\271\320\274\320\265\321\200\321\213 32 bit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; font-size:10pt;\"> </span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("PWM_HZ", "\320\234\320\223\321\206", nullptr));
        label_6->setText(QCoreApplication::translate("PWM_HZ", "\320\222\321\213\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\275\320\260 STM32:", nullptr));
        lineEdit_CounterPeriod_2->setText(QCoreApplication::translate("PWM_HZ", "9999", nullptr));
        label_2->setText(QCoreApplication::translate("PWM_HZ", "Timer clock (\320\223\321\206):", nullptr));
        label_9->setText(QCoreApplication::translate("PWM_HZ", "\320\272\320\223\321\206", nullptr));
        LineEdit_Prescaler->setText(QCoreApplication::translate("PWM_HZ", "7200", nullptr));
        label_8->setText(QCoreApplication::translate("PWM_HZ", "\320\223\321\206", nullptr));
        label_5->setText(QCoreApplication::translate("PWM_HZ", "\320\222\321\213\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\275\320\260 STM32:", nullptr));
        LineEdit_TImerClock->setText(QCoreApplication::translate("PWM_HZ", "72000000", nullptr));
        lineEdit_CounterPeriod->setText(QCoreApplication::translate("PWM_HZ", "10000", nullptr));
        LineEdit_Prescaler_2->setText(QCoreApplication::translate("PWM_HZ", "7199", nullptr));
        label_3->setText(QCoreApplication::translate("PWM_HZ", "Prescaler:", nullptr));
        label_4->setText(QCoreApplication::translate("PWM_HZ", "Counter period:", nullptr));
        lineEdit_FrequencyHz->setText(QCoreApplication::translate("PWM_HZ", "1", nullptr));
        lineEdit_FrequencykHz->setText(QCoreApplication::translate("PWM_HZ", "0.001", nullptr));
        lineEdit_FrequencyMHz->setText(QCoreApplication::translate("PWM_HZ", "1e-6", nullptr));
        label_7->setText(QCoreApplication::translate("PWM_HZ", "Frequency:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PWM_HZ: public Ui_PWM_HZ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWM_HZ_H
