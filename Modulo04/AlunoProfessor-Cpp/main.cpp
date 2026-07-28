#include "Pessoa.h"
#include "Aluno.h"
#include "Professor.h"

int main() {

    Pessoa p1("Fulano da Silva", 18);
    Pessoa p2("Sincrano Andrade", 19);
    Pessoa p3("Beltrano dos Santos", 18);
    Aluno a1("Aluno teste", 18, 927450);
    Professor prof1("Professor Teste", 42, 5000);

    Pessoa cadastro[5];

    cadastro[0] = p1;
    cadastro[1] = p2;
    cadastro[2] = p3;
    cadastro[3] = a1;
    cadastro[4] = prof1;
    
    prof1.setIdade(43);

    prof1.imprime();
    cout << endl;
    cadastro[4].imprime();

    return 0;
}
