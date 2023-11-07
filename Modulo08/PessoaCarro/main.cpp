#include "Pessoa.h"
#include <iostream>

using namespace std;
using namespace poo;

int main() {
    
    // Ponteiro para objeto (instância de classe)
    // Construtor que seta os valores de todos os atributos
    Carro* c1 = new Carro("Gol", "Branca", 2001, "ABC1234");

    // Criação de objeto estático. 
    // Construtor que seta os valores de todos os atributos
    Carro c2("Civic", "Azul", 2020, "CAB3H23");

    // Ponteiro para objeto (instância de classe)
    // Construtor que seta os valores de todos os atributos
    Carro* c3 = new Carro("Fusca", "Preto", 1972, "VWB6789");

    // Criação de objeto estático. 
    // Construtor que seta os valores de todos os atributos
    Carro c4("Renegade", "Cinza", 2022, "JEP2A20");

    // Ponteiro para objeto (instância de classe)
    // Construtor que seta os valores de todos os atributos
    Pessoa* p1 = new Pessoa("Sincrano", "123456789-01");
    
    cout << boolalpha;
    cout << p1->adicionaCarro(c1) << endl;
    cout << p1->adicionaCarro(&c2) << endl;
    cout << p1->adicionaCarro(c3) << endl;
    cout << p1->adicionaCarro(&c4) << endl;
    
    // Criação de objeto estático. 
    // Construtor que seta os valores de todos os atributos
    Pessoa p2("Fulano", "012345678-90");
    cout << endl << p2.adicionaCarro(&c4) << endl;

    // imprime as informações do p1

    p1->imprime();
    
    // imprime as informações do p2
    
    p2.imprime();
    
    // p1 "vende" o carro de placa "CAB3H23" para p2
    Carro* c5 = p1->removeCarro("CAB3H23");
    if (c5 != NULL) {
        p2.adicionaCarro(c5);
    }
    
    // imprime as informações do p1
    
    p1->imprime();
    
    // imprime as informações do p2
    
    p2.imprime();

    cout << "(Destrutor) - Explicitos (delete)" << endl;
    
    delete c1;
    delete c3;
    delete p1;

    cout << "(Destrutor) - Implicitos (fim de função)" << endl;
}