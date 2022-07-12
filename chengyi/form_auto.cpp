#include "form_auto.h"
#include "ui_form_auto.h"

Form_Auto::Form_Auto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Auto)
{
    ui->setupUi(this);
    this->setFixedSize(480,272);//固定窗口大小
}

Form_Auto::~Form_Auto()
{
    delete ui;
}
