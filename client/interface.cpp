#include "interface.h"
#include "common.h"

TInterface::TInterface(QWidget *parent)
    : QWidget(parent)
{

}

TInterface::~TInterface()
{

}

void TInterface::formRequest(QString str, QString add_data)
{
    QString msg;
    if (str == "ADD")
        msg << QString().setNum(ADD_WORKER_REQUEST);
    if (str == "DELETE")
        msg << QString().setNum(DELETE_WORKER_REQUEST);
    if (str == "SETTINGS")
        msg << QString().setNum(CHANGE_SETTINGS_REQUEST) << add_data;
    if (str == "DATA")
        msg << QString().setNum(GET_DATA_REQUEST);
    emit request(msg);
}

QString TInterface::get_response()
{
    return response_to_request;
}

void TInterface::answer(QString msg)
{
    int p = msg.indexOf(separator);
    int t = msg.left(p).toInt();
    msg = msg.mid(p+1,msg.length()-p-2);
    switch (t)
    {
        case ADD_WORKER_ANSWER:

            break;
        case DELETE_WORKER_ANSWER:

            break;
        case CHANGE_SETTINGS_ANSWER:

            break;
        case GET_DATA_ANSWER:
            response_to_request = msg;
            break;
        default: break;
    }
}
