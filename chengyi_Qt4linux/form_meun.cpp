#include "form_meun.h"
#include "ui_form_meun.h"
#include "form_warning.h"
#include <QMessageBox>
#include "form_parameter.h"
#include "form_standardization.h"
#include "form_timemodify.h"
#include "form_malfunction.h"


Form_Meun::Form_Meun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Meun)
{
    ui->setupUi(this);
    this->setFixedSize(800,480);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);
}

Form_Meun::~Form_Meun()
{
    delete ui;
}

void Form_Meun::on_btn_Warning_clicked()
{
    Form_warning  *form_warning = new Form_warning(this);
    form_warning->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_warning->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
    form_warning->setWindowOpacity(1.0);//透明度
    form_warning->show();//显示
}

void Form_Meun::on_btn_Parameter_clicked()
{
    QString dlgTitle=QString("确认对话框");
    QString strInfo=QString("确定吗？");
    QMessageBox box(QMessageBox::Question, dlgTitle,strInfo);
    box.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    box.setButtonText(QMessageBox::Ok, QString("确 定"));
    box.setButtonText(QMessageBox::Cancel, QString("取 消"));
    box.setStyleSheet("QLabel{"
                      "min-width: 150px;"
                      "min-height: 100px;"
                      "color:rgb(0,0, 255);"
                      "font-size: 20pt;"
                          "}");
    int button = box.exec();
    if (button == QMessageBox::Ok) //如果按确定，则进入下一个界面
    {
        Form_parameter *form_parameter= new Form_parameter(this);
        form_parameter->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
        form_parameter->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
        form_parameter->setWindowOpacity(1.0);//透明度
        form_parameter->show();//显示
    }

}


void Form_Meun::on_btn_standardization_clicked()
{
    QString dlgTitle=QString("确认对话框");
    QString strInfo=QString("确定吗？");
    QMessageBox box(QMessageBox::Question, dlgTitle,strInfo);
    box.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    box.setButtonText(QMessageBox::Ok, QString("确 定"));
    box.setButtonText(QMessageBox::Cancel, QString("取 消"));
    box.setStyleSheet("QLabel{"
                      "min-width: 150px;"
                      "min-height: 100px;"
                      "color:rgb(0,0, 255);"
                      "font-size: 20pt;"
                          "}");
    int button = box.exec();
    if (button == QMessageBox::Ok) //如果按确定，则进入下一个界面
    {
        Form_standardization *form_standardization= new Form_standardization(this);
        form_standardization->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
        form_standardization->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
        form_standardization->setWindowOpacity(1.0);//透明度
        form_standardization->show();//显示
    }
}

void Form_Meun::on_btn_timeModify_clicked()
{
    QString dlgTitle=QString("确认对话框");
    QString strInfo=QString("确定吗？");
    QMessageBox box(QMessageBox::Question, dlgTitle,strInfo);
    box.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    box.setButtonText(QMessageBox::Ok, QString("确 定"));
    box.setButtonText(QMessageBox::Cancel, QString("取 消"));
    box.setStyleSheet("QLabel{"
                      "min-width: 150px;"
                      "min-height: 100px;"
                      "color:rgb(0,0, 255);"
                      "font-size: 20pt;"
                          "}");
    int button = box.exec();
    if (button == QMessageBox::Ok) //如果按确定，则进入下一个界面
    {
        Form_timeModify *form_timeModify= new Form_timeModify(this);
        form_timeModify->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
        form_timeModify->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
        form_timeModify->setWindowOpacity(1.0);//透明度
        form_timeModify->show();//显示
    }
}

void Form_Meun::on_btn_malfunction_clicked()
{
    Form_malfunction *form_malfunction= new Form_malfunction(this);
    form_malfunction->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_malfunction->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
    form_malfunction->setWindowOpacity(1.0);//透明度
    form_malfunction->show();//显示
}
