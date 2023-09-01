#ifndef PWM_HZ_H
#define PWM_HZ_H

#include <QMainWindow>

namespace Ui {
class PWM_HZ;
}

class PWM_HZ : public QMainWindow
{
    Q_OBJECT

public:
    explicit PWM_HZ(QWidget *parent = nullptr);
    ~PWM_HZ();

private slots:
    void on_LineEdit_TImerClock_textEdited(const QString &arg1);

    void on_LineEdit_Prescaler_textEdited(const QString &arg1);

    void on_lineEdit_CounterPeriod_textEdited(const QString &arg1);

    void frequency_calculate(void);

private:
    Ui::PWM_HZ *ui;
};

#endif // PWM_HZ_H
