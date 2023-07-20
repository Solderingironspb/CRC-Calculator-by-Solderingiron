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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_CRC;
    QLabel *label_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QRadioButton *radioButton_CRC8;
    QRadioButton *radioButton_CRC16;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_Predefined;
    QComboBox *comboBox;
    QRadioButton *radioButton_Custom;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_Input_Reflected;
    QCheckBox *checkBox_Result_Reflected;
    QLabel *label_4;
    QLineEdit *lineEdit_Polynomial;
    QLabel *label_5;
    QLineEdit *lineEdit_Initial_value;
    QLabel *label_6;
    QLineEdit *lineEdit_Final_XOR_value;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(683, 559);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(683, 559));
        MainWindow->setMaximumSize(QSize(683, 559));
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
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/app2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 320, 661, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #FFFFFF);\n"
"   \n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 440, 361, 61));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
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
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(162, 440, 131, 22));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(11);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));
        lineEdit->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 440, 131, 16));
        QFont font4;
        font4.setPointSize(10);
        label->setFont(font4);
        lineEdit_CRC = new QLineEdit(centralwidget);
        lineEdit_CRC->setObjectName(QString::fromUtf8("lineEdit_CRC"));
        lineEdit_CRC->setEnabled(true);
        lineEdit_CRC->setGeometry(QRect(90, 480, 201, 22));
        lineEdit_CRC->setFont(font3);
        lineEdit_CRC->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(65,120,52)\n"
"   \n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 480, 71, 16));
        label_2->setFont(font4);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 341, 71));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        groupBox->setFont(font5);
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 313, 26));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font4);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        radioButton_CRC8 = new QRadioButton(layoutWidget);
        radioButton_CRC8->setObjectName(QString::fromUtf8("radioButton_CRC8"));
        radioButton_CRC8->setFont(font4);

        gridLayout->addWidget(radioButton_CRC8, 0, 1, 1, 1);

        radioButton_CRC16 = new QRadioButton(layoutWidget);
        radioButton_CRC16->setObjectName(QString::fromUtf8("radioButton_CRC16"));
        radioButton_CRC16->setFont(font4);

        gridLayout->addWidget(radioButton_CRC16, 0, 2, 1, 1);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font4);

        gridLayout->addWidget(radioButton_3, 0, 3, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 401, 61));
        groupBox_2->setFont(font4);
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
        radioButton_Predefined = new QRadioButton(groupBox_2);
        radioButton_Predefined->setObjectName(QString::fromUtf8("radioButton_Predefined"));
        radioButton_Predefined->setGeometry(QRect(10, 30, 111, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButton_Predefined->sizePolicy().hasHeightForWidth());
        radioButton_Predefined->setSizePolicy(sizePolicy1);
        radioButton_Predefined->setFont(font4);
        radioButton_Predefined->setChecked(true);
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(120, 29, 180, 22));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setMaximumSize(QSize(180, 16777215));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));
        radioButton_Custom = new QRadioButton(groupBox_2);
        radioButton_Custom->setObjectName(QString::fromUtf8("radioButton_Custom"));
        radioButton_Custom->setGeometry(QRect(310, 30, 81, 20));
        radioButton_Custom->setFont(font4);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 170, 661, 141));
        groupBox_3->setFont(font4);
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
        checkBox_Input_Reflected = new QCheckBox(groupBox_3);
        checkBox_Input_Reflected->setObjectName(QString::fromUtf8("checkBox_Input_Reflected"));
        checkBox_Input_Reflected->setGeometry(QRect(10, 20, 151, 20));
        checkBox_Input_Reflected->setFont(font4);
        checkBox_Input_Reflected->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:checked {\n"
"   \n"
"	color: rgb(85, 255, 127);\n"
"}"));
        checkBox_Result_Reflected = new QCheckBox(groupBox_3);
        checkBox_Result_Reflected->setObjectName(QString::fromUtf8("checkBox_Result_Reflected"));
        checkBox_Result_Reflected->setGeometry(QRect(160, 20, 151, 20));
        checkBox_Result_Reflected->setFont(font4);
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 91, 16));
        label_4->setFont(font4);
        lineEdit_Polynomial = new QLineEdit(groupBox_3);
        lineEdit_Polynomial->setObjectName(QString::fromUtf8("lineEdit_Polynomial"));
        lineEdit_Polynomial->setEnabled(true);
        lineEdit_Polynomial->setGeometry(QRect(110, 50, 151, 22));
        lineEdit_Polynomial->setFont(font3);
        lineEdit_Polynomial->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 80, 121, 16));
        label_5->setFont(font4);
        lineEdit_Initial_value = new QLineEdit(groupBox_3);
        lineEdit_Initial_value->setObjectName(QString::fromUtf8("lineEdit_Initial_value"));
        lineEdit_Initial_value->setGeometry(QRect(110, 80, 151, 22));
        lineEdit_Initial_value->setFont(font3);
        lineEdit_Initial_value->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 110, 131, 16));
        label_6->setFont(font4);
        lineEdit_Final_XOR_value = new QLineEdit(groupBox_3);
        lineEdit_Final_XOR_value->setObjectName(QString::fromUtf8("lineEdit_Final_XOR_value"));
        lineEdit_Final_XOR_value->setGeometry(QRect(110, 110, 151, 22));
        lineEdit_Final_XOR_value->setFont(font3);
        lineEdit_Final_XOR_value->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    border: 1px solid #97c3f3;\n"
"    border-radius: 2px;\n"
"	background-color: rgb(255, 255, 255);\n"
"   \n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 683, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CRC Calculator by Solderingiron v1.0", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
#if QT_CONFIG(shortcut)
        action->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\321\217\320\274\320\276\320\271, \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\265\320\271 \321\207\320\265\321\200\320\265\320\267 2 \321\202\320\276\321\207\320\272\320\270", nullptr));
        textEdit->setDocumentTitle(QString());
        textEdit->setMarkdown(QString());
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\201\321\201\320\270\320\262 \320\261\320\260\320\271\321\202 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 HEX \320\247\320\265\321\200\320\265\320\267 \320\267\320\260\320\277\321\217\321\202\321\203\321\216. \320\237\321\200\320\270\320\274\320\265\321\200: 0x01, 0x23, 0xCF, 0xFE", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate CRC", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Array length (in bytes):", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CRC Result:", nullptr));
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
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
