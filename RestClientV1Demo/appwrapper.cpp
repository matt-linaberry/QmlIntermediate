#include "appwrapper.h"
#include <QNetworkRequest>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QQmlApplicationEngine>
#include <QQmlContext>
AppWrapper::AppWrapper(QObject *parent) : QObject(parent),
    mNetManager(new QNetworkAccessManager(this)),
    mNetReply(nullptr),
    mDataBuffer(new QByteArray)
{

}

void AppWrapper::fetchPosts(int number)
{
    const QUrl API_ENDPOINT("http://api.icndb.com/jokes/random/" + QString::number(number));
    QNetworkRequest request;
    request.setUrl(API_ENDPOINT);
    mNetReply = mNetManager->get(request);  // send the request!
    connect(mNetReply, &QIODevice::readyRead, this, &AppWrapper::dataReadyRead);
    connect(mNetReply, &QNetworkReply::finished, this, &AppWrapper::dataReadFinished);
}

void AppWrapper::removeLast()
{
    if (!mJokes.isEmpty()) {
        mJokes.removeLast();
        resetModel();
    }
}

QStringList AppWrapper::jokes() const
{
    return mJokes;
}

void AppWrapper::setJokes(const QStringList &jokes)
{
    mJokes = jokes;
}

bool AppWrapper::initialize()
{

    mEngine.rootContext()->setContextProperty("Wrapper", this);
    resetModel();
    mEngine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (mEngine.rootObjects().isEmpty()) {
        return false;
    } else {
        return true;
    }
}

void AppWrapper::resetModel()
{
    mEngine.rootContext()->setContextProperty("myModel", QVariant::fromValue(mJokes));
}



void AppWrapper::dataReadyRead()
{
    mDataBuffer->append(mNetReply->readAll());  // read it good!
    if (mNetReply->error()) {
        qDebug() << "There was some sort of error! " << mNetReply->errorString();
    } else {
        QJsonDocument doc = QJsonDocument::fromJson(* mDataBuffer);
        QJsonObject data = doc.object();
        QJsonArray array = data["value"].toArray();
        qDebug() << "Number of jokes: " << array.size();

        for (int i = 0; i < array.size(); i++) {
            QJsonObject object = array.at(i).toObject();
            QString joke = object["joke"].toString();
            mJokes.append(joke);
        }
        if (array.size() != 0) {
            resetModel();
        }
        //clear the buffer!
        mDataBuffer->clear();
    }
}

void AppWrapper::dataReadFinished()
{

}
