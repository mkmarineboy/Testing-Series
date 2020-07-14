#include "calculations.h"
#include <QDebug>
Calculations::Calculations(QObject *parent) : QObject(parent)
{

}

int Calculations::sum(const int &first, const int &second)
{
    qDebug() << __PRETTY_FUNCTION__ << first + second;
    return first + second;
}

int Calculations::multiply(const int &first, const int &second)
{
    qDebug() << __PRETTY_FUNCTION__ << first * second;
    return first * second;
}

int Calculations::difference(const int &first, const int &second)
{
    qDebug() << __PRETTY_FUNCTION__ << first - second;
    return first - second;
}

float Calculations::divide(const int &first, const int &second)
{
    qDebug() << __PRETTY_FUNCTION__ << static_cast<float>(first) / second;
    return static_cast<float>(first) / second;
}
