#ifndef PONTO2D_H
#define PONTO2D_H

class Ponto2D {
public:
    Ponto2D(float x, float y); // construtor
    virtual ~Ponto2D(); // destrutor
    
    float distancia(const Ponto2D p) const; // método da classe
    void moveX(float dx);
    void moveY(float dy);
    void imprime();
private:
    float x, y; // atributos da classe
};

#endif /* PONTO2D_H */

