#include "TriRetangulo.h"

/*
 * cateto1 => lado[0]
 * cateto2 => lado[1]
 * hipotenusa => lado[2]
 */
TriRetangulo::TriRetangulo(double cateto1, double cateto2, double hipotenusa) : Triangulo(cateto1, cateto2, hipotenusa) {
}

TriRetangulo::~TriRetangulo() {
}

double TriRetangulo::getArea() const {
    /*
     * cateto1 é o lado[0]
     * cateto2 é o lado[1]
     * hipotenusa é o lado[2]
     * 
     * Area = (cateto1 * cateto2) /2
    */
    return (lados[0] * lados[1]) / 2;
}
