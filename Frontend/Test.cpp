#include "Test.h"

#include <QQuickWindow>

namespace Frontend {


Test::Test(QQuickItem *parent) :
    QQuickPaintedItem(parent),
    _text(new TextNode(this))
{
    qDebug() << "test";
}

void Test::paint(QPainter *painter)
{
    _text->setText(m_renderingText);
    // size of rect for mouse events
    _text->setWidth(width());
    _text->setHeight(height());
    _text->paint(painter);
}

const QString &Test::renderingText() const
{
    return m_renderingText;
}

void Test::setRenderingText(const QString &newRenderingText)
{
    if (m_renderingText == newRenderingText)
        return;
    m_renderingText = newRenderingText;
    update();
    emit renderingTextChanged();
}

}
