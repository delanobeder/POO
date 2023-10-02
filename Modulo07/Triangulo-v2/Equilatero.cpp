#include "Equilatero.h"

Equilatero::Equilatero(double lado) :
Triangulo(lado, lado, lado) {
}

double Equilatero::getArea() const {
    cout << "Invocando Equilatero" << endl;
    return lado1 * lado1 * sqrt(3) / 4;
}


