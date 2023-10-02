#include "Pessoa.h"
#include <iostream>
using namespace std;

Pessoa::Pessoa() { 
    cout << "Construtor 0 parâmetros" << endl; 
}

Pessoa::Pessoa(string nome, int idade) {
  cout << "Construtor 2 parâmetros" << endl;
  this->nome = nome;
  this->idade = idade;
}

Pessoa::Pessoa(const Pessoa &objeto) {
  cout << "Construtor Copia" << endl;
  this->nome = objeto.nome;
  this->idade = objeto.idade;
}

void Pessoa::setIdade(int idade) {
  this->idade = idade;
}

void Pessoa::imprime() {
  cout << "Nome: " << nome << ", idade: " << idade << endl;
}