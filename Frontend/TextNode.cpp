#include "TextNode.h"

#include <QPainter>
#include <QStaticText>

namespace Frontend {

TextNode::TextNode(QQuickItem *parent) :
    QQuickPaintedItem(parent)
{
    qDebug() << "textnode";
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::AllButtons);
    setFlag(ItemAcceptsInputMethod, true);
}

void TextNode::paint(QPainter *painter)
{
    auto rect = boundingRect();
    painter->drawText(rect, Qt::TextWordWrap, _text, &rect);
    qDebug() << boundingRect();
}

void TextNode::mousePressEvent(QMouseEvent *event)
{
    qDebug() << event;
}

void TextNode::setText(const QString &newText)
{
    if (newText == _text)
        return;
    _text = newText;
    update();
}

}
