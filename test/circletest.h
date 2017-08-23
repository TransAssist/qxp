#ifndef CIRCLETEST_H
#define CIRCLETEST_H

#include <QObject>
#include <QtTest/QtTest>

#include "circle.h"

class CircleTest : public QObject{
    Q_OBJECT
public:
    explicit CircleTest(QObject *parent = 0) :QObject(parent){}
private:
    Circle *c1;
    Circle *c2;
private slots:
    void initTestCase(){
        c1 = new Circle();
        c2 = new Circle(10);
    }
    void testRadius(){
        QCOMPARE(c1->getRadius(), 1.0);
        QCOMPARE(c2->getRadius(), 10.0);
    }
    void testArea(){
        QVERIFY(true == false);//error
        QCOMPARE(c1->getArea(), 3.14);
        QCOMPARE(c2->getArea(), 314.0);
    }
    void cleanupTestCase(){
        delete c1;
        delete c2;
    }
};
#endif // CIRCLETEST_H
