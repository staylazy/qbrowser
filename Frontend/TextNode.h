#pragma once

#include <QObject>

#include <QQuickPaintedItem>

// QPainter медленее чем Scene Graph API
// TO-DO: подумать нужно ли кудато перенести
// и как должен взаимодействовать парсинг и рендеринг
// вообще должен ли рендеринг именно так работатЬ?

namespace Frontend {

class TextNode : public QQuickPaintedItem
{
public:
    explicit TextNode(QQuickItem* parent = 0);

    void paint(QPainter *painter) override;

    // mouse press event для контекста и выделения текста
    // можно ли сделать проще чем с нуля писать?
    void mousePressEvent(QMouseEvent* event) override;

    void setText(const QString& newText);

private:
    QString _text{"null"};
};

}
