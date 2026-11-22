#include "Produto.h"
#include <iostream>
#include <iomanip>
using namespace std;

Produto::Produto(string codigo, string descricao, int estoque, double preco) {
    this->codigo = codigo;
    this->descricao = descricao;
    this->estoque = estoque;
    this->preco = preco;
}

void Produto::setCodigo(string codigo)
{
    this->codigo = codigo;
}

string Produto::getCodigo() const
{
    return this->codigo;
}

void Produto::setDescricao(string descricao)
{
    this->descricao = descricao;
}

string Produto::getDescricao() const
{
    return this->descricao;
}

void Produto::setEstoque(int estoque)
{
    this->estoque = estoque;
}

int Produto::getEstoque() const
{
    return this->estoque;
}

void Produto::setPreco(double preco)
{
    this->preco = preco;
}

double Produto::getPreco() const
{
    return this->preco;
}

void Produto::imprime() const
{
    cout << fixed << setprecision(2);
    cout << "Código: " << this->codigo;
    cout << ", Descricao: " << this->descricao;
    cout << ", Estoque: " << this->estoque;
    cout << ", Preco: " << this->preco << endl;
}

