#ifndef DATA_H
#define DATA_H

class Data {
public:
    Data(int dia, int mes, int ano);
    virtual ~Data();
    int compare(const Data& data) const;
    void imprimePorExtenso() const;
    void imprime() const;
    bool anoBissexto() const;
private:
    int dia;
    int mes;
    int ano;
};

#endif /* DATA_H */