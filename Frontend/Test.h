#pragma once

#include <QObject>
#include <QQuickPaintedItem>

#include "TextNode.h"

namespace Frontend {

class Q_DECL_EXPORT Test : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QString renderingText READ renderingText WRITE setRenderingText NOTIFY renderingTextChanged)

public:
    Test(QQuickItem* parent = 0);
    void paint(QPainter *painter) override;

    const QString &renderingText() const;
    void setRenderingText(const QString &newRenderingText);

signals:
    void renderingTextChanged();

private:
    TextNode* _text;
    QString m_renderingText;
};

}
