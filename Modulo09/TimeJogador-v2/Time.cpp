#include "Time.h"
#include <iostream>
#include <cstring>
using namespace std;

Time::Time(string nome) :
nome(nome) {
    cout << "Criando time " << nome << endl;
    this->elenco.reserve(22);
}

Time::~Time() {
    cout << "Destruindo time " << nome << endl;
}

string Time::getNome() const {
    return nome;
}

void Time::setNome(string nome) {
    this->nome = nome;
}

void Time::adicionaJogador(int numero, Jogador* jogador) {
    elenco[numero - 1] = jogador;
    jogador->setTime(this);
}

void Time::removeJogador(int numero) {
    elenco[numero - 1]->setTime(NULL);
    elenco[numero - 1] = NULL;
}

void Time::imprime() const {
    cout << "Elenco do " << nome << endl;
    for (int i = 0; i < 22; i++) {
        if (elenco[i] != NULL) {
            cout << "(" << (i + 1) << ") ";
            elenco[i]->imprime();
        }
    }
}

