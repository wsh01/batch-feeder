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

private:
    Ui::Form_maunalText *ui;
};

#endif // FORM_MAUNALTEXT_H
