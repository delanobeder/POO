#ifndef PONTO2D_H
#define PONTO2D_H

class Ponto2D {
public:
    Ponto2D(double x, double y); // Construtor
    virtual ~Ponto2D(); // Destrutor
    
    // Métodos getters and setters

    double getX() const;
    void setX(double);
    double getY() const;
    void setY(double);

    // Outros métodos da classe
    
    double distancia(const Ponto2D p) const; 
    void moveX(double dx);
    void moveY(double dy);
    void imprime();
private:
    double x, y; // Atributos da classe
};

#endif /* PONTO2D_H */

