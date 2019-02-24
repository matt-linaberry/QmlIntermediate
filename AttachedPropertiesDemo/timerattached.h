#ifndef TIMERATTACHED_H
#define TIMERATTACHED_H

#include <QObject>
#include<QTimer>
class TimerAttached : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int interval READ interval WRITE setInterval NOTIFY intervalChanged)
    Q_PROPERTY(bool running READ running WRITE setRunning NOTIFY runningChanged)


public:
    explicit TimerAttached(QObject *parent = nullptr);
    void setInterval(int interval);
    void setRunning(bool running);
    int interval() const;
    bool running() const;

signals:
    void timerOut();
    void intervalChanged(int interval);
    void runningChanged(bool running);

private:

    int m_interval;
    bool m_running;
    QTimer * m_timer;

};

#endif // TIMERATTACHED_H
