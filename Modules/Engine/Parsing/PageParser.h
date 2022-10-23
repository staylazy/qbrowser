#ifndef PAGEPARSER_H
#define PAGEPARSER_H

// TO-DO: tokenize html page

#include <QObject>

class PageParser : public QObject
{
    Q_OBJECT
public:
    explicit PageParser(QObject *parent = nullptr);

signals:

};

#endif // PAGEPARSER_H
