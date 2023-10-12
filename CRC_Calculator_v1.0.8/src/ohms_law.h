#ifndef OHMS_LAW_H
#define OHMS_LAW_H

#include <QMainWindow>

namespace Ui {
class Ohms_law;
}

class Ohms_law : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ohms_law(QWidget *parent = nullptr);
    ~Ohms_law();

private slots:
    void on_lineEdit_U1_textEdited(const QString &arg1);

    void on_lineEdit_R1_textEdited(const QString &arg1);

    void on_lineEdit_U2_textEdited(const QString &arg1);

    void on_lineEdit_I2_textEdited(const QString &arg1);

    void on_lineEdit_I3_textEdited(const QString &arg1);

    void on_lineEdit_R3_textEdited(const QString &arg1);

private:
    Ui::Ohms_law *ui;
};

#endif // OHMS_LAW_H
