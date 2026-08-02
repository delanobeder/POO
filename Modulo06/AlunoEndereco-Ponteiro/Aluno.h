#ifndef ALUNO_H
#define ALUNO_H

#include "Endereco.h"
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno(string nome, int RA);
        Aluno(string nome, int RA, Endereco* endereco);
        virtual ~Aluno();
        string getNome() const;
        void setNome(string val);
        int getRA() const;
        void setRA(int val);
        Endereco* getEndereco() const;
        void setEndereco(Endereco* val);
        void imprime() const;
    private:
        string nome;
        int RA;
        Endereco* endereco;
};

#endif // ALUNO_H