#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class SnakeTests : public QObject
{
   Q_OBJECT

public:
   SnakeTests();
   ~SnakeTests();

private slots:
   void test_case1();

};

SnakeTests::SnakeTests()
{

}

SnakeTests::~SnakeTests()
{

}

void SnakeTests::test_case1()
{

}

QTEST_MAIN(SnakeTests)

#include "tst_snaketests.moc"
