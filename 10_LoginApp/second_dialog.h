#ifndef SECOND_DIALOG_H
#define SECOND_DIALOG_H

#include <QDialog>

namespace Ui {
class Second_Dialog;
}

class Second_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Second_Dialog(QWidget *parent = nullptr);
    ~Second_Dialog();

private:
    Ui::Second_Dialog *ui;
};

#endif // SECOND_DIALOG_H
