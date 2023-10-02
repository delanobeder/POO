#include "Coordenador.h"

namespace poo {

    Coordenador::Coordenador(string nome, int CPF, double salario, string curso) :
    Professor(nome, CPF, salario), curso(curso) {
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

}

