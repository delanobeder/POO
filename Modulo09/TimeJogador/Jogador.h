#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>
using namespace std;

class Time;

class Jogador {
public:
    Jogador(string nome, int idade, string posicao);
    virtual ~Jogador();
    string getNome() const;
    void setNome(string nome);
    int getIdade() const;
    void setIdade(int idade);
    string getPosicao() const;
    void setPosicao(string posicao);
    Time* getTime() const;
    void setTime(Time* time);
    void imprime() const;
private:
    string nome;
    int idade;
    string posicao;
    Time* time;
};

#endif /* JOGADOR_H */

