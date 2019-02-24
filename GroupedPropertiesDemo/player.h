#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include "playerdetails.h"
class Player : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(bool playing READ playing WRITE setPlaying NOTIFY playingChanged)
    Q_PROPERTY(QString position READ position WRITE setPosition NOTIFY positionChanged)
    Q_PROPERTY(PlayerDetails * details READ details NOTIFY detailsChanged)

public:
    explicit Player(QObject *parent = nullptr);
    QString name() const;

    bool playing() const;

    QString position() const;
    void setName(QString name);
    void setPlaying(bool playing);
    void setPosition(QString position);

    Q_INVOKABLE virtual void play() = 0; // pure virtual class: Can't create objects from Player class!  subclasses only, and requires it to be implemented!

    PlayerDetails * details();

signals:

void nameChanged(QString name);

void playingChanged(bool playing);

void positionChanged(QString position);

void detailsChanged();

public slots:

private:
QString m_name;
bool m_playing;
QString m_position;

PlayerDetails m_details;
};

#endif // PLAYER_H
