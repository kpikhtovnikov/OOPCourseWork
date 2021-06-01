#ifndef STATUS_H
#define STATUS_H

#include <QDialog>
#include "interface.h"

namespace Ui {
class Status;
}

class Status : public QDialog
{
    Q_OBJECT

    TInterface *general_class;


public:
    explicit Status(QWidget *parent = nullptr);
    explicit Status(TInterface*, QWidget *parent = nullptr);
    ~Status();

private slots:
    void on_update_clicked();

    void on_show_clicked();

private:
    Ui::Status *ui;
};

#endif // STATUS_H
