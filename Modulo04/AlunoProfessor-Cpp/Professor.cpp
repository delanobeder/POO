#include "Professor.h"

Professor::Professor(string nome, int idade, float salario) :
Pessoa(nome, idade), salario(salario) {
}

float Professor::getSalario() const {
    return salario;
}

void Professor::setSalario(float salario) {
    this->salario = salario;
}

void Professor::imprime() const {
    Pessoa::imprime();
    cout << "Salario: " << salario << endl;
}

