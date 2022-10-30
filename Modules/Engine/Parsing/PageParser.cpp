#include "PageParser.h"
#include <QDebug>
namespace Engine {

PageParser::PageParser(QObject *parent)
    : QObject(parent)
{

}

QString PageParser::parseHTML(const QString& page)
{
    QString res = page;

    return res;
}

}
