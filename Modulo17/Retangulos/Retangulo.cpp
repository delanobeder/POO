#include "Retangulo.h"
#include <iostream>

using namespace std;

void Retangulo::setDim(double a, double b) {
    ladoa = a;
    ladob = b;
}

void Retangulo::imprimir() {
    cout << "Retangulo com lados : "
            << ladoa << " e " << ladob << endl
            << "Area : " << area() << endl << endl;
}

double Retangulo::area() const {
    return ladoa * ladob;
}

bool Retangulo::compara(const Retangulo r1, const Retangulo r2) {
    return r1.area() < r2.area();
}


