#include "rtd_calculator_resistance_to_temperature.h"
#include "ui_rtd_calculator_resistance_to_temperature.h"
#include <QMessageBox>
#include <math.h>


/*-----------Коэффициенты из ГОСТ 6651-2009(Платиновые ТС И ЧЭ, 0.00385°С^-1)---------*/
#define PT50_R0 (double)50.0;
#define PT100_R0 (double)100.0;
#define PT500_R0 (double)500.0;
#define PT1000_R0 (double)1000.0;
#define PT_A_385 (double)0.0039083
#define PT_B_385 (double)-0.0000005775
#define PT_C_385 (double)-0.000000000004183
double PT_D_385[4] = {255.819, 9.14550, -2.92363, 1.79090};

/*-----------Коэффициенты из ГОСТ 6651-2009(Платиновые ТС И ЧЭ, 0.00385°С^-1)---------*/

/*-----------Коэффициенты из ГОСТ 6651-2009(Платиновые ТС и ЧЭ, 0,00391°С)---------*/
#define PT_A_391 (double)0.003969
#define PT_B_391 (double)-0.0000005841
#define PT_C_391 (double)-0.00000000000433
double PT_D_391[4] = {251.903, 8.80035, -2.91506, 1.67611};
/*-----------Коэффициенты из ГОСТ 6651-2009(Платиновые ТС и ЧЭ, 0,00391°С)---------*/

/*-----------Коэффициенты из ГОСТ 6651-2009(Медные ТС и ЧЭ, 0,00428°С)---------*/
#define M50_R0 (double)50.0;
#define M100_R0 (double)100.0;
#define M_A_428 (double)0.00428
#define M_B_428 (double)-0.00000062032
#define M_C_428 (double)0.00000000085154
double M_D_428[4] = {233.87, 7.9370, -2.0062, -0.3953};
/*-----------Коэффициенты из ГОСТ 6651-2009(Медные ТС и ЧЭ, 0,00428°С)---------*/

/*-----------Коэффициенты из ГОСТ 6651-2009(Никелевые ТС и ЧЭ, 0,00617°С)---------*/
#define N100_R0 (double)100.0;
#define N500_R0 (double)500.0;
#define N1000_R0 (double)1000.0;
#define N_A_617 (double)0.0054963
#define N_B_617 (double)0.0000067556
#define N_C_617 (double)0.0000000092004
double N_D_617[3] = {144.096, -25.502, 4.4876};
/*-----------Коэффициенты из ГОСТ 6651-2009(Никелевые ТС и ЧЭ, 0,00617°С)---------*/


//Платиновые термопреобразователи сопротивления
/*Уравнения для расчета температуры по сопротивлению термопреобразователей сопротивления*/
double RTD_Calculator_Resistance_to_Temperature::Get_Temperature_PT(double Resistance, double R0, uint8_t Type){
    double Temperature = 0;

    if (Resistance < R0){
        for(uint8_t i = 1; i <= 4; i++){
            if (Type == PT_385){
                Temperature += (PT_D_385[i-1] * pow((Resistance/R0 - 1),i));
            } else if (Type == PT_391){
                Temperature += (PT_D_391[i-1] * pow((Resistance/R0 - 1),i));
            }
        }
    }else{
        if (Type == PT_385){
            Temperature = (sqrt((pow(PT_A_385,2) - 4 * PT_B_385 * (1 - Resistance/R0))) - PT_A_385)/(2*PT_B_385);
        } else if (Type == PT_391){
            Temperature = (sqrt((pow(PT_A_391,2) - 4 * PT_B_391 * (1 - Resistance/R0))) - PT_A_391)/(2*PT_B_391);
        }
    }
    return Temperature;
}

/*Уравнения для расчета сопротивления по температуре термопреобразователей сопротивления*/
double RTD_Calculator_Resistance_to_Temperature::Get_Resistance_PT(double Temperature, double R0, uint8_t Type){
    double Resistance = 0;
    if (Temperature < 0){

        if (Type == PT_385){
            Resistance = R0 * (1 + PT_A_385 * Temperature + PT_B_385 * pow(Temperature,2) + PT_C_385 * (Temperature - 100)* pow(Temperature,3));
        } else if (Type == PT_391){
            Resistance = R0 * (1 + PT_A_391 * Temperature + PT_B_391 * pow(Temperature,2) + PT_C_391 * (Temperature - 100)* pow(Temperature,3));
        }

    }else{
        if (Type == PT_385){
            Resistance = R0 * (1 + PT_A_385 * Temperature + PT_B_385 * pow(Temperature,2));
        } else if (Type == PT_391){
            Resistance = R0 * (1 + PT_A_391 * Temperature + PT_B_391 * pow(Temperature,2));
        }
    }

    return Resistance;
}

//Медные термопреобразователи сопротивления
/*Уравнения для расчета температуры по сопротивлению термопреобразователей сопротивления*/
double RTD_Calculator_Resistance_to_Temperature::Get_Temperature_M(double Resistance, double R0, uint8_t Type){
    double Temperature = 0;

    if (Resistance < R0){

        for(uint8_t i = 1; i <= 4; i++){
            if (Type == M_428){
                Temperature += (M_D_428[i-1] * pow((Resistance/R0 - 1),i));
            }
        }

    }else{
        if (Type == M_428){
            Temperature = (Resistance/R0 - 1)/M_A_428;
        }
    }
    return Temperature;
}

/*Уравнения для расчета сопротивления по температуре термопреобразователей сопротивления*/
double RTD_Calculator_Resistance_to_Temperature::Get_Resistance_M(double Temperature, double R0, uint8_t Type){
    double Resistance = 0;
    if (Temperature < 0){

        if (Type == M_428){
            Resistance = R0 * (1 + M_A_428  * Temperature + M_B_428 * Temperature * (Temperature + 6.7) + M_C_428 * pow(Temperature,3));
        }

    }else{
        if (Type == M_428){
            Resistance = R0 * (1 + M_A_428 * Temperature);
        }
    }

    return Resistance;
}


//Никелевые термопреобразователи сопротивления
/*Уравнения для расчета температуры по сопротивлению термопреобразователей сопротивления*/
double RTD_Calculator_Resistance_to_Temperature::Get_Temperature_N(double Resistance, double R0, uint8_t Type){
    double Temperature = 0;
    double Temp_start = 0.0f;
    if (Type == N_617){
        if (R0 == 100){
            Temp_start = 161.72;
        }else if (R0 == 500){
            Temp_start = 808.59;
        }else if (R0 == 1000){
            Temp_start = 1617.2;
        }
        if (Resistance < Temp_start){

            Temperature = (sqrt((pow(N_A_617,2) - 4 * N_B_617 * (1 - Resistance/R0))) - N_A_617)/(2*N_B_617);
        }else{
            for(uint8_t i = 1; i <= 3; i++){
                Temperature += (N_D_617[i-1] * pow((Resistance/R0 - 1.6172),i));
            }
            Temperature += 100;
        }

    }
    return Temperature;
}

double RTD_Calculator_Resistance_to_Temperature::Get_Resistance_N(double Temperature, double R0, uint8_t Type){
    double Resistance = 0;
    if (Type == N_617){
        if (Temperature < 100){
            Resistance = R0 * (1 + N_A_617  * Temperature + N_B_617 * pow(Temperature,2));
        }else{
            Resistance = R0 * (1 + N_A_617 * Temperature + N_B_617 * pow(Temperature,2) + N_C_617 * (Temperature - 100) * pow(Temperature,2));
        }
    }

    return Resistance;
}







bool status_float_convert_RTD[2] = {false, };



RTD_Calculator_Resistance_to_Temperature::RTD_Calculator_Resistance_to_Temperature(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RTD_Calculator_Resistance_to_Temperature)
{
    ui->setupUi(this);
    if (ui->comboBox_Type->currentText() == "Pt100" || ui->comboBox_Type->currentText() == "Pt1000"){
        ui->lineEdit_alpha->setText(QString::number(0.00385,'f',5));
    }
}

RTD_Calculator_Resistance_to_Temperature::~RTD_Calculator_Resistance_to_Temperature()
{
    delete ui;
}

void RTD_Calculator_Resistance_to_Temperature::on_comboBox_Type_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Pt100" || arg1 == "Pt500" || arg1 == "Pt1000"){
        ui->lineEdit_alpha->setText(QString::number(0.00385,'f',5));
    }else if (arg1 == "50П" || arg1 == "100П"){
        ui->lineEdit_alpha->setText(QString::number(0.00391,'f',5));
    }else if (arg1 == "50М" || arg1 == "100М"){
        ui->lineEdit_alpha->setText(QString::number(0.00428,'f',5));
    }else if (arg1 == "100Н" || arg1 == "500Н" || arg1 == "1000Н"){
        ui->lineEdit_alpha->setText(QString::number(0.00617,'f',5));
    }
}




void RTD_Calculator_Resistance_to_Temperature::on_pushButton_clicked()
{
    uint8_t Type = 0;
    double PT_R0 = 0.0;
    double Temperature = 0;
    if (ui->comboBox_Type->currentText() == "Pt100"){
        PT_R0 = PT100_R0;
        Type = PT_385;
    }else if (ui->comboBox_Type->currentText() == "Pt500"){
        PT_R0 = PT500_R0;
        Type = PT_385;
    }else if (ui->comboBox_Type->currentText() == "Pt1000"){
        PT_R0 = PT1000_R0;
        Type = PT_385;
    }else if (ui->comboBox_Type->currentText() == "50П"){
        PT_R0 = PT50_R0;
        Type = PT_391;
    }else if (ui->comboBox_Type->currentText() == "100П"){
        PT_R0 = PT100_R0;
        Type = PT_391;
    }else if (ui->comboBox_Type->currentText() == "50М"){
        PT_R0 = M50_R0;
        Type = M_428;
    }else if (ui->comboBox_Type->currentText() == "100М"){
        PT_R0 = M100_R0;
        Type = M_428;
    }else if (ui->comboBox_Type->currentText() == "100Н"){
        PT_R0 = N100_R0;
        Type = N_617;
    }else if (ui->comboBox_Type->currentText() == "500Н"){
        PT_R0 = N500_R0;
        Type = N_617;
    }else if (ui->comboBox_Type->currentText() == "1000Н"){
        PT_R0 = N1000_R0;
        Type = N_617;
    }
    QString Text_data;
    Text_data = ui->lineEdit->text().replace(",", ".");
    double Resistance = Text_data.toDouble(&status_float_convert_RTD[0]);

    if (!(status_float_convert_RTD[0])){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit->text())));
    }else{
        if (Type == PT_385 || Type == PT_391){
            Temperature = Get_Temperature_PT(Resistance, PT_R0, Type);
        }else if (Type == M_428){
            Temperature = Get_Temperature_M(Resistance, PT_R0, Type);
        }else if (Type == N_617){
            Temperature = Get_Temperature_N(Resistance, PT_R0, Type);
        }

    }

    ui->lineEdit_2->setText(QString::number(Temperature,'f',2));

}



void RTD_Calculator_Resistance_to_Temperature::on_pushButton_2_clicked()
{
    uint8_t Type = 0;
    double PT_R0 = 0.0;
    double Resistance = 0;
    if (ui->comboBox_Type->currentText() == "Pt100"){
        PT_R0 = 100;
        Type = PT_385;
    }else if (ui->comboBox_Type->currentText() == "Pt500"){
        PT_R0 = 500;
        Type = PT_385;
    }else if (ui->comboBox_Type->currentText() == "Pt1000"){
        PT_R0 = 1000;
        Type = PT_385;
    }else if (ui->comboBox_Type->currentText() == "50П"){
        PT_R0 = 50;
        Type = PT_391;
    }else if (ui->comboBox_Type->currentText() == "100П"){
        PT_R0 = 100;
        Type = PT_391;
    }else if (ui->comboBox_Type->currentText() == "50М"){
        PT_R0 = M50_R0;
        Type = M_428;
    }else if (ui->comboBox_Type->currentText() == "100М"){
        PT_R0 = M100_R0;
        Type = M_428;
    }else if (ui->comboBox_Type->currentText() == "100Н"){
        PT_R0 = N100_R0;
        Type = N_617;
    }else if (ui->comboBox_Type->currentText() == "500Н"){
        PT_R0 = N500_R0;
        Type = N_617;
    }else if (ui->comboBox_Type->currentText() == "1000Н"){
        PT_R0 = N1000_R0;
        Type = N_617;
    }
    QString Text_data[2];
    Text_data[0] = ui->lineEdit_2->text().replace(",", ".");
    double Temperature = Text_data[0].toDouble(&status_float_convert_RTD[0]);

    if (!(status_float_convert_RTD[0])){
        QMessageBox::warning(this, tr("Ошибка!"), QString("Проверьте правильность ввода данных: ").append(QString(ui->lineEdit_2->text())));
    }else{
        if (Type == PT_385 || Type == PT_391){
            Resistance = Get_Resistance_PT(Temperature, PT_R0, Type);
        }else if (Type == M_428){
            Resistance = Get_Resistance_M(Temperature, PT_R0, Type);
        }else if (Type == N_617){
            Resistance = Get_Resistance_N(Temperature, PT_R0, Type);
        }
    }

    ui->lineEdit->setText(QString::number(Resistance,'f',2));


}

