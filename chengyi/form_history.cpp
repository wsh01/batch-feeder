#include "form_history.h"
#include "ui_form_history.h"

Form_History::Form_History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_History)
{
    ui->setupUi(this);
// this->setFixedSize(480,272);//固定窗口大小
}

Form_History::~Form_History()
{
    delete ui;
}
