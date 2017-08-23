#include <QtCore/QString>
#include <QtTest/QtTest>

class GeometryTest : public QObject
{
    Q_OBJECT

public:
    GeometryTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();
};

GeometryTest::GeometryTest()
{
}

void GeometryTest::initTestCase()
{
}

void GeometryTest::cleanupTestCase()
{
}

void GeometryTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(GeometryTest);

#include "tst_geometrytest.moc"
