#include "ohms_law.h"
#include "ui_ohms_law.h"
#include <QMessageBox>

Ohms_law::Ohms_law(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ohms_law)
{
    ui->setupUi(this);
}

Ohms_law::~Ohms_law()
{
    delete ui;
}

//I = U/R
double I1 = 0;
double U1 = 0;
double R1 = 0;

//ввод U
void Ohms_law::on_lineEdit_U1_textEdited(const QString &arg1)
{
    QString Text = arg1;
    Text.replace(",", ".");
    bool Status = false;
    if (Text!= NULL){
        U1 = Text.toDouble(&Status);
        if (Status){
            I1 = U1/R1;
            ui->lineEdit_I1->setText(QString::number(I1));
        }else{
            QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(arg1)));
        }
    }
}
//ввод R
void Ohms_law::on_lineEdit_R1_textEdited(const QString &arg1)
{
    QString Text = arg1;
    Text.replace(",", ".");
    bool Status = false;
    if (Text!= NULL){
        R1 = Text.toDouble(&Status);
        if (Status){
            I1 = U1/R1;
            ui->lineEdit_I1->setText(QString::number(I1));
        }else{
            QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(arg1)));
        }
    }
}

//R = U/I

double I2 = 0;
double U2 = 0;
double R2 = 0;

//Ввод U
void Ohms_law::on_lineEdit_U2_textEdited(const QString &arg1)
{
    QString Text = arg1;
    Text.replace(",", ".");
    bool Status = false;
    if (Text!= NULL){
        U2 = Text.toDouble(&Status);
        if (Status){
            R2 = U2/I2;
            ui->lineEdit_R2->setText(QString::number(R2));
        }else{
            QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(arg1)));
        }
    }
}

//Ввод I
void Ohms_law::on_lineEdit_I2_textEdited(const QString &arg1)
{
    QString Text = arg1;
    Text.replace(",", ".");
    bool Status = false;
    if (Text!= NULL){
        I2 = Text.toDouble(&Status);
        if (Status){
            R2 = U2/I2;
            ui->lineEdit_R2->setText(QString::number(R2));
        }else{
            QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(arg1)));
        }
    }
}

//U = I*R
double I3 = 0;
double U3 = 0;
double R3 = 0;

//Ввод I
void Ohms_law::on_lineEdit_I3_textEdited(const QString &arg1)
{
    QString Text = arg1;
    Text.replace(",", ".");
    bool Status = false;
    if (Text!= NULL){
        I3 = Text.toDouble(&Status);
        if (Status){
            U3 = I3*R3;
            ui->lineEdit_U3->setText(QString::number(U3));
        }else{
            QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(arg1)));
        }
    }
}
//Ввод R
void Ohms_law::on_lineEdit_R3_textEdited(const QString &arg1)
{
    QString Text = arg1;
    Text.replace(",", ".");
    bool Status = false;
    if (Text!= NULL){
        R3 = Text.toDouble(&Status);
        if (Status){
            U3 = I3*R3;
            ui->lineEdit_U3->setText(QString::number(U3));
        }else{
            QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(arg1)));
        }
    }
}
