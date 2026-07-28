#include "Pessoa1.h"

namespace ns1 {

    Pessoa::Pessoa(string nome, int idade) :
    nome(nome), idade(idade) {
    }

    void Pessoa::imprime() const {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }

}
