#ifndef FORM_HISTORY_H
#define FORM_HISTORY_H

#include <QWidget>

namespace Ui {
class Form_History;
}

class Form_History : public QWidget
{
    Q_OBJECT

public:
    explicit Form_History(QWidget *parent = 0);
    ~Form_History();

private:
    Ui::Form_History *ui;
};

#endif // FORM_HISTORY_H
