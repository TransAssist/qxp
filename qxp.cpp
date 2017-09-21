#include "qxp.h"

Qxp::Qxp(QObject *parent) :QObject(parent){}
Qxp::~Qxp(){}

QString Qxp::hello(const QString str){
    return "Hello,"+str+"!";
}


