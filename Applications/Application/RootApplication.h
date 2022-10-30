#ifndef ROOTAPPLICATION_H
#define ROOTAPPLICATION_H

#include "PageParser.h"
#include <NetworkManager.h>
#include <QObject>

class RootApplication : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)

public:
    RootApplication(QObject* parent = nullptr);

    const QString &name() const;
    void setName(const QString &newName);

    Q_INVOKABLE void getPage(QString url);

signals:
    void nameChanged();

private:
    QString m_name;
    Network::NetworkManager* nwm;
    Engine::PageParser* parser;
};

#endif // ROOTAPPLICATION_H
