#include "form_meun.h"
#include "ui_form_meun.h"

Form_Meun::Form_Meun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Meun)
{
    ui->setupUi(this);
}

Form_Meun::~Form_Meun()
{
    delete ui;
}
