#ifndef TAPPLICATION_H
#define TAPPLICATION_H

#include <QObject>
#include <QApplication>

#include "interface.h"
#include "communicator.h"
#include "mainwindow.h"

class TApplication : public QApplication
{
    Q_OBJECT

    TCommunicator *comm;
    TInterface    *interface;

public:
    TApplication(int, char**);
    TInterface* get_interface();

public slots:
    void fromCommunicator(QByteArray);
    void toCommunicator(QString);

};

#endif // TAPPLICATION_H
