#include "Queue.h"
#include "Pessoa.h"
#include <iostream>
#include <random>
using namespace std;
using namespace poo;
using namespace ed;

int main() {

    srand((unsigned)time(0));
    Queue<int> q(10);

    q.imprime();

    while (!q.full()) {
        int valor = rand() % 100 + 1;
        bool ok = q.add(valor);
        if (ok) {
            cout << "Adicionado " << valor << endl;
            q.imprime();
        }
    }

    while (!q.empty()) {
        int opcao = rand() % 3;
        int valor;
        if (opcao == 0) {
            valor = rand() % 100 + 1;
            bool ok = q.add(valor);
            if (ok) {
                cout << "Adicionado " << valor << endl;
                q.imprime();
            }
        } else {
            int valor = q.remove();
            cout << "Removido " << valor << endl;
            q.imprime(); 
        }
    }

    cout << endl << endl;
    
    Queue<Pessoa> qp(5);
    
    qp.add(Pessoa("Pessoa01"));
    qp.imprime();
    qp.add(Pessoa("Pessoa02"));
    qp.imprime();
    qp.add(Pessoa("Pessoa03"));
    qp.imprime();
    qp.add(Pessoa("Pessoa04"));
    qp.imprime();
    qp.add(Pessoa("Pessoa05"));
    qp.imprime();

    while (!qp.empty()) {
        Pessoa p = qp.remove();
        cout << "Removido " << p << endl;
        qp.imprime(); 
    }

}
