#ifndef CADASTRO_H
#define CADASTRO_H

#include "Funcionario.h"
#include <vector>
using namespace std;

class Cadastro {
public:
    Cadastro(string fileName);
    virtual ~Cadastro();
    bool adiciona(int tipo);
    void imprime(bool sorted = false);
    void imprime(int CPF);
    bool remove(int CPF);
    bool atualiza(int CPF);
    static char opcao();
private:
    void grava();
    void recupera();
    Funcionario* leitura(string line);
    int indice(int CPF);

    string fileName;
    vector<Funcionario *> funcionarios;
    static const char delimitador = '#';
};

#endif /* CADASTRO_H */
