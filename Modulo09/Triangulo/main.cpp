#include "Triangulo.h"
#include "Equilatero.h"
#include "TriRetangulo.h"

int main() {

    Triangulo t1(2, 3, 4);
    Equilatero e1(3);
    TriRetangulo r1(3, 4, 5);
    int res;

    t1.imprime();
    
    cout << endl;
    
    e1.imprime();
    
    cout << endl;

    r1.imprime();

    cout << endl;

    // Comparando t1 (classe Triangulo) com e1 (classe Equilatero)
    
    res = t1.compare(e1);

    // t1 => classe Triangulo
    // e1 => classe Equilatero (parâmetro do método compare)
    // (1) Método compare está na classe Triangulo (não há herança)
    // Ou seja, o método não é herdado
    // (2) e1 é da classe Equilatero => Substituição
    // Ou seja, um objeto da classe filha (Equilatero) é utilizado em um 
    // método que espera-se como parâmetro um objeto da classe mãe (Triangulo)

    cout << "Comparando t1 com e1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    // Comparando e1 (classe Equilatero) com t1 (classe Triangulo)
    
    res = e1.compare(t1);

    // e1 => classe Equilatero
    // t1 => classe Triangulo (parâmetro do método compare)
    // (1) Método compare está na classe Triangulo (há herança)
    // Ou seja, o método compare encontra-se implementado na classe mãe (Triangulo)
    // A classe Equilatero herda esse método
    // (2) t1 é da classe Triangulo => não há Substituição

    cout << "Comparando e1 com t1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

    // Comparando t1 (classe Triangulo) com t1 (classe Triangulo)
    
    res = t1.compare(t1);

    // t1 => classe Triangulo
    // t1 => classe Triangulo (parâmetro do método compare)
    // (1) Método compare está na classe Triangulo (não há herança)
    // Ou seja, o método não é herdado
    // (2) t1 é da classe Triangulo => não há Substituição

    cout << "Comparando t1 com t1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    // Comparando e1 (classe Equilatero) com e1 (classe Equilatero)
    
    res = e1.compare(e1);

    // e1 => classe Equilatero
    // e1 => classe Equilatero (parâmetro do método compare)
    // (1) Método compare está na classe Triangulo (há herança)
    // Ou seja, o método compare encontra-se implementado na classe mãe (Triangulo)
    // A classe Equilatero herda esse método
    // (2) e1 é da classe Equilatero => Substituição
    // Ou seja, um objeto da classe filha (Equilatero) é utilizado em um 
    // método que espera-se como parâmetro um objeto da classe mãe (Triangulo)

    cout << "Comparando e1 com e1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    // Comparando r1 (classe TriRetangulo) com r1 (classe TriRetangulo)
    
    res = r1.compare(r1);

    // r1 => classe TriRetangulo
    // r1 => classe TriRetangulo (parâmetro do método compare)
    // (1) Método compare está na classe Triangulo (há herança)
    // Ou seja, o método compare encontra-se implementado na classe mãe (Triangulo)
    // A classe TriRetangulo herda esse método
    // (2) r1 é da classe TriRetangulo => Substituição
    // Ou seja, um objeto da classe filha (TriRetangulo) é utilizado em um 
    // método que espera-se como parâmetro um objeto da classe mãe (Triangulo)

    cout << "Comparando r1 com r1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

    // Comparando e1 (classe Equilatero) com r1 (classe TriRetangulo)
    
    res = e1.compare(r1);

    // e1 => classe Equilatero
    // r1 => classe TriRetangulo (parâmetro do método compare)
    // (1) Método compare está na classe Equilatero (há herança)
    // Ou seja, o método compare encontra-se implementado na classe mãe (Triangulo)
    // A classe Equilatero herda esse método
    // (2) r1 é da classe TriRetangulo => Substituição
    // Ou seja, um objeto da classe filha (TriRetangulo) é utilizado em um 
    // método que espera-se como parâmetro um objeto da classe mãe (Triangulo)

    cout << "Comparando e1 com r1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    // Comparando r1 (classe TriRetangulo) com e1 (classe Equilatero)
    
    res = r1.compare(e1);

    // r1 => classe TriRetangulo
    // e1 => classe Equilatero (parâmetro do método compare)
    // (1) Método compare está na classe Triangulo (há herança)
    // Ou seja, o método compare encontra-se implementado na classe mãe (Triangulo)
    // A classe TriRetangulo herda esse método
    // (2) e1 é da classe Equilatero => Substituição
    // Ou seja, um objeto da classe filha (Equilatero) é utilizado em um 
    // método que espera-se como parâmetro um objeto da classe mãe (Triangulo)

    cout << "Comparando r1 com e1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    return 0;
}

