#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)

public:
    explicit Person(QObject *parent = nullptr);
    void setName(QString name);
    void setAge(int age);

    QString name() const;

    int age() const;

signals:

    void nameChanged(QString name);
    void ageChanged(int age);

private:
    QString m_name;
    int m_age;

};

#endif // PERSON_H
