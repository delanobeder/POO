#include "Retangulo.h"

Retangulo::Retangulo(vector<double>& lados) :
Poligono(lados) {
}

Retangulo::~Retangulo() {
}

double Retangulo::getArea() const {
    double l1 = this->getLado(1);
    double l2 = this->getLado(2);
    return l1 * l2;
}

