#include "Test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

int Test::name() const
{
    return m_name;
}

void Test::setName(int newName)
{
    if (m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

int Test::name1() const
{
    return m_name + 1;
}

void Test::setName1(int newName1)
{
    if (m_name1 == newName1)
        return;
    m_name1 = newName1;
    emit name1Changed();
}
