#include "Calculadora.h"
#include "DivZeroException.h"

double Calculadora::divide(int a, int b) {
    if (b == 0) {
               // lança a exceção, criando um objeto da classe DivZeroException
               // e passando o número da linha onde o erro ocorreu
               throw(DivZeroException(__FILE__, __LINE__));
    }
    return (double) a/ b;
}