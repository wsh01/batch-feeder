#include "form_history.h"
#include "ui_form_history.h"

Form_History::Form_History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_History)
{
    ui->setupUi(this);
}

Form_History::~Form_History()
{
    delete ui;
}
