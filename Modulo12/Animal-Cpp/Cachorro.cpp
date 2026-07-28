#include "Cachorro.h"

Cachorro::Cachorro(string nome, double peso, string raca) :
Animal(nome, peso), raca(raca) {
}

Cachorro::~Cachorro() {
}

string Cachorro::getRaca() const {
    return raca;
}

void Cachorro::setRaca(string raca) {
    this->raca = raca;
}

string Cachorro::getEspecie() const {
    return "Cachorro";
}

void Cachorro::imprime() const {
    Animal::imprime();
    cout << "Raça: " << this->raca << endl;
}