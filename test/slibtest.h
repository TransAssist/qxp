#ifndef SLIBTEST_H
#define SLIBTEST_H

#include <QObject>
#include <QtTest/QtTest>

#include "slib.h"

class SlibTest : public QObject{
    Q_OBJECT
public:
    explicit SlibTest(QObject *parent = 0) :QObject(parent){}
private slots:
    void initTestCase(){
    }
    void cleanupTestCase(){
    }
    void static_function_test_case1(){
        QCOMPARE(Slib::echo("Hello!"),QString("Echo:Hello!"));
    }
};
#endif // SLIBTEST_H
