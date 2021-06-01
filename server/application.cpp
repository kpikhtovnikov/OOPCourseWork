#include "application.h"
#include "common.h"
#include <time.h>

TApplication::TApplication(int argc, char *argv[], TDepartment department_info)
            : QCoreApplication(argc,argv)
{
    TCommParams pars = { QHostAddress("127.0.0.1"), 10000,
                         QHostAddress("127.0.0.1"), 10001};
    comm = new TCommunicator(pars, this);
    connect(comm,SIGNAL(recieved(QByteArray)),this,SLOT(recieve(QByteArray)));

    department = department_info;
}

void TApplication::changeSettingsRequest(QString messageFromClient){
    QStringList data = messageFromClient.split(';');
    department.change_length_queues_list(data[0].toInt(),data[1].toInt());
    qDebug()<<"data[0].toInt()"<<data[0].toInt();

    qDebug()<<"data[1].toInt()"<<data[1].toInt();


}

void TApplication::recieve(QByteArray msg)
{
    QString answer;
    int pos = msg.indexOf(separator);
    int t = msg.left(pos).toInt();
    int p;

    switch (t)
    {
        case CHANGE_SETTINGS_REQUEST:{
            msg = msg.right(msg.length()-pos-1);
            p = msg.indexOf(separator);
            QString messageFromClient = QString(msg);
            changeSettingsRequest(messageFromClient);
            answer << QString().setNum(CHANGE_SETTINGS_ANSWER);
            }
            break;

        case ADD_WORKER_REQUEST:
            department.add_new_worker();
            answer << QString().setNum(ADD_WORKER_REQUEST);
            break;

        case DELETE_WORKER_REQUEST:
            department.delete_worker();
            answer << QString().setNum(DELETE_WORKER_ANSWER);
            break;

        case GET_DATA_REQUEST:
            answer << QString().setNum(GET_DATA_ANSWER) << QString().setNum(department.get_quantity_workers());
            for (int i = 0; i < department.get_quantity_workers() ;i++)
            {
                answer << QString().setNum(department.get_queues_list()[i].get_len_queue());
            }
            break;

        default: return;
    }

    comm->send(QByteArray().append(answer.toUtf8()));
}
