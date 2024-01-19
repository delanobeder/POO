#include "Retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo() : Retangulo(0,0) {
}

Retangulo::Retangulo(double a, double b) {
    ladoa = a;
    ladob = b;
}

Retangulo::~Retangulo() {
}

void Retangulo::imprime() const {
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