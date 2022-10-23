#pragma once

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>

namespace Network
{

class NetworkManager : public QObject
{
    Q_OBJECT

public:
    NetworkManager(QObject* parent = nullptr);
////    void createRequest();

////private:
////    QNetworkAccessManager* m_manager;

////    void unpackReply(QNetworkReply* reply);
};
}
