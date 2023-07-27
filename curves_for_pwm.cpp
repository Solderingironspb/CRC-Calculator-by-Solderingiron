#include "curves_for_pwm.h"
#include "ui_curves_for_pwm.h"
#include <QtGui>
#include <QIntValidator>
#include <stdbool.h>
#include <math.h>
#include <QFont>

float Curves_k = 0.0f;


//Характеристика потенциометра типа С
uint16_t Curves_exp[101] = { 0, 105, 110, 115, 120, 126, 132, 138, 145, 151, 159, 166, 174, 182, 191, 200, 209,
                             219, 229, 240, 251, 263, 276, 289, 302, 316, 331, 347, 363, 381, 398, 417, 437, 458, 479, 502, 525, 550, 576,
                             603, 632, 662, 693, 725, 760, 795, 833, 872, 913, 956, 1002, 1049, 1098, 1150, 1204, 1261, 1321, 1383, 1448,
                             1516, 1588, 1663, 1741, 1823, 1909, 1999, 2094, 2192, 2296, 2404, 2517, 2636, 2760, 2891, 3027, 3170, 3319,
                             3476, 3640, 3811, 3991, 4179, 4376, 4583, 4799, 5025, 5262, 5510, 5770, 6042, 6327, 6626, 6938, 7265, 7608,
                             7967, 8343, 8736, 9148, 9580, 10000 };

//Характеристика потенциометра типа B
uint16_t Curves_log[101] = {0, 100, 1504, 2384, 3008, 3492, 3888, 4223, 4512, 4768, 4997, 5203, 5392, 5566, 5727,
                            5876, 6017, 6148, 6272, 6389, 6501, 6607, 6708, 6804, 6896, 6985, 7070, 7152, 7231, 7307, 7381, 7452, 7521,
                            7587, 7652, 7715, 7776, 7836, 7894, 7950, 8005, 8058, 8111, 8162, 8212, 8260, 8308, 8355, 8401, 8445, 8489,
                            8532, 8574, 8616, 8656, 8696, 8735, 8773, 8811, 8848, 8885, 8921, 8956, 8991, 9025, 9058, 9092, 9124, 9156,
                            9188, 9219, 9250, 9280, 9310, 9340, 9369, 9398, 9426, 9454, 9482, 9509, 9536, 9563, 9589, 9615, 9641, 9666,
                            9691, 9716, 9740, 9765, 9789, 9812, 9836, 9859, 9882, 9905, 9927, 9949, 9971, 10000 };
uint16_t Curves[101] = {0,};

//Подсчитаем коэффициент k
float curves_for_pwm::Curves_k_init(uint8_t Type) {
    if (Type == Curves_linear){
        return (float)(QString(ui->lineEdit_CNT->text()).toInt(NULL,10)) / 100 ;
    } else{
        return (float)(QString(ui->lineEdit_CNT->text()).toInt(NULL,10)) / 10000 ;
    }
}


//Подобрать значение шим для процента мощности по типу кривой
uint16_t curves_for_pwm::Curves_value(uint8_t Persent, uint8_t Type, float Curves_k) {
    uint16_t Value = 0;
    if (Type == Curves_linear){
        Value =  Persent * Curves_k;
    } else if (Type == Curves_logarithmic){
        Value = (float)Curves_log[Persent] * Curves_k;
    } else if (Type == Curves_exponential){
        Value = (uint16_t)((float)Curves_exp[Persent] * Curves_k);
    }
    return Value;
}




curves_for_pwm::curves_for_pwm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::curves_for_pwm)
{
    ui->setupUi(this);
    ui->lineEdit_CNT->setValidator(new QIntValidator(0,65535));
    ui->textEdit_4->setTextColor("green");

}

curves_for_pwm::~curves_for_pwm()
{
    delete ui;
}


void curves_for_pwm::on_pushButton_clicked()
{
    ui->textEdit_4->clear();
    bool flag = true;
    uint32_t Counter_period = QString(ui->lineEdit_CNT->text()).toInt(NULL,10);
    float Result = 0;
    float k = 65536;
    float hysteresis = 0.01f;

    while (flag) {
        k = k - 0.01;
        Result = exp((float) Counter_period / (float) k);
        float a = Result + hysteresis;
        if (a > Counter_period) {
            //printf("Result = %f; k = %f   \r\n", Result, k);
            ui->lineEdit->setText(QString::number(k,'f',6));
            flag = false;
        }
    }

    Curves_k = Curves_k_init(Curves_exponential);
    ui->textEdit_4->insertPlainText("//Характеристика потенциометра типа С (Управление от 0 до 100%):");
    ui->textEdit_4->append("uint16_t Curves_exp[101] = {");
    for (uint8_t i = 0; i <= 100; i++){
        Curves[i] = Curves_value(i, Curves_exponential, Curves_k);
        if (i <100){
            ui->textEdit_4->insertPlainText((QString::number(Curves[i])) + ", ");
        }else{
            ui->textEdit_4->insertPlainText((QString::number(Curves[i])));
        }
    }
    ui->textEdit_4->insertPlainText("};");

    ui->textEdit_4->append("");

    Curves_k = Curves_k_init(Curves_logarithmic);
    ui->textEdit_4->append("//Характеристика потенциометра типа B (Управление от 0 до 100%):");
    ui->textEdit_4->append("uint16_t Curves_log[101] = {");
    for (uint8_t i = 0; i <= 100; i++){
        Curves[i] = Curves_value(i, Curves_logarithmic, Curves_k);
        if (i <100){
            ui->textEdit_4->insertPlainText((QString::number(Curves[i])) + ", ");
        }else{
            ui->textEdit_4->insertPlainText((QString::number(Curves[i])));
        }
    }
    ui->textEdit_4->insertPlainText("};");

    ui->textEdit_4->append("");

    Curves_k = Curves_k_init(Curves_linear);
    ui->textEdit_4->append("//Характеристика потенциометра типа A (Управление от 0 до 100%):");
    ui->textEdit_4->append("uint16_t Curves_lin[101] = {");
    for (uint8_t i = 0; i <= 100; i++){
        Curves[i] = Curves_value(i, Curves_linear, Curves_k);
        if (i <100){
            ui->textEdit_4->insertPlainText((QString::number(Curves[i])) + ", ");
        }else{
            ui->textEdit_4->insertPlainText((QString::number(Curves[i])));
        }
    }
    ui->textEdit_4->insertPlainText("};");
}


void curves_for_pwm::on_lineEdit_CNT_textEdited(const QString &arg1)
{
    uint32_t Counter_period = QString(arg1).toInt(NULL,10);
    if (Counter_period > 65535){
        Counter_period = 65535;
        ui->lineEdit_CNT->setText(QString::number(Counter_period));
    }

}

