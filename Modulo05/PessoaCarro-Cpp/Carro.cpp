#include "Carro.h"
#include "Pessoa.h"
#include <iostream>

using namespace std;

namespace poo {
    // construtor com 4 parâmetros

    Carro::Carro(string marca, string cor, int ano, string placa) : marca(marca),
        cor(cor), ano(ano), placa(placa), dono(NULL) {
    }

    // destrutor da classe

    Carro::~Carro() {
        cout << "Destrutor Carro (" << marca << ", " << cor << ", " << ano << ")" << endl;
    }

    string Carro::getMarca() const {
        return this->marca;
    }

    void Carro::setMarca(string marca) {
        this->marca = marca;
    }

    string Carro::getCor() const {
        return this->cor;
    }

    void Carro::setCor(string cor) {
        this->cor = cor;
    }

    int Carro::getAno() const {
        return this->ano;
    }

    void Carro::setAno(int ano) {
        this->ano = ano;
    }

    string Carro::getPlaca() const  {
        return this->placa;
    }

    void Carro::setPlaca(string placa) {
        this->placa = placa;
    }

    Pessoa *Carro::getDono() const {
        return this->dono;
    }

    void Carro::setDono(Pessoa *dono) {
        this->dono = dono;
    }

    void Carro::imprime() const {
        cout << "Marca: " << this->getMarca() << endl;
        cout << "Cor: " << this->getCor() << endl;
        cout << "Ano: " << this->getAno() << endl;
        cout << "Placa: " << this->getPlaca() << endl;
        if (dono != NULL) {
            cout << "Dono: " << this->getDono()->getNome() << endl;
        }
    }
}