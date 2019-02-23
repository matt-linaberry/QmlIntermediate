#ifndef PROPERTYWRAPPER_H
#define PROPERTYWRAPPER_H

#include <QObject>
#include <QTimer>

class PropertyWrapper : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString lastName READ lastName WRITE setLastName NOTIFY lastNameChanged)
    Q_PROPERTY(QString firstName READ firstName WRITE setFirstName NOTIFY firstNameChanged)

public:
    explicit PropertyWrapper(QObject *parent = nullptr);

    QString lastName() const;

    QString firstName() const;
    void setLastName(QString lastName);
    void setFirstName(QString firstName);

signals:

    void lastNameChanged(QString lastName);
    void firstNameChanged(QString firstName);

private:

QString m_lastName;
QString m_firstName;
QTimer * m_timer;
int m_random_number;
};

#endif // PROPERTYWRAPPER_H
