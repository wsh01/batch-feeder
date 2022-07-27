#ifndef FORM_TIMEMODIFY_H
#define FORM_TIMEMODIFY_H

#include <QWidget>

namespace Ui {
class Form_timeModify;
}

class Form_timeModify : public QWidget
{
    Q_OBJECT

public:
    explicit Form_timeModify(QWidget *parent = 0);
    ~Form_timeModify();

private:
    Ui::Form_timeModify *ui;
};

#endif // FORM_TIMEMODIFY_H
