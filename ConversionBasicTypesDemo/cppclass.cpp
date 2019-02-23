#include "cppclass.h"
#include <QDebug>
CppClass::CppClass(QObject *parent) : QObject(parent)
{

}

void CppClass::cppSlot()
{
    qDebug() << "CppSlot called!";
    emit sendInt(123);
    emit sendDouble(123.45);
    emit sendBoolRealFloat(true, 34.12, 456.2);
}

void CppClass::timeSlot(QTime time)
{

}
