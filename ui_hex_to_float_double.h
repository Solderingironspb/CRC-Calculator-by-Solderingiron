/********************************************************************************
** Form generated from reading UI file 'hex_to_float_double.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEX_TO_FLOAT_DOUBLE_H
#define UI_HEX_TO_FLOAT_DOUBLE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hex_to_float_double
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_float_hex;
    QLineEdit *lineEdit_float_value;
    QPushButton *pushButton_convert_to_hex_f;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_convert_to_float;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_Double_hex;
    QLabel *label_4;
    QPushButton *pushButton_Convert_to_hex_d;
    QLabel *label_3;
    QLineEdit *lineEdit_Double_value;
    QPushButton *pushButton_convert_to_double;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser;
    QLabel *label_10;
    QTextBrowser *textBrowser_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *hex_to_float_double)
    {
        if (hex_to_float_double->objectName().isEmpty())
            hex_to_float_double->setObjectName(QString::fromUtf8("hex_to_float_double"));
        hex_to_float_double->resize(748, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        hex_to_float_double->setWindowIcon(icon);
        centralwidget = new QWidget(hex_to_float_double);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_float_hex = new QLineEdit(groupBox);
        lineEdit_float_hex->setObjectName(QString::fromUtf8("lineEdit_float_hex"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_float_hex->sizePolicy().hasHeightForWidth());
        lineEdit_float_hex->setSizePolicy(sizePolicy);
        lineEdit_float_hex->setMinimumSize(QSize(170, 0));
        lineEdit_float_hex->setMaximumSize(QSize(500, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(11);
        lineEdit_float_hex->setFont(font);

        gridLayout->addWidget(lineEdit_float_hex, 0, 1, 1, 1);

        lineEdit_float_value = new QLineEdit(groupBox);
        lineEdit_float_value->setObjectName(QString::fromUtf8("lineEdit_float_value"));
        sizePolicy.setHeightForWidth(lineEdit_float_value->sizePolicy().hasHeightForWidth());
        lineEdit_float_value->setSizePolicy(sizePolicy);
        lineEdit_float_value->setMinimumSize(QSize(170, 0));
        lineEdit_float_value->setMaximumSize(QSize(500, 16777215));
        lineEdit_float_value->setFont(font);

        gridLayout->addWidget(lineEdit_float_value, 1, 1, 1, 1);

        pushButton_convert_to_hex_f = new QPushButton(groupBox);
        pushButton_convert_to_hex_f->setObjectName(QString::fromUtf8("pushButton_convert_to_hex_f"));
        sizePolicy.setHeightForWidth(pushButton_convert_to_hex_f->sizePolicy().hasHeightForWidth());
        pushButton_convert_to_hex_f->setSizePolicy(sizePolicy);
        pushButton_convert_to_hex_f->setMinimumSize(QSize(110, 0));
        pushButton_convert_to_hex_f->setMaximumSize(QSize(500, 16777215));
        QFont font1;
        font1.setPointSize(10);
        pushButton_convert_to_hex_f->setFont(font1);

        gridLayout->addWidget(pushButton_convert_to_hex_f, 1, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(100, 16777215));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_convert_to_float = new QPushButton(groupBox);
        pushButton_convert_to_float->setObjectName(QString::fromUtf8("pushButton_convert_to_float"));
        sizePolicy.setHeightForWidth(pushButton_convert_to_float->sizePolicy().hasHeightForWidth());
        pushButton_convert_to_float->setSizePolicy(sizePolicy);
        pushButton_convert_to_float->setMinimumSize(QSize(110, 0));
        pushButton_convert_to_float->setMaximumSize(QSize(500, 16777215));
        pushButton_convert_to_float->setFont(font1);

        gridLayout->addWidget(pushButton_convert_to_float, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_Double_hex = new QLineEdit(groupBox_2);
        lineEdit_Double_hex->setObjectName(QString::fromUtf8("lineEdit_Double_hex"));
        sizePolicy.setHeightForWidth(lineEdit_Double_hex->sizePolicy().hasHeightForWidth());
        lineEdit_Double_hex->setSizePolicy(sizePolicy);
        lineEdit_Double_hex->setMinimumSize(QSize(170, 0));
        lineEdit_Double_hex->setMaximumSize(QSize(500, 16777215));
        lineEdit_Double_hex->setFont(font);

        gridLayout_2->addWidget(lineEdit_Double_hex, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setFont(font1);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        pushButton_Convert_to_hex_d = new QPushButton(groupBox_2);
        pushButton_Convert_to_hex_d->setObjectName(QString::fromUtf8("pushButton_Convert_to_hex_d"));
        sizePolicy.setHeightForWidth(pushButton_Convert_to_hex_d->sizePolicy().hasHeightForWidth());
        pushButton_Convert_to_hex_d->setSizePolicy(sizePolicy);
        pushButton_Convert_to_hex_d->setMinimumSize(QSize(110, 0));
        pushButton_Convert_to_hex_d->setMaximumSize(QSize(500, 16777215));
        pushButton_Convert_to_hex_d->setFont(font1);

        gridLayout_2->addWidget(pushButton_Convert_to_hex_d, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_Double_value = new QLineEdit(groupBox_2);
        lineEdit_Double_value->setObjectName(QString::fromUtf8("lineEdit_Double_value"));
        sizePolicy.setHeightForWidth(lineEdit_Double_value->sizePolicy().hasHeightForWidth());
        lineEdit_Double_value->setSizePolicy(sizePolicy);
        lineEdit_Double_value->setMinimumSize(QSize(170, 0));
        lineEdit_Double_value->setMaximumSize(QSize(500, 16777215));
        lineEdit_Double_value->setFont(font);

        gridLayout_2->addWidget(lineEdit_Double_value, 1, 1, 1, 1);

        pushButton_convert_to_double = new QPushButton(groupBox_2);
        pushButton_convert_to_double->setObjectName(QString::fromUtf8("pushButton_convert_to_double"));
        sizePolicy.setHeightForWidth(pushButton_convert_to_double->sizePolicy().hasHeightForWidth());
        pushButton_convert_to_double->setSizePolicy(sizePolicy);
        pushButton_convert_to_double->setMinimumSize(QSize(110, 0));
        pushButton_convert_to_double->setMaximumSize(QSize(500, 16777215));
        pushButton_convert_to_double->setFont(font1);

        gridLayout_2->addWidget(pushButton_convert_to_double, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        horizontalLayout_2->addWidget(groupBox_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textBrowser = new QTextBrowser(groupBox_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        textBrowser->setFont(font2);

        verticalLayout_3->addWidget(textBrowser);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        textBrowser_2 = new QTextBrowser(groupBox_3);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy2);
        textBrowser_2->setMaximumSize(QSize(16777215, 200));
        textBrowser_2->setFont(font);

        verticalLayout_3->addWidget(textBrowser_2);


        verticalLayout_4->addWidget(groupBox_3);

        hex_to_float_double->setCentralWidget(centralwidget);
        menubar = new QMenuBar(hex_to_float_double);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 748, 21));
        hex_to_float_double->setMenuBar(menubar);
        statusbar = new QStatusBar(hex_to_float_double);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        hex_to_float_double->setStatusBar(statusbar);

        retranslateUi(hex_to_float_double);

        QMetaObject::connectSlotsByName(hex_to_float_double);
    } // setupUi

    void retranslateUi(QMainWindow *hex_to_float_double)
    {
        hex_to_float_double->setWindowTitle(QCoreApplication::translate("hex_to_float_double", "HEX to Float/Double", nullptr));
        groupBox->setTitle(QCoreApplication::translate("hex_to_float_double", "Float", nullptr));
        lineEdit_float_hex->setPlaceholderText(QCoreApplication::translate("hex_to_float_double", "0x00000000", nullptr));
        lineEdit_float_value->setText(QString());
        lineEdit_float_value->setPlaceholderText(QCoreApplication::translate("hex_to_float_double", "0", nullptr));
        pushButton_convert_to_hex_f->setText(QCoreApplication::translate("hex_to_float_double", "Convert to hex", nullptr));
        label->setText(QCoreApplication::translate("hex_to_float_double", "Hex value:", nullptr));
        label_2->setText(QCoreApplication::translate("hex_to_float_double", "Float value:", nullptr));
        pushButton_convert_to_float->setText(QCoreApplication::translate("hex_to_float_double", "Convert to float", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("hex_to_float_double", "Double", nullptr));
        lineEdit_Double_hex->setPlaceholderText(QCoreApplication::translate("hex_to_float_double", "0x0000000000000000", nullptr));
        label_4->setText(QCoreApplication::translate("hex_to_float_double", "Double value:", nullptr));
        pushButton_Convert_to_hex_d->setText(QCoreApplication::translate("hex_to_float_double", "Convert to hex", nullptr));
        label_3->setText(QCoreApplication::translate("hex_to_float_double", "Hex value:", nullptr));
        lineEdit_Double_value->setText(QString());
        lineEdit_Double_value->setPlaceholderText(QCoreApplication::translate("hex_to_float_double", "0", nullptr));
        pushButton_convert_to_double->setText(QCoreApplication::translate("hex_to_float_double", "Convert to double", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("hex_to_float_double", "\320\237\321\200\320\270\320\274\320\265\321\200 \320\272\320\276\320\264\320\260 \320\275\320\260 \321\217\320\267\321\213\320\272\320\265 \320\241\320\270:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("hex_to_float_double", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">#include </span><span style=\" color:#2800e6;\">&lt;stdio.h&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">#include</span><span style=\" color:#aa00ff;\"> </span><span style=\" color:#2800e6;\">&lt;stdint.h&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#aa00ff;\"> </span></p>\n"
"<p style=\" mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#005032;\">uint32_t</span><span style=\" color:#000000;\"> hex_value_a = </span><span style=\" color:#008092;\">0x0</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#005032;\">uint64_t</span><span style=\" color:#000000;\"> hex_value_b = </span><span style=\" color:#008092;\">0x0</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">float</span><span style=\" color:#000000;\"> a = </span><span style=\" color:#008092;\">3.14f</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inden"
                        "t:0px;\"><span style=\" color:#7f0055;\">double</span><span style=\" color:#000000;\"> b = </span><span style=\" color:#008092;\">3.14</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">int</span><span style=\" color:#000000;\"> main(</span><span style=\" color:#7f0055;\">void</span><span style=\" color:#000000;\">) {</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;floating point to hex converter:\\r\\n&quot;</span><span style=\" color:#000000;\">);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; "
                        "margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;a = %.2f\\r\\n&quot;</span><span style=\" color:#000000;\">, a);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;b = %.2f\\r\\n&quot;</span><span style=\" color:#000000;\">, b);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    hex_value_a = *((uint32_t*)&amp;a);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    hex_value_b = *((uint64_t*)&amp;b);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
                        "px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;hex_value_a = 0x%X\\r\\n&quot;</span><span style=\" color:#000000;\">, hex_value_a);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;hex_value_b = 0x%lX\\r\\n&quot;</span><span style=\" color:#000000;\">, hex_value_b);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;\\r\\nhex to floating point converter:\\r\\n&quot;</span><span style=\" color:#000000;\">);</span></p>"
                        "\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    hex_value_a = </span><span style=\" color:#008092;\">0x402DF3B6</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    hex_value_b = </span><span style=\" color:#008092;\">0x4005BE76C8B43958</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;hex_value_a = 0x%X\\r\\n&quot;</span><span style=\" color:#000000;\">, hex_value_a);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\""
                        ">    printf(</span><span style=\" color:#2800e6;\">&quot;hex_value_b = 0x%lX\\r\\n&quot;</span><span style=\" color:#000000;\">, hex_value_b);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    a = *((float*)&amp;hex_value_a);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    b = *((double*)&amp;hex_value_b);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;a = %.3f\\r\\n&quot;</span><span style=\" color:#000000;\">, a);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</s"
                        "pan><span style=\" color:#2800e6;\">&quot;b = %.3f\\r\\n&quot;</span><span style=\" color:#000000;\">, b);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">}</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#5500ff;\"><br /></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("hex_to_float_double", "\320\222\321\213\320\262\320\276\320\264:", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("hex_to_float_double", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">floating point to hex converter:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">a = 3.14</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">b = 3.14</span></p>\n"
"<p style=\" margin-top:0px; margin-"
                        "bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">hex_value_a = 0x4048F5C3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">hex_value_b = 0x40091EB851EB851F</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">hex to floating point converter:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell"
                        " Dlg 2'; font-size:8.25pt;\">hex_value_a = 0x402DF3B6</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">hex_value_b = 0x4005BE76C8B43958</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">a = 2.718</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">b = 2.718 </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hex_to_float_double: public Ui_hex_to_float_double {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEX_TO_FLOAT_DOUBLE_H
