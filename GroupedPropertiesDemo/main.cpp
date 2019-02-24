#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "player.h"
#include "footballteam.h"
#include "striker.h"
#include "playerdetails.h"
#include "defender.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterUncreatableType<Player>("self.matt.football", 1,0,"Player", "Can't do this!");
    qmlRegisterType<FootballTeam>("self.matt.football", 1,0,"FootballTeam");
    qmlRegisterType<Striker>("self.matt.football", 1,0,"Striker");
    qmlRegisterType<Defender>("self.matt.football", 1,0,"Defender");
    qmlRegisterType<PlayerDetails>();  // registers type that's not creatable in QML
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
