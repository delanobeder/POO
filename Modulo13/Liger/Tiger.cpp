#include "Tiger.h"

Tiger::Tiger(float weight) :
Animal(weight) {
}

Tiger::~Tiger() {
}

float Tiger::getWeight() const {
    return Animal::getWeight() * 3;
}
