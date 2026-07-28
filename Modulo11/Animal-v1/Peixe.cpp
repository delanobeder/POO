#include "Peixe.h"

Peixe::Peixe(string nome, double peso, string habitat) :
Animal(nome, peso), habitat(habitat) {
}

Peixe::~Peixe() {
}

string Peixe::getHabitat() const {
    return habitat;
}

void Peixe::setHabitat(string habitat) {
    this->habitat = habitat;
}

string Peixe::getEspecie() const {
    return "Peixe";
}

void Peixe::imprime() const {
    Animal::imprime();
    cout << "Habitat: " << this->habitat << endl;
}