#ifndef TIME_H
#define TIME_H
#include <vector>

#include "Jogador.h"

class Time {
public:
    Time(string nome);
    virtual ~Time();
    string getNome() const;
    void setNome(string nome);
    void adicionaJogador(int numero, Jogador* jogador);
    void removeJogador(int numero);
    void imprime() const;
private:
    string nome;
    vector<Jogador*> elenco;
};

#endif /* TIME_H */

