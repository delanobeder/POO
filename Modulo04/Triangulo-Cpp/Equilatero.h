#ifndef EQUILATERO_H
#define EQUILATERO_H

#include "Triangulo.h"

class Equilatero : public Triangulo {
public:
    Equilatero(double lado);
    ~Equilatero();
    double getArea() const;
private:
};

#endif /* EQUILATERO_H */