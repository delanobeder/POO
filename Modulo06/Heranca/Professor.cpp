#include "Professor.h"
#include <iostream>
using namespace std;

Professor::Professor(string nome, int CPF, double salario) : 
Pessoa(nome, CPF), salario(salario) {
}

double Professor::getSalario() const {
    return salario;
}

void Professor::imprime() const {
    Pessoa::imprime();
    cout << "Salário: " << this->getSalario() << endl;
}
