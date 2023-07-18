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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_7;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->setWindowModality(Qt::NonModal);
        About->resize(820, 340);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        About->setMinimumSize(QSize(820, 340));
        About->setMaximumSize(QSize(820, 340));
        About->setContextMenuPolicy(Qt::NoContextMenu);
        About->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color: rgb(217, 234, 252);}"));
        gridLayout = new QGridLayout(About);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 3, Qt::AlignRight);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        label_3 = new QLabel(About);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 2, 1, 1, Qt::AlignRight);

        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        groupBox = new QGroupBox(About);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 200));
        groupBox->setMaximumSize(QSize(16777215, 300));
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
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(10);
        label_6->setFont(font3);

        gridLayout_2->addWidget(label_6, 9, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1, Qt::AlignLeft);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Consolas"));
        font4.setPointSize(10);
        label_8->setFont(font4);

        gridLayout_2->addWidget(label_8, 10, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        gridLayout_2->addWidget(label_5, 8, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox, 4, 0, 1, 3);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        label->setText(QCoreApplication::translate("About", "Solderingiron CRC Calculator", nullptr));
        label_3->setText(QCoreApplication::translate("About", "V 1.0", nullptr));
        label_2->setText(QCoreApplication::translate("About", "\320\237\320\276\320\264\321\201\321\207\320\265\321\202 CRC - 8, CRC - 16, CRC - 32", nullptr));
        groupBox->setTitle(QCoreApplication::translate("About", "\320\230\320\275\321\204\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("About", "Git: https://github.com/Solderingironspb/", nullptr));
        label_4->setText(QCoreApplication::translate("About", "\320\222\320\276\320\273\320\272\320\276\320\262 \320\236\320\273\320\265\320\263", nullptr));
        label_8->setText(QCoreApplication::translate("About", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\320\260\321\217 \321\200\320\265\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\320\276\320\264\321\201\321\207\320\265\321\202\320\260 CRC \320\275\320\260 \321\217\320\267\321\213\320\272\320\265 \320\241\320\270: https://github.com/Solderingironspb/CRC_Software_calculation", nullptr));
        label_5->setText(QCoreApplication::translate("About", "e-mail: solderingiron.notification@yandex.ru", nullptr));
        label_9->setText(QString());
        label_7->setText(QCoreApplication::translate("About", "\320\220\320\262\321\202\320\276\321\200:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
