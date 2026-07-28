#ifndef FRACAO_H
#define FRACAO_H

#include <iostream>

using namespace std;

class Fracao
{
public:
    Fracao(long n, long d);
    Fracao operator+(const Fracao &frac) const;
    Fracao operator-(const Fracao &frac) const;
    Fracao operator*(const Fracao &frac) const;
    Fracao operator/(const Fracao &frac) const;

    friend ostream &operator<<(ostream &ost, const Fracao &frac);

private:
    long numerator, denominator;

    // Calcula o MDC utilizando o algoritmo de Euclides
    // ambos argumentos devem ser positivos
    long mdc(long a, long b);
};

#endif /* FRACAO_H */
