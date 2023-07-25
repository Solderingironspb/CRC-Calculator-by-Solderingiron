/********************************************************************************
** Form generated from reading UI file 'signal_converter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNAL_CONVERTER_H
#define UI_SIGNAL_CONVERTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signal_converter
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_edizmereniya1;
    QLabel *label_4;
    QLineEdit *lineEdit_0_10_up;
    QLabel *label_6;
    QLineEdit *lineEdit_0_10_down;
    QFrame *line_3;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_0_10_U;
    QLabel *label_10;
    QLineEdit *lineEdit_0_10_value_2;
    QPushButton *pushButton;
    QFrame *line;
    QGridLayout *gridLayout_6;
    QLabel *label_12;
    QLabel *label_8;
    QLineEdit *lineEdit_0_10_value;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_0_10_value_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_edizmereniya2;
    QLabel *label_5;
    QLineEdit *lineEdit_4_20_up;
    QLabel *label_7;
    QLineEdit *lineEdit_4_20_down;
    QFrame *line_4;
    QGridLayout *gridLayout_4;
    QLabel *label_4_20_current;
    QPushButton *pushButton_2;
    QLabel *label_11;
    QLineEdit *lineEdit_0_10_I;
    QLineEdit *lineEdit_0_10_value_3;
    QFrame *line_2;
    QGridLayout *gridLayout_5;
    QLabel *label_13;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_0_10_value_5;
    QLineEdit *lineEdit_4_20_value;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signal_converter)
    {
        if (signal_converter->objectName().isEmpty())
            signal_converter->setObjectName(QString::fromUtf8("signal_converter"));
        signal_converter->resize(762, 382);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app6.png"), QSize(), QIcon::Normal, QIcon::Off);
        signal_converter->setWindowIcon(icon);
        centralwidget = new QWidget(signal_converter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_edizmereniya1 = new QLineEdit(groupBox);
        lineEdit_edizmereniya1->setObjectName(QString::fromUtf8("lineEdit_edizmereniya1"));
        lineEdit_edizmereniya1->setFont(font);

        gridLayout->addWidget(lineEdit_edizmereniya1, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_0_10_up = new QLineEdit(groupBox);
        lineEdit_0_10_up->setObjectName(QString::fromUtf8("lineEdit_0_10_up"));
        lineEdit_0_10_up->setFont(font);

        gridLayout->addWidget(lineEdit_0_10_up, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_0_10_down = new QLineEdit(groupBox);
        lineEdit_0_10_down->setObjectName(QString::fromUtf8("lineEdit_0_10_down"));
        lineEdit_0_10_down->setFont(font);

        gridLayout->addWidget(lineEdit_0_10_down, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_0_10_U = new QLineEdit(groupBox);
        lineEdit_0_10_U->setObjectName(QString::fromUtf8("lineEdit_0_10_U"));
        lineEdit_0_10_U->setFont(font);

        gridLayout_3->addWidget(lineEdit_0_10_U, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        lineEdit_0_10_value_2 = new QLineEdit(groupBox);
        lineEdit_0_10_value_2->setObjectName(QString::fromUtf8("lineEdit_0_10_value_2"));
        lineEdit_0_10_value_2->setFont(font);

        gridLayout_3->addWidget(lineEdit_0_10_value_2, 2, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(16777215, 60));
        pushButton->setFont(font);

        gridLayout_3->addWidget(pushButton, 1, 0, 1, 2);


        verticalLayout_2->addLayout(gridLayout_3);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout_6->addWidget(label_12, 2, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        lineEdit_0_10_value = new QLineEdit(groupBox);
        lineEdit_0_10_value->setObjectName(QString::fromUtf8("lineEdit_0_10_value"));
        lineEdit_0_10_value->setFont(font);

        gridLayout_6->addWidget(lineEdit_0_10_value, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(16777215, 60));
        pushButton_3->setFont(font);

        gridLayout_6->addWidget(pushButton_3, 1, 0, 1, 2);

        lineEdit_0_10_value_4 = new QLineEdit(groupBox);
        lineEdit_0_10_value_4->setObjectName(QString::fromUtf8("lineEdit_0_10_value_4"));
        lineEdit_0_10_value_4->setFont(font);

        gridLayout_6->addWidget(lineEdit_0_10_value_4, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_6);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_edizmereniya2 = new QLineEdit(groupBox_2);
        lineEdit_edizmereniya2->setObjectName(QString::fromUtf8("lineEdit_edizmereniya2"));
        lineEdit_edizmereniya2->setFont(font);

        gridLayout_2->addWidget(lineEdit_edizmereniya2, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_4_20_up = new QLineEdit(groupBox_2);
        lineEdit_4_20_up->setObjectName(QString::fromUtf8("lineEdit_4_20_up"));
        lineEdit_4_20_up->setFont(font);

        gridLayout_2->addWidget(lineEdit_4_20_up, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        lineEdit_4_20_down = new QLineEdit(groupBox_2);
        lineEdit_4_20_down->setObjectName(QString::fromUtf8("lineEdit_4_20_down"));
        lineEdit_4_20_down->setFont(font);

        gridLayout_2->addWidget(lineEdit_4_20_down, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4_20_current = new QLabel(groupBox_2);
        label_4_20_current->setObjectName(QString::fromUtf8("label_4_20_current"));
        label_4_20_current->setFont(font);

        gridLayout_4->addWidget(label_4_20_current, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(16777215, 60));
        pushButton_2->setFont(font);

        gridLayout_4->addWidget(pushButton_2, 1, 0, 1, 2);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        lineEdit_0_10_I = new QLineEdit(groupBox_2);
        lineEdit_0_10_I->setObjectName(QString::fromUtf8("lineEdit_0_10_I"));
        lineEdit_0_10_I->setFont(font);

        gridLayout_4->addWidget(lineEdit_0_10_I, 0, 1, 1, 1);

        lineEdit_0_10_value_3 = new QLineEdit(groupBox_2);
        lineEdit_0_10_value_3->setObjectName(QString::fromUtf8("lineEdit_0_10_value_3"));
        lineEdit_0_10_value_3->setFont(font);

        gridLayout_4->addWidget(lineEdit_0_10_value_3, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        gridLayout_5->addWidget(label_13, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMaximumSize(QSize(16777215, 60));
        pushButton_4->setFont(font);

        gridLayout_5->addWidget(pushButton_4, 1, 0, 1, 2);

        lineEdit_0_10_value_5 = new QLineEdit(groupBox_2);
        lineEdit_0_10_value_5->setObjectName(QString::fromUtf8("lineEdit_0_10_value_5"));
        lineEdit_0_10_value_5->setFont(font);

        gridLayout_5->addWidget(lineEdit_0_10_value_5, 2, 1, 1, 1);

        lineEdit_4_20_value = new QLineEdit(groupBox_2);
        lineEdit_4_20_value->setObjectName(QString::fromUtf8("lineEdit_4_20_value"));
        lineEdit_4_20_value->setFont(font);

        gridLayout_5->addWidget(lineEdit_4_20_value, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_5);


        horizontalLayout->addWidget(groupBox_2);

        signal_converter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signal_converter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 762, 22));
        signal_converter->setMenuBar(menubar);
        statusbar = new QStatusBar(signal_converter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        signal_converter->setStatusBar(statusbar);

        retranslateUi(signal_converter);

        QMetaObject::connectSlotsByName(signal_converter);
    } // setupUi

    void retranslateUi(QMainWindow *signal_converter)
    {
        signal_converter->setWindowTitle(QCoreApplication::translate("signal_converter", "Signal Converter (0-10V and 4-20mA)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("signal_converter", "\320\241\320\270\320\263\320\275\320\260\320\273 0-10 \320\222", nullptr));
        label->setText(QCoreApplication::translate("signal_converter", "\320\225\320\264. \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217:", nullptr));
        label_4->setText(QCoreApplication::translate("signal_converter", "\320\235\320\270\320\266\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260:", nullptr));
        label_6->setText(QCoreApplication::translate("signal_converter", "\320\222\320\265\321\200\321\205\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("signal_converter", "\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\275\320\276\320\265 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 (\320\222):", nullptr));
        label_10->setText(QCoreApplication::translate("signal_converter", "\320\240\321\203\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        pushButton->setText(QCoreApplication::translate("signal_converter", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\262 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265(\320\265\320\264. \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217)", nullptr));
        label_12->setText(QCoreApplication::translate("signal_converter", "\320\240\321\203\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        label_8->setText(QCoreApplication::translate("signal_converter", "\320\227\320\260\320\264\320\260\320\275\320\275\320\260\321\217 \320\262\320\265\320\273\320\270\321\207\320\270\320\275\320\260:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("signal_converter", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\262 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265(\320\222)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("signal_converter", "\320\241\320\270\320\263\320\275\320\260\320\273 4-20 \320\274\320\220", nullptr));
        label_2->setText(QCoreApplication::translate("signal_converter", "\320\225\320\264. \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217:", nullptr));
        label_5->setText(QCoreApplication::translate("signal_converter", "\320\235\320\270\320\266\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260:", nullptr));
        label_7->setText(QCoreApplication::translate("signal_converter", "\320\222\320\265\321\200\321\205\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260:", nullptr));
        label_4_20_current->setText(QCoreApplication::translate("signal_converter", "\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\275\321\213\320\271 \321\202\320\276\320\272 (\320\274\320\220):", nullptr));
        pushButton_2->setText(QCoreApplication::translate("signal_converter", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\262 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265(\320\265\320\264. \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217)", nullptr));
        label_11->setText(QCoreApplication::translate("signal_converter", "\320\240\321\203\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        label_13->setText(QCoreApplication::translate("signal_converter", "\320\240\321\203\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        label_9->setText(QCoreApplication::translate("signal_converter", "\320\227\320\260\320\264\320\260\320\275\320\275\320\260\321\217 \320\262\320\265\320\273\320\270\321\207\320\270\320\275\320\260:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("signal_converter", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\262 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265(\320\274\320\220)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signal_converter: public Ui_signal_converter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNAL_CONVERTER_H
