#include <QtTest>

#include "circletest.h"
#include "squaretest.h"
#include "sampletest.h"
#include "qxptest.h"
#include "sqxptest.h"

int main(){

    CircleTest tst_circle;
    QTest::qExec(&tst_circle);

    SquareTest tst_squaret;
    QTest::qExec(&tst_squaret);

    SampleTest tst_sample;
    QTest::qExec(&tst_sample);

    QxpTest tst_qxp;
    QTest::qExec(&tst_qxp);

    SqxpTest tst_sqxp;
    QTest::qExec(&tst_sqxp);

    return 0;
}

