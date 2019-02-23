#ifndef MOVIE_H
#define MOVIE_H

#include <QObject>

class Movie : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString mainCharacter READ mainCharacter WRITE setMainCharacter NOTIFY mainCharacterChanged);
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged);

public:
    explicit Movie(QObject *parent = nullptr);

QString mainCharacter() const;
QString title() const;
void setMainCharacter(QString mainCharacter);
void setTitle(QString title);

signals:

void mainCharacterChanged(QString mainCharacter);

void titleChanged(QString title);


private:
QString m_mainCharacter;

QString m_title;
};

#endif // MOVIE_H
