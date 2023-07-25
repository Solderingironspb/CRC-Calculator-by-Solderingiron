/********************************************************************************
** Form generated from reading UI file 'rtd_calculator_resistance_to_temperature.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTD_CALCULATOR_RESISTANCE_TO_TEMPERATURE_H
#define UI_RTD_CALCULATOR_RESISTANCE_TO_TEMPERATURE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RTD_Calculator_Resistance_to_Temperature
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox_Type;
    QLabel *label_3;
    QLineEdit *lineEdit_alpha;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLabel *label_7;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RTD_Calculator_Resistance_to_Temperature)
    {
        if (RTD_Calculator_Resistance_to_Temperature->objectName().isEmpty())
            RTD_Calculator_Resistance_to_Temperature->setObjectName(QString::fromUtf8("RTD_Calculator_Resistance_to_Temperature"));
        RTD_Calculator_Resistance_to_Temperature->resize(652, 510);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app4.png"), QSize(), QIcon::Normal, QIcon::Off);
        RTD_Calculator_Resistance_to_Temperature->setWindowIcon(icon);
        centralwidget = new QWidget(RTD_Calculator_Resistance_to_Temperature);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        comboBox_Type = new QComboBox(groupBox);
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->setObjectName(QString::fromUtf8("comboBox_Type"));

        horizontalLayout->addWidget(comboBox_Type);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        lineEdit_alpha = new QLineEdit(groupBox);
        lineEdit_alpha->setObjectName(QString::fromUtf8("lineEdit_alpha"));
        lineEdit_alpha->setMaximumSize(QSize(60, 16777215));
        lineEdit_alpha->setFont(font1);
        lineEdit_alpha->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_alpha);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(150, 0));
        label_4->setMaximumSize(QSize(150, 16777215));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(100, 16777215));
        lineEdit->setFont(font1);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(100, 16777215));
        lineEdit_2->setFont(font1);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(150, 0));
        label_5->setMaximumSize(QSize(150, 16777215));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 1, 3, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(20, 16777215));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(20, 16777215));

        gridLayout->addWidget(label_7, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addWidget(groupBox_2);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_3->addWidget(textBrowser);

        RTD_Calculator_Resistance_to_Temperature->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RTD_Calculator_Resistance_to_Temperature);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 652, 21));
        RTD_Calculator_Resistance_to_Temperature->setMenuBar(menubar);
        statusbar = new QStatusBar(RTD_Calculator_Resistance_to_Temperature);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RTD_Calculator_Resistance_to_Temperature->setStatusBar(statusbar);

        retranslateUi(RTD_Calculator_Resistance_to_Temperature);

        QMetaObject::connectSlotsByName(RTD_Calculator_Resistance_to_Temperature);
    } // setupUi

    void retranslateUi(QMainWindow *RTD_Calculator_Resistance_to_Temperature)
    {
        RTD_Calculator_Resistance_to_Temperature->setWindowTitle(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "RTD Calculator Resistance to Temperature", nullptr));
        label->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\242\320\265\321\200\320\274\320\276\320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270 \321\201\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\321\217 \320\270\320\267 \320\277\320\273\320\260\321\202\320\270\320\275\321\213, \320\274\320\265\320\264\320\270 \320\270 \320\275\320\270\320\272\320\265\320\273\321\217 (\320\223\320\236\320\241\320\242 6651-2009)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\232\320\273\320\260\321\201\321\201\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217:", nullptr));
        label_2->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\242\320\270\320\277 \320\242\320\241:", nullptr));
        comboBox_Type->setItemText(0, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "Pt100", nullptr));
        comboBox_Type->setItemText(1, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "Pt500", nullptr));
        comboBox_Type->setItemText(2, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "Pt1000", nullptr));
        comboBox_Type->setItemText(3, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "50\320\237", nullptr));
        comboBox_Type->setItemText(4, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "100\320\237", nullptr));
        comboBox_Type->setItemText(5, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "50\320\234", nullptr));
        comboBox_Type->setItemText(6, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "100\320\234", nullptr));
        comboBox_Type->setItemText(7, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "100\320\235", nullptr));
        comboBox_Type->setItemText(8, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "500\320\235", nullptr));
        comboBox_Type->setItemText(9, QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "1000\320\235", nullptr));

        label_3->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\275\321\213\320\271 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \316\261: ", nullptr));
        lineEdit_alpha->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\240\320\260\321\201\321\207\320\265\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\320\265:", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "0.0", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "0.0", nullptr));
        pushButton->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\262 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\321\203", nullptr));
        label_5->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\321\203:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\262 \321\201\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\320\236\320\274", nullptr));
        label_7->setText(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "\302\260\320\241", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("RTD_Calculator_Resistance_to_Temperature", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\240\320\260\320\267\321\200\320\265\321\210\320\265\320\275\320\270\320\265:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- \320\237\320\273\320\260\321\202\320\270\320\275\320\276\320\262\321\213\320\265 \320\242\320\241 \320\270 \320\247\320\255: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">-200</span><span style=\" font-size:10pt;\"> \302\260C \320\264"
                        "\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">850</span><span style=\" font-size:10pt;\"> \302\260\320\241 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- \320\234\320\265\320\264\320\275\321\213\320\265 \320\242\320\241 \320\270 \320\247\320\255: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">-180</span><span style=\" font-size:10pt;\"> \302\260C \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">200</span><span style=\" font-size:10pt;\"> \302\260\320\241 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- \320\235\320\270\320\272\320\265\320\273\320\265\320\262\321\213\320\265 \320\242\320\241 \320\270 \320\247\320\255: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">-60</span><spa"
                        "n style=\" font-size:10pt;\"> \302\260C \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">180</span><span style=\" font-size:10pt;\"> \302\260\320\241 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \321\201\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\320\271:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- Pt100: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">18.52</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">390.48</span><span style=\" font-size:10pt;\"> \320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; ma"
                        "rgin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- Pt500: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">92.60</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">1952.41</span><span style=\" font-size:10pt;\"> \320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- Pt1000: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">185.20</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">3904.81</span><span style=\" font-size:10pt;\"> \320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\""
                        ">- 50\320\237: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">8.62</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">197.58 </span><span style=\" font-size:10pt;\">\320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 100\320\237: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">17.24</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">395.16</span><span style=\" font-size:10pt;\"> \320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 50\320\234: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">10.26</span><span style=\" fon"
                        "t-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">92.80</span><span style=\" font-size:10pt;\"> \320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 100\320\234: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">20.53</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">185.60</span><span style=\" font-size:10pt;\"> \320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 100\320\235: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">69.45</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276</span><span style=\" font-size:10pt; color:#aa0000;\"> 223.21</spa"
                        "n><span style=\" font-size:10pt;\"> \320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 500\320\235: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">347.27</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">1116.03</span><span style=\" font-size:10pt;\"> \320\236\320\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 1000\320\235: \320\276\321\202 </span><span style=\" font-size:10pt; color:#005500;\">694.54</span><span style=\" font-size:10pt;\"> \320\236\320\274 \320\264\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">2232.06</span><span style=\" font-size:10pt;\"> \320\236\320\274</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RTD_Calculator_Resistance_to_Temperature: public Ui_RTD_Calculator_Resistance_to_Temperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTD_CALCULATOR_RESISTANCE_TO_TEMPERATURE_H
