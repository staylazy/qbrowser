#include "RootApplication.h"

using namespace Network;

RootApplication::RootApplication(QObject *parent) :
    QObject(parent),
    nwm(new Network::NetworkManager(this)),
    parser(new Engine::PageParser(this))
{

}

const QString &RootApplication::name() const
{
    return m_name;
}

void RootApplication::setName(const QString &newName)
{
    if (m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

void RootApplication::getPage(QString url)
{
    nwm->createRequest(url);
    connect(nwm, &NetworkManager::finish, this, &RootApplication::setName);
}
