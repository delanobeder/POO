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

bool AnimalDomestico::operator<(AnimalDomestico& animal) {
    return this->nome < animal.nome;
}