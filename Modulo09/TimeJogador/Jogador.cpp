#include "Jogador.h"
#include "Time.h"

#include <iostream>
using namespace std;

Jogador::Jogador(string nome, int idade, string posicao) :
nome(nome), idade(idade), posicao(posicao) {
    cout << "Criando jogador " << nome << endl;
}

Jogador::~Jogador() {
    cout << "Destruindo jogador " << nome << endl;
}

string Jogador::getNome() const {
    return nome;
}

void Jogador::setNome(string nome) {
    this->nome = nome;
}

int Jogador::getIdade() const {
    return idade;
}

void Jogador::setIdade(int idade) {
    this->idade = idade;
}

string Jogador::getPosicao() const {
    return posicao;
}

void Jogador::setPosicao(string posicao) {
    this->posicao = posicao;
}

Time* Jogador::getTime() const {
    return time;
}

void Jogador::setTime(Time* time) {
    this->time = time;
}

void Jogador::imprime() const {
    cout << nome << ", " << posicao << ", " << idade << " anos";
    if (time != NULL) {
        cout << " (Joga no " << time->getNome() << ")";
    } else {
        cout << " (Aposentado/Desempregado)";
    }
    cout << endl;
}