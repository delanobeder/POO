#include "Equilatero.h"

Equilatero::Equilatero(double lado) :
Triangulo(lado) {
}

Equilatero::~Equilatero(){
}

double Equilatero::getArea() const {
    return lados[0] * lados[0] * sqrt(3) / 4;
}


