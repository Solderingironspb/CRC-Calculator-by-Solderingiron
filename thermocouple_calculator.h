#ifndef THERMOCOUPLE_CALCULATOR_H
#define THERMOCOUPLE_CALCULATOR_H

#include <QMainWindow>
#include <QKeyEvent>

namespace Ui {
class thermocouple_calculator;
}

class thermocouple_calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit thermocouple_calculator(QWidget *parent = nullptr);
    ~thermocouple_calculator();

private slots:
    void on_comboBox_type_currentTextChanged(const QString &arg1);
    double Thermocouple_temperature_to_TEMF_R(double Temperature);
    double Thermocouple_TEMF_to_temperature_R(double TEMF);
    double Thermocouple_temperature_to_TEMF_S(double Temperature);
    double Thermocouple_TEMF_to_temperature_S(double TEMF);
    double Thermocouple_temperature_to_TEMF_B(double Temperature);
    double Thermocouple_TEMF_to_temperature_B(double TEMF);
    double Thermocouple_temperature_to_TEMF_J(double Temperature);
    double Thermocouple_TEMF_to_temperature_J(double TEMF);
    double Thermocouple_temperature_to_TEMF_T(double Temperature);
    double Thermocouple_TEMF_to_temperature_T(double TEMF);
    double Thermocouple_temperature_to_TEMF_E(double Temperature);
    double Thermocouple_TEMF_to_temperature_E(double TEMF);
    double Thermocouple_temperature_to_TEMF_K(double Temperature);
    double Thermocouple_TEMF_to_temperature_K(double TEMF);
    double Thermocouple_temperature_to_TEMF_N(double Temperature);
    double Thermocouple_TEMF_to_temperature_N(double TEMF);
    double Thermocouple_temperature_to_TEMF_A1(double Temperature);
    double Thermocouple_TEMF_to_temperature_A1(double TEMF);
    double Thermocouple_temperature_to_TEMF_A2(double Temperature);
    double Thermocouple_TEMF_to_temperature_A2(double TEMF);
    double Thermocouple_temperature_to_TEMF_A3(double Temperature);
    double Thermocouple_TEMF_to_temperature_A3(double TEMF);
    double Thermocouple_temperature_to_TEMF_L(double Temperature);
    double Thermocouple_TEMF_to_temperature_L(double TEMF);
    double Thermocouple_temperature_to_TEMF_M(double Temperature);
    double Thermocouple_TEMF_to_temperature_M(double TEMF);
    void Thermocouple_hardfault(void);
    double Thermocouple_Get_Temperature(double Temperature_cold_junior, double TEMF, uint8_t Type);
    void on_pushButton_clicked();

protected:
    void keyPressEvent(QKeyEvent *e) override;

private:
    Ui::thermocouple_calculator *ui;

    enum {
        Thermocouple_R,
        Thermocouple_S,
        Thermocouple_B,
        Thermocouple_J,
        Thermocouple_T,
        Thermocouple_E,
        Thermocouple_K,
        Thermocouple_N,
        Thermocouple_A1,
        Thermocouple_A2,
        Thermocouple_A3,
        Thermocouple_L,
        Thermocouple_M
    };




};

#endif // THERMOCOUPLE_CALCULATOR_H
