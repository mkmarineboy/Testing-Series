#include "test_math_calculations.h"

#include <QTest>
#include "calculations.h"

void TestMathCalculations::TestSum()
{
    Calculations calculations{};
    auto result = calculations.sum(1,3);
    QCOMPARE(4,result);
}

void TestMathCalculations::TestMultiply()
{
    Calculations calculations{};
    auto result = calculations.multiply(1,3);
    QCOMPARE(2,result);
}
