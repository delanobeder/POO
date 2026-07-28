#include "Animal.h"

Animal::Animal(string nome, double peso) :
nome(nome), peso(peso) {
}

Animal::~Animal() {
}

string Animal::getNome() const {
    return nome;
}

double Animal::getPeso() const {
    return peso;
}

void Animal::setNome(string nome) {
    this->nome = nome;
}

void Animal::setPeso(double peso) {
    this->peso = peso;
}

void Animal::imprime() const {
    cout << "Espécie: " << this->getEspecie() << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Peso: " << this->peso << endl;
}

bool Animal::compNome(const Animal* a1, const Animal* a2) {
    return a1->nome < a2->nome;
}

bool Animal::compPeso(const Animal* a1, const Animal* a2) {
    return a1->peso < a2->peso;
}

bool Animal::compEspecie(const Animal* a1, const Animal* a2) {
    if (a1->getEspecie() == a2->getEspecie()) {
        return Animal::compNome(a1, a2);
    } else {
        return a1->getEspecie() < a2->getEspecie();
    }
}