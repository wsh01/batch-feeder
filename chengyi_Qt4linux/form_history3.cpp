#include "form_history3.h"
#include "ui_form_history3.h"
#include <QScrollBar>
Form_history3::Form_history3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_history3)
{
    ui->setupUi(this);

    model = new QSqlTableModel;//会自动绑定到默认连接的数据库
    model->setTable("history_add");//连接到特定表格
    model->select();//查询数据
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);//设置事物手动提交
    ui->tableView->setModel(model);//将模型与视图绑定
    //设置列宽自适应
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

    ui->tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);//表格右侧添加滚动条
    ui->tableView->verticalScrollBar()->setStyleSheet("width:20px;");//设置滚动条宽度
    //设置显示样式
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setStyleSheet("alternate-background-color:rgb(96,175,255);background:rgb(238,244,254);color: #6b6d7b;");


    this->setFixedSize(800,480);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
     setPalette (bgpal);

}

Form_history3::~Form_history3()
{
    delete ui;
    delete model;
}
