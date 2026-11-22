#include "Loja.h"
#include <iostream>
using namespace std;

bool Loja::adiciona(Produto *p)
{
    bool ok = false;
    string codigo = p->getCodigo();

    // Checa se produto encontra-se no catalogo

    auto it = this->catalogo.find(codigo);
    if (it == this->catalogo.end()) // não achou
    {
        this->catalogo.insert({codigo, p});
        ok = true;
    }

    return ok;
}

bool Loja::remove(string codigo)
{
    return (this->catalogo.erase(codigo) == 1);
}

double Loja::vende(string codigo, int qtde) {

    double valor = -1;
    // Checa se produto encontra-se no catálogo
    auto it = this->catalogo.find(codigo);
    if (it != this->catalogo.end()) // achou
    {
        Produto* p = it->second;
        int estoque = p->getEstoque(); 
        // Checa estoque do produto

        if (estoque >= qtde) {
            p->setEstoque(estoque - qtde);
            valor = p->getPreco() * qtde;
        }
    }

    return valor;
}

void Loja::imprime() const
{
    for (auto it = this->catalogo.begin(); it != catalogo.end(); ++it)
    {
        cout << "[Chave: " << it->first << "] => ";
        (it->second)->imprime();
    }
}
