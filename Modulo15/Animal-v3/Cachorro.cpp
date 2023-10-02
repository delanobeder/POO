#include "Cachorro.h"

Cachorro::Cachorro(string nome, double peso, string raca) :
AnimalDomestico(nome, peso), raca(raca) {
}

Cachorro::~Cachorro() {
}

string Cachorro::getRaca() const {
    return raca;
}

void Cachorro::setRaca(string raca) {
    this->raca = raca;
}

string Cachorro::getEspecie() {
    return "Cachorro";
}

void Cachorro::imprime() {
    AnimalDomestico::imprime();
    cout << "Raça: " << this->raca << endl;
}