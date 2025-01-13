#include "Animal.h"

Animal::Animal(float weight) :
weight(weight) {
}

Animal::~Animal() {
}

float Animal::getWeight() const {
    return weight;
}



