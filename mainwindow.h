#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <calc_line_2_points.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    calc_line_2_points calc_line_2_points;

private slots:
    void on_action_triggered();
    void on_action_2_triggered();

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

};
#endif // MAINWINDOW_H
