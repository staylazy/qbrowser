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
    void createRequest(const QString& url) const;

signals:
    void finish(QString ans);

private:
    QNetworkAccessManager* m_manager;

    void unpackReply(QNetworkReply* reply);
};
}
