#ifndef PESSSOA_H
#define PESSOA_H

#include <string>
using namespace std;

namespace poo {

    class Pessoa {
    public:
        Pessoa() {}

        Pessoa(string nome) : nome(nome) {
        }

        // função friend (para impressão via cout)

        friend ostream &operator<<(ostream &os, const Pessoa &obj) {
            os << obj.nome;
            return os;
        }

    private:
        string nome;
    };

}

#endif /* QUEUE_H */