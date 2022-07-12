#include "form_auto.h"
#include "ui_form_auto.h"

Form_Auto::Form_Auto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Auto)
{
    ui->setupUi(this);
}

Form_Auto::~Form_Auto()
{
    delete ui;
}
