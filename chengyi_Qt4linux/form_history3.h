#ifndef FORM_HISTORY3_H
#define FORM_HISTORY3_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class Form_history3;
}

class Form_history3 : public QWidget
{
    Q_OBJECT

public:
    explicit Form_history3(QWidget *parent = 0);
    ~Form_history3();

private:
    Ui::Form_history3 *ui;
    QSqlTableModel *model;
};

#endif // FORM_HISTORY3_H
