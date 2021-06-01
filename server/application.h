#ifndef APPLICATION_H
#define APPLICATION_H

#include <QObject>
#include <QCoreApplication>

#include "communicator.h"
#include "department.h"

class TApplication : public QCoreApplication
{
    Q_OBJECT

    TCommunicator *comm;
    TDepartment department;
    void changeSettingsRequest(QString);

public:

    TApplication(int, char**, TDepartment);

public slots:

    void recieve(QByteArray);

};

#endif // APPLICATION_H
