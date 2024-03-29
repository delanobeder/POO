#include "Departamento.h"
#include "Universidade.h"

#include <iostream>
using namespace std;

Departamento::Departamento(string nome, string sigla, Universidade* universidade) :
nome(nome), sigla(sigla), universidade(universidade) {
    cout << "[Construindo departamento " << sigla << "]" << endl;
}

Departamento::~Departamento() {
    cout << "[Destruindo departamento " << sigla << "]" << endl;
}

string Departamento::getNome() const {
    return nome;
}

void Departamento::setNome(string nome) {
    this->nome = nome;
}

string Departamento::getSigla() const {
    return sigla;
}

void Departamento::setSigla(string sigla) {
    this->sigla = sigla;
}

Universidade* Departamento::getUniversidade() const {
    return universidade;
}

void Departamento::setUniversidade(Universidade* universidade) {
    this->universidade = universidade;
}

void Departamento::imprime() const {
    cout << "Departamento " << nome << " de sigla " << sigla;
    cout << " (" << universidade->getNome() << ")" << endl;
}




