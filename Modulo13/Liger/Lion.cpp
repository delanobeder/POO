#include "Lion.h"

Lion::Lion(float weight) :
Animal(weight) {
}

Lion::~Lion() {
}

float Lion::getWeight() const {
    return Animal::getWeight() * 2;
}

