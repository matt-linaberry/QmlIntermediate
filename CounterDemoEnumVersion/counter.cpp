#include "counter.h"
#include <QDebug>
Counter::Counter(QObject *parent) : QObject(parent),
    m_count(0),
    m_timer(new QTimer(this)),
    m_counting(Counting::CountDirection::DOWN)

{
    qDebug() << "Created an instance of Counter!!!";
    m_timer->setInterval(500);
    connect(m_timer, &QTimer::timeout, [=](){
        if (m_counting == Counting::CountDirection::UP) {
            ++m_count;
        } else {
            --m_count;
        }
        emit countChanged(m_count);  // IMPORTANT for property bindings!
    });
}

int Counter::count() const
{
    return m_count;
}

void Counter::start()
{
    m_timer->start();
}

void Counter::stop()
{
    m_timer->stop();
}

Counting::CountDirection Counter::counting() const
{
    return m_counting;
}

void Counter::setCounting(Counting::CountDirection counting)
{
    if (m_counting == counting)
        return;

    m_counting = counting;
    emit countingChanged(m_counting);
}

void Counter::setCount(int count)
{
    if (m_count == count)
        return;

    m_count = count;
    emit countChanged(m_count);
}
