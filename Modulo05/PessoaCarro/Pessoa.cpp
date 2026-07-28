#include "Pessoa.h"
#include <iostream>
#include <cstring>

namespace poo {
    // construtor com 2 parâmetros

    Pessoa::Pessoa(string nome, string CPF) : nome(nome), CPF(CPF) {
        qtde = 0;
        memset(carros, 0, 3 * sizeof(Carro *));
        for (int i = 0; i < 3; i++) {
            carros[i] = NULL;
        }
    }

    // destrutor da classe

    Pessoa::~Pessoa() {
        cout << "Destrutor Pessoa (" << nome << ", " << CPF << ")" << endl;
    }

    string Pessoa::getNome() const {
        return this->nome;
    }

    void Pessoa::setNome(string nome) {
        this->nome = nome;
    }

    string Pessoa::getCPF() const {
        return this->CPF;
    }

    void Pessoa::setCPF(string CPF) {
        this->CPF = CPF;
    }

    bool Pessoa::adicionaCarro(Carro* carro) {
        bool ok = (qtde < 3);
        if (ok) {
            carros[qtde++] = carro;
            carro->setDono(this);
        }
        return ok;
    }

    Carro *Pessoa::removeCarro(string placa) {
        Carro *carro = NULL;
        int pos = 0;
        while (pos < qtde && carro == NULL) {
            //if (carros[pos]->getPlaca().compare(placa) == 0) { 
            if (carros[pos]->getPlaca() == placa) {
                carro = carros[pos];
            }
            else {
                pos++;
            }
        }

        if (carro != NULL) {
            while (pos < qtde - 1) {
                carros[pos] = carros[pos + 1];
                pos++;
            }
            carros[pos] = NULL; 

            qtde = qtde - 1;
        }

        return carro;
    }

    void Pessoa::imprime() const {
        cout << "-------------------------------------" << endl;
        cout << "Nome: " << this->getNome() << endl;
        cout << "CPF: " << this->getCPF() << endl;
        cout << "<Carros> " << endl;
        for (int i = 0; i < qtde; i++) {
            if (carros[i] != NULL) {
                this->carros[i]->imprime();
                cout << endl;
            }
        }
    }
}