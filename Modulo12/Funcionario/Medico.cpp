#include "Medico.h"

Medico::Medico(string CPF, string nome, string especialidade) :
Funcionario(CPF, nome), especialidade(especialidade) {
}

Medico::~Medico() {

}

string Medico::getEspecialidade() const {
    return especialidade;
}

void Medico::setEspecialidade(string especialidade) {
    this->especialidade = especialidade;
}

string Medico::getProfissao() const {
    return "Médico";
}

void Medico::imprime() const {
    Funcionario::imprime();
    cout << "Especialidade : " << especialidade << endl;
}





