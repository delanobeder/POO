#ifndef PONTO2D_H
#define PONTO2D_H

class Ponto2D {
public:
    Ponto2D(float x, float y); // Construtor
    virtual ~Ponto2D(); // Destrutor
    
    // Métodos getters and setters

    float getX() const;
    void setX(float);
    float getY() const;
    void setY(float);

    // Outros métodos da classe
    
    float distancia(const Ponto2D p) const; 
    void moveX(float dx);
    void moveY(float dy);
    void imprime();
private:
    float x, y; // Atributos da classe
};

#endif /* PONTO2D_H */

