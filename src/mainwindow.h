#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calc_line_2_points.h"
#include "hex_to_float_double.h"
#include "rtd_calculator_resistance_to_temperature.h"
#include "thermocouple_calculator.h"
#include "signal_converter.h"
#include "curves_for_pwm.h"
#include "pwm_hz.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_action_triggered();
    void on_action_2_triggered();
    void on_action_3_triggered();
    void on_action_RTD_Calculator_triggered();
    void on_action_Thermocouple_Calculator_triggered();
    void on_action_Signal_Converter_triggered();
    void on_action_Curves_for_PWM_triggered();
    void on_action_TIMx_Calculator_triggered();

    void on_pushButton_clicked();

    void on_radioButton_CRC8_clicked();

    void on_radioButton_CRC16_clicked();

    void on_radioButton_3_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_radioButton_Predefined_clicked();

    void Check_preset(QString Text_defined_preset);

    void on_radioButton_Custom_clicked();



private:
    Ui::MainWindow *ui;
    calc_line_2_points m_calc_line_2_points;
    hex_to_float_double m_hex_to_float_double;
    RTD_Calculator_Resistance_to_Temperature RTD_calculator;
    thermocouple_calculator THERMOCOUPLE_calculator;
    signal_converter SIGNAL_converter;
    curves_for_pwm CURVES_for_pwm;
    PWM_HZ STM32PWM;

};
#endif // MAINWINDOW_H
