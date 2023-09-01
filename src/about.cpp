#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    //ui->textBrowser->setSource(QUrl("../help/index.html"));
}

About::~About()
{
    delete ui;
}
