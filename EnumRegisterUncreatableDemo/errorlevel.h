#ifndef ERRORLEVEL_H
#define ERRORLEVEL_H

#include <QObject>

class ErrorLevel
//class ErrorLevel : public QObject
{
   // Q_OBJECT
    Q_GADGET
public:
    //explicit ErrorLevel(QObject *parent = nullptr);
    explicit ErrorLevel();

    enum ErrorValue {
        INFORMATION,
        WARNING,
        DEBUG,
        MESSAGE
    };

    Q_ENUM(ErrorValue)

};

#endif // ERRORLEVEL_H
