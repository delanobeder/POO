#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <cmath>
#include <iostream>
using namespace std;

class Triangulo {
public:
    Triangulo(double lado1, double lado2, double lado3);
    double getPerimetro() const;
    virtual double getArea() const;

    bool operator>(const Triangulo& obj) const;
    bool operator>=(const Triangulo& obj) const;
    bool operator<(const Triangulo& obj) const;
    bool operator<=(const Triangulo& obj) const;
    bool operator==(const Triangulo& obj) const;
    bool operator!=(const Triangulo& obj) const;

    friend ostream& operator<<(ostream& os, const Triangulo& obj);
protected:
    double lado1;
    double lado2;
    double lado3;
};

#endif /* TRIANGULO_H */

