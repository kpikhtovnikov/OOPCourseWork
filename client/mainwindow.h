#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "interface.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    TInterface *general_class;

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(TInterface*, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_controlButton_clicked();
    void on_statusButton_clicked();
    void on_settingsButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
