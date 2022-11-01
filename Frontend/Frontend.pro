TARGET  = Frontend
TEMPLATE = lib
CONFIG += qt plugin qmltypes
QT += qml quick

QML_IMPORT_NAME = frontend
QML_IMPORT_VERSION = 1

RESOURCES += \
    frontend.qrc

SOURCES += \
    Test.cpp

HEADERS += \
    Test.h
