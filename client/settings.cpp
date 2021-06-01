#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::Settings(TInterface *interface, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    general_class = interface;
    ui->setupUi(this);
    initValues();
}

void Settings::initValues(){
    QStringList data = general_class->get_response().split(';');
    if(!data[0].isEmpty()){
        ui->workers->setValue(QString(data[1]).toInt());
        ui->queue->setValue(QString(data[0]).toInt());
    }
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_buttonBox_accepted()
{
    QString settings = "";
    settings.append(QString().setNum(ui->workers->value()));
    settings.append(";");
    settings.append(QString().setNum(ui->queue->value()));
    general_class->formRequest("SETTINGS", settings);
}
