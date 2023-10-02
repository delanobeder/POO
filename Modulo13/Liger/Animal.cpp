#include "Animal.h"

Animal::Animal(int weight) :
weight(weight) {
}

Animal::~Animal() {
}

int Animal::getWeight() const {
    return weight;
}



