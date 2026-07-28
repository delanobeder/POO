#include "Triangulo.h"

Triangulo::Triangulo(double lado) : Triangulo(lado, lado, lado) {
}

Triangulo::Triangulo(double lado1, double lado2, double lado3) {
    lados[0] = lado1;
    lados[1] = lado2;
    lados[2] = lado3;
}

Triangulo::~Triangulo() {
}

double Triangulo::getPerimetro() const {
    double soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += lados[i];
    }
    return soma;
}

double Triangulo::getArea() const {
    double semi = this->getPerimetro() / 2;
    double produto = semi;
    for (int i = 0; i < 3; i++) {
        produto *= semi - lados[i];
    }
    return sqrt(produto);
}

void Triangulo::imprime() const {
    cout << fixed;
    cout << setprecision(2);
    cout << "Lados: ";
    for (int i = 0; i < 3; i++) {
        cout << lados[i] << " ";
    }
    cout << endl;
    cout << "Perímetro: " << this->getPerimetro() << endl;
    cout << "Área: " << this->getArea() << endl;
}

int Triangulo::compare(const Triangulo& t) const {
    double diff = this->getArea() - t.getArea();
    return (diff < 0) ? -1 : (diff > 0) ? 1 : 0;
}
