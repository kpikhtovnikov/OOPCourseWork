#include "control.h"
#include "ui_control.h"


Control::Control(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);
}

Control::Control(TInterface *interface,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Control)
{
    general_class = interface;
    ui->setupUi(this);
}

Control::~Control()
{
    delete ui;
}


void Control::on_add_worker_clicked()
{
    general_class->formRequest("ADD");
}

void Control::on_delete_worker_clicked()
{
    general_class->formRequest("DELETE");
}
