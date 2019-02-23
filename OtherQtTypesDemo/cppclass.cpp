#include "cppclass.h"
#include <QDebug>

CppClass::CppClass(QObject *parent) : QObject(parent)
{

}

void CppClass::cppSlot()
{
    // send the current time
    emit sendDateTime(QDateTime::currentDateTime());
    emit sendTime(QTime::currentTime());
}

void CppClass::timeSlot(QTime time)
{
    qDebug() << "Time from QML is " << time;
}

void CppClass::dateTimeSlot(QDateTime datetime)
{
    qDebug() << "Date time from QML is called " << datetime;
}
