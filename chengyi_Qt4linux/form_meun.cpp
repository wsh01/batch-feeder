#include "form_meun.h"
#include "ui_form_meun.h"
#include "form_warning.h"
#include <QMessageBox>
#include "form_parameter.h"
Form_Meun::Form_Meun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Meun)
{
    ui->setupUi(this);
    this->setFixedSize(800,500);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
//    bgpal.setColor (QPalette::Foreground, QColor (0,255,255,255));    //字体颜色
     setPalette (bgpal);


    this->setWindowFlags(Qt::FramelessWindowHint);//去除窗体边框

}

Form_Meun::~Form_Meun()
{
    delete ui;
}

void Form_Meun::on_btn_Warning_clicked()
{
    Form_warning  *form_warning = new Form_warning(this);
    form_warning->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_warning->setWindowTitle("自动设置");//窗口标题
    form_warning->setWindowFlags(Qt::Dialog);//style
    form_warning->setWindowOpacity(1.0);//透明度
    form_warning->show();//显示
}

void Form_Meun::on_btn_Parameter_clicked()
{
    QString dlgTitle=QString::fromLocal8Bit("确认对话框");
    QString strInfo=QString::fromLocal8Bit("确定吗？");
    QMessageBox box(QMessageBox::Question, dlgTitle,strInfo);
    box.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    box.setButtonText(QMessageBox::Ok, QString::fromLocal8Bit("确 定"));
    box.setButtonText(QMessageBox::Cancel, QString::fromLocal8Bit("取 消"));
    box.setStyleSheet("QLabel{"
                      "min-width: 150px;"
                      "min-height: 100px;"
                      "color:rgb(0,0, 255);"
                      "font-size: 20pt;"
                          "}");
    int button = box.exec();
    if (button == QMessageBox::Ok)
    {
        Form_parameter *form_parameter= new Form_parameter(this);
        form_parameter->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
        form_parameter->setWindowTitle("自动设置");//窗口标题
        form_parameter->setWindowFlags(Qt::Dialog);//style
        form_parameter->setWindowOpacity(1.0);//透明度
        form_parameter->show();//显示
    }

}
