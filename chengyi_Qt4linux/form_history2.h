#ifndef FORM_HISTORY2_H
#define FORM_HISTORY2_H

#include <QWidget>

namespace Ui {
class Form_history2;
}

class Form_history2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form_history2(QWidget *parent = 0);
    ~Form_history2();

private:
    Ui::Form_history2 *ui;
};

#endif // FORM_HISTORY2_H
