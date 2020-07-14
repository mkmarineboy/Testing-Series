#ifndef TESTMATHCALCULATIONS_H
#define TESTMATHCALCULATIONS_H

#include <QObject>

class TestMathCalculations : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void TestSum();
    void TestMultiply();
    void TestDifference();
    void TestDivide();
};

#endif // TESTMATHCALCULATIONS_H
