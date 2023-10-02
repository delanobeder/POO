#include "Universidade.h"

Universidade::Universidade(string nome) :
nome(nome) {
    cout << "[Construindo " << nome << "]" << endl;
}

Universidade::~Universidade() {
    int qtde = departamentos.size();
    for (int i = 0; i < qtde; i++) {
        delete departamentos[i];
    }
    cout << "[Destruindo " << nome << "]" << endl;
}

string Universidade::getNome() const {
    return nome;
}

void Universidade::setNome(string nome) {
    this->nome = nome;
}

void Universidade::adicionaDepartamento(string nome, string sigla) {
    departamentos.push_back(new Departamento(nome, sigla, this));
}

void Universidade::removeDepartamento(string sigla) {
    bool found = false;
    int i = 0;
    
    int qtde = departamentos.size();

    while (i < qtde && !found) {
        // if (departamentos[i]->getSigla().compare(sigla) == 0) {
        if (departamentos[i]->getSigla() == sigla) {
            found = true;
        } else {
            i++;
        }
    }

    if (found) {
        delete departamentos[i];
        departamentos.erase(departamentos.begin()+i);
    }
}

void Universidade::imprime() const {
    int qtde = departamentos.size();
    cout << "Departamentos da " << nome << endl;
    for (int i = 0; i < qtde; i++) {
        departamentos[i]->imprime();
    }
}