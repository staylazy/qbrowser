#include "NetworkManager.h"

#include <QtNetwork/QNetworkReply>

namespace Network {

NetworkManager::NetworkManager(QObject *parent) :
    QObject(parent)
//    m_manager(new QNetworkAccessManager(this))
{
//    connect(m_manager, &QNetworkAccessManager::finished, this, &NetworkManager::unpackReply);
}

//void NetworkManager::createRequest()
//{
//    m_manager->get(QNetworkRequest(QUrl("example.org")));
//}

//void NetworkManager::unpackReply(QNetworkReply *reply)
//{
//    qDebug() << reply->readAll();
//}

}
