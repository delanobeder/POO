#include "Professor.h"
#include <iostream>
using namespace std;

namespace poo {
    
    Professor::Professor(string nome, int CPF, double salario) : Pessoa(nome, CPF), salario(salario) {
    }

    Professor::~Professor() {
        cout << "Destrutor Professor: (" << salario << ")" << endl;
    }

    double Professor::getSalario() const {
        return salario;
    }

    void Professor::imprime() const {
        Pessoa::imprime();
        cout << "Salário: " << this->getSalario() << endl;
    }
    
}
