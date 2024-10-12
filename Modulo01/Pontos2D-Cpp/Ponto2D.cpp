#include <cmath>
#include <cstdio>
#include "Ponto2D.h"

Ponto2D::Ponto2D(float x, float y) {
    this->x = x;
    this->y = y;
}

Ponto2D::~Ponto2D() {
}

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
    printf("(%.2f, %.2f)\n", this->x, this->y);
}