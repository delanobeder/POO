#include "Peixe.h"
#include "Pessoa.h"
#include "Cachorro.h"

using namespace std;

int main() {
    
    Pessoa* pessoa = new Pessoa("Joao", 12);
    
    Peixe* nemo = new Peixe("Nemo", 0.15, "Água salgada");
    
    pessoa->adiciona(nemo);
    
    Peixe* dory = new Peixe("Dory", 0.2, "Água doce");
    
    pessoa->adiciona(dory);
    
    Cachorro* teo = new Cachorro("Teo", 6.2, "pug");
    
    pessoa->adiciona(teo);
    
    cout << "================== SEM ORDENAÇÃO ==================" << endl << endl;
    
    pessoa->imprime();
    
    cout << endl;
    
    cout << "================== ORDENAÇÃO (NOME) ==================" << endl << endl;
    
    pessoa->imprime(NOME);
    
    cout << endl;
    
    cout << "================== ORDENAÇÃO (PESO) ==================" << endl << endl;
    
    pessoa->imprime(PESO);
    
    cout << endl;
    
    cout << "================== ORDENAÇÃO (ESPECIE) ==================" << endl << endl;
    
    pessoa->imprime(ESPECIE);
    
    cout << endl;
    
    cout << "================== REMOÇÃO DE UM ELEMENTO ==================" << endl << endl;
        
    pessoa->remove("Dory");
    
    pessoa->imprime();
    
    return 0;
}

