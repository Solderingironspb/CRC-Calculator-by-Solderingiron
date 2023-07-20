#ifndef CALC_LINE_2_POINTS_H
#define CALC_LINE_2_POINTS_H

#include <QMainWindow>
#include <QKeyEvent>

namespace Ui {
class calc_line_2_points;
}

class calc_line_2_points : public QMainWindow
{
    Q_OBJECT

public:
    explicit calc_line_2_points(QWidget *parent = nullptr);
    ~calc_line_2_points();

private slots:
    void on_pushButton_clicked();
    void float_check(bool* status, QString Text); //проверка правильности ввода данных

protected:
    void keyPressEvent(QKeyEvent *e) override;

private:
    Ui::calc_line_2_points *ui;
};

#endif // CALC_LINE_2_POINTS_H
