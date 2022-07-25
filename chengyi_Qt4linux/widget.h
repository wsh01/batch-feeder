#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QTime>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QTimer *fTimer;       //辅助计时器的定时器
    QTime   fTimeCounter;//计时器

    void Time_init();
    void DataTime_init();

public slots:
    void showTime();

private slots:
    void on_btn_Start_clicked();
    void on_btn_Stop_clicked();
    void on_btn_Meun_clicked();
    void on_btn_History_clicked();
    void on_btn_ManualSet_clicked();
    void on_btn_AutoSet_clicked();
    void on_btn_Add_clicked();
    void on_btn_Auto_clicked();

};

#endif // WIDGET_H
