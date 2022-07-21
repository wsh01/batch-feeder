#ifndef FORM_WARNING_H
#define FORM_WARNING_H

#include <QWidget>

namespace Ui {
class Form_warning;
}

class Form_warning : public QWidget
{
    Q_OBJECT

public:
    explicit Form_warning(QWidget *parent = 0);
    ~Form_warning();

private:
    Ui::Form_warning *ui;
};

#endif // FORM_WARNING_H
