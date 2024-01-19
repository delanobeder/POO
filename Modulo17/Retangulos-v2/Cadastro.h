#ifndef CADASTRO_H
#define CADASTRO_H

#include "Retangulo.h"
#include <string>
using namespace std;

class Cadastro {
private:
    string fileName;
    bool salva(fstream& fs, Retangulo& r);
    bool recupera(fstream& fs, Retangulo& r);
public:
    Cadastro(string fileName);
    void grava();
    void imprime();
    void imprime(int pos);
    void altera(int pos);
    void ordenaArquivo();
};

#endif
