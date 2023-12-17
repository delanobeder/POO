#include "Coordenador.h"
#include <iostream>
using namespace std;

Coordenador::Coordenador(string nome, int CPF, double salario, string curso) : 
    Professor(nome, CPF, salario), curso(curso) {
}

Coordenador::~Coordenador() {
    cout << "Destrutor Coordenador: (" << curso << ")" << endl;
}

double Coordenador::getSalario() const {
    return Professor::getSalario() + 2000;
}

string Coordenador::getCurso() const {
    return curso;
}

void Coordenador::imprime() const {
    Professor::imprime();
    cout << "Curso: " << getCurso() << endl;
}
