#ifndef TIME_H
#define TIME_H

#include "Jogador.h"

class Time {
public:
    Time(string nome);
    virtual ~Time();
    string getNome() const;
    void setNome(string nome);
    void adicionaJogador(int numero, Jogador& jogador);
    void removeJogador(int numero);
    void imprime() const;
private:
    string nome;
    Jogador** elenco; // alocação dinâmica (esse array pode mudar de tamanho)
    // Jogador* elenco[22]; // alocação estática (um array de 22 posições)
};

#endif /* TIME_H */

