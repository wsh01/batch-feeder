#ifndef FORM_MAUNAL_H
#define FORM_MAUNAL_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Form_Maunal;
}

class Form_Maunal : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Maunal(QWidget *parent = 0);
    ~Form_Maunal();

private:
    Ui::Form_Maunal *ui;
    QTimer *timer_calendar;//用来显示当前日期的定时器

public slots:
    void showDateTime();
};

#endif // FORM_MAUNAL_H
