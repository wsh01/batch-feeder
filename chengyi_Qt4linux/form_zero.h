#ifndef FORM_ZERO_H
#define FORM_ZERO_H

#include <QWidget>

namespace Ui {
class Form_zero;
}

class Form_zero : public QWidget
{
    Q_OBJECT

public:
    explicit Form_zero(QWidget *parent = 0);
    ~Form_zero();

private:
    Ui::Form_zero *ui;
};

#endif // FORM_ZERO_H
