#ifndef HEX_TO_FLOAT_DOUBLE_H
#define HEX_TO_FLOAT_DOUBLE_H

#include <QMainWindow>

namespace Ui {
class hex_to_float_double;
}

class hex_to_float_double : public QMainWindow
{
    Q_OBJECT

public:
    explicit hex_to_float_double(QWidget *parent = nullptr);
    ~hex_to_float_double();

private slots:
    void on_pushButton_convert_to_float_clicked();

    void on_pushButton_convert_to_hex_f_clicked();

    void on_pushButton_convert_to_double_clicked();

    void on_pushButton_Convert_to_hex_d_clicked();

private:
    Ui::hex_to_float_double *ui;
};

#endif // HEX_TO_FLOAT_DOUBLE_H
