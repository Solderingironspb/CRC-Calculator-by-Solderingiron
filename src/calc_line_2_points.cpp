#include "calc_line_2_points.h"
#include "ui_calc_line_2_points.h"
#include <QMessageBox>
#include <QWidget>
#include <QDoubleValidator>

float Xa = 0.0f;
float Ya = 0.0f;
float Xb = 0.0f;
float Yb = 0.0f;
float k, b; //Коэффициенты прямой

bool status_float_convert[4] = {false, };


calc_line_2_points::calc_line_2_points(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calc_line_2_points)

{
    ui->setupUi(this);
    //ui->lineEdit_X_in->setValidator(new QDoubleValidator());
    setWindowIcon(QIcon(":/app2.ico"));
    //Задать очередь по кнопке Tab
    QWidget::setTabOrder(ui->lineEdit_Xa, ui->lineEdit_Ya);
    QWidget::setTabOrder(ui->lineEdit_Xb, ui->lineEdit_Yb);
    QWidget::setTabOrder(ui->lineEdit_k, ui->lineEdit_b);

}

calc_line_2_points::~calc_line_2_points(){
    delete ui;
}

void calc_line_2_points::float_check(bool* status, QString Text){

    if (!(*status)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(Text)));
    }
}

void calc_line_2_points::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Enter){
        on_pushButton_clicked();
    }
}


void calc_line_2_points::on_pushButton_clicked(){
    QString Text_data[4];

    Text_data[0] = ui->lineEdit_Xa->text().replace(",", ".");
    Xa = Text_data[0].toFloat(&status_float_convert[0]);
    Text_data[1] = ui->lineEdit_Xb->text().replace(",", ".");
    Xb = Text_data[1].toFloat(&status_float_convert[1]);
    Text_data[2] = ui->lineEdit_Ya->text().replace(",", ".");
    Ya = Text_data[2].toFloat(&status_float_convert[2]);
    Text_data[3] = ui->lineEdit_Yb->text().replace(",", ".");
    Yb = Text_data[3].toFloat(&status_float_convert[3]);

    for (int i = 0; i<4; i++){
        float_check((bool*)&status_float_convert[i], Text_data[i]);
    }


    k = (Ya - Yb) / (Xa - Xb);
    ui->lineEdit_k->setText(QString("%1").arg(QString::number(k,'f', 5)));
    b = Yb - k * Xb;
    ui->lineEdit_b->setText(QString("%1").arg(QString::number(b, 'f', 5)));
    ui->lineEdit_y->setText(QString("y = %1x + %2").arg(QString::number(k,'f', 5),QString::number(b, 'f', 5)));

}


void calc_line_2_points::on_lineEdit_X_in_textEdited(const QString &arg1){
    bool Status = false;
    float X_in = 0.0f;
    if (arg1 != NULL){
        X_in = arg1.toFloat(&Status);
        float_check((bool*)&Status,arg1);
        if (Status){
            float Y_out = k * X_in + b;
            ui->lineEdit_Y_out->setText(QString("%1").arg(QString::number(Y_out, 'f', 5)));
        }else{
            ui->lineEdit_Y_out->clear();
        }
    }else{
        ui->lineEdit_Y_out->clear();
    }



}

