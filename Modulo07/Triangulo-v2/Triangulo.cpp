#include "Triangulo.h"

Triangulo::Triangulo(double lado1, double lado2, double lado3) {
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;
}

double Triangulo::getPerimetro() const {
    return lado1 + lado2 + lado3;
}

double Triangulo::getArea() const {
    cout << "Invocando Triangulo" << endl;
    double p = this->getPerimetro() / 2;
    return sqrt(p * (p - lado1) * (p - lado2) * (p - lado3));
}

bool Triangulo::operator>(const Triangulo& obj) const {
    return this->getArea() > obj.getArea();
}

bool Triangulo::operator>=(const Triangulo& obj) const {
    return (*this > obj || *this == obj);
}

bool Triangulo::operator<(const Triangulo& obj) const {
    return !(*this >= obj);
}

bool Triangulo::operator<=(const Triangulo& obj) const {
    return (*this < obj || *this == obj);
}

bool Triangulo::operator==(const Triangulo& obj) const {
    return this->getArea() == obj.getArea();
}

bool Triangulo::operator!=(const Triangulo& obj) const {
    return !(*this == obj);
}

ostream& operator<<(ostream& os, const Triangulo& obj) {
    os << "Lados: [" << obj.lado1;
    os << ", " << obj.lado2;
    os << ", " << obj.lado3;
    os << "]" << endl;
    os << "Perímetro: " << obj.getPerimetro() << endl;
    os << "Área: " << obj.getArea() << endl;
    return os;
}
