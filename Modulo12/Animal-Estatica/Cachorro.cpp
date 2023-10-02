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

void Cachorro::imprime() {
    AnimalDomestico::imprime();
    cout << "Espécie: Cachorro" <<  endl;
    cout << "Raça: " << this->raca << endl;
}