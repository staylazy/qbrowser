TARGET  = Frontend
TEMPLATE = lib
CONFIG += qt plugin qmltypes
QT += qml quick

QML_IMPORT_NAME = com.qbrowser.frontend
QML_IMPORT_VERSION = 1

QMLTYPES_FILENAME = $$DESTDIR/plugins.qmltypes

RESOURCES += \
    frontend.qrc

SOURCES += \
    FrontendQmlPlugin.cpp \
    Test.cpp \
    TextNode.cpp

HEADERS += \
    FrontendQmlPlugin.h \
    Test.h \
    TextNode.h
