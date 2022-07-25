#ifndef DATATIMESHOW_H
#define DATATIMESHOW_H

#include "QLabel"
#include <QTimer>

class DataTimeShow : public QLabel
{
    Q_OBJECT
private:
    QTimer *timer_calendar;//用来显示当前日期的定时器

public:
    explicit DataTimeShow(QWidget *parent = 0);

private slots:
    void showDateTime();
};

#endif // DATATIMESHOW_H
