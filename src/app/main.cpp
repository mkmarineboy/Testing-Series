#include <QCoreApplication>

#include <QDebug>
#include "calculations.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calculations temprorayObj;

    temprorayObj.sum(1,2);
    temprorayObj.multiply(1,2);
    temprorayObj.difference(1,2);
    temprorayObj.divide(1,2);

    return a.exec();
}
