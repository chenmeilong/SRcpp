#include <QString>
#include <QtTest>

class TestQString : public QObject
{
    Q_OBJECT

public:
    TestQString();

private Q_SLOTS:
    void testToLower();
    void testToLower_data();
};

TestQString::TestQString()
{
}

void TestQString::testToLower()
{
    //获取测试数据
    QFETCH(QString,string);
    QFETCH(QString,result);
    //如果两个参数不同，则其值会分别显示出来
    QCOMPARE(string.toLower(),result);
    QVERIFY2(true, "Failure");
}

void TestQString::testToLower_data()
{
    //添加测试列
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");
    //添加测试数据
    QTest::newRow("lower")<<"hello"<<"hello";
    QTest::newRow("mixed")<<"heLLO"<<"hello";
    QTest::newRow("upper")<<"HELLO"<<"hello";
}

QTEST_APPLESS_MAIN(TestQString)

#include "tst_testqstring.moc"
