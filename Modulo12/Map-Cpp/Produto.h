#ifndef __PRODUTO_H__
#define __PRODUTO_H__

#include <string>
using namespace std;

class Produto
{
public:
    Produto(string codigo, string descricao, int estoque, double preco);

    void setCodigo(string);
    string getCodigo() const;
    void setDescricao(string);
    string getDescricao() const;
    void setEstoque(int estoque);
    int getEstoque() const;
    void setPreco(double preco);
    double getPreco() const;

    void imprime() const;

private:
    string codigo;
    string descricao;
    int estoque;
    double preco;
};

#endif // __PRODUTO_H__