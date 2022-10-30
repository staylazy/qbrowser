#include "NetworkManager.h"

#include <QtNetwork/QNetworkReply>
#include <QRegularExpression>

#include <QString>

namespace Network {

NetworkManager::NetworkManager(QObject *parent) :
    QObject(parent),
    m_manager(new QNetworkAccessManager(this))
{
    connect(m_manager, &QNetworkAccessManager::finished, this, &NetworkManager::unpackReply);
}

void NetworkManager::createRequest(const QString &url) const
{
    m_manager->get(QNetworkRequest(QUrl(url)));
}

void NetworkManager::unpackReply(QNetworkReply *reply)
{
    QString ans = reply->readAll();
    emit finish(ans);

}

}
