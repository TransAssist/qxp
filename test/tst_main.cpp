#include <QtTest>

#include "circletest.h"
#include "squaretest.h"
#include "sampletest.h"

int main(){

    CircleTest tst_circle;
    QTest::qExec(&tst_circle);

    SquareTest tst_squaret;
    QTest::qExec(&tst_squaret);

    SampleTest tst_sample;
    QTest::qExec(&tst_sample);

    return 0;
}

