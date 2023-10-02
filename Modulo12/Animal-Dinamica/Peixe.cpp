#include "Peixe.h"

Peixe::Peixe(string nome, double peso, string habitat) :
AnimalDomestico(nome, peso), habitat(habitat) {
}

Peixe::~Peixe() {
}

string Peixe::getHabitat() const {
    return habitat;
}

void Peixe::setHabitat(string habitat) {
    this->habitat = habitat;
}

void Peixe::imprime() {
    AnimalDomestico::imprime();
    cout << "Espécie: " << "Peixe" << endl;
    cout << "Habitat: " << this->habitat << endl;
}