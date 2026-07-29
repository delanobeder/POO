#include "Funcionario.h"

namespace poo {

    Funcionario::Funcionario(string CPF, string nome) : CPF(CPF), nome(nome) {
    }

    Funcionario::~Funcionario() {
    }

    void Funcionario::imprime() const {
        cout << "Nome : " << nome << endl;
        cout << "CPF : " << CPF << endl;
        cout << "Profissão : " << getProfissao() << endl;
    }

    bool Funcionario::comparaCPF(Funcionario *f1, Funcionario *f2) {
        return f1->CPF < f2->CPF;
    }

    bool Funcionario::comparaProfissao(Funcionario *f1, Funcionario *f2) {
        string profissao1 = f1->getProfissao();
        string profissao2 = f2->getProfissao();

        if (profissao1 != profissao2) {
            return profissao1 < profissao2;
        } else {
            return Funcionario::comparaCPF(f1, f2);
        }
    }

}
