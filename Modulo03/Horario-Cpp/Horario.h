#ifndef HORARIO_H
#define HORARIO_H

class Horario {
public:
    Horario();
    Horario(int, int, int);
    
    // Métodos set
    
    void setHora(int);
    void setMinuto(int);
    void setSegundo(int);

    // Métodos get

    int getHora();
    int getMinuto() ;
    int getSegundo();

    // Método imprime
    void imprime();
private:
    int hora, minuto, segundo;
};
#endif /* HORARIO_H */