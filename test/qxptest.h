#ifndef QXPTEST_H
#define QXPTEST_H

#include <QObject>
#include <QtTest/QtTest>

#include "qxp.h"

class QxpTest : public QObject{
Q_OBJECT
public:
    explicit QxpTest(QObject *parent = 0) :QObject(parent){}
private slots:
    void initTestCase(){
    }
    void cleanupTestCase(){
    }
    void hello_test_case1(){
        Qxp qxp;
        QCOMPARE(qxp.hello("qxp"),QString("Hello,qxp!"));
    }
};

#endif // QXPTEST_H
