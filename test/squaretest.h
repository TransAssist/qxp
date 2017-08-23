#ifndef SQUARETEST_H
#define SQUARETEST_H

#include <QObject>
#include <QtTest/QtTest>

#include "square.h"

class SquareTest : public QObject{
    Q_OBJECT
public:
    explicit SquareTest(QObject *parent = 0);
private:
    Square *s1;
    Square *s2;
private slots:
    void initTestCase();
    void testSide();
    void testArea();
    void testPerimeter();
    void cleanupTestCase();
};

#endif // SQUARETEST_H
