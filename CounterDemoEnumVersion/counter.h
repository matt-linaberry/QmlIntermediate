#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QTimer>
#include "counting.h"

class Counter : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int count READ count WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(Counting::CountDirection counting READ counting WRITE setCounting NOTIFY countingChanged)


public:
    explicit Counter(QObject *parent = nullptr);
    void setCount(int count);
    int count() const;
    Counting::CountDirection counting() const;
    void setCounting(Counting::CountDirection counting);

    // helperzs!
    Q_INVOKABLE void start();
    Q_INVOKABLE void stop();



signals:

    void countChanged(int count);

    void upChanged(bool up);

    void countingChanged(Counting::CountDirection counting);

public slots:


private:
    int m_count;

    bool m_up;
    QTimer * m_timer;

    Counting::CountDirection m_counting;
};

#endif // COUNTER_H
