#include "pwm_hz.h"
#include "ui_pwm_hz.h"
#include <QValidator>
#include <string>
uint32_t Timer_clock;
uint32_t Prescaler;
uint32_t CounterPeriod;
double Frequency;

PWM_HZ::PWM_HZ(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PWM_HZ)
{
    ui->setupUi(this);
    Timer_clock = 72000000;
    Prescaler = 7200;
    CounterPeriod = 10000;
    ui->LineEdit_TImerClock->setValidator(new QIntValidator(0, 999999999));
    ui->LineEdit_Prescaler->setValidator(new QIntValidator(1, 999999999));
    ui->lineEdit_CounterPeriod->setValidator(new QIntValidator(1, 999999999));
}

PWM_HZ::~PWM_HZ()
{
    delete ui;
}

void PWM_HZ::frequency_calculate(void){
    Frequency = (double)Timer_clock/((double)Prescaler * (double)CounterPeriod);

    ui->lineEdit_FrequencyHz->setText(QString::number(Frequency));
    ui->lineEdit_FrequencykHz->setText(QString::number(Frequency/1000));
    ui->lineEdit_FrequencyMHz->setText(QString::number(Frequency/1000000));
}

void PWM_HZ::on_LineEdit_TImerClock_textEdited(const QString &arg1){
    Timer_clock = arg1.toLongLong();
    frequency_calculate();
}


void PWM_HZ::on_LineEdit_Prescaler_textEdited(const QString &arg1){
    Prescaler = arg1.toLongLong();
    if (Prescaler == 0){
        ui->LineEdit_Prescaler_2->setText("Неверные данные");
    }else{
    ui->LineEdit_Prescaler_2->setText(QString::number(Prescaler - 1, 10));
    }
    frequency_calculate();
}


void PWM_HZ::on_lineEdit_CounterPeriod_textEdited(const QString &arg1){
    CounterPeriod = arg1.toLongLong();
    if (CounterPeriod == 0){
        ui->lineEdit_CounterPeriod_2->setText("Неверные данные");
    }else{
    ui->lineEdit_CounterPeriod_2->setText(QString::number(CounterPeriod - 1, 10));
    }
    frequency_calculate();
}

