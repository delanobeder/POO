#ifndef ALUNO_H
#define ALUNO_H

#include "Carro.h"
#include <string>

using namespace std;

namespace poo {
    class Pessoa {
    public:
        Pessoa(string nome, string CPF);
        virtual ~Pessoa();
        string getNome() const;
        void setNome(string nome);
        string getCPF() const;
        void setCPF(string CPF);
        bool adicionaCarro(Carro *carro);
        Carro *removeCarro(string placa);
        void imprime() const;

    private:
        string nome;
        string CPF;
        Carro *carros[3];
        int qtde;
    };
}
#endif // ALUNO_H