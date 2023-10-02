#ifndef COORDENADOR_H
#define COORDENADOR_H

#include "Professor.h"

namespace poo {

    class Coordenador : public Professor {
    public:
        Coordenador(string nome, int CPF, double salario, string curso);
        virtual double getSalario () const;
        string getCurso() const;
        virtual void imprime() const;
    private:
        string curso;
    };

}

#endif /* COORDENADOR_H */

