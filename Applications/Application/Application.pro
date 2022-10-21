CONFIG += c++14 ordered
QT += quick gui qml core

RESOURCES += \
    qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SOURCES += \
    main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../Modules/Network/release/ -lNetwork
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../Modules/Network/debug/ -lNetwork
else:unix: LIBS += -L$$OUT_PWD/../../Modules/Network/ -lNetwork

INCLUDEPATH += $$PWD/../../Modules/Network
DEPENDPATH += $$PWD/../../Modules/Network
