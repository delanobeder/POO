#ifndef MEDICO_H
#define MEDICO_H

#include "Funcionario.h"

class Medico : public Funcionario {
public:
    Medico(string CPF, string nome, string especialidade);
    virtual ~Medico();
    string getEspecialidade() const;
    void setEspecialidade(string especialidade);
    virtual string getProfissao() const;
    virtual void imprime() const;
private:
    string especialidade;
};

#endif /* MEDICO_H */

