#include "status.h"
#include "ui_status.h"
#include <QMessageBox>


Status::Status(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Status)
{
    ui->setupUi(this);
}

Status::Status(TInterface *interface, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Status)
{
    general_class = interface;
    ui->setupUi(this);

    general_class->formRequest("DATA");
}

Status::~Status()
{
    delete ui;
}

void Status::on_update_clicked()
{
    general_class->formRequest("DATA");
}

void Status::on_show_clicked()
{
    ui->textBrowser->clear();
    QString str;
    QStringList data = general_class->get_response().split(';');

    for (int i = 1; i <= data[0].toInt(); i++)
    {
        str = "Кладовщик №"; str += QString().setNum(i); str += "  Очередь к кладовщику "; str += data[i]; str += " чел.\n";
        ui->textBrowser->append(str);
    }
}
