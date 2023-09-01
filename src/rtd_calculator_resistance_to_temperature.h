#ifndef RTD_CALCULATOR_RESISTANCE_TO_TEMPERATURE_H
#define RTD_CALCULATOR_RESISTANCE_TO_TEMPERATURE_H

#include <QMainWindow>

namespace Ui {
class RTD_Calculator_Resistance_to_Temperature;
}

class RTD_Calculator_Resistance_to_Temperature : public QMainWindow
{
    Q_OBJECT

public:
    explicit RTD_Calculator_Resistance_to_Temperature(QWidget *parent = nullptr);
    ~RTD_Calculator_Resistance_to_Temperature();

    enum {
        PT_385, //Платина
        PT_391, //Платина
        M_428,  //Медь
        N_617  //Никель
    };

private slots:



    double Get_Temperature_PT(double Resistance, double R0, uint8_t Type);
    double Get_Resistance_PT(double Temperature, double R0, uint8_t Type);
    double Get_Temperature_M(double Resistance, double R0, uint8_t Type);
    double Get_Resistance_M(double Temperature, double R0, uint8_t Type);
    double Get_Temperature_N(double Resistance, double R0, uint8_t Type);
    double Get_Resistance_N(double Temperature, double R0, uint8_t Type);

    void on_comboBox_Type_currentIndexChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RTD_Calculator_Resistance_to_Temperature *ui;
};

#endif // RTD_CALCULATOR_RESISTANCE_TO_TEMPERATURE_H
