#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Data
{
public:
    // operadores relacionais

    bool operator>(const Data& right) const;
    bool operator>=(const Data &right) const;
    bool operator<(const Data &right) const;
    bool operator<=(const Data &right) const;
    bool operator==(const Data &right) const;
    bool operator!=(const Data &right) const;

    // operadores ++

    // prefix increment
    Data &operator++();

    // postfix increment
    Data operator++(int inc);

    // função friend (impressão usando cout)
    friend ostream &operator<<(ostream &os, const Data &obj);

    // função friend (leitura usando cin)
    friend istream &operator>>(istream &is, Data &obj);
private:
    void incrementa();
    int compare(const Data outra) const;
    int dia, mes, ano;
};

#endif /* DATA_H */