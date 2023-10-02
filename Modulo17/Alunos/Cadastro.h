#ifndef CADASTRO_H
#define CADASTRO_H

#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include "Aluno.h"
using namespace std;

class Cadastro {
public:
    Cadastro(string nomeArquivo);
    virtual ~Cadastro();
    void grava(int nro);
    void imprime();
    void imprimeRA(int RA);
    void imprimePos(int pos);
    void imprimeOrdenado();
    void imprimeAprovados();
    void imprimeSAC();
    void imprimeReprovados();
    static char opcao();
private:
    string nomeArquivo;
    void leitura(vector<Aluno>&);
};

#endif /* CADASTRO_H */

