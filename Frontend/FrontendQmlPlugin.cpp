#include "FrontendQmlPlugin.h"
#include "QQmlEngine"

#include <Test.h>
#include <TextNode.h>

namespace Frontend {

void FrontendQmlPlugin::registerQmlTypes()
{
    qmlRegisterType<Test>("com.qbrowser.frontend", 1, 0, "Test");
    qmlRegisterType<TextNode>("com.qbrowser.frontend", 1, 0, "TextNode");
}

}
