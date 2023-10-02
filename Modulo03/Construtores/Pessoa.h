#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
public:
  Pessoa();
  Pessoa(string nome, int idade);
  Pessoa(const Pessoa &objeto);
  void setIdade(int);
  void imprime();

private:
  string nome;
  int idade;
};

#endif /* PESSOA_H */