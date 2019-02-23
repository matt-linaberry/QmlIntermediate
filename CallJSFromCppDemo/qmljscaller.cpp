#include "qmljscaller.h"

QmlJSCaller::QmlJSCaller(QObject *parent) : QObject(parent)
{

}

void QmlJSCaller::cppMethod(QString parameter)
{
    qDebug() << "This is C++ talking! calling the QML Javascript function";
    callJSMethod(parameter);
}

void QmlJSCaller::setQmlRootObject(QObject *value)
{
    qmlRootObject = value;
}

void QmlJSCaller::callJSMethod(QString param)
{
    QVariant returnedValue;
    QVariant cppParameter = QVariant::fromValue(param);
    QMetaObject::invokeMethod(qmlRootObject, "qmlJSFunction", Q_RETURN_ARG(QVariant, returnedValue),Q_ARG(QVariant, cppParameter));
    qDebug() << "C++ talking done calling the QML javascript:  the return is " << returnedValue.toString();
}
