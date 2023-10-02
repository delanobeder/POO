#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade) :
nome(nome), idade(idade) {
}

Pessoa::~Pessoa() {
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
    int pos = 0;
    int size = animais.size();
    while (pos <  size && *animais[pos] < *a) {
        pos++;
    }
    animais.emplace(animais.begin() + pos, a);
    a->setDono(this);
    return true;
}

bool Pessoa::remove(string nome) {
    bool achou = false;
    for (unsigned long int i = 0; !achou && i < animais.size(); i++) {
        AnimalDomestico* animal = animais[i];
        if (animal->getNome() == nome) {
            // Remove o animal na posição "i"
            animais.erase(animais.begin() + i);
            animal->setDono(NULL);
            achou = true;
        }
    }
    return achou;
}

void Pessoa::imprime() {
    cout << "========== Pessoa ==========" << endl;
    cout << "Nome:  " << nome << endl;
    cout << "Idade: " << idade << endl;
    if (animais.size() > 0) {
        for (unsigned long int i = 0; i < animais.size(); i++) {
            cout << "----------------------------" << endl;
            animais[i]->imprime();
        }
        cout << "----------------------------" << endl;
    }
}
