#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
using namespace std;

class Aluno {
public:
    Aluno();
    Aluno(int RA, double NP, double NT);
    virtual ~Aluno();
    void imprime();
    int getRA() const;
    double media() const;
    static bool compara(const Aluno a1, const Aluno a2);
private:
    int RA;
    double NP;
    double NT;
};

#endif /* ALUNO_H */

