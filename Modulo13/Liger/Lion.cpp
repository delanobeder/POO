#include "Lion.h"

Lion::Lion(int weight) :
Animal(weight) {
}

Lion::~Lion() {
}

int Lion::getWeight() const {
    return Animal::getWeight() * 2;
}

