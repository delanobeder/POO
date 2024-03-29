#include "Aluno.h"
#include <iostream>

using namespace std;

// construtor com 3 parâmetros

Aluno::Aluno(string nome, int RA, Endereco& endereco) : nome(nome), RA(RA),
endereco(endereco) {
}

// destrutor da classe

Aluno::~Aluno() {
    cout << "Destrutor Aluno (" << nome << ", " << RA << ")" << endl;
    
}

string Aluno::getNome() const {
    return nome;
}

void Aluno::setNome(string val) {
    nome = val;
}

int Aluno::getRA() const {
    return RA;
}

void Aluno::setRA(int val) {
    RA = val;
}

Endereco& Aluno::getEndereco() const {
    return endereco;
}

void Aluno::setEndereco(Endereco& val) {
    endereco = val;
}

void Aluno::imprime() const {
    cout << "-------------------------------------" << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "RA: " << this->getRA() << endl;
    cout << "<Endereco>" << endl;
    this->getEndereco().imprime();
}