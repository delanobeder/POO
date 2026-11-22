#ifndef __LOJA_H__
#define __LOJA_H__
#include "Produto.h"
#include <map>
using namespace std;
class Loja
{
public:
    bool adiciona(Produto *p);
    bool remove(string codigo);
    double vende(string codigo, int qtde);

    void imprime() const;
private:
    map<string, Produto *> catalogo;
};

#endif // __LOJA_H__