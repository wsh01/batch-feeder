#include "form_maunal.h"
#include "ui_form_maunal.h"

Form_Maunal::Form_Maunal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Maunal)
{
    ui->setupUi(this);
 //   this->setFixedSize(480,272);//固定窗口大小
}

Form_Maunal::~Form_Maunal()
{
    delete ui;
}
