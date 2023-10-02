#include "Peixe.h"
#include "Pessoa.h"
#include "Cachorro.h"
using namespace std;

int main() {
    Pessoa* pessoa = new Pessoa("Joao", 12);
    
    Peixe* nemo = new Peixe("Nemo", 0.2, "Água salgada");
    Peixe* dory = new Peixe("Dory", 0.15, "Água doce");
    Cachorro* teo = new Cachorro("Teo", 6.2, "pug");
    
    cout << endl;
    
    pessoa->adiciona(nemo);
    pessoa->adiciona(dory);
    pessoa->adiciona(teo);
    pessoa->imprime();
    
    pessoa->remove("Dory");
    
    cout << endl;
    
    pessoa->imprime();
    
    delete nemo;
    delete dory;
    delete teo;
    delete pessoa;
    
    return 0;
}

