#include "signal_converter.h"
#include "ui_signal_converter.h"
#include <QMessageBox>

signal_converter::signal_converter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signal_converter)
{
    ui->setupUi(this);
}

signal_converter::~signal_converter()
{
    delete ui;
}

void signal_converter::on_pushButton_clicked()
{
    bool status_convert = false;;
    QString Text_data;

    /*Верхняя граница*/
    Text_data = ui->lineEdit_0_10_up->text().replace(",", ".");
    double upper_bound = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_0_10_up->text())));
    }

    /*Нижняя граница*/
    Text_data = ui->lineEdit_0_10_down->text().replace(",", ".");
    double down_bound = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_0_10_down->text())));
    }

    /*Значение в вольтах*/
    Text_data = ui->lineEdit_0_10_U->text().replace(",", ".");
    double Voltage = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_0_10_U->text())));
    }

    double Xa = 0;
    double Xb = 10;
    double Ya = upper_bound;
    double Yb = down_bound;
    double k, b; //Коэффициенты прямой
    k = (Ya - Yb) / (Xa - Xb);
    b = Yb - k * Xb;

    double Value = Voltage*k + b;

    ui->lineEdit_0_10_value_2->setText(QString(QString::number(Value,'f',3)) + " " + ui->lineEdit_edizmereniya1->text());
}


void signal_converter::on_pushButton_3_clicked()
{
    bool status_convert = false;;
    QString Text_data;

    /*Верхняя граница*/
    Text_data = ui->lineEdit_0_10_up->text().replace(",", ".");
    double upper_bound = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_0_10_up->text())));
    }

    /*Нижняя граница*/
    Text_data = ui->lineEdit_0_10_down->text().replace(",", ".");
    double down_bound = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_0_10_down->text())));
    }

    /*Значение*/
    Text_data = ui->lineEdit_0_10_value->text().replace(",", ".");
    double Value = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_0_10_value->text())));
    }

    double Ya = 0;
    double Yb = 10;
    double Xa = upper_bound;
    double Xb = down_bound;
    double k, b; //Коэффициенты прямой
    k = (Ya - Yb) / (Xa - Xb);
    b = Yb - k * Xb;

    double Voltage = Value*k + b;

    ui->lineEdit_0_10_value_4->setText(QString(QString::number(Voltage,'f',3)) + " В");
}


void signal_converter::on_pushButton_2_clicked()
{
    bool status_convert = false;;
    QString Text_data;

    /*Верхняя граница*/
    Text_data = ui->lineEdit_4_20_up->text().replace(",", ".");
    double upper_bound = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_4_20_up->text())));
    }

    /*Нижняя граница*/
    Text_data = ui->lineEdit_4_20_down->text().replace(",", ".");
    double down_bound = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_4_20_down->text())));
    }

    /*Значение в мА*/
    Text_data = ui->lineEdit_0_10_I->text().replace(",", ".");
    double Voltage = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_0_10_I->text())));
    }

    double Xa = 4;
    double Xb = 20;
    double Ya = upper_bound;
    double Yb = down_bound;
    double k, b; //Коэффициенты прямой
    k = (Ya - Yb) / (Xa - Xb);
    b = Yb - k * Xb;

    double Value = Voltage*k + b;

    ui->lineEdit_0_10_value_3->setText(QString(QString::number(Value,'f',3)) + " " + ui->lineEdit_edizmereniya2->text());
}


void signal_converter::on_pushButton_4_clicked()
{
    bool status_convert = false;;
    QString Text_data;

    /*Верхняя граница*/
    Text_data = ui->lineEdit_4_20_up->text().replace(",", ".");
    double upper_bound = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_4_20_up->text())));
    }

    /*Нижняя граница*/
    Text_data = ui->lineEdit_4_20_down->text().replace(",", ".");
    double down_bound = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_4_20_down->text())));
    }

    /*Значение*/
    Text_data = ui->lineEdit_4_20_value->text().replace(",", ".");
    double Value = Text_data.toDouble(&status_convert);
    if (!(status_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_4_20_value->text())));
    }

    double Ya = 4;
    double Yb = 20;
    double Xa = upper_bound;
    double Xb = down_bound;
    double k, b; //Коэффициенты прямой
    k = (Ya - Yb) / (Xa - Xb);
    b = Yb - k * Xb;

    double Voltage = Value*k + b;

    ui->lineEdit_0_10_value_5->setText(QString(QString::number(Voltage,'f',3)) + " мА");
}

