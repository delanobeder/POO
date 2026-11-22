#include <set>
#include <iostream>
#include "Pessoa.h"
using namespace std;

int main()
{

    set<int> cjto_ints;
    set<Pessoa> cjto_pessoas;

    cjto_ints.insert(2);
    cjto_ints.insert(1);
    cjto_ints.insert(2);

    for (auto i : cjto_ints)
    {
        cout << i << endl;
    }

    cout << endl;

    cjto_pessoas.insert(Pessoa("Maria", 20));
    cjto_pessoas.insert(Pessoa("João", 18));
    cjto_pessoas.insert(Pessoa("Maria", 20));

    for (auto p : cjto_pessoas)
    {
        p.imprime();
    }

    return 0;
}