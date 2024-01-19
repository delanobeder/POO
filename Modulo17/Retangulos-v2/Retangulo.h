#ifndef RETANGULO_H
#define RETANGULO_H

class Cadastro;

class Retangulo {
    friend Cadastro;
private:
    double ladoa;
    double ladob;
    Retangulo();
public:
    Retangulo(double a, double b);
    virtual ~Retangulo();
    virtual void imprime() const;
    double area() const;
    static bool compara(const Retangulo r1, const Retangulo r2);
};

#endif /* RETANGULO_H */

