#include "Medico.h"

Medico::Medico(int CPF, string nome, double salario, string especialidade) :
Funcionario(CPF, nome, salario), especialidade(especialidade) {
}

Medico::~Medico() {
}

int Medico::getProfissao() const {
    return MEDICO;
}

string Medico::getEspecialidade() const {
    return especialidade;
}

void Medico::imprime() const {
    Funcionario::imprime();
    cout << "Especialidade : " << especialidade << endl;
}



