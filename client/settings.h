#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include "interface.h"

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

    TInterface *general_class;
    void initValues();

public:
    explicit Settings(QWidget *parent = nullptr);
    explicit Settings(TInterface*, QWidget *parent = nullptr);
    ~Settings();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Settings *ui;
};

#endif // SETTINGS_H
