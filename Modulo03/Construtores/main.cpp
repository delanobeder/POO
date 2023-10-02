#include "Pessoa.h"
#include <iostream>
using namespace std;

void copia(Pessoa p) {
  p.setIdade(10); 
  p.imprime(); 
}

void referencia(Pessoa& p) {
  p.setIdade(30);
  p.imprime();
}

void ponteiro(Pessoa* p) {
  p->setIdade(40);
  p->imprime();
}

int main() {
  cout << "--------------- Imprimindo p1 ---------------" << endl;
  Pessoa p1("Fulano", 20);
  p1.imprime();

  cout << "--------------- Imprimindo p2 ---------------" << endl;
  Pessoa p2 = p1;
  p2.imprime();
  cout << "--------------- Imprimindo p3 ---------------" << endl;
  Pessoa p3;
  p3 = p1; // cópia em memoria (não chama construtor)
  p3.imprime();
  cout << "--------------- Invocando funcao copia ---------------" << endl;
  copia(p1);
  cout << "--------------- Imprimindo p1 (depois copia) ---------------" << endl;
  p1.imprime();
  cout << "--------------- Invocando funcao referencia ---------------" << endl;
  referencia(p1);
  cout << "--------------- Imprimindo p1 (depois referencia) ---------------" << endl;
  p1.imprime();
  cout << "--------------- Invocando funcao ponteiro ---------------" << endl;
  ponteiro(&p1);
  cout << "--------------- Imprimindo p1 (depois ponteiro) ---------------" << endl;
  p1.imprime();
  return 0;
}