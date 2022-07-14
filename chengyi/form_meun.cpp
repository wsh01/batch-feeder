#include "form_meun.h"
#include "ui_form_meun.h"

Form_Meun::Form_Meun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Meun)
{
    ui->setupUi(this);
 //   this->setFixedSize(480,272);//固定窗口大小
}

Form_Meun::~Form_Meun()
{
    delete ui;
}
