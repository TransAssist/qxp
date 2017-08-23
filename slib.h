#ifndef SLIB_H
#define SLIB_H

#include <QObject>

class Slib : public QObject{
    Q_OBJECT
public:
    explicit Slib(QObject *parent = 0) :QObject(parent){
    }
    //	echo method
    static QString echo(const QString str){
        return "Echo:"+str;
    }
};

#endif // SLIB_H
