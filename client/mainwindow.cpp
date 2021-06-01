#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settings.h"
#include "status.h"
#include "control.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(TInterface *interface, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    general_class = interface;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_controlButton_clicked()
{
    Control *control_window = new Control(general_class);
    control_window -> show();
}

void MainWindow::on_statusButton_clicked()
{
    Status *status_window = new Status(general_class);
    status_window -> show();
}

void MainWindow::on_settingsButton_clicked()
{
    Settings *settings_window = new Settings(general_class);
    settings_window->setModal(true);
    settings_window->show();
}
