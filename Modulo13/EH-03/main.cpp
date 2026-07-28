#include <iostream>
#include <exception>

using namespace std;

int main() {
     try {
          int i = 0;
          while (1) {
               new unsigned int[6000000000];
               cout << "Alocado (" << ++i << ") ..." << endl;
          }
     }
     catch (bad_alloc const &) {
          cout << "Faltou Memoria..." << endl;
     } // aqui o objeto T não existe mais !!

     cout << "Fim ..." << endl;
     return 0;
}
