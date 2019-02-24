#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "counter.h"
#include "counting.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<Counter>("com.matt.self", 1,0,"Counter");
    qmlRegisterUncreatableType<Counting>("com.matt.self", 1,0,"Counting", "Cannt instantiate this!");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
