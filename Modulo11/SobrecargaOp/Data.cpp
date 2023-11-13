#include "Data.h"

int Data::compare(const Data outra) const {
    if (this->ano != outra.ano) {
        return this->ano - outra.ano;
    }
    else if (this->mes != outra.mes) {
        return this->mes - outra.mes;
    } else {
        return this->dia - outra.dia;
    }
}

bool Data::operator>(const Data &right) const {
    return compare(right) > 0;
}

bool Data::operator==(const Data &right) const {
    return compare(right) == 0;
}

bool Data::operator>=(const Data &right) const {
    return compare(right) >= 0;
    // a >= b se (a > b) ou (a == b)
    // return (*this > right)  || (*this == right);
}

bool Data::operator<(const Data &right) const {
    return compare(right) < 0;
    // se a < b se !(a > b) && (a != b)
    // return !(*this > right) && (*this != right);
}

bool Data::operator<=(const Data &right) const {
    return compare(right) <= 0;
    // se a <= b se !(a > b)
    // return !(*this > right);
}

bool Data::operator!=(const Data &right) const {
    return compare(right) != 0;
    // se a != b se !(a == b)
    // return !(*this == right);
}

void Data::incrementa() {
    int maxNroDias;

    switch (mes) {
    case 2: {
        bool bissexto = (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
        maxNroDias = bissexto ? 29 : 28;
        break;
    }
    case 4:
    case 6:
    case 9:
    case 11: {
        maxNroDias = 30;
        break;
    }
    default: {
        maxNroDias = 31;
    }
    }

    this->dia++;
    if (this->dia > maxNroDias) {
        this->dia -= maxNroDias;
        this->mes++;
    }

    if (this->mes > 12) {
        this->mes--;
        this->ano++;
    }
}

// prefix increment

Data &Data::operator++() {
    this->incrementa();
    return *this; // retorna novo valor por referência
}

// postfix increment

Data Data::operator++(int) {
    Data old = *this; // cópia do valor antigo
    ++(*this);  // executa o operador prefix
                // Poderia ser invocado assim tambem => operator++() 
    return old;    // retorna o valor antigo
}

ostream &operator<<(ostream &os, const Data &obj) {
    os << setfill('0') << setw(2) << obj.dia << "/";
    os << setfill('0') << setw(2) << obj.mes << "/";
    os << setfill('0') << setw(4) << obj.ano;
    return os;
}

istream &operator>>(istream &is, Data &obj) {
    char c; // usado para ignorar a barra "/"
    is >> obj.dia >> c >> obj.mes >> c >> obj.ano;
    return is;
}
