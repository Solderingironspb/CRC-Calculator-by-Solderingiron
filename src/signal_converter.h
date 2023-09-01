#ifndef SIGNAL_CONVERTER_H
#define SIGNAL_CONVERTER_H

#include <QMainWindow>

namespace Ui {
class signal_converter;
}

class signal_converter : public QMainWindow
{
    Q_OBJECT

public:
    explicit signal_converter(QWidget *parent = nullptr);
    ~signal_converter();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::signal_converter *ui;
};

#endif // SIGNAL_CONVERTER_H
