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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calc_line_2_points
{
public:
    QWidget *centralwidget;
    QLabel *label_7;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit_example;
    QLabel *label_10;
    QGroupBox *groupBox_2;
    QLabel *label;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_Ya;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit_Xa;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_Yb;
    QLabel *label_5;
    QLineEdit *lineEdit_Xb;
    QLabel *label_4;
    QGroupBox *groupBox_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *lineEdit_b;
    QLineEdit *lineEdit_k;
    QLineEdit *lineEdit_y;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calc_line_2_points)
    {
        if (calc_line_2_points->objectName().isEmpty())
            calc_line_2_points->setObjectName(QString::fromUtf8("calc_line_2_points"));
        calc_line_2_points->resize(621, 792);
        calc_line_2_points->setMinimumSize(QSize(621, 559));
        calc_line_2_points->setMaximumSize(QSize(621, 60000));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        calc_line_2_points->setWindowIcon(icon);
        calc_line_2_points->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(calc_line_2_points);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 20, 441, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        label_7->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 400, 601, 351));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 30, 561, 251));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        textBrowser->setFont(font1);
        lineEdit_example = new QLineEdit(groupBox);
        lineEdit_example->setObjectName(QString::fromUtf8("lineEdit_example"));
        lineEdit_example->setGeometry(QRect(20, 310, 561, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(11);
        lineEdit_example->setFont(font2);
        lineEdit_example->setReadOnly(true);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 290, 47, 13));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 60, 601, 321));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 251, 201));
        label->setPixmap(QPixmap(QString::fromUtf8(":/graph.png")));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 170, 301, 51));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(280, 20, 301, 71));
        lineEdit_Ya = new QLineEdit(groupBox_3);
        lineEdit_Ya->setObjectName(QString::fromUtf8("lineEdit_Ya"));
        lineEdit_Ya->setGeometry(QRect(190, 30, 91, 20));
        lineEdit_Ya->setFont(font2);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 30, 31, 21));
        QFont font3;
        font3.setPointSize(10);
        label_3->setFont(font3);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 31, 21));
        label_2->setFont(font3);
        lineEdit_Xa = new QLineEdit(groupBox_3);
        lineEdit_Xa->setObjectName(QString::fromUtf8("lineEdit_Xa"));
        lineEdit_Xa->setGeometry(QRect(40, 30, 91, 20));
        lineEdit_Xa->setFont(font2);
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(280, 100, 301, 61));
        lineEdit_Yb = new QLineEdit(groupBox_4);
        lineEdit_Yb->setObjectName(QString::fromUtf8("lineEdit_Yb"));
        lineEdit_Yb->setGeometry(QRect(190, 30, 91, 20));
        lineEdit_Yb->setFont(font2);
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 30, 21, 21));
        label_5->setFont(font3);
        lineEdit_Xb = new QLineEdit(groupBox_4);
        lineEdit_Xb->setObjectName(QString::fromUtf8("lineEdit_Xb"));
        lineEdit_Xb->setGeometry(QRect(40, 30, 91, 20));
        lineEdit_Xb->setFont(font2);
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 30, 21, 21));
        label_4->setFont(font3);
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 230, 571, 80));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 50, 161, 16));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 20, 31, 21));
        label_9->setFont(font3);
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 31, 21));
        label_8->setFont(font3);
        lineEdit_b = new QLineEdit(groupBox_5);
        lineEdit_b->setObjectName(QString::fromUtf8("lineEdit_b"));
        lineEdit_b->setGeometry(QRect(320, 20, 231, 20));
        lineEdit_b->setFont(font2);
        lineEdit_b->setReadOnly(true);
        lineEdit_k = new QLineEdit(groupBox_5);
        lineEdit_k->setObjectName(QString::fromUtf8("lineEdit_k"));
        lineEdit_k->setGeometry(QRect(40, 20, 231, 20));
        lineEdit_k->setFont(font2);
        lineEdit_k->setReadOnly(true);
        lineEdit_y = new QLineEdit(groupBox_5);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(170, 50, 381, 20));
        lineEdit_y->setFont(font2);
        lineEdit_y->setReadOnly(true);
        calc_line_2_points->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calc_line_2_points);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 621, 21));
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
        groupBox->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\237\321\200\320\270\320\274\320\265\321\200 \320\272\320\276\320\264\320\260 \320\275\320\260 \321\217\320\267\321\213\320\272\320\265 \320\241\320\270:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("calc_line_2_points", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">#include </span><span style=\" font-family:'MS Shell Dlg 2'; color:#2800e6;\">&lt;stdio.h&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">#include</span><span style=\" font-family:'MS Shell Dlg 2'; color:#aa00ff;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; color:#2800e6;\">&lt;stdint.h&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-"
                        "bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#aa00ff;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">float</span><span style=\" font-family:'MS Shell Dlg 2'; color:#5500ff;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">Xa = </span><span style=\" font-family:'MS Shell Dlg 2'; color:#008092;\">20.56f</span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">float </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">Xb = </span><span style=\" font-family:'MS Shell Dlg 2'; color:#008092;\">68.3f</span><span style=\" font-fam"
                        "ily:'MS Shell Dlg 2'; color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">float </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">Ya = </span><span style=\" font-family:'MS Shell Dlg 2'; color:#008092;\">3.14f</span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">float</span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\"> Yb = </span><span style=\" font-family:'MS Shell Dlg 2'; color:#008092;\">100.0f</span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><"
                        "span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">float</span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\"> k, b; </span><span style=\" font-family:'MS Shell Dlg 2'; color:#3f7f5f;\">//\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\321\213 \320\277\321\200\321\217\320\274\320\276\320\271</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">int</span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\"> main(</span><span style=\" font-family:'MS Shell Dlg 2'; color:#7f0055;\">void</span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">) {</span></p>\n"
"<p style=\" margin-top:"
                        "0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">    k = (Ya - Yb) / (Xa - Xb);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">    b = Yb - k * Xb;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">    printf(</span><span style=\" font-family:'MS Shell Dlg 2'; color:#2800e6;\">&quot;\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271: y = %.5fx + %.5f\\n\\r&quot;</span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">, k, b);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-b"
                        "lock-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">}</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#5500ff;\"><br /></p></body></html>", nullptr));
        lineEdit_example->setText(QCoreApplication::translate("calc_line_2_points", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271: y = 2.02891x + -38.57431", nullptr));
        label_10->setText(QCoreApplication::translate("calc_line_2_points", "\320\222\321\213\320\262\320\276\320\264:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\240\320\260\321\201\321\207\320\265\321\202:", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("calc_line_2_points", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\242\320\276\321\207\320\272\320\260 \320\220:", nullptr));
        lineEdit_Ya->setText(QString());
        lineEdit_Ya->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        label_3->setText(QCoreApplication::translate("calc_line_2_points", "Ya:", nullptr));
        label_2->setText(QCoreApplication::translate("calc_line_2_points", "Xa:", nullptr));
        lineEdit_Xa->setText(QString());
        lineEdit_Xa->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\242\320\276\321\207\320\272\320\260 B:", nullptr));
        lineEdit_Yb->setText(QString());
        lineEdit_Yb->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        label_5->setText(QCoreApplication::translate("calc_line_2_points", "Xb:", nullptr));
        lineEdit_Xb->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        label_4->setText(QCoreApplication::translate("calc_line_2_points", "Yb:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("calc_line_2_points", "\320\230\321\202\320\276\320\263\320\276:", nullptr));
        label_6->setText(QCoreApplication::translate("calc_line_2_points", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271 \320\277\321\200\320\270\320\274\320\265\321\202 \320\262\320\270\320\264:", nullptr));
        label_9->setText(QCoreApplication::translate("calc_line_2_points", "b =", nullptr));
        label_8->setText(QCoreApplication::translate("calc_line_2_points", "k =", nullptr));
        lineEdit_b->setInputMask(QString());
        lineEdit_b->setText(QString());
        lineEdit_b->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        lineEdit_k->setInputMask(QString());
        lineEdit_k->setText(QString());
        lineEdit_k->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "0.0", nullptr));
        lineEdit_y->setPlaceholderText(QCoreApplication::translate("calc_line_2_points", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \321\202\320\276\321\207\320\265\320\272 A \320\270 B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calc_line_2_points: public Ui_calc_line_2_points {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_LINE_2_POINTS_H
