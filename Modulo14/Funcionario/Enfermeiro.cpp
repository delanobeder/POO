#include "Enfermeiro.h"

Enfermeiro::Enfermeiro(int CPF, string nome, int CRE) :
Funcionario(CPF, nome), CRE(CRE) {
}

Enfermeiro::~Enfermeiro() {
}

string Enfermeiro::getProfissao() const {
    return "Enfermeiro";
}

void Enfermeiro::imprime() const {
    Funcionario::imprime();
    cout << "CRE : " << CRE << endl;
}

