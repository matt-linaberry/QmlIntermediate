#ifndef FOOTBALLTEAM_H
#define FOOTBALLTEAM_H

#include <QObject>
#include <QQmlListProperty>
#include <QVector>

#include "player.h"

class FootballTeam : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(QString coach READ coach WRITE setCoach NOTIFY coachChanged)
    Q_PROPERTY(Player * captain READ captain WRITE setCaptain NOTIFY captainChanged)
    Q_PROPERTY(QQmlListProperty<Player> players READ players NOTIFY playersChanged)

    Q_CLASSINFO("DefaultProperty", "players")

public:
    explicit FootballTeam(QObject *parent = nullptr);
    void setTitle(QString title);
    void setCoach(QString coach);
    void setCaptain(Player * captain);
    QString title() const;

    QString coach() const;

    Player * captain() const;

    QQmlListProperty<Player> players();

    // more helpers!
    void appendPlayerCustom(Player *);
    int playerCountCustom() const;
    Player *playerCustom(int) const;
    void clearPlayersCustom();

signals:

    void titleChanged(QString title);

    void coachChanged(QString coach);

    void captainChanged(Player * captain);

    void playersChanged();



public slots:

private:
    static void appendPlayer(QQmlListProperty<Player>*, Player *);
    static int playerCount(QQmlListProperty<Player>*);
    static Player* player(QQmlListProperty<Player>*, int);
    static void clearPlayers(QQmlListProperty<Player>*);

    QString m_title;
    QString m_coach;
    Player * m_captain;
    QVector<Player *> m_players;
};

#endif // FOOTBALLTEAM_H
