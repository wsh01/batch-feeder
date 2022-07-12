#include "form_maunal.h"
#include "ui_form_maunal.h"

Form_Maunal::Form_Maunal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Maunal)
{
    ui->setupUi(this);
}

Form_Maunal::~Form_Maunal()
{
    delete ui;
}
