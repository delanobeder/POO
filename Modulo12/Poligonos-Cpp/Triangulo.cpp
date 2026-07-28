#include "Triangulo.h"
#include <cmath>

Triangulo::Triangulo(vector<double>& lados) :
Poligono(lados) {
}

Triangulo::~Triangulo() {
}

double Triangulo::getArea() const {
    double s = this->getPerimetro() / 2;
    double l1 = this->getLado(1);
    double l2 = this->getLado(2);
    double l3 = this->getLado(3);
    return sqrt(s * (s - l1) * (s - l2) * (s - l3));
}
