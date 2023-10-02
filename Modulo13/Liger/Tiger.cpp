#include "Tiger.h"

Tiger::Tiger(int weight) :
Animal(weight) {
}

Tiger::~Tiger() {
}

int Tiger::getWeight() const {
    return Animal::getWeight() * 3;
}
