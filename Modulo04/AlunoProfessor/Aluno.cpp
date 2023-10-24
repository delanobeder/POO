#include "Aluno.h"

// Pessoa(nome, idade) <= chamada do construtor da classe base 
Aluno::Aluno(string nome, int idade, int RA) : Pessoa(nome, idade), RA(RA) {
}

int Aluno::getRA() const {
    return RA;
}

void Aluno::setRA(int RA) {
    this->RA = RA;
}

void Aluno::imprime() const {
    Pessoa::imprime();
    cout << "RA: " << RA << endl;
}