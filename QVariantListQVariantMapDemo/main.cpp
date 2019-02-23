#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "cppclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    CppClass cppClass;

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("CppClass", &cppClass);
    if (engine.rootObjects().isEmpty()) {

        return -1;
    } else {
        cppClass.setQmlRootObject(engine.rootObjects().first());
    }
    return app.exec();
}
