/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;
    QLabel *label_9;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->setWindowModality(Qt::NonModal);
        About->resize(716, 389);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        About->setMinimumSize(QSize(0, 0));
        About->setMaximumSize(QSize(6666, 6666));
        About->setContextMenuPolicy(Qt::NoContextMenu);
        About->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color: rgb(217, 234, 252);}"));
        verticalLayout_4 = new QVBoxLayout(About);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(About);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(About);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 200));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(11);
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #FFFFFF);\n"
"   \n"
"}\n"
"QGroupBox::title {\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left; /* position at the top center */\n"
"    padding: 0 3px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #FFFFFF);\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(textBrowser);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);


        verticalLayout_4->addWidget(groupBox);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        label->setText(QCoreApplication::translate("About", "Solderingiron CRC Calculator", nullptr));
        label_2->setText(QCoreApplication::translate("About", "\320\237\320\276\320\264\321\201\321\207\320\265\321\202 CRC - 8, CRC - 16, CRC - 32", nullptr));
        label_3->setText(QCoreApplication::translate("About", "V 1.0.2", nullptr));
        groupBox->setTitle(QCoreApplication::translate("About", "\320\230\320\275\321\204\320\276", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\302\251 2023 \320\222\320\276\320\273\320\272\320\276\320\262 \320\236\320\273\320\265\320\263 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\233\320\270\321\206\320\265\320\275\320\267\320\270\321\217: GNU GENERAL PUBLIC LICENSE</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:1"
                        "0pt;\">e-mail: solderingiron.notification@yandex.ru</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Git: https://github.com/Solderingironspb/</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\320\260\321\217 \321\200\320\265\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\320\276\320\264\321\201\321\207\320\265\321\202\320\260 CRC \320\275\320\260 \321\217\320\267\321\213\320\272\320\265 \320\241\320\270: </span><span style=\" color:#0000ff;\">https://github.com/Solderingironspb/CRC_software_calculation</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320"
                        "\224\320\260\320\275\320\275\320\260\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\321\202 \320\262 \321\201\320\265\320\261\320\265 \320\262\321\201\320\277\320\276\320\274\320\276\320\263\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\274\320\270\320\275\320\270-\320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\261\321\213\320\262\320\260\321\216\321\202 \320\277\320\276\320\273\320\265\320\267\320\275\321\213 \320\277\321\200\320\270 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\272\320\265 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\271 \320\275\320\260 \320\274\320\270\320\272\321\200\320\276\320\272\320\276\320\275\321\202\321\200\320\276\320\273\320\273\320\265\321\200\320\260\321\205.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\241\321\201\321\213\320\273\320\272\320\260 \320\275\320\260 \320\277\321\200\320\276\320\265\320\272\321\202: </span><span style=\" font-size:10pt; color:#0000ff;\">https://github.com/Solderingironspb/CRC-Calculator-by-Solderingiron</span></p></body></html>", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
