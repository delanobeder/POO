#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo {
private:
    double ladoa;
    double ladob;
public:
    void setDim(double a, double b);
    void imprimir();
    double area() const;
    static bool compara(const Retangulo r1, const Retangulo r2);
};

#endif /* RETANGULO_H */

