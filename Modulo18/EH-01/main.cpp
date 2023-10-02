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

          // O comando abaixo não será executado se exceção for lançada.
          
          cout << "Divisão: " <<  valor << endl;
          
     } // final do bloco TRY

     catch (DivZeroException& e) {
          // pode ter ou não o objeto
          // apenas o tipo é obrigatório
          cout << "Tratador da exceção DivZeroException foi invocado ..." << endl;
          cout << e.what() << endl;
     }

     cout << "Fim da função main ..." << endl;
     return 0;
}