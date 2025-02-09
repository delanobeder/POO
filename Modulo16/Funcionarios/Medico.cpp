#include "Medico.h"

Medico::Medico(int CPF, string nome, double salario, string especialidade) :
Funcionario(CPF, nome, salario), especialidade(especialidade) {
}

Medico::~Medico() {
    cout << "Destrutor Medico (" << this->getCPF() << ") invocado" << endl;
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



