#pragma once
// TO-DO: tokenize html page

#include <QObject>
namespace Engine {

class PageParser : public QObject
{
    Q_OBJECT

public:
    explicit PageParser(QObject *parent = nullptr);
    QString parseHTML(const QString& page);

signals:

};
}
