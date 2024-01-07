#include "Enfermeiro.h"

Enfermeiro::Enfermeiro(string CPF, string nome, int CRE) :
Funcionario(CPF, nome), CRE(CRE) {
}

Enfermeiro::~Enfermeiro() {
}

int Enfermeiro::getCRE() const {
    return CRE;
}

void Enfermeiro::setCRE(int CRE) {
    this->CRE = CRE;
}

string Enfermeiro::getProfissao() const {
    return "Enfermeiro";
}

void Enfermeiro::imprime() const {
    Funcionario::imprime();
    cout << "CRE : " << CRE << endl;
}

