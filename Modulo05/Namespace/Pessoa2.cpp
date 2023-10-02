#include "Pessoa2.h"

#include "Pessoa2.h"

namespace ns2 {

    Pessoa::Pessoa(string nome, string endereco) :
    nome(nome), endereco(endereco) {
    }

    void Pessoa::imprime() const {
        cout << "Nome: " << nome << endl;
        cout << "Endereço: " << endereco << endl;
    }

}
