#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa() {
}

Pessoa::Pessoa(string nome, int idade) : nome(nome), idade(idade) {
}

Pessoa::~Pessoa() {
}

void Pessoa::imprime() const {
    cout << "Pessoa : " << nome << ", " << idade << endl;
}

bool Pessoa::compara(const Pessoa p1, const Pessoa p2) {
    if (p1.idade == p2.idade) {
        return p1.nome < p2.nome;
    } else {
        return p1.idade < p2.idade;
    }
}