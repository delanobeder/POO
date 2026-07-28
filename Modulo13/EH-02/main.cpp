#include "Calculadora.h"
#include "DivZeroException.h"

int main() {

     int a, b;
     cout << "1o Número: ";
     cin >> a;
     cout << "2o Número: ";
     cin >> b;

     try { // inicio do bloco try

          double valor = Calculadora::divide(a, b);

          // Os comandos abaixo não serão executados se exceção DivZeroException for lançada.
          
          cout << "Divisão: " <<  valor << endl;

          valor = Calculadora::raiz(a);

          // Os comandos abaixo não serão executados se a exceção (string) for lançada.
          
          cout << "Raiz Quadrada de " << a << ": " << valor << endl;

          if (b < 0) {
               throw(b); // Lança uma exceção como um int
          }
          
     } // final do bloco TRY

     catch (DivZeroException& e) {
          // pode ter ou não o objeto
          // apenas o tipo é obrigatório
          cout << "Tratador da exceção DivZeroException foi invocado ..." << endl;
          cout << e.what() << endl;
     }
     catch (string S) { 
          // pode ter ou não o objeto
          // apenas o tipo é obrigatório
          cout << "Tratador de exceção de string foi invocado ..." << endl;
          cout << S << endl;
     }
     catch (...) {
          cout << "Tratador de exceção Genérico !!" << endl;
     }

     cout << "Fim da função main ..." << endl;
     return 0;
}