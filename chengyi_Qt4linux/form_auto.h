#ifndef FORM_AUTO_H
#define FORM_AUTO_H

#include <QWidget>
#include <QTimer>
#include <QTime>

namespace Ui {
class Form_Auto;
}

class Form_Auto : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Auto(QWidget *parent = 0);
    ~Form_Auto();

private:
    Ui::Form_Auto *ui;
    QTimer *timer_calendar;   //用来显示当前日期的定时器

private slots:
    void showDateTime();
};

#endif // FORM_AUTO_H
