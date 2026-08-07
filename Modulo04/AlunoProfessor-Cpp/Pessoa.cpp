
#include "Pessoa.h"

int Pessoa::contador = 0;

Pessoa::Pessoa() {
    incrementa();
    cout << "Construtor Pessoa()" << endl;
}

Pessoa::Pessoa(string nome, int idade) :
nome(nome), idade(idade) {
    incrementa();
    cout << "Construtor: " << this->nome << endl;
}

Pessoa::~Pessoa() {
    Pessoa::decrementa();
    cout << "Destrutor: " << this->nome << endl;
}

string Pessoa::getNome() const {
    return nome;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

int Pessoa::getIdade() const {
    return idade;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

void Pessoa::imprime() const {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}

int Pessoa::getContador() {
    return Pessoa::contador;
}

void Pessoa::incrementa() {
    Pessoa::contador++;
}

void Pessoa::decrementa() {
    Pessoa::contador--;
}