#include "Universidade.h"

Universidade::Universidade(string nome) :
nome(nome) {
    cout << "[Construindo " << nome << "]" << endl;
    qtde = 0;
    max = 2;
    departamentos = new Departamento*[max];
}

Universidade::~Universidade() {
    for (int i = 0; i < qtde; i++) {
        delete departamentos[i];
    }
    delete departamentos;
    cout << "[Destruindo " << nome << "]" << endl;
}

string Universidade::getNome() const {
    return nome;
}

void Universidade::setNome(string nome) {
    this->nome = nome;
}

void Universidade::realoca(int tam) {

    // cria um novo array com mudança no tamanho do array

    max = tam;

    Departamento** aux = new Departamento*[max];

    for (int i = 0; i < qtde; i++) {
        aux[i] = departamentos[i];
    }

    delete departamentos; // liberando o antigo array
    departamentos = aux;
}

void Universidade::adicionaDepartamento(string nome, string sigla) {
    if (qtde == max) {
        realoca(max + 5);
    }
    departamentos[qtde++] = new Departamento(nome, sigla, this);
}

void Universidade::removeDepartamento(string sigla) {
    bool found = false;
    int i = 0;

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

        while (i < qtde) {
            departamentos[i] = departamentos[i + 1];
            i++;
        }

        qtde = qtde - 1;

        if (qtde == max - 5) {
            realoca(max - 5);
        }
    }
}

void Universidade::imprime() const {
    cout << "Departamentos da " << nome << endl;
    for (int i = 0; i < qtde; i++) {
        departamentos[i]->imprime();
    }
}