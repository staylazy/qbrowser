#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <RootApplication.h>
#include <QQmlContext>

#include "FrontendQmlPlugin.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Q_INIT_RESOURCE(frontend);

    Frontend::FrontendQmlPlugin::registerQmlTypes();

    QQmlApplicationEngine engine;
    RootApplication* nwm = new RootApplication();
    engine.rootContext()->setContextProperty("rootApp", nwm);

    const QUrl url(u"qrc:/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);


    return app.exec();
}
