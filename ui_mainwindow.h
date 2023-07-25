/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_RTD_Calculator;
    QAction *action_Thermocouple_Calculator;
    QAction *action_Signal_Converter;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QRadioButton *radioButton_CRC8;
    QRadioButton *radioButton_CRC16;
    QRadioButton *radioButton_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_Predefined;
    QComboBox *comboBox;
    QRadioButton *radioButton_Custom;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_Input_Reflected;
    QCheckBox *checkBox_Result_Reflected;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *lineEdit_Polynomial;
    QLabel *label_5;
    QLineEdit *lineEdit_Initial_value;
    QLabel *label_6;
    QLineEdit *lineEdit_Final_XOR_value;
    QSpacerItem *horizontalSpacer_4;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_CRC;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(789, 669);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(683, 559));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color: rgb(217, 234, 252);}"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/app2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon2);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/app3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon3);
        action_RTD_Calculator = new QAction(MainWindow);
        action_RTD_Calculator->setObjectName(QString::fromUtf8("action_RTD_Calculator"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/app4.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_RTD_Calculator->setIcon(icon4);
        action_Thermocouple_Calculator = new QAction(MainWindow);
        action_Thermocouple_Calculator->setObjectName(QString::fromUtf8("action_Thermocouple_Calculator"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/app5.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Thermocouple_Calculator->setIcon(icon5);
        action_Signal_Converter = new QAction(MainWindow);
        action_Signal_Converter->setObjectName(QString::fromUtf8("action_Signal_Converter"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/app6.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Signal_Converter->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(382, 0));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #edf1f5, stop: 1 #FFFFFF);\n"
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
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        radioButton_CRC8 = new QRadioButton(groupBox);
        radioButton_CRC8->setObjectName(QString::fromUtf8("radioButton_CRC8"));
        radioButton_CRC8->setFont(font2);

        gridLayout->addWidget(radioButton_CRC8, 0, 1, 1, 1);

        radioButton_CRC16 = new QRadioButton(groupBox);
        radioButton_CRC16->setObjectName(QString::fromUtf8("radioButton_CRC16"));
        radioButton_CRC16->setFont(font2);

        gridLayout->addWidget(radioButton_CRC16, 0, 2, 1, 1);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font2);

        gridLayout->addWidget(radioButton_3, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_3->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(382, 0));
        groupBox_2->setFont(font2);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #edf1f5, stop: 1 #FFFFFF);\n"
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
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_Predefined = new QRadioButton(groupBox_2);
        radioButton_Predefined->setObjectName(QString::fromUtf8("radioButton_Predefined"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radioButton_Predefined->sizePolicy().hasHeightForWidth());
        radioButton_Predefined->setSizePolicy(sizePolicy2);
        radioButton_Predefined->setFont(font2);
        radioButton_Predefined->setChecked(true);

        horizontalLayout->addWidget(radioButton_Predefined);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);
        comboBox->setMinimumSize(QSize(150, 0));
        comboBox->setMaximumSize(QSize(150, 16777215));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));

        horizontalLayout->addWidget(comboBox);

        radioButton_Custom = new QRadioButton(groupBox_2);
        radioButton_Custom->setObjectName(QString::fromUtf8("radioButton_Custom"));
        radioButton_Custom->setFont(font2);

        horizontalLayout->addWidget(radioButton_Custom);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_4->addWidget(groupBox_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(382, 0));
        groupBox_3->setMaximumSize(QSize(382, 16777215));
        groupBox_3->setFont(font2);
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #edf1f5, stop: 1 #FFFFFF);\n"
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
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_Input_Reflected = new QCheckBox(groupBox_3);
        checkBox_Input_Reflected->setObjectName(QString::fromUtf8("checkBox_Input_Reflected"));
        checkBox_Input_Reflected->setFont(font2);
        checkBox_Input_Reflected->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:checked {\n"
"   \n"
"	color: rgb(85, 255, 127);\n"
"}"));

        horizontalLayout_2->addWidget(checkBox_Input_Reflected);

        checkBox_Result_Reflected = new QCheckBox(groupBox_3);
        checkBox_Result_Reflected->setObjectName(QString::fromUtf8("checkBox_Result_Reflected"));
        checkBox_Result_Reflected->setFont(font2);

        horizontalLayout_2->addWidget(checkBox_Result_Reflected);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_2);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEdit_Polynomial = new QLineEdit(groupBox_3);
        lineEdit_Polynomial->setObjectName(QString::fromUtf8("lineEdit_Polynomial"));
        lineEdit_Polynomial->setEnabled(true);
        lineEdit_Polynomial->setFont(font);
        lineEdit_Polynomial->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_Polynomial);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEdit_Initial_value = new QLineEdit(groupBox_3);
        lineEdit_Initial_value->setObjectName(QString::fromUtf8("lineEdit_Initial_value"));
        lineEdit_Initial_value->setFont(font);
        lineEdit_Initial_value->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_Initial_value);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        lineEdit_Final_XOR_value = new QLineEdit(groupBox_3);
        lineEdit_Final_XOR_value->setObjectName(QString::fromUtf8("lineEdit_Final_XOR_value"));
        lineEdit_Final_XOR_value->setFont(font);
        lineEdit_Final_XOR_value->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_Final_XOR_value);


        verticalLayout_3->addLayout(formLayout);


        horizontalLayout_5->addWidget(groupBox_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_5);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setFont(font2);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #FFFFFF);\n"
"   \n"
"}"));

        verticalLayout_4->addWidget(textEdit);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));
        lineEdit->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit, 0, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setMinimumSize(QSize(361, 61));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid #97c3f3;\n"
"border-radius: 2px;\n"
"background-color: rgb(249, 204, 49);\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #97c3f3;\n"
"border-radius: 2px;\n"
"background-color: rgb(73, 249, 69);\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));

        gridLayout_2->addWidget(pushButton, 0, 3, 2, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_CRC = new QLineEdit(centralwidget);
        lineEdit_CRC->setObjectName(QString::fromUtf8("lineEdit_CRC"));
        lineEdit_CRC->setEnabled(true);
        lineEdit_CRC->setFont(font);
        lineEdit_CRC->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(65,120,52)\n"
"   \n"
"}"));

        gridLayout_2->addWidget(lineEdit_CRC, 1, 1, 1, 2);


        verticalLayout_4->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 789, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);
        menu_2->addAction(action_3);
        menu_2->addAction(action_RTD_Calculator);
        menu_2->addAction(action_Thermocouple_Calculator);
        menu_2->addAction(action_Signal_Converter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CRC Calculator by Solderingiron v1.0.4", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
#if QT_CONFIG(shortcut)
        action->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271, \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\265\320\271 \321\207\320\265\321\200\320\265\320\267 2 \321\202\320\276\321\207\320\272\320\270", nullptr));
#if QT_CONFIG(shortcut)
        action_2->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_3->setText(QCoreApplication::translate("MainWindow", "HEX to float/double", nullptr));
#if QT_CONFIG(shortcut)
        action_3->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        action_RTD_Calculator->setText(QCoreApplication::translate("MainWindow", "RTD Calculator Resistance to Temperature", nullptr));
#if QT_CONFIG(shortcut)
        action_RTD_Calculator->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Thermocouple_Calculator->setText(QCoreApplication::translate("MainWindow", "Thermocouple Calculator", nullptr));
#if QT_CONFIG(shortcut)
        action_Thermocouple_Calculator->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Signal_Converter->setText(QCoreApplication::translate("MainWindow", "Signal Converter(0-10v and 4-20mA)", nullptr));
#if QT_CONFIG(shortcut)
        action_Signal_Converter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "CRC width", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Bit lenght:", nullptr));
        radioButton_CRC8->setText(QCoreApplication::translate("MainWindow", "CRC-8", nullptr));
        radioButton_CRC16->setText(QCoreApplication::translate("MainWindow", "CRC-16", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "CRC-32", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "CRC parametrization", nullptr));
        radioButton_Predefined->setText(QCoreApplication::translate("MainWindow", "Predefined", nullptr));
        radioButton_Custom->setText(QCoreApplication::translate("MainWindow", "Custom", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "CRC detailed parameters", nullptr));
        checkBox_Input_Reflected->setText(QCoreApplication::translate("MainWindow", "Input Reflected", nullptr));
        checkBox_Result_Reflected->setText(QCoreApplication::translate("MainWindow", "Result Reflected", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Polynomial:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Initial value:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Final XOR value:", nullptr));
        textEdit->setDocumentTitle(QString());
        textEdit->setMarkdown(QString());
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\201\321\201\320\270\320\262 \320\261\320\260\320\271\321\202 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 HEX \320\247\320\265\321\200\320\265\320\267 \320\267\320\260\320\277\321\217\321\202\321\203\321\216. \320\237\321\200\320\270\320\274\320\265\321\200: 0x01, 0x23, 0xCF, 0xFE", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Array length (in bytes):", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate CRC", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CRC Result:", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270-\320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
