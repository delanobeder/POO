#include "Complexo.h"

Complexo::Complexo(double real, double imaginaria) :
real(real), imaginaria(imaginaria) {
}

Complexo::~Complexo() {
}

void Complexo::imprime() {
    cout << *this << endl;
}

// operadores aritméticos binários

Complexo Complexo::operator+(const Complexo& obj) const {
    double r = this->real + obj.real;
    double i = this->imaginaria + obj.imaginaria;
    return Complexo(r, i);
}

Complexo Complexo::operator-(const Complexo& obj) const {
    return *this + -obj;
}

Complexo Complexo::operator*(const Complexo& obj) const {
    double a = this->real;
    double b = this->imaginaria;
    double c = obj.real;
    double d = obj.imaginaria;

    double r = a * c - b * d;
    double i = a * d + b * c;
    return Complexo(r, i);

    /* 
     * double r = this->real * obj.real - this->imaginaria * obj.imaginaria;
     * double i = this->real * obj.imaginaria + this->imaginaria * obj.real;
     * return Complexo(r,i);
     */

}

Complexo Complexo::operator/(const Complexo& obj) const {
    double a = this->real;
    double b = this->imaginaria;
    double c = obj.real;
    double d = obj.imaginaria;

    double r = (a * c + b * d) / (c * c + d * d);
    double i = (b * c - a * d) / (c * c + d * d);
    return Complexo(r, i);
}

// operador aritmético unário

Complexo Complexo::operator-() const {
    return Complexo(-this->real, -this->imaginaria);
}

// função friend (para impressão via cout)

ostream& operator<<(ostream& os, const Complexo& obj) {
    /* bool flag = obj.imaginaria >= 0;
    os << obj.real << (flag ? " + " : " - ");
    os << (flag ? obj.imaginaria : -obj.imaginaria) << "i"; */

    if (obj.imaginaria >= 0) {
        os << obj.real << " + " << obj.imaginaria << "i";
    } else {
        os << obj.real << " - " << -obj.imaginaria << "i";
    }
    return os;
}