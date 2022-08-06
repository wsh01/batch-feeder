#ifndef FORM_MAUNALTEXT_H
#define FORM_MAUNALTEXT_H

#include <QWidget>

namespace Ui {
class Form_maunalText;
}

class Form_maunalText : public QWidget
{
    Q_OBJECT

public:
    explicit Form_maunalText(QWidget *parent = 0);
    ~Form_maunalText();

private slots:
    void on_btn_fan_pressed();

    void on_btn_fan_released();

private:
    Ui::Form_maunalText *ui;
};

#endif // FORM_MAUNALTEXT_H
