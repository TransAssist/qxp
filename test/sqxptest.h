#ifndef SQXPTEST_H
#define SQXPTEST_H

#include <QObject>
#include <QtTest/QtTest>

#include "sqxp.h"

class SqxpTest : public QObject{
    Q_OBJECT
public:
    explicit SqxpTest(QObject *parent = 0) :QObject(parent){}
private slots:
    void initTestCase(){
    }
    void cleanupTestCase(){
    }
    void static_function_test_case1(){
        QCOMPARE(Sqxp::echo("Hello!"),QString("Echo:Hello!"));
    }
};

#endif // SQXPTEST_H
