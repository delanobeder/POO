#include "Pessoa.h"
#include <iostream>
using namespace std;

Pessoa::Pessoa(string nome, int CPF) : nome(nome), CPF(CPF) {
    cout << "Construtor: (" << nome << ", " << CPF << ")" << endl;
}

Pessoa::~Pessoa() {
    cout << "Destrutor Pessoa: (" << nome << ", " << CPF << ")" << endl << endl;
}

int Pessoa::getCPF() const {
    return CPF;
}

void Pessoa::setCPF(int CPF) {
    this->CPF = CPF;
}

string Pessoa::getNome() const {
    return nome;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

void Pessoa::imprime() const {
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << CPF << endl;
}

bool Pessoa::comparaNome(Pessoa* p1, Pessoa* p2) {
    return p1->nome < p2->nome;
}

bool Pessoa::comparaCPF(Pessoa* p1, Pessoa* p2) {
    return p1->CPF < p2->CPF;
}