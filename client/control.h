#ifndef CONTROL_H
#define CONTROL_H

#include <QDialog>
#include "interface.h"

namespace Ui {
class Control;
}

class Control : public QDialog
{
    Q_OBJECT

    TInterface *general_class;

public:
    explicit Control(QWidget *parent = nullptr);
    explicit Control(TInterface*, QWidget *parent = nullptr);
    ~Control();

private slots:
    void on_add_worker_clicked();
    void on_delete_worker_clicked();

private:
    Ui::Control *ui;
};

#endif // CONTROL_H
