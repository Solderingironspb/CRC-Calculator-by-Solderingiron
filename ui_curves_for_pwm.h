/********************************************************************************
** Form generated from reading UI file 'curves_for_pwm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVES_FOR_PWM_H
#define UI_CURVES_FOR_PWM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_curves_for_pwm
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_CNT;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_3;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *curves_for_pwm)
    {
        if (curves_for_pwm->objectName().isEmpty())
            curves_for_pwm->setObjectName(QString::fromUtf8("curves_for_pwm"));
        curves_for_pwm->resize(1127, 880);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app7.png"), QSize(), QIcon::Normal, QIcon::Off);
        curves_for_pwm->setWindowIcon(icon);
        centralwidget = new QWidget(curves_for_pwm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));

        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/curves.PNG")));
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(textEdit);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);
        textEdit_2->setMinimumSize(QSize(0, 50));
        textEdit_2->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setPointSize(10);
        textEdit_2->setFont(font);

        verticalLayout_3->addWidget(textEdit_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_CNT = new QLineEdit(groupBox_2);
        lineEdit_CNT->setObjectName(QString::fromUtf8("lineEdit_CNT"));
        lineEdit_CNT->setFont(font);

        gridLayout->addWidget(lineEdit_CNT, 0, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox_2);


        verticalLayout_7->addLayout(verticalLayout_4);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit_3 = new QTextEdit(groupBox_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        textEdit_3->setFont(font2);

        verticalLayout->addWidget(textEdit_3);


        verticalLayout_7->addWidget(groupBox_3);


        horizontalLayout_3->addLayout(verticalLayout_7);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textEdit_4 = new QTextEdit(groupBox_4);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setMinimumSize(QSize(400, 0));
        textEdit_4->setFont(font);
        textEdit_4->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #FFFFFF);\n"
"   \n"
"}"));

        verticalLayout_6->addWidget(textEdit_4);


        horizontalLayout_3->addWidget(groupBox_4);

        curves_for_pwm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(curves_for_pwm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1127, 21));
        curves_for_pwm->setMenuBar(menubar);
        statusbar = new QStatusBar(curves_for_pwm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        curves_for_pwm->setStatusBar(statusbar);

        retranslateUi(curves_for_pwm);

        QMetaObject::connectSlotsByName(curves_for_pwm);
    } // setupUi

    void retranslateUi(QMainWindow *curves_for_pwm)
    {
        curves_for_pwm->setWindowTitle(QCoreApplication::translate("curves_for_pwm", "Curves for PWM", nullptr));
        groupBox->setTitle(QCoreApplication::translate("curves_for_pwm", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        label->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("curves_for_pwm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\222 \320\266\320\270\320\267\320\275\320\270 \320\275\320\265 \320\262\321\201\320\265 \320\273\320\270\320\275\320\265\320\271\320\275\320\276.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\237\320\276 \320\267\320\260\320\272\320\276\320\275\321\203, \320\276\321\202\320\272\321\200\321\213\321\202\320\276\320\274\321\203 \320\275\320\265\320\274\320\265\321\206\320\272\320\270\320\274 \320"
                        "\260\320\275\320\260\321\202\320\276\320\274\320\276\320\274 \320\270 \321\204\320\270\320\267\320\270\320\276\320\273\320\276\320\263\320\276\320\274 \320\255\321\200\320\275\321\201\321\202\320\276\320\274 \320\222\320\265\320\261\320\265\321\200\320\276\320\274 \320\270 \321\201\321\204\320\276\321\200\320\274\321\203\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\274\321\203 \320\275\320\265\320\274\320\265\321\206\320\272\320\270\320\274 \320\266\320\265 \321\204\320\270\320\267\320\270\320\272\320\276\320\274 \320\270 \320\277\321\201\320\270\321\205\320\276\320\273\320\276\320\263\320\276\320\274 \320\223\321\203\321\201\321\202\320\260\320\262\320\276\320\274 \320\244\320\265\321\205\320\275\320\265\321\200\320\276\320\274, \320\262\320\265\320\273\320\270\321\207\320\270\320\275\320\260 \320\276\321\211\321\203\321\211\320\265\320\275\320\270\320\271 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260 \320\270 \320\260\320\274\320\277\320\273\320\270\321\202\321"
                        "\203\320\264\320\260 \320\262\321\213\320\267\320\262\320\260\320\262\321\210\320\265\320\263\320\276 \320\270\321\205 \321\200\320\260\320\267\320\264\321\200\320\260\320\266\320\265\320\275\320\270\321\217 \321\201\320\262\321\217\320\267\320\260\320\275\321\213 \320\273\320\276\320\263\320\260\321\200\320\270\321\204\320\274\320\270\321\207\320\265\321\201\320\272\320\276\320\271 \321\204\320\276\321\200\320\274\321\203\320\273\320\276\320\271. \320\224\320\260\320\275\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \321\201\320\277\321\200\320\260\320\262\320\265\320\264\320\273\320\270\320\262 \320\264\320\273\321\217 \320\262\321\201\320\265\321\205 \320\262\320\270\320\264\320\276\320\262 \320\276\321\211\321\203\321\211\320\265\320\275\320\270\320\271 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260: \321\201\320\273\321\203\321\205\320\260, \320\267\321\200\320\265\320\275\320\270\321\217, \320\276\320\261\320\276\320\275\321\217\320\275\320\270\321\217, \320\276\321\201"
                        "\321\217\320\267\320\260\320\275\320\270\321\217. \320\227\320\260\320\272\320\276\320\275 \320\222\320\265\320\261\320\265\321\200\320\260 \342\200\224 \320\244\320\265\321\205\320\275\320\265\321\200\320\260 \320\267\320\262\321\203\321\207\320\270\321\202 \321\202\320\260\320\272: \302\253\320\241\320\270\320\273\320\260 \320\276\321\211\321\203\321\211\320\265\320\275\320\270\321\217 \320\277\321\200\320\276\320\277\320\276\321\200\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\260 \320\273\320\276\320\263\320\260\321\200\320\270\321\204\320\274\321\203 \321\201\320\270\320\273\321\213 \321\200\320\260\320\267\320\264\321\200\320\260\320\266\320\265\320\275\320\270\321\217\302\273. \320\241\320\276\320\263\320\273\320\260\321\201\320\275\320\276 \321\215\321\202\320\276\320\274\321\203 \320\267\320\260\320\272\320\276\320\275\321\203 \320\262\320\276\321\201\320\277\321\200\320\270\320\275\320\270\320\274\320\260\320\265\320\274\320\260\321\217 \320\263\321\200\320\276\320\274\320\272\320"
                        "\276\321\201\321\202\321\214 \320\267\320\262\321\203\320\272\320\260 \321\202\320\260\320\272\320\266\320\265 \320\277\321\200\320\276\320\277\320\276\321\200\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\260 \320\273\320\276\320\263\320\260\321\200\320\270\321\204\320\274\321\203 \320\265\320\263\320\276 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270 (\320\262 \321\207\320\260\321\201\321\202\320\275\320\276\321\201\321\202\320\270, \320\273\320\276\320\263\320\260\321\200\320\270\321\204\320\274\321\203 \320\274\320\276\321\211\320\275\320\276\321\201\321\202\320\270 \320\272\320\276\320\273\320\276\320\275\320\276\320\272). \320\237\320\276\321\215\321\202\320\276\320\274\321\203 \320\275\320\260 \320\260\320\274\320\277\320\273\320\270\321\202\321\203\320\264\320\275\320\276-\321\207\320\260\321\201\321\202\320\276\321\202\320\275\321\213\321\205 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321"
                        "\202\320\270\320\272\320\260\321\205 \320\267\320\262\321\203\320\272\320\276\320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\217\321\211\320\270\321\205 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262 \320\277\321\200\320\270\320\274\320\265\320\275\321\217\321\216\321\202 \320\273\320\276\320\263\320\260\321\200\320\270\321\204\320\274\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\274\320\260\321\201\321\210\321\202\320\260\320\261 \320\277\320\276 \320\276\320\261\320\265\320\270\320\274 \320\276\321\201\321\217\320\274.</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#aa0000;\">\320\230\321\201\321\202\320\276\321\207\320\275\320\270\320\272. \320\222\320\270\320\272\320\270\320\277\320\265\320\264\320\270\321\217 :)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#aa0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\241\321\202\320\260\320\273\320\272\320\270\320\262\320\260\320\273\320\270\321\201\321\214 \321\201 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\320\260\320\274\320\270?</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\225\321\201\321\202\321\214 \321\202\321\200\320\270 \320\262\320\270\320\264\320\260 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\320\276\320\262, \321\201\320\270\321\201\321\202\320\265\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320"
                        "\275\321\213\320\265 \320\277\320\276 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\321\203 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \321\201\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\321\217:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- \320\233\320\270\320\275\320\265\320\271\320\275\321\213\320\265 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\321\213, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\260\321\216\321\202\321\201\321\217 \320\261\321\203\320\272\320\262\320\276\320\271 A. \320\241\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\320\265 \320\270\320\267\320\274\320\265\320\275\321\217\320\265\321\202\321\201\321\217 \320"
                        "\277\321\200\321\217\320\274\320\276 \320\277\321\200\320\276\320\277\320\276\321\200\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276 \321\203\320\263\320\273\321\203 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260 \321\201\320\272\320\276\320\273\321\214\320\267\321\217\321\211\320\265\320\263\320\276 \320\272\320\276\320\275\321\202\320\260\320\272\321\202\320\260.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- \320\233\320\276\320\263\320\260\321\200\320\270\321\204\320\274\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\321\213, \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\260\320\265\320\274\321\213\320\265 \320\261\321\203\320\272\320\262\320\276\320\271 B. \320\241\320\275\320\260\321\207\320\260\320\273\320\260 \321\201\320"
                        "\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\320\265 \320\270\320\267\320\274\320\265\320\275\321\217\320\265\321\202\321\201\321\217 \320\261\321\213\321\201\321\202\321\200\320\276, \320\260 \320\267\320\260\321\202\320\265\320\274 \320\277\321\200\320\276\320\270\321\201\321\205\320\276\320\264\320\270\321\202 \320\274\320\265\320\264\320\273\320\265\320\275\320\275\320\265\320\265.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- \320\255\320\272\321\201\320\277\320\276\320\275\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\321\213\320\265 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\321\213 (\320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\201\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\321\217 \320\277\320"
                        "\276 \321\215\320\272\321\201\320\277\320\276\320\275\320\265\320\275\321\202\320\265), \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\276\320\261\321\213\321\207\320\275\320\276 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\260\321\216\321\202\321\201\321\217 \320\261\321\203\320\272\320\262\320\276\320\271 C. \320\241\320\275\320\260\321\207\320\260\320\273\320\260 \321\201\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\320\265 \320\270\320\267\320\274\320\265\320\275\321\217\320\265\321\202\321\201\321\217 \320\274\320\265\320\264\320\273\320\265\320\275\320\275\320\276, \320\260 \320\267\320\260\321\202\320\265\320\274 \321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\201\321\217 \320\261\321\213\321\201\321\202\321\200\320\265\320\265, \320\262 \320\276\321\202\320\273\320\270\321\207\320\270\320\265 \320\276\321\202 \320\273\320\276\320\263\320\260\321\200\320\270\321\204\320\274\320\270\321\207\320\265\321\201\320\272"
                        "\320\270\321\205 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\320\276\320\262.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\222\320\260\320\266\320\275\320\276 \320\276\320\261\321\200\320\260\321\202\320\270\321\202\321\214 \320\262\320\275\320\270\320\274\320\260\320\275\320\270\320\265 \320\275\320\260 \321\202\320\276\321\202 \321\204\320\260\320\272\321\202, \321\207\321\202\320\276 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\321\213 \320\275\320\265 \320\262\321\201\320\265\320\263\320\264\320\260 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\260\321\216\321\202\321\201\321\217 \320\261\321\203\320\272\320\262\320\260\320\274\320\270 A, B \320\270\320\273\320\270 C. \320\236\320\261\320\276\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\267"
                        "\320\260\320\262\320\270\321\201\321\217\321\202 \320\276\321\202 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\320\265\320\271 \321\201\320\260\320\274\320\270\321\205 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\320\276\320\262, \320\270\320\274\320\265\320\275\320\275\320\276 \320\277\320\276\321\215\321\202\320\276\320\274\321\203 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262\320\275\320\270\320\274\320\260\321\202\320\265\320\273\321\214\320\275\320\276 \321\207\320\270\321\202\320\260\321\202\321\214 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\272 \320\272\320\260\320\266\320\264\320\276\320\274\321\203 \320\272\320\276\320\275\320\272\321\200\320\265\321\202\320\275\320\276\320\274\321\203 \321\215\320\272\320\267\320\265\320\274\320\277\320\273\321\217\321\200\321\203.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("curves_for_pwm", "\320\237\320\276\320\264\320\261\320\276\321\200 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\320\260:", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("curves_for_pwm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\320\261\321\213\321\207\320\275\320\276 \320\264\320\273\321\217 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \321\207\320\265\320\263\320\276-\320\273\320\270\320\261\320\276 \321\205\320\262\320\260\321\202\320\260\320\265\321\202 \321\206\320\265\320\273\320\276\321\207\320\270\321\201\320\273\320\265\320\275\320\275\320\276\320\271 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\276\320\271 \321\210\320\272\320\260\320\273\321\213 0-100%. \320\242\321\203\321\202 \320\275\320\260\320\274"
                        " \320\277\320\276\320\274\320\276\320\263\321\203\321\202 \320\274\320\260\321\201\321\201\320\270\320\262\321\213 \321\201 \320\267\320\260\321\200\320\260\320\275\320\265\320\265 \320\277\320\276\321\201\321\207\320\270\321\202\320\260\320\275\320\275\321\213\320\274\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\320\274\320\270.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\235\320\276 \320\265\321\201\320\273\320\270 \320\222\321\213 \320\266\320\265\320\273\320\260\320\265\321\202\320\265 \320\277\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\261\320\276\320\273\320\265\320\265 \320\263\320\270\320\261\320\272\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 - \320\277\321\200"
                        "\320\270\320\264\320\265\321\202\321\201\321\217 \320\275\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\274\320\270\320\272\321\200\320\276\320\272\320\276\320\275\321\202\321\200\320\276\320\273\320\273\320\265\321\200 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\320\272\320\276\320\271. \320\244\320\276\321\200\320\274\321\203\320\273\321\213 \320\272\321\200\320\270\320\262\321\213\321\205 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\321\213 \320\275\320\260 \321\200\320\270\321\201\321\203\320\275\320\272\320\265 \321\201\320\262\320\265\321\200\321\205\321\203. \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260 (\321\200\320\265\320\263\320\270\321\201\321\202\321\200 TIMx_ARR), \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\222\321\213 \320\275\320\260\321\201\321\202\321"
                        "\200\320\276\320\270\320\273\320\270 \320\262 \321\202\320\260\320\271\320\274\320\265\321\200\320\265 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 &quot;\320\277\320\276\320\264\320\276\320\261\321\200\320\260\321\202\321\214 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202&quot;. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\276\321\201\320\273\320\265 \320\277\320\276\320\264\320\261\320\276\321\200\320\260 \320\274\320\276\320\266\320\275\320\276 \321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214 \320\272\321\200\320\270\320\262\321\203\321\216 \321\201 \320\264\320\260\320\275\320\275\321\213\320\274 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275"
                        "\321\202\320\276\320\274. \320\241\320\277\321\200\320\260\320\262\320\260 \320\277\320\276\321\217\320\262\321\217\321\202\321\201\321\217 \320\274\320\260\321\201\321\201\320\270\320\262\321\213 \320\272\321\200\320\270\320\262\321\213\321\205 \320\264\320\273\321\217 \320\264\320\260\320\275\320\275\320\276\320\271 \321\200\320\260\320\267\320\274\320\265\321\200\320\275\320\276\321\201\321\202\320\270 TIMx_ARR. \320\234\320\276\320\266\320\275\320\276 \320\270\321\205 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\264\320\273\321\217 \321\204\320\276\321\200\320\274\321\203\320\273 \320\262 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\276\320\274 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265\320\265 (0-100%). \320\237\321\200\320\270\320\274\320\265\321\200 \320\272\320\276\320\264\320\260 \320\275\320\260 \321\217\320\267\321\213\320\272\320\265 \320\241\320\270 \320\264\320\273\321\217 \320\234"
                        "\320\232 STM32F103C8T6 \321\203\320\272\320\260\320\267\320\260\320\275 \320\275\320\270\320\266\320\265.</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("curves_for_pwm", "TIMx auto-reload register (TIMx_ARR):", nullptr));
        label_3->setText(QCoreApplication::translate("curves_for_pwm", "k =", nullptr));
        lineEdit_CNT->setText(QString());
        lineEdit_CNT->setPlaceholderText(QCoreApplication::translate("curves_for_pwm", "0 - 65535", nullptr));
        pushButton->setText(QCoreApplication::translate("curves_for_pwm", "\320\237\320\276\320\264\320\276\320\261\321\200\320\260\321\202\321\214 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("curves_for_pwm", "\320\237\321\200\320\270\320\274\320\265\321\200 \320\272\320\276\320\264\320\260 \320\275\320\260 \321\217\320\267\321\213\320\272\320\265 \320\241\320\270:", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("curves_for_pwm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">#include</span> <span style=\" color:#2800e6;\">&quot;main.h&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">#include</span> <span style=\" color:#2800e6;\">&quot;stm32f103xx_CMSIS.h&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">#include</span> <span style=\" color:#2800e6;\">&lt;s"
                        "tdbool.h&gt;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#aa5500;\">bool</span> flag_direction = <span style=\" color:#aa5500;\">true</span>; <span style=\" color:#3f7f5f;\">//Up/Down</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint32_t</span> Delay = <span style=\" color:#008092;\">100</span>;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint8_t</span> Persent = <span style=\" color:#008092;\">0</span>; <span style=\" color:#3f7f5f;\">//\320\276\321\202 0 \320\264\320\276 100</span></p>\n"
"<p style=\"-qt"
                        "-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">enum</span> {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    Curves_linear, </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    Curves_logarithmic, </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    Curves_exponential</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">};</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint8_t</span> Curves = Curves_exponential; <span style=\" color:#3f7f5f;\">//\320\222\320\270\320\264 \320\272\321\200\320\270\320\262\320\276\320\271</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint16_t</span> PWM_exp = <span style=\" color:#008092;\">0</span>;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint16_t</span> PWM_log = <span style=\" color:#008092;\">0</span>;</p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint16_t</span> PWM_lin = <span style=\" color:#008092;\">0</span>;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint16_t</span> Value_PWM = <span style=\" color:#008092;\">0</span>;</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#3f7f5f;\">//\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\320\260 \321\202\320\270\320\277\320\260 \320\241 (\320\243\320\277\321\200\320\260"
                        "\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\202 0 \320\264\320\276 100%):</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint16_t</span> Curves_exp[<span style=\" color:#008092;\">101</span>] = { <span style=\" color:#008092;\">0</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 62</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 65</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 68</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 71</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 75</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 79</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 82</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 86<"
                        "/span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 90</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 95</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 99</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 104</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 109</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 114</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 119</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 125</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 131</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 137</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 143</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 150</span><span style=\" color:#0000"
                        "00;\">,</span><span style=\" color:#008092;\"> 157</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 165</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 173</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 181</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 189</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 198</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 208</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 217</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 228</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 238</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 250</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 262</span><span style=\" color:#000000;\">,</span><span style=\" "
                        "color:#008092;\"> 274</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 287</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 301</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 314</span><span style=\" color:#000000;\">,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#008092;\">329</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 345</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 361</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 379</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 397</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 415</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 434</span><span style=\" color:#000000;\">,</spa"
                        "n><span style=\" color:#008092;\"> 455</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 476</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 499</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 523</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 547</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 573</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 601</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 629</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 658</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 689</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 722</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 756</span><span style=\" color:#000000;\">,</span><span style=\" color:#00809"
                        "2;\"> 792</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 829</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 868</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 909</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 952</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 997</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1044</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1093</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1145</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1199</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1256</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1314</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1377</span><span "
                        "style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1442</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1509</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1581</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1655</span><span style=\" color:#000000;\">,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#008092;\">1734</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1815</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1901</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1991</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2085</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2183</span><span style=\" color:#000000;\">,</span><span style=\" color:#"
                        "008092;\"> 2286</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2394</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2506</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2625</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2749</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2878</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3014</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3156</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3305</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3461</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3624</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3795</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3974</"
                        "span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4162</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4358</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4564</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4779</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5004</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5240</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5487</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5747</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5999 </span>};</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><span style=\" color:#3f7f5f;\">//\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\320\260 \321\202\320\270\320\277\320\260 B (\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\202 0 \320\264\320\276 100%):</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint16_t</span> Curves_log[<span style=\" color:#008092;\">101</span>] = { <span style=\" color:#008092;\">0</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 59</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 902</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1430</span><span style=\" color:#000000;\">,</span><span style"
                        "=\" color:#008092;\"> 1804</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2094</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2332</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2533</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2706</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2860</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2997</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3121</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3234</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3339</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3435</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3525</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092"
                        ";\"> 3609</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3688</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3762</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3832</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3899</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3963</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4024</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4081</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4136</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4190</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4241</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4290</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4337</span><"
                        "span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4383</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4427</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4470</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4511</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4551</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4590</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4628</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4664</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4700</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4735</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4769</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4802</span><span style=\" col"
                        "or:#000000;\">,</span><span style=\" color:#008092;\"> 4833</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4865</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4896</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4926</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4955</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4983</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5012</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5039</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5066</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5092</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5118</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5143</span><span style=\" color:#000000;\">,</"
                        "span><span style=\" color:#008092;\"> 5168</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5192</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5216</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5240</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5262</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5285</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5307</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5330</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5351</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5372</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5393</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5414</span><span style=\" color:#000000;\">,</span><span style="
                        "\" color:#008092;\"> 5433</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5454</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5473</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5492</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5511</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5530</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5549</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5567</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5585</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5603</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5620</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5637</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;"
                        "\"> 5654</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5671</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5688</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5704</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5720</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5736</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5752</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5768</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5783</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5798</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5813</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5828</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5843</span><s"
                        "pan style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5858</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5872</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5886</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5900</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5914</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5928</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5942</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5955</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5968</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5981</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5999</span> };</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#3f7f5f;\">//\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\276\320\274\320\265\321\202\321\200\320\260 \321\202\320\270\320\277\320\260 A (\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\202 0 \320\264\320\276 100%):</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#003e00;\">uint16_t</span> Curves_lin[<span style=\" color:#008092;\">101</span>] = { <span style=\" color:#008092;\">0</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 59</span><span style=\" color:#000000;\">,</span><span style=\" co"
                        "lor:#008092;\"> 119</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 179</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 239</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 299</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 359</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 419</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 479</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 539</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 599</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 659</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 719</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 779</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 839</span><sp"
                        "an style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 899</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 959</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1019</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1079</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1139</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1199</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1259</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1319</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1379</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1439</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1499</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1559</span><span style=\" color:#"
                        "000000;\">,</span><span style=\" color:#008092;\"> 1619</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1679</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1739</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1799</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1859</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1919</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 1979</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2039</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2099</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2159</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2219</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2279</span><span style=\" color:#000000;\">,</span"
                        "><span style=\" color:#008092;\"> 2339</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2399</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2459</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2519</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2579</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2639</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2699</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2759</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2819</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2879</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2939</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 2999</span><span style=\" color:#000000;\">,</span><span style=\" c"
                        "olor:#008092;\"> 3059</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3119</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3179</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3239</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3299</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3359</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3419</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3479</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3539</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3599</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3659</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3719</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> "
                        "3779</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3839</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3899</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 3959</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4019</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4079</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4139</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4199</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4259</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4319</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4379</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4439</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4499</span><span "
                        "style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4559</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4619</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4679</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4739</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4799</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4859</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4919</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 4979</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5039</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5099</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5159</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5219</span><span style=\" color:#0"
                        "00000;\">,</span><span style=\" color:#008092;\"> 5279</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5339</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5399</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5459</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5519</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5579</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5639</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5699</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5759</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5819</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5879</span><span style=\" color:#000000;\">,</span><span style=\" color:#008092;\"> 5939</span><span style=\" color:#000000;\">,</span>"
                        "<span style=\" color:#008092;\"> 5999</span> };</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">int</span> main(<span style=\" color:#7f0055;\">void</span>) {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    CMSIS_Debug_init(); <span style=\" color:#3f7f5f;\">//\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\264\320\265\320\261\320\260\320\263\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    CMSIS_RCC_SystemClock_72MHz(); <span style=\" color:#3f7f5f;\">//\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\234"
                        "\320\232 \320\275\320\260 72 \320\234\320\223\321\206</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    CMSIS_SysTick_Timer_init(); <span style=\" color:#3f7f5f;\">//\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\320\275\320\276\320\263\320\276 \321\202\320\260\320\271\320\274\320\265\321\200\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    CMSIS_TIM3_init(); <span style=\" color:#3f7f5f;\">//\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\202\320\260\320\271\320\274\320\265\321\200\320\260 3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    CMSIS_TIM3_PWM_CHANNEL1_init(); <span style=\" color:#3f7f5f;\">//\320\227\320\260\320\277\321"
                        "\203\321\201\320\272 \320\250\320\230\320\234. \320\242\320\260\320\271\320\274\320\265\321\200 3. \320\232\320\260\320\275\320\260\320\273 1. \320\235\320\276\320\266\320\272\320\260 PA6 </span>  </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   <span style=\" color:#7f0055;\"> while</span> (<span style=\" color:#008092;\">1</span>) {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        PWM_lin = Curves_lin[Persent]; <span style=\" color:#3f7f5f;\">//\320\233\320\276\320\263\320\260\321\200\320\270\321\204\320\274\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\267\320\260"
                        "\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        PWM_log = Curves_log[Persent]; <span style=\" color:#3f7f5f;\">//\320\233\320\276\320\263\320\260\321\200\320\270\321\204\320\274\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        PWM_exp = Curves_exp[Persent]; <span style=\" color:#3f7f5f;\">//\320\255\320\272\321\201\320\277\320\276\320\275\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\260\321\217 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\">		</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       <span style=\" color:#7f0055;\">if</span> (Curves == Curves_linear) {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            <span style=\" color:#aa5500;\">TIM3</span>-&gt;<span style=\" color:#2800e6;\">CCR1</span> = PWM_lin;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        } <span style=\" color:#7f0055;\">else if</span> (Curves == Curves_logarithmic) {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            <span style=\" color:#aa5500;\">TIM3</span>-&gt;<span style=\" color:#2800e6;\">CCR1</span> = PWM_log;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-"
                        "right:0px; -qt-block-indent:0; text-indent:0px;\">        } <span style=\" color:#7f0055;\">else if</span> (Curves == Curves_exponential) {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            <span style=\" color:#aa5500;\">TIM3</span>-&gt;<span style=\" color:#2800e6;\">CCR1</span> = PWM_exp;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        }</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">		</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        <span style=\" color:#7f0055;\">if</span> (flag_direction) {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            Persent++;</p>\n"
"<p style=\" "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">           <span style=\" color:#7f0055;\"> if</span> (Persent &gt;= <span style=\" color:#008092;\">100</span>) {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                Persent == <span style=\" color:#008092;\">100</span>;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                flag_direction = <span style=\" color:#aa5500;\">false</span>;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            }</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        } <span style=\" color:#7f0055;\">else</span> {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-lef"
                        "t:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            Persent--;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            <span style=\" color:#7f0055;\">if</span> (Persent &lt;= <span style=\" color:#008092;\">1</span>) {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                Persent == <span style=\" color:#008092;\">1</span>;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                flag_direction = <span style=\" color:#aa5500;\">true</span>;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            }</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        }</p>\n"
"<"
                        "p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        Delay_ms(Delay);</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    }</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">}</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("curves_for_pwm", "\320\234\320\260\321\201\321\201\320\270\320\262\321\213 \320\264\320\273\321\217 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\262 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\260\321\205(0-100%):", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("curves_for_pwm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Consolas UI';\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class curves_for_pwm: public Ui_curves_for_pwm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVES_FOR_PWM_H
