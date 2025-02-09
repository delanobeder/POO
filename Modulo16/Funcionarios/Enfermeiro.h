#ifndef ENFERMEIRO_H
#define ENFERMEIRO_H

#include "Funcionario.h"

class Enfermeiro : public Funcionario{
public:
    Enfermeiro(int CPF, string nome, double salario, int CRE);
    virtual ~Enfermeiro();
    virtual int getProfissao() const;
    int getCRE() const;
    virtual void imprime() const;
private:
    int CRE; // Conselho Regional de Enfermagem
};

#endif /* ENFERMEIRO_H */

