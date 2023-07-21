#include "hex_to_float_double.h"
#include "ui_hex_to_float_double.h"
#include <QMessageBox>

uint32_t hex_value_a = 0x0;
uint64_t hex_value_b = 0x0;
float fl_a = 0.0f;
double dl_b = 0.0;

/*int main(void) {
    printf("floating point to hex converter:\r\n");
    printf("a = %.2f\r\n", a);
    printf("b = %.2f\r\n", b);
    hex_value_a = *((uint32_t*)&a);
    hex_value_b = *((uint64_t*)&b);
    printf("hex_value_a = 0x%X\r\n", hex_value_a);
    printf("hex_value_b = 0x%lX\r\n", hex_value_b);

    printf("\r\nhex to floating point converter:\r\n");
    hex_value_a = 0x402DF3B6;
    hex_value_b = 0x4005BE76C8B43958;
    printf("hex_value_a = 0x%X\r\n", hex_value_a);
    printf("hex_value_b = 0x%lX\r\n", hex_value_b);
    a = *((float*)&hex_value_a);
    b = *((double*)&hex_value_b);
    printf("a = %.3f\r\n", a);
    printf("b = %.3f\r\n", b);
}*/


hex_to_float_double::hex_to_float_double(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hex_to_float_double)
{
    ui->setupUi(this);
}

hex_to_float_double::~hex_to_float_double()
{
    delete ui;
}

void hex_to_float_double::on_pushButton_convert_to_float_clicked()
{
    bool status_hex_convert = false;
    hex_value_a = QString(ui->lineEdit_float_hex->text()).toULong(&status_hex_convert,16);
    if (!(status_hex_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_float_hex->text())));
    }
    fl_a = *((float*)&hex_value_a);
    ui->lineEdit_float_value->setText(QString("%1").arg(QString::number(fl_a,'f', 5)));
}


void hex_to_float_double::on_pushButton_convert_to_hex_f_clicked()
{
     bool status_float_convert = false;
     QString Text = ui->lineEdit_float_value->text().replace(",", ".");
     fl_a = Text.toFloat(&status_float_convert);
     if (!(status_float_convert)){
         QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_float_value->text())));
     }
     hex_value_a = *((uint32_t*)&fl_a);
     ui->lineEdit_float_hex->setText("0x" + QString(QString::number(hex_value_a,16)).toUpper());

}


void hex_to_float_double::on_pushButton_convert_to_double_clicked()
{
    bool status_hex_convert = false;
    hex_value_b = QString(ui->lineEdit_Double_hex->text()).toULongLong(&status_hex_convert,16);
    if (!(status_hex_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_Double_hex->text())));
    }
    dl_b = *((double*)&hex_value_b);
    ui->lineEdit_Double_value->setText(QString("%1").arg(QString::number(dl_b,'d', 16)));
}


void hex_to_float_double::on_pushButton_Convert_to_hex_d_clicked()
{
    bool status_double_convert = false;
    QString Text = ui->lineEdit_Double_value->text().replace(",", ".");
    dl_b = Text.toDouble(&status_double_convert);
    if (!(status_double_convert)){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_Double_value->text())));
    }
    hex_value_b = *((uint64_t*)&dl_b);
    ui->lineEdit_Double_hex->setText("0x" + QString(QString::number(hex_value_b,16)).toUpper());
}

