#ifndef MEDICO_H
#define MEDICO_H

#include "Funcionario.h"

class Medico : public Funcionario {
public:
    Medico(int CPF, string nome, double salario, string especialidade);
    virtual ~Medico();
    virtual int getProfissao() const;
    string getEspecialidade() const;
    virtual void imprime() const;
private:
    string especialidade;
};

#endif /* MEDICO_H */

