#ifndef CADASTRO_H
#define CADASTRO_H

#include "Pessoa.h"
#include <string>
using namespace std;

class Cadastro {
private:
    string fileName;
    bool salva(fstream& ofs, Pessoa& p);
    bool recupera(fstream& ifs, Pessoa& p);
public:
    Cadastro(string fileName);
    void grava();
    void imprime();
    void imprime(int pos);
};

#endif
