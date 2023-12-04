#include "Pessoa.h"
#include <algorithm>
using namespace std;

Pessoa::Pessoa(string nome, int idade) :
nome(nome), idade(idade) {
    cout << "Construindo Pessoa: [" << nome << "]" << endl;
    qtde = 0;
    max = 2;
    animais = new AnimalDomestico*[max];
}

Pessoa::~Pessoa() {
    cout << "Destruindo Pessoa: [" << nome << "]" << endl;
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

bool Pessoa::adiciona(AnimalDomestico* a) {
    if (qtde == max) {
        realoca(max + 5);
    }
    a->setDono(this);
    animais[qtde++] = a;
    return true;
}

void Pessoa::realoca(int tam) {
    max = tam;
    AnimalDomestico** aux = new AnimalDomestico*[max];
    for (int i = 0; i < qtde; i++) {
        aux[i] = animais[i];
    }
    delete animais; // liberando o antigo array
    animais = aux;
}

bool Pessoa::remove(string nome) {
    bool found = false;
    int i = 0;

    while (i < qtde && !found) {
        // if (animais[i]->getNome().compare(nome) == 0) {
        if (animais[i]->getNome() == nome) {
            found = true;
        } else {
            i++;
        }
    }

    if (found) {
        animais[i]->setDono(NULL);

        while (i < qtde - 1) {
            animais[i] = animais[i + 1];
            i++;
        }
        animais[qtde - 1] = NULL;
        qtde = qtde - 1;

        if (qtde == max - 5) {
            realoca(max - 5);
        }
    }
    return found;
}

void Pessoa::imprime() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "=== Animais === " << endl;
    for (int i = 0; i < qtde; i++) {
        animais[i]->imprime();
        cout << endl;
    }
}
