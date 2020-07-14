#include <QCoreApplication>
#include <QTest>

#include "test_math_calculations.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    return QTest::qExec(new TestMathCalculations, argc, argv);

}
