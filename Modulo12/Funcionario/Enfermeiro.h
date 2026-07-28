#ifndef ENFERMEIRO_H
#define ENFERMEIRO_H

#include "Funcionario.h"

class Enfermeiro : public Funcionario{
public:
    Enfermeiro(string CPF, string nome, int CRE);
    virtual ~Enfermeiro();
    int getCRE() const;
    void setCRE(int CRE);
    virtual string getProfissao() const;
    virtual void imprime() const;
private:
    int CRE; // Conselho Regional de Enfermagem
};

#endif /* ENFERMEIRO_H */

