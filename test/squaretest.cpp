#include "squaretest.h"

SquareTest::SquareTest(QObject *parent):QObject(parent){}
void SquareTest::initTestCase(){
    s1 = new Square();
    s2 = new Square(15);
}
void SquareTest::testSide(){
    QCOMPARE(s1->getSide(), 1.0);
    QCOMPARE(s2->getSide(), 15.0);
}
void SquareTest::testArea(){
    QCOMPARE(s1->getArea(), 1.0);
    QCOMPARE(s2->getArea(), 225.0);
}
void SquareTest::testPerimeter(){
    QCOMPARE(s1->getPerimeter(), 4.0);
    QCOMPARE(s2->getPerimeter(), 60.0);
}
void SquareTest::cleanupTestCase(){
    delete s1;
    delete s2;
}
