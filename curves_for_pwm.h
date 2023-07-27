#ifndef CURVES_FOR_PWM_H
#define CURVES_FOR_PWM_H

#include <QMainWindow>

namespace Ui {
class curves_for_pwm;
}

class curves_for_pwm : public QMainWindow
{
    Q_OBJECT

public:
    explicit curves_for_pwm(QWidget *parent = nullptr);
    ~curves_for_pwm();

private slots:
    void on_pushButton_clicked();
    float Curves_k_init(uint8_t Type);
    uint16_t Curves_value(uint8_t Persent, uint8_t Type, float Curves_k);

    void on_lineEdit_CNT_textEdited(const QString &arg1);

private:
    Ui::curves_for_pwm *ui;

    enum{
        Curves_linear,
        Curves_logarithmic,
        Curves_exponential
    };



};

#endif // CURVES_FOR_PWM_H
