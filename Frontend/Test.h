#pragma once

#include "qqmlregistration.h"
#include <QObject>

class Q_DECL_EXPORT Test : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int name1 READ name1 WRITE setName1 NOTIFY name1Changed)

public:
    Test(QObject* parent = 0);
    int name() const;
    void setName(int newName);
    int name1() const;
    void setName1(int newName1);

signals:
    void nameChanged();
    void name1Changed();

private:
    int m_name;
    int m_name1;
};
