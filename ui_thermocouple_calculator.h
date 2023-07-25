/********************************************************************************
** Form generated from reading UI file 'thermocouple_calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THERMOCOUPLE_CALCULATOR_H
#define UI_THERMOCOUPLE_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thermocouple_calculator
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox_type;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_diapazon;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_cold_junior_temperature;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_temf;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *lineEdit_temperature_calc;
    QLabel *label_10;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *thermocouple_calculator)
    {
        if (thermocouple_calculator->objectName().isEmpty())
            thermocouple_calculator->setObjectName(QString::fromUtf8("thermocouple_calculator"));
        thermocouple_calculator->resize(955, 306);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app5.png"), QSize(), QIcon::Normal, QIcon::Off);
        thermocouple_calculator->setWindowIcon(icon);
        centralwidget = new QWidget(thermocouple_calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

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

        comboBox_type = new QComboBox(groupBox);
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->setObjectName(QString::fromUtf8("comboBox_type"));
        comboBox_type->setMinimumSize(QSize(100, 0));
        comboBox_type->setMaximumSize(QSize(100, 16777215));
        comboBox_type->setFont(font1);

        horizontalLayout->addWidget(comboBox_type);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setMinimumSize(QSize(150, 0));
        lineEdit_name->setFont(font1);
        lineEdit_name->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        lineEdit_diapazon = new QLineEdit(groupBox);
        lineEdit_diapazon->setObjectName(QString::fromUtf8("lineEdit_diapazon"));
        lineEdit_diapazon->setFont(font1);
        lineEdit_diapazon->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_diapazon);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(180, 0));
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        lineEdit_cold_junior_temperature = new QLineEdit(groupBox_2);
        lineEdit_cold_junior_temperature->setObjectName(QString::fromUtf8("lineEdit_cold_junior_temperature"));
        lineEdit_cold_junior_temperature->setMinimumSize(QSize(170, 0));
        lineEdit_cold_junior_temperature->setMaximumSize(QSize(170, 16777215));
        lineEdit_cold_junior_temperature->setFont(font1);

        horizontalLayout_3->addWidget(lineEdit_cold_junior_temperature);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(180, 0));
        label_7->setFont(font1);

        horizontalLayout_4->addWidget(label_7);

        lineEdit_temf = new QLineEdit(groupBox_2);
        lineEdit_temf->setObjectName(QString::fromUtf8("lineEdit_temf"));
        lineEdit_temf->setMinimumSize(QSize(170, 0));
        lineEdit_temf->setMaximumSize(QSize(170, 16777215));
        lineEdit_temf->setFont(font1);

        horizontalLayout_4->addWidget(lineEdit_temf);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(180, 0));
        label_9->setFont(font1);

        horizontalLayout_5->addWidget(label_9);

        lineEdit_temperature_calc = new QLineEdit(groupBox_2);
        lineEdit_temperature_calc->setObjectName(QString::fromUtf8("lineEdit_temperature_calc"));
        lineEdit_temperature_calc->setMinimumSize(QSize(170, 0));
        lineEdit_temperature_calc->setMaximumSize(QSize(170, 16777215));
        lineEdit_temperature_calc->setFont(font1);
        lineEdit_temperature_calc->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_temperature_calc);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_5->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_2);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(500, 0));
        QFont font2;
        font2.setPointSize(14);
        pushButton->setFont(font2);

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_7->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        thermocouple_calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(thermocouple_calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 955, 22));
        thermocouple_calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(thermocouple_calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        thermocouple_calculator->setStatusBar(statusbar);

        retranslateUi(thermocouple_calculator);

        QMetaObject::connectSlotsByName(thermocouple_calculator);
    } // setupUi

    void retranslateUi(QMainWindow *thermocouple_calculator)
    {
        thermocouple_calculator->setWindowTitle(QCoreApplication::translate("thermocouple_calculator", "Thermocouple Calculator", nullptr));
        label->setText(QCoreApplication::translate("thermocouple_calculator", "\320\242\320\265\321\200\320\274\320\276\320\277\320\260\321\200\321\213 (\320\223\320\236\320\241\320\242 \320\240 8.85-2001)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("thermocouple_calculator", "\320\232\320\273\320\260\321\201\321\201\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217:", nullptr));
        label_2->setText(QCoreApplication::translate("thermocouple_calculator", "\320\242\320\270\320\277 \321\202\320\265\321\200\320\274\320\276\320\277\320\260\321\200\321\213:", nullptr));
        comboBox_type->setItemText(0, QCoreApplication::translate("thermocouple_calculator", "R", nullptr));
        comboBox_type->setItemText(1, QCoreApplication::translate("thermocouple_calculator", "S", nullptr));
        comboBox_type->setItemText(2, QCoreApplication::translate("thermocouple_calculator", "B", nullptr));
        comboBox_type->setItemText(3, QCoreApplication::translate("thermocouple_calculator", "J", nullptr));
        comboBox_type->setItemText(4, QCoreApplication::translate("thermocouple_calculator", "T", nullptr));
        comboBox_type->setItemText(5, QCoreApplication::translate("thermocouple_calculator", "E", nullptr));
        comboBox_type->setItemText(6, QCoreApplication::translate("thermocouple_calculator", "K", nullptr));
        comboBox_type->setItemText(7, QCoreApplication::translate("thermocouple_calculator", "N", nullptr));
        comboBox_type->setItemText(8, QCoreApplication::translate("thermocouple_calculator", "A-1", nullptr));
        comboBox_type->setItemText(9, QCoreApplication::translate("thermocouple_calculator", "A-2", nullptr));
        comboBox_type->setItemText(10, QCoreApplication::translate("thermocouple_calculator", "A-3", nullptr));
        comboBox_type->setItemText(11, QCoreApplication::translate("thermocouple_calculator", "L", nullptr));
        comboBox_type->setItemText(12, QCoreApplication::translate("thermocouple_calculator", "M", nullptr));

        label_3->setText(QCoreApplication::translate("thermocouple_calculator", "\320\236\320\261\320\276\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\274\321\213\321\210\320\273\320\265\320\275\320\275\320\276\320\263\320\276 \321\202\320\265\321\200\320\274\320\276\320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", nullptr));
        label_4->setText(QCoreApplication::translate("thermocouple_calculator", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("thermocouple_calculator", "\320\240\320\260\321\201\321\207\320\265\321\202:", nullptr));
        label_5->setText(QCoreApplication::translate("thermocouple_calculator", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\205\320\276\320\273\320\276\320\264\320\275\320\276\320\263\320\276 \321\201\320\277\320\260\321\217:", nullptr));
        label_6->setText(QCoreApplication::translate("thermocouple_calculator", "\302\260C", nullptr));
        label_7->setText(QCoreApplication::translate("thermocouple_calculator", "\320\242\320\255\320\224\320\241:", nullptr));
        label_8->setText(QCoreApplication::translate("thermocouple_calculator", "\320\274\320\222", nullptr));
        label_9->setText(QCoreApplication::translate("thermocouple_calculator", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\320\275\320\275\320\260\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260:", nullptr));
        label_10->setText(QCoreApplication::translate("thermocouple_calculator", "\302\260C", nullptr));
        pushButton->setText(QCoreApplication::translate("thermocouple_calculator", "\320\240\320\260\321\201\321\207\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thermocouple_calculator: public Ui_thermocouple_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THERMOCOUPLE_CALCULATOR_H
