#include <QtTest>

#include "circletest.h"
#include "squaretest.h"
#include "sampletest.h"
#include "slibtest.h"

int main(){

    CircleTest tst_circle;
    QTest::qExec(&tst_circle);

    SquareTest tst_squaret;
    QTest::qExec(&tst_squaret);

    SampleTest tst_sample;
    QTest::qExec(&tst_sample);

    SlibTest tst_slib;
    QTest::qExec(&tst_slib);

    return 0;
}

