#include "Funcionario.h"

Funcionario::Funcionario(int CPF, string nome, double salario) : CPF(CPF), nome(nome), salario(salario) {

}

Funcionario::~Funcionario() {
    cout << "Destrutor Funcionario (" << CPF << ") invocado" << endl; 
}

int Funcionario::getCPF() const {
    return CPF;
}

string Funcionario::getNome() const {
    return nome;
}

double Funcionario::getSalario() const {
    return salario;
}

void Funcionario::setSalario(double salario) {
    this->salario = salario;
}

void Funcionario::imprime() const {
    string profissao;
    cout << "Nome : " << nome << endl;
    cout << "CPF : " << CPF << endl;
    cout << "Salário : " << salario << endl;

    switch (getProfissao()) {
        case ENFERMEIRO: {
            profissao = "Enfermeiro";
            break;
        }
        case MEDICO: {
            profissao = "Médico";
            break;
        }
    }
    cout << "Profissão : " << profissao << endl;
}

bool Funcionario::comparaNome(const Funcionario* f1, const Funcionario* f2) {
    return f1->nome < f2->nome;
}
