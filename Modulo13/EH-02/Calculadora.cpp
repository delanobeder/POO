#include "Calculadora.h"
#include "DivZeroException.h"

double Calculadora::divide(int a, int b) {
    if (b == 0) {
        // Lança a exceção, criando um objeto da classe DivZeroException
        // e passando o nome do arquivo e o número da linha onde o erro ocorreu
        throw(DivZeroException(__FILE__, __LINE__));
    }
    return (double)a / b;
}

double Calculadora::raiz(int n)
{
    if (n < 0) {
        string temp = "Problema com Raiz Quadrada de número negativo.";
        throw(string(temp)); // Lança Uma exceção como uma string
    }
    return sqrt(n);
}