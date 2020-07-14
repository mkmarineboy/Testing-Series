#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <QObject>

class Calculations : public QObject
{
    Q_OBJECT
public:
    explicit Calculations(QObject *parent = nullptr);
    int sum(const int &first, const int &second);
    int multiply(const int &first, const int &second);
    int difference(const int &first, const int &second);
    float divide(const int &first, const int &second);
signals:

};

#endif // CALCULATIONS_H
