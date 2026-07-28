#include "Retangulo.h"

Retangulo::Retangulo(double cateto1, double cateto2, double hipotenuza) :
Triangulo(cateto1, cateto2, hipotenuza) {
}

double Retangulo::getArea() const {
    cout << "Invocando Retangulo" << endl;
    return lado1 * lado2 / 2;
}


