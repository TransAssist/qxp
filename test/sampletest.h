#ifndef SAMPLETEST_H
#define SAMPLETEST_H

#include <QObject>
#include <QtTest>
#include <QCoreApplication>

// add necessary includes here
#include "sample.h"

class SampleTest : public QObject{
    Q_OBJECT
public:
    explicit SampleTest(QObject *parent = 0) :QObject(parent){}
private:
private slots:
    void initTestCase(){
        qDebug("initTestCase");
    }
    void cleanupTestCase(){
        qDebug("cleanupTestCase");
    }
    void test_case1(){
        Sample sobj;
        QCOMPARE(sobj.echo("Hello!"),QString("Echo:Hello!"));
    }
    void testPlus(){
        Sample sobj;
        QBENCHMARK {
            sobj.value(3);
            sobj.plus(4);
        }
        QCOMPARE(sobj.value(), int(7));
    }
    void testMinus_data(){
        QTest::addColumn<int>("value");
        QTest::addColumn<int>("minus");
        QTest::addColumn<int>("result");

        QTest::newRow("3-4")   << 3   << 4   << -1;
        QTest::newRow("-1+5")  << -1  << -5  << 4;
        //QTest::newRow("-1+4")  << -1  << -4  << 5;	//	error
        QTest::newRow("4-3")   << 4   << 3   << 1;
    }
    void testMinus(){
        QFETCH(int, value);
        QFETCH(int, minus);
        QFETCH(int, result);

        Sample sobj;
        sobj.value(value);

        QCOMPARE(sobj.minus(minus), result);
    }
};

#endif // SAMPLETEST_H


