#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include "Ponto2D.h"

using namespace std;

// construtor

Ponto2D::Ponto2D(double x, double y) {
    this->x = x;
    this->y = y;
}

// destrutor

Ponto2D::~Ponto2D() {
}

// Métodos getters and setters

double Ponto2D::getX() const {
    return this->x;
}

void Ponto2D::setX (double x) {
    this->x = x;
}

double Ponto2D::getY() const {
    return this->y;
}

void Ponto2D::setY (double y) {
    this->y = y;
}

// Outros métodos da classe

double Ponto2D::distancia(const Ponto2D p) const {
    double dx = this->x - p.x;
    double dy = this->y - p.y;
    return sqrt(dx * dx + dy * dy);
}

void Ponto2D::moveX(double dx) {
    this->x += dx;
}

void Ponto2D::moveY(double dy) {
    this->y += dy;
}

void Ponto2D::imprime() {
    cout << fixed << setprecision(2);
    cout << "(" << this->x << ", " << this->y << ")" << endl;
}