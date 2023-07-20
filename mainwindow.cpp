#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "CRC_Software_calculation.h"
#include "about.h"

uint8_t CRC_Arr[1024] = {0,};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->action->setEnabled(1);
    /*Настройки по-умолчанию*/
    ui->radioButton_CRC8->click();
    ui->radioButton_Predefined->click();



}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_action_triggered(){
    About about_window;
    about_window.setModal(true);
    about_window.setWindowFlags(Qt::Dialog| Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint | Qt::WindowSystemMenuHint); //Кнопки на окне(Свернуть, большое окно и закрыть.)
    about_window.exec();
}

void MainWindow::on_action_2_triggered(){

    calc_line_2_points.show();

}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox msgBox;
    bool bStatus;
    QString TextBuffer = ui->textEdit->toPlainText(); //Забрать текст
    TextBuffer.replace(" ", ""); //Удалить все пробелы в тексте
    QStringList Arr = TextBuffer.split(','); //Разбить буффер на части, разделитель ","
    uint32_t size = Arr.size();

    for (uint32_t i = 0; i<size; i++){
        CRC_Arr[i] = Arr[i].toUInt(&bStatus,16); //Преобразуем текст в HEX и занесем все в массив
        if (!bStatus){
            QMessageBox::warning(this, tr("Ошибка!"), tr("Проверьте правильность ввода данных"));
        }
    }

    ui->lineEdit->setText(QString::number(size));


    if (ui->radioButton_CRC8->isChecked()){
        bool CRC_status_hex_convert = false;
        uint8_t CRC8_Initial_Value = ui->lineEdit_Initial_value->text().toUInt(&CRC_status_hex_convert, 16);
        uint8_t CRC8_Polynomial = ui->lineEdit_Polynomial->text().toUInt(&CRC_status_hex_convert, 16);
        uint8_t CRC8_Final_XOR_value = ui->lineEdit_Final_XOR_value->text().toUInt(&CRC_status_hex_convert, 16);
        bool CRC8_Input_Reflected = false;
        if (ui->checkBox_Input_Reflected->isChecked()){
            CRC8_Input_Reflected = true;
        }else{
            CRC8_Input_Reflected = false;
        }

        bool CRC8_Result_Reflected = false;
        if (ui->checkBox_Result_Reflected->isChecked()){
            CRC8_Result_Reflected = true;
        } else{
            CRC8_Result_Reflected = false;
        }

        uint8_t CRC8_Calculated = CRC8_Bytes_Calculate_software(CRC_Arr, size, CRC8_Initial_Value, CRC8_Polynomial, CRC8_Input_Reflected, CRC8_Result_Reflected, CRC8_Final_XOR_value);
        ui->lineEdit_CRC->setText("0x" + QString::number(CRC8_Calculated,16).toUpper());
        ui->statusbar->showMessage("СRC8 calculated");

    } else if (ui->radioButton_CRC16->isChecked()){
        bool CRC_status_hex_convert = false;
        uint16_t CRC16_Initial_Value = ui->lineEdit_Initial_value->text().toUInt(&CRC_status_hex_convert, 16);
        uint16_t CRC16_Polynomial = ui->lineEdit_Polynomial->text().toUInt(&CRC_status_hex_convert, 16);
        uint16_t CRC16_Final_XOR_value = ui->lineEdit_Final_XOR_value->text().toUInt(&CRC_status_hex_convert, 16);
        bool CRC16_Input_Reflected = false;
        if (ui->checkBox_Input_Reflected->isChecked()){
            CRC16_Input_Reflected = true;
        }else{
            CRC16_Input_Reflected = false;
        }

        bool CRC16_Result_Reflected = false;
        if (ui->checkBox_Result_Reflected->isChecked()){
            CRC16_Result_Reflected = true;
        } else{
            CRC16_Result_Reflected = false;
        }

        uint16_t CRC16_Calculated = CRC16_Bytes_Calculate_software(CRC_Arr, size, CRC16_Initial_Value, CRC16_Polynomial, CRC16_Input_Reflected, CRC16_Result_Reflected, CRC16_Final_XOR_value);
        ui->lineEdit_CRC->setText("0x" + QString::number(CRC16_Calculated,16).toUpper());
        ui->statusbar->showMessage("СRC16 calculated");


    } else if (ui->radioButton_3->isChecked()){
        bool CRC_status_hex_convert = false;
        uint32_t CRC32_Initial_Value = ui->lineEdit_Initial_value->text().toULong(&CRC_status_hex_convert, 16);
        uint32_t CRC32_Polynomial = ui->lineEdit_Polynomial->text().toULong(&CRC_status_hex_convert, 16);
        uint32_t CRC32_Final_XOR_value = ui->lineEdit_Final_XOR_value->text().toULong(&CRC_status_hex_convert, 16);
        bool CRC32_Input_Reflected = false;
        if (ui->checkBox_Input_Reflected->isChecked()){
            CRC32_Input_Reflected = true;
        }else{
            CRC32_Input_Reflected = false;
        }

        bool CRC32_Result_Reflected = false;
        if (ui->checkBox_Result_Reflected->isChecked()){
            CRC32_Result_Reflected = true;
        } else{
            CRC32_Result_Reflected = false;
        }

        uint32_t CRC32_Calculated = CRC32_Bytes_Calculate_software(CRC_Arr, size, CRC32_Initial_Value, CRC32_Polynomial, CRC32_Input_Reflected, CRC32_Result_Reflected, CRC32_Final_XOR_value);
        ui->lineEdit_CRC->setText("0x" + QString::number(CRC32_Calculated,16).toUpper());
        ui->statusbar->showMessage("СRC32 calculated");

    }







}




void MainWindow::on_radioButton_CRC8_clicked()
{  /* CRC8:                InitVal 0x00, Polynome 0x07, RefIn false, Refout false, XorOut 0x00;
    * CRC8_SAE_J1850:      InitVal 0xFF, Polynome 0x1D, RefIn false, Refout false, XorOut 0xFF;
    * CRC8_SAE_J1850_ZERO: InitVal 0x00, Polynome 0x1D, RefIn false, Refout false, XorOut 0x00;
    * CRC8_8H2F:           InitVal 0xFF, Polynome 0x2F, RefIn false, Refout false, XorOut 0xFF;
    * CRC8_CDMA2000:       InitVal 0xFF, Polynome 0x9B, RefIn false, Refout false, XorOut 0x00;
    * CRC8_DARC:           InitVal 0x00, Polynome 0x39, RefIn true,  Refout true,  XorOut 0x00;
    * CRC8_DVB_S2:         InitVal 0x00, Polynome 0xD5, RefIn false, Refout false, XorOut 0x00;
    * CRC8_EBU:            InitVal 0xFF, Polynome 0x1D, RefIn true,  Refout true , XorOut 0x00;
    * CRC8_ICODE:          InitVal 0xFD, Polynome 0x1D, RefIn false, Refout false, XorOut 0x00;
    * CRC8_ITU:            InitVal 0x00, Polynome 0x07, RefIn false, Refout false, XorOut 0x55;
    * CRC8_MAXIM:          InitVal 0x00, Polynome 0x31, RefIn true,  Refout true , XorOut 0x00;
    * CRC8_ROHC:           InitVal 0xFF, Polynome 0x07, RefIn true,  Refout true , XorOut 0x00;
    * CRC8_WCDMA:          InitVal 0x00, Polynome 0x9B, RefIn true,  Refout true , XorOut 0x00;*/
    ui->comboBox->clear();
    ui->comboBox->addItem("CRC8");
    ui->comboBox->addItem("CRC8_SAE_J1850");
    ui->comboBox->addItem("CRC8_SAE_J1850_ZERO");
    ui->comboBox->addItem("CRC8_8H2F");
    ui->comboBox->addItem("CRC8_CDMA2000");
    ui->comboBox->addItem("CRC8_DARC");
    ui->comboBox->addItem("CRC8_DVB_S2");
    ui->comboBox->addItem("CRC8_EBU");
    ui->comboBox->addItem("CRC8_ICODE");
    ui->comboBox->addItem("CRC8_ITU");
    ui->comboBox->addItem("CRC8_MAXIM");
    ui->comboBox->addItem("CRC8_ROHC");
    ui->comboBox->addItem("CRC8_WCDMA");


}


void MainWindow::on_radioButton_CRC16_clicked()
{
    /* CRC16_CCIT_ZERO:     InitVal 0x0000, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_ARC:           InitVal 0x0000, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0x0000;
    * CRC16_AUG_CCITT:     InitVal 0x1D0F, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_BUYPASS:       InitVal 0x0000, Polynome 0x8005, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_CCITT_FALSE:   InitVal 0xFFFF, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_CDMA2000:      InitVal 0xFFFF, Polynome 0xC867, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_DDS_110:       InitVal 0x800D, Polynome 0x8005, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_DECT_R:        InitVal 0x0000, Polynome 0x0589, RefIn false, Refout false, XorOut 0x0001;
    * CRC16_DECT_X:        InitVal 0x0000, Polynome 0x0589, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_DNP:           InitVal 0x0000, Polynome 0x3D65, RefIn true,  Refout true,  XorOut 0xFFFF;
    * CRC16_EN_13757:      InitVal 0x0000, Polynome 0x3D65, RefIn false, Refout false, XorOut 0xFFFF;
    * CRC16_GENIBUS:       InitVal 0xFFFF, Polynome 0x1021, RefIn false, Refout false, XorOut 0xFFFF;
    * CRC16_MAXIM:         InitVal 0x0000, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0xFFFF;
    * CRC16_MCRF4XX:       InitVal 0xFFFF, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
    * CRC16_RIELLO:        InitVal 0xB2AA, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
    * CRC16_T10_DIF:       InitVal 0x0000, Polynome 0x8BB7, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_TELEDISK:      InitVal 0x0000, Polynome 0xA097, RefIn false, Refout false, XorOut 0x0000;
    * CRC16_TMS37157:      InitVal 0x89EC, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
    * CRC16_USB:           InitVal 0xFFFF, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0xFFFF;
    * CRC16_A:             InitVal 0xC6C6, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
    * CRC16_KERMIT:        InitVal 0x0000, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
    * CRC16_MODBUS:        InitVal 0xFFFF, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0x0000;
    * CRC16_X_25:          InitVal 0xFFFF, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0xFFFF;
    * CRC16_XMODEM:        InitVal 0x0000, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
    */
    ui->comboBox->clear();
    ui->comboBox->addItem("CRC16_CCIT_ZERO");
    ui->comboBox->addItem("CRC16_ARC");
    ui->comboBox->addItem("CRC16_AUG_CCITT");
    ui->comboBox->addItem("CRC16_BUYPASS");
    ui->comboBox->addItem("CRC16_CCITT_FALSE");
    ui->comboBox->addItem("CRC16_CDMA2000");
    ui->comboBox->addItem("CRC16_DDS_110");
    ui->comboBox->addItem("CRC16_DECT_R");
    ui->comboBox->addItem("CRC16_DECT_X");
    ui->comboBox->addItem("CRC16_DNP");
    ui->comboBox->addItem("CRC16_EN_13757");
    ui->comboBox->addItem("CRC16_GENIBUS");
    ui->comboBox->addItem("CRC16_MAXIM");
    ui->comboBox->addItem("CRC16_MCRF4XX");
    ui->comboBox->addItem("CRC16_RIELLO");
    ui->comboBox->addItem("CRC16_T10_DIF");
    ui->comboBox->addItem("CRC16_TELEDISK");
    ui->comboBox->addItem("CRC16_TMS37157");
    ui->comboBox->addItem("CRC16_USB");
    ui->comboBox->addItem("CRC16_A");
    ui->comboBox->addItem("CRC16_KERMIT");
    ui->comboBox->addItem("CRC16_MODBUS");
    ui->comboBox->addItem("CRC16_X_25");
    ui->comboBox->addItem("CRC16_XMODEM");


}


void MainWindow::on_radioButton_3_clicked()
{
    /* CRC32:               InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
    * CRC32_BZIP2:         InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0xFFFFFFFF;
    * CRC32_C:             InitVal 0xFFFFFFFF, Polynome 0x1EDC6F41, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
    * CRC32_D:             InitVal 0xFFFFFFFF, Polynome 0xA833982B, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
    * CRC32_MPEG2:         InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0x00000000;
    * CRC32_POSIX:         InitVal 0x00000000, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0xFFFFFFFF;
    * CRC32_Q:             InitVal 0x00000000, Polynome 0x814141AB, RefIn false, Refout false, XorOut 0x00000000;
    * CRC32_JAMCRC:        InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn true,  Refout true,  XorOut 0x00000000;
    * CRC32_XFER:          InitVal 0x00000000, Polynome 0x000000AF, RefIn false, Refout false, XorOut 0x00000000;
    */
    ui->comboBox->clear();
    ui->comboBox->addItem("CRC32");
    ui->comboBox->addItem("CRC32_BZIP2");
    ui->comboBox->addItem("CRC32_C");
    ui->comboBox->addItem("CRC32_D");
    ui->comboBox->addItem("CRC32_MPEG2");
    ui->comboBox->addItem("CRC32_POSIX");
    ui->comboBox->addItem("CRC32_Q");
    ui->comboBox->addItem("CRC32_JAMCRC");
    ui->comboBox->addItem("CRC32_XFER");
}

void MainWindow::Check_preset(QString Text_defined_preset){

    ui->lineEdit_Polynomial->setText("");
    ui->lineEdit_Initial_value->setText("");
    ui->lineEdit_Final_XOR_value->setText("");
    ui->checkBox_Input_Reflected->setChecked(false);
    ui->checkBox_Result_Reflected->setChecked(false);

    if (ui->radioButton_CRC8->isChecked()){

        if (Text_defined_preset == "CRC8"){
            //CRC8:                InitVal 0x00, Polynome 0x07, RefIn false, Refout false, XorOut 0x00;
            ui->lineEdit_Polynomial->setText("0x07");
            ui->lineEdit_Initial_value->setText("0x00");
            ui->lineEdit_Final_XOR_value->setText("0x00");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
        } else if (Text_defined_preset == "CRC8_SAE_J1850"){
            //CRC8_SAE_J1850:      InitVal 0xFF, Polynome 0x1D, RefIn false, Refout false, XorOut 0xFF;
            ui->lineEdit_Polynomial->setText("0x1D");
            ui->lineEdit_Initial_value->setText("0xFF");
            ui->lineEdit_Final_XOR_value->setText("0xFF");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
        } else if (Text_defined_preset == "CRC8_SAE_J1850_ZERO"){
            //CRC8_SAE_J1850_ZERO: InitVal 0x00, Polynome 0x1D, RefIn false, Refout false, XorOut 0x00;
            ui->lineEdit_Polynomial->setText("0x1D");
            ui->lineEdit_Initial_value->setText("0x00");
            ui->lineEdit_Final_XOR_value->setText("0x00");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
        } else if (Text_defined_preset == "CRC8_8H2F"){
            //CRC8_8H2F:           InitVal 0xFF, Polynome 0x2F, RefIn false, Refout false, XorOut 0xFF;
            ui->lineEdit_Polynomial->setText("0x2F");
            ui->lineEdit_Initial_value->setText("0xFF");
            ui->lineEdit_Final_XOR_value->setText("0xFF");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
        } else if (Text_defined_preset == "CRC8_CDMA2000"){
            //CRC8_CDMA2000:       InitVal 0xFF, Polynome 0x9B, RefIn false, Refout false, XorOut 0x00;
            ui->lineEdit_Polynomial->setText("0x9B");
            ui->lineEdit_Initial_value->setText("0xFF");
            ui->lineEdit_Final_XOR_value->setText("0x00");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
        } else if (Text_defined_preset == "CRC8_DARC"){
            //CRC8_DARC:           InitVal 0x00, Polynome 0x39, RefIn true,  Refout true,  XorOut 0x00;
            ui->lineEdit_Initial_value->setText("0x00");
            ui->lineEdit_Polynomial->setText("0x39");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x00");
        } else if (Text_defined_preset == "CRC8_DVB_S2"){
            //CRC8_DVB_S2:         InitVal 0x00, Polynome 0xD5, RefIn false, Refout false, XorOut 0x00;
            ui->lineEdit_Initial_value->setText("0x00");
            ui->lineEdit_Polynomial->setText("0xD5");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x00");
        } else if (Text_defined_preset == "CRC8_EBU"){
            //CRC8_EBU:            InitVal 0xFF, Polynome 0x1D, RefIn true,  Refout true , XorOut 0x00;
            ui->lineEdit_Initial_value->setText("0xFF");
            ui->lineEdit_Polynomial->setText("0x1D");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x00");
        } else if (Text_defined_preset == "CRC8_ICODE"){
            //CRC8_ICODE:          InitVal 0xFD, Polynome 0x1D, RefIn false, Refout false, XorOut 0x00;
            ui->lineEdit_Initial_value->setText("0xFD");
            ui->lineEdit_Polynomial->setText("0x1D");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x00");
        } else if (Text_defined_preset == "CRC8_ITU"){
            //CRC8_ITU:            InitVal 0x00, Polynome 0x07, RefIn false, Refout false, XorOut 0x55;
            ui->lineEdit_Initial_value->setText("0x00");
            ui->lineEdit_Polynomial->setText("0x07");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x55");
        } else if (Text_defined_preset == "CRC8_MAXIM"){
            //CRC8_MAXIM:          InitVal 0x00, Polynome 0x31, RefIn true,  Refout true , XorOut 0x00;
            ui->lineEdit_Initial_value->setText("0x00");
            ui->lineEdit_Polynomial->setText("0x31");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x00");
        } else if (Text_defined_preset == "CRC8_ROHC"){
            //CRC8_ROHC:           InitVal 0xFF, Polynome 0x07, RefIn true,  Refout true , XorOut 0x00;
            ui->lineEdit_Initial_value->setText("0xFF");
            ui->lineEdit_Polynomial->setText("0x07");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x00");
        } else if (Text_defined_preset == "CRC8_WCDMA"){
            //CRC8_WCDMA:          InitVal 0x00, Polynome 0x9B, RefIn true,  Refout true , XorOut 0x00;*/
            ui->lineEdit_Initial_value->setText("0x00");
            ui->lineEdit_Polynomial->setText("0x9B");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x00");
        }



    } else if (ui->radioButton_CRC16->isChecked()){
        if (Text_defined_preset == "CRC16_CCIT_ZERO"){
            //CRC16_CCIT_ZERO:     InitVal 0x0000, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_ARC"){
            //CRC16_ARC:           InitVal 0x0000, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x8005");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_AUG_CCITT"){
            //CRC16_AUG_CCITT:     InitVal 0x1D0F, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x1D0F");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_BUYPASS"){
            //CRC16_BUYPASS:       InitVal 0x0000, Polynome 0x8005, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x8005");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_CCITT_FALSE"){
            //CRC16_CCITT_FALSE:   InitVal 0xFFFF, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0xFFFF");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_CDMA2000"){
            //CRC16_CDMA2000:      InitVal 0xFFFF, Polynome 0xC867, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0xFFFF");
            ui->lineEdit_Polynomial->setText("0xC867");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_DDS_110"){
            //CRC16_DDS_110:       InitVal 0x800D, Polynome 0x8005, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x800D");
            ui->lineEdit_Polynomial->setText("0x8005");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_DECT_R"){
            //CRC16_DECT_R:        InitVal 0x0000, Polynome 0x0589, RefIn false, Refout false, XorOut 0x0001;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x0589");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0001");
        } else if (Text_defined_preset == "CRC16_DECT_X"){
            //CRC16_DECT_X:        InitVal 0x0000, Polynome 0x0589, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x0589");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_DNP"){
            //CRC16_DNP:           InitVal 0x0000, Polynome 0x3D65, RefIn true,  Refout true,  XorOut 0xFFFF;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x3D65");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0xFFFF");
        } else if (Text_defined_preset == "CRC16_EN_13757"){
            //CRC16_EN_13757:      InitVal 0x0000, Polynome 0x3D65, RefIn false, Refout false, XorOut 0xFFFF;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x3D65");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0xFFFF");
        } else if (Text_defined_preset == "CRC16_GENIBUS"){
            //CRC16_GENIBUS:       InitVal 0xFFFF, Polynome 0x1021, RefIn false, Refout false, XorOut 0xFFFF;
            ui->lineEdit_Initial_value->setText("0xFFFF");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0xFFFF");
        } else if (Text_defined_preset == "CRC16_MAXIM"){
            //CRC16_MAXIM:         InitVal 0x0000, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0xFFFF;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x8005");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0xFFFF");
        } else if (Text_defined_preset == "CRC16_MCRF4XX"){
            //CRC16_MCRF4XX:       InitVal 0xFFFF, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0xFFFF");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_RIELLO"){
            //CRC16_RIELLO:        InitVal 0xB2AA, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0xB2AA");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_T10_DIF"){
            //CRC16_T10_DIF:       InitVal 0x0000, Polynome 0x8BB7, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x8BB7");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_TELEDISK"){
            //CRC16_TELEDISK:      InitVal 0x0000, Polynome 0xA097, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0xA097");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_TMS37157"){
            //CRC16_TMS37157:      InitVal 0x89EC, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x89EC");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_USB"){
            //CRC16_USB:           InitVal 0xFFFF, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0xFFFF;
            ui->lineEdit_Initial_value->setText("0xFFFF");
            ui->lineEdit_Polynomial->setText("0x8005");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0xFFFF");
        } else if (Text_defined_preset == "CRC16_A"){
            //CRC16_A:             InitVal 0xC6C6, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0xC6C6");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_KERMIT"){
            //CRC16_KERMIT:        InitVal 0x0000, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_MODBUS"){
            //CRC16_MODBUS:        InitVal 0xFFFF, Polynome 0x8005, RefIn true,  Refout true,  XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0xFFFF");
            ui->lineEdit_Polynomial->setText("0x8005");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        } else if (Text_defined_preset == "CRC16_X_25"){
            //CRC16_X_25:          InitVal 0xFFFF, Polynome 0x1021, RefIn true,  Refout true,  XorOut 0xFFFF;
            ui->lineEdit_Initial_value->setText("0xFFFF");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0xFFFF");
        } else if (Text_defined_preset == "CRC16_XMODEM"){
            //CRC16_XMODEM:        InitVal 0x0000, Polynome 0x1021, RefIn false, Refout false, XorOut 0x0000;
            ui->lineEdit_Initial_value->setText("0x0000");
            ui->lineEdit_Polynomial->setText("0x1021");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x0000");
        }




    }  else if (ui->radioButton_3->isChecked()){
        if (Text_defined_preset == "CRC32"){
            //CRC32:               InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
            ui->lineEdit_Initial_value->setText("0xFFFFFFFF");
            ui->lineEdit_Polynomial->setText("0x04C11DB7");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0xFFFFFFFF");
        } else if (Text_defined_preset == "CRC32_BZIP2"){
            //CRC32_BZIP2:         InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0xFFFFFFFF;
            ui->lineEdit_Initial_value->setText("0xFFFFFFFF");
            ui->lineEdit_Polynomial->setText("0x04C11DB7");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0xFFFFFFFF");
        } else if (Text_defined_preset == "CRC32_C"){
            //CRC32_C:             InitVal 0xFFFFFFFF, Polynome 0x1EDC6F41, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
            ui->lineEdit_Initial_value->setText("0xFFFFFFFF");
            ui->lineEdit_Polynomial->setText("0x1EDC6F41");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0xFFFFFFFF");
        } else if (Text_defined_preset == "CRC32_D"){
            //CRC32_D:             InitVal 0xFFFFFFFF, Polynome 0xA833982B, RefIn true,  Refout true,  XorOut 0xFFFFFFFF;
            ui->lineEdit_Initial_value->setText("0xFFFFFFFF");
            ui->lineEdit_Polynomial->setText("0xA833982B");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0xFFFFFFFF");
        } else if (Text_defined_preset == "CRC32_MPEG2"){
            //CRC32_MPEG2:         InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0x00000000;
            ui->lineEdit_Initial_value->setText("0xFFFFFFFF");
            ui->lineEdit_Polynomial->setText("0x04C11DB7");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x00000000");
        } else if (Text_defined_preset == "CRC32_POSIX"){
            //CRC32_POSIX:         InitVal 0x00000000, Polynome 0x04C11DB7, RefIn false, Refout false, XorOut 0xFFFFFFFF;
            ui->lineEdit_Initial_value->setText("0x00000000");
            ui->lineEdit_Polynomial->setText("0x04C11DB7");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0xFFFFFFFF");
        } else if (Text_defined_preset == "CRC32_Q"){
            //CRC32_Q:             InitVal 0x00000000, Polynome 0x814141AB, RefIn false, Refout false, XorOut 0x00000000;
            ui->lineEdit_Initial_value->setText("0x00000000");
            ui->lineEdit_Polynomial->setText("0x814141AB");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x00000000");
        } else if (Text_defined_preset == "CRC32_JAMCRC"){
            //CRC32_JAMCRC:        InitVal 0xFFFFFFFF, Polynome 0x04C11DB7, RefIn true,  Refout true,  XorOut 0x00000000;
            ui->lineEdit_Initial_value->setText("0xFFFFFFFF");
            ui->lineEdit_Polynomial->setText("0x04C11DB7");
            ui->checkBox_Input_Reflected->setChecked(true);
            ui->checkBox_Result_Reflected->setChecked(true);
            ui->lineEdit_Final_XOR_value->setText("0x00000000");
        } else if (Text_defined_preset == "CRC32_XFER"){
            //CRC32_XFER:          InitVal 0x00000000, Polynome 0x000000AF, RefIn false, Refout false, XorOut 0x00000000;
            ui->lineEdit_Initial_value->setText("0x00000000");
            ui->lineEdit_Polynomial->setText("0x000000AF");
            ui->checkBox_Input_Reflected->setChecked(false);
            ui->checkBox_Result_Reflected->setChecked(false);
            ui->lineEdit_Final_XOR_value->setText("0x00000000");
        }
    }
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    if (ui->radioButton_Predefined->isChecked()){
        Check_preset(arg1);






    }


}


void MainWindow::on_radioButton_Predefined_clicked()
{
    Check_preset(ui->comboBox->currentText());
    ui->checkBox_Input_Reflected->setEnabled(false);
    ui->checkBox_Result_Reflected->setEnabled(false);
    ui->lineEdit_Initial_value->setEnabled(false);
    ui->lineEdit_Polynomial->setEnabled(false);
    ui->lineEdit_Final_XOR_value->setEnabled(false);
}


void MainWindow::on_radioButton_Custom_clicked()
{
    ui->checkBox_Input_Reflected->setEnabled(true);
    ui->checkBox_Result_Reflected->setEnabled(true);
    ui->lineEdit_Initial_value->setEnabled(true);
    ui->lineEdit_Polynomial->setEnabled(true);
    ui->lineEdit_Final_XOR_value->setEnabled(true);
}

