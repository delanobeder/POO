#include "AnimalDomestico.h"

AnimalDomestico::AnimalDomestico(string nome, double peso) :
nome(nome), peso(peso) {
}

AnimalDomestico::~AnimalDomestico() {
}

string AnimalDomestico::getNome() const {
    return nome;
}

double AnimalDomestico::getPeso() const {
    return peso;
}

void AnimalDomestico::setNome(string nome) {
    this->nome = nome;
}

void AnimalDomestico::setPeso(double peso) {
    this->peso = peso;
}

Pessoa* AnimalDomestico::getDono() const {
    return dono;
}

void AnimalDomestico::setDono(Pessoa* dono) {
    this->dono = dono;
}

void AnimalDomestico::imprime() {
    cout << "Espécie: " << this->getEspecie() << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Peso: " << this->peso << endl;
}

bool AnimalDomestico::compNome(const AnimalDomestico* a1, const AnimalDomestico* a2) {
    return a1->nome < a2->nome;
}

bool AnimalDomestico::compPeso(const AnimalDomestico* a1, const AnimalDomestico* a2) {
    return a1->peso < a2->peso;
}

bool AnimalDomestico::compEspecie(const AnimalDomestico* a1, const AnimalDomestico* a2) {
    if (a1->getEspecie() == a2->getEspecie()) {
        return AnimalDomestico::compNome(a1, a2);
    } else {
        return a1->getEspecie() < a2->getEspecie();
    }
}