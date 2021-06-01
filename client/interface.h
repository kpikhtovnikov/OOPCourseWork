#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>

class TInterface : public QWidget
{
    Q_OBJECT

    QString response_to_request;

public:
    TInterface(QWidget *parent = 0);
    ~TInterface();

    void formRequest(QString, QString add_data = nullptr);
    QString get_response();

public slots:
    void answer(QString);

signals:
    void request(QString);
};

#endif // TINTERFACE_H
