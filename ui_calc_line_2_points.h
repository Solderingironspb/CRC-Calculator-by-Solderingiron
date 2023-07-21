/********************************************************************************
** Form generated from reading UI file 'calc_line_2_points.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_LINE_2_POINTS_H
#define UI_CALC_LINE_2_POINTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

class Ui_calc_line_2_points
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Xa;
    QLabel *label_3;
    QLineEdit *lineEdit_Ya;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_Xb;
    QLabel *label_4;
    QLineEdit *lineEdit_Yb;
    QPushButton *pushButton;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEdit_k;
    QLabel *label_9;
    QLineEdit *lineEdit_b;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_y;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QLabel *label_10;
    QLineEdit *lineEdit_example;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calc_line_2_points)
    {
        if (calc_line_2_points->objectName().isEmpty())
            calc_line_2_points->setObjectName(QString::fromUtf8("calc_line_2_points"));
        calc_line_2_points->resize(606, 792);
        calc_line_2_points->setMinimumSize(QSize(600, 559));
        calc_line_2_points->setMaximumSize(QSize(16777215, 16777215));
        calc_line_2_points->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        calc_line_2_points->setWindowIcon(icon);
        calc_line_2_points->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(calc_line_2_points);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        label_7->setFont(font);

        verticalLayout_8->addWidget(label_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(530, 0));
        groupBox_2->setMaximumSize(QSize(580, 16777215));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(250, 181));
        label->setMaximumSize(QSize(250, 181));
        label->setPixmap(QPixmap(QString::fromUtf8(":/graph.png")));

        horizontalLayout_5->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(20, 0));
        label_2->setMaximumSize(QSize(20, 16777215));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        lineEdit_Xa = new QLineEdit(groupBox_3);
        lineEdit_Xa->setObjectName(QString::fromUtf8("lineEdit_Xa"));
        sizePolicy1.setHeightForWidth(lineEdit_Xa->sizePolicy().hasHeightForWidth());
        lineEdit_Xa->setSizePolicy(sizePolicy1);
        lineEdit_Xa->setMinimumSize(QSize(100, 0));
        lineEdit_Xa->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(11);
        lineEdit_Xa->setFont(font2);

        horizontalLayout->addWidget(lineEdit_Xa);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(20, 0));
        label_3->setMaximumSize(QSize(20, 16777215));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        lineEdit_Ya = new QLineEdit(groupBox_3);
        lineEdit_Ya->setObjectName(QString::fromUtf8("lineEdit_Ya"));
        sizePolicy1.setHeightForWidth(lineEdit_Ya->sizePolicy().hasHeightForWidth());
        lineEdit_Ya->setSizePolicy(sizePolicy1);
        lineEdit_Ya->setMinimumSize(QSize(100, 0));
        lineEdit_Ya->setMaximumSize(QSize(100, 16777215));
        lineEdit_Ya->setFont(font2);

        horizontalLayout->addWidget(lineEdit_Ya);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(20, 0));
        label_5->setMaximumSize(QSize(20, 16777215));
        label_5->setFont(font1);

        horizontalLayout_2->addWidget(label_5);

        lineEdit_Xb = new QLineEdit(groupBox_4);
        lineEdit_Xb->setObjectName(QString::fromUtf8("lineEdit_Xb"));
        sizePolicy1.setHeightForWidth(lineEdit_Xb->sizePolicy().hasHeightForWidth());
        lineEdit_Xb->setSizePolicy(sizePolicy1);
        lineEdit_Xb->setMinimumSize(QSize(100, 0));
        lineEdit_Xb->setMaximumSize(QSize(100, 16777215));
        lineEdit_Xb->setFont(font2);

        horizontalLayout_2->addWidget(lineEdit_Xb);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(20, 0));
        label_4->setMaximumSize(QSize(20, 16777215));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        lineEdit_Yb = new QLineEdit(groupBox_4);
        lineEdit_Yb->setObjectName(QString::fromUtf8("lineEdit_Yb"));
        sizePolicy1.setHeightForWidth(lineEdit_Yb->sizePolicy().hasHeightForWidth());
        lineEdit_Yb->setSizePolicy(sizePolicy1);
        lineEdit_Yb->setMinimumSize(QSize(100, 0));
        lineEdit_Yb->setMaximumSize(QSize(100, 16777215));
        lineEdit_Yb->setFont(font2);

        horizontalLayout_2->addWidget(lineEdit_Yb);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox_4);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(280, 50));
        pushButton->setMaximumSize(QSize(280, 110));

        verticalLayout_3->addWidget(pushButton);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_5);

        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        lineEdit_k = new QLineEdit(groupBox_5);
        lineEdit_k->setObjectName(QString::fromUtf8("lineEdit_k"));
        lineEdit_k->setFont(font2);
        lineEdit_k->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_k);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_3->addWidget(label_9);

        lineEdit_b = new QLineEdit(groupBox_5);
        lineEdit_b->setObjectName(QString::fromUtf8("lineEdit_b"));
        lineEdit_b->setFont(font2);
        lineEdit_b->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_b);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_y = new QLineEdit(groupBox_5);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));
        lineEdit_y->setFont(font2);
        lineEdit_y->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_y);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_6->addWidget(groupBox_5);


        horizontalLayout_6->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_7->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout_8->addLayout(horizontalLayout_7);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(530, 0));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(10);
        textBrowser->setFont(font3);

        verticalLayout_5->addWidget(textBrowser);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_5->addWidget(label_10);

        lineEdit_example = new QLineEdit(groupBox);
        lineEdit_example->setObjectName(QString::fromUtf8("lineEdit_example"));
        lineEdit_example->setFont(font2);
        lineEdit_example->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_example);


        verticalLayout_8->addWidget(groupBox);

        calc_line_2_points->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calc_line_2_points);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 606, 21));
        calc_line_2_points->setMenuBar(menubar);
        statusbar = new QStatusBar(calc_line_2_points);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calc_line_2_points->setStatusBar(statusbar);

        retranslateUi(calc_line_2_points);

        QMetaObject::connectSlotsByName(calc_line_2_points);
    } // setupUi

    void retranslateUi(QMainWindow *calc_line_2_points)
    {
        calc_line_2_points->setWindowTitle(QCoreApplication::translate("calc_line_2_points", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271 \320\277\320\276 2 \321\202\320\276\321\207\320\272\320\260\320\274", nullptr));
        label_7->setText(QCoreApplication::translate("calc_line_2_points", "\320\236\320\261\321\211\320\265\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271 \320\270\320\274\320\265\320\265\321\202 \320\262\320\270\320\264 y = kx + b.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\240\320\260\321\201\321\207\320\265\321\202:", nullptr));
        label->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\242\320\276\321\207\320\272\320\260 \320\220:", nullptr));
        label_2->setText(QCoreApplication::translate("calc_line_2_points", "Xa:", nullptr));
        lineEdit_Xa->setText(QString());
        lineEdit_Xa->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        label_3->setText(QCoreApplication::translate("calc_line_2_points", "Ya:", nullptr));
        lineEdit_Ya->setText(QString());
        lineEdit_Ya->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\242\320\276\321\207\320\272\320\260 B:", nullptr));
        label_5->setText(QCoreApplication::translate("calc_line_2_points", "Xb:", nullptr));
        lineEdit_Xb->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        label_4->setText(QCoreApplication::translate("calc_line_2_points", "Yb:", nullptr));
        lineEdit_Yb->setText(QString());
        lineEdit_Yb->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        pushButton->setText(QCoreApplication::translate("calc_line_2_points", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\230\321\202\320\276\320\263\320\276:", nullptr));
        label_8->setText(QCoreApplication::translate("calc_line_2_points", "k =", nullptr));
        lineEdit_k->setInputMask(QString());
        lineEdit_k->setText(QString());
        lineEdit_k->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        label_9->setText(QCoreApplication::translate("calc_line_2_points", "b =", nullptr));
        lineEdit_b->setInputMask(QString());
        lineEdit_b->setText(QString());
        lineEdit_b->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        label_6->setText(QCoreApplication::translate("calc_line_2_points", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271 \320\277\321\200\320\270\320\274\320\265\321\202 \320\262\320\270\320\264:", nullptr));
        lineEdit_y->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \321\202\320\276\321\207\320\265\320\272 A \320\270 B", nullptr));
        groupBox->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\237\321\200\320\270\320\274\320\265\321\200 \320\272\320\276\320\264\320\260 \320\275\320\260 \321\217\320\267\321\213\320\272\320\265 \320\241\320\270:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("calc_line_2_points", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">#include </span><span style=\" color:#2800e6;\">&lt;stdio.h&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">#include</span><span style=\" color:#aa00ff;\"> </span><span style=\" color:#2800e6;\">&lt;stdint.h&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#aa00ff;\"> </span></p>\n"
"<p style=\" mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">float</span><span style=\" color:#5500ff;\"> </span><span style=\" color:#000000;\">Xa = </span><span style=\" color:#008092;\">20.56f</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">float </span><span style=\" color:#000000;\">Xb = </span><span style=\" color:#008092;\">68.3f</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">float </span><span style=\" color:#000000;\">Ya = </span><span style=\" color:#008092;\">3.14f</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">float</span><span style=\" color:#000000;\"> Yb = </span><span style=\" color:#008092;\">100.0f</span><span style=\" color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">float</span><span style=\" color:#000000;\"> k, b; </span><span style=\" color:#3f7f5f;\">//\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\321\213 \320\277\321\200\321\217\320\274\320\276\320\271</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7f0055;\">int</span><span style=\" color:#000000;\"> main(</span><span style=\" color:#"
                        "7f0055;\">void</span><span style=\" color:#000000;\">) {</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    k = (Ya - Yb) / (Xa - Xb);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    b = Yb - k * Xb;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">    printf(</span><span style=\" color:#2800e6;\">&quot;\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271: y = %.5fx + %.5f\\n\\r&quot;</span><span style=\" color:#000000;\">, k, b);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:"
                        "#000000;\">}</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#5500ff;\"><br /></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("calc_line_2_points", "\320\222\321\213\320\262\320\276\320\264:", nullptr));
        lineEdit_example->setText(QCoreApplication::translate("calc_line_2_points", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271: y = 2.02891x + -38.57431", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calc_line_2_points: public Ui_calc_line_2_points {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_LINE_2_POINTS_H
