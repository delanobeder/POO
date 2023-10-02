#include "Pessoa.h"
#include <iostream>
using namespace std;

Pessoa::Pessoa(string nome, int CPF) : nome(nome), CPF(CPF) {
    cout << "Construtor: (" << nome << ", " << CPF << ")" << endl;
}

Pessoa::~Pessoa() {
    cout << "Destrutor: (" << nome << ", " << CPF << ")" << endl;
}

int Pessoa::getCPF() const {
    return CPF;
}

string Pessoa::getNome() const {
    return nome;
}

void Pessoa::imprime() const {
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << CPF << endl;
}