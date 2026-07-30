#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include "Ponto2D.h"

using namespace std;

// construtor

Ponto2D::Ponto2D(float x, float y) {
    this->x = x;
    this->y = y;
}

// destrutor

Ponto2D::~Ponto2D() {
}

// Métodos getters and setters

float Ponto2D::getX() const {
    return this->x;
}

void Ponto2D::setX (float x) {
    this->x = x;
}

float Ponto2D::getY() const {
    return this->y;
}

void Ponto2D::setY (float y) {
    this->y = y;
}

// Outros métodos da classe

float Ponto2D::distancia(const Ponto2D p) const {
    float dx = this->x - p.x;
    float dy = this->y - p.y;
    return ((float)sqrt(dx * dx + dy * dy));
}

void Ponto2D::moveX(float dx) {
    this->x += dx;
}

void Ponto2D::moveY(float dy) {
    this->y += dy;
}

void Ponto2D::imprime() {
    cout << fixed << setprecision(2);
    cout << "(" << this->x << ", " << this->y << ")" << endl;
}