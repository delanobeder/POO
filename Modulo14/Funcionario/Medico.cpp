#include "Medico.h"

Medico::Medico(int CPF, string nome, string especialidade) :
Funcionario(CPF, nome), especialidade(especialidade) {
}

Medico::~Medico() {

}

string Medico::getProfissao() const {
    return "Médico";
}

void Medico::imprime() const {
    Funcionario::imprime();
    cout << "Especialidade : " << especialidade << endl;
}





