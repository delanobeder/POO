#include "Loja.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    Loja l;
    bool ok;
    double valor;

    ok = l.adiciona(new Produto("CFC01", "Café Coringa 500mg", 5, 29.79));
    cout << "Produto (Adição): " << (ok ? "OK" : "Not OK") << endl;
    
    ok = l.adiciona(new Produto("RCC02", "Coca-Cola 600ml", 4, 5.69));
    cout << "Produto (Adição): " << (ok ? "OK" : "Not OK") << endl;
    
    ok = l.adiciona(new Produto("AMC03", "Amaciante Concentrado Comfort 1,5L", 3, 31.90));
    cout << "Produto (Adição): " << (ok ? "OK" : "Not OK") << endl;

    ok = l.adiciona(new Produto("CFC01", "Café Coringa 500mg", 5, 29.79));
    cout << "Produto (Adição): " << (ok ? "OK" : "Not OK") << endl;

    cout << endl;
    
    l.imprime();
    cout << endl;

    valor = l.vende("RCC02", 3);
    if (valor != -1)  {
    
        cout << fixed << setprecision(2);
        cout << "Compra realizada de valor: R$ " << valor << endl;
    } else {
        cout << "Compra não realizada. Produto não encontrado ou estoque insuficiente" << endl;
    }

    cout << endl;

    l.imprime();

    cout << endl;

    valor = l.vende("RCC02", 3);
    if (valor != -1)  {
        cout << fixed << setprecision(2);
        cout << "Compra realizada de valor: R$ " << valor << endl;
    } else {
        cout << "Compra não realizada. Produto não encontrado ou estoque insuficiente" << endl;
    }

    cout << endl;

    l.imprime();

    cout << endl;

    valor = l.vende("ABC04", 3);
    if (valor != -1)  {
        cout << fixed << setprecision(2);
        cout << "Compra realizada de valor: R$ " << valor << endl;
    } else {
        cout << "Compra não realizada. Produto não encontrado ou estoque insuficiente" << endl;
    }

    cout << endl;

    l.imprime();
    
    cout << endl;

    ok = l.remove("CFC01");
    cout << "Produto (Remoção): " << (ok ? "OK" : "Not OK") << endl;
    
    ok = l.remove("RCC02");
    cout << "Produto (Remoção): " << (ok ? "OK" : "Not OK") << endl;
    
    ok = l.remove("AMC03");
    cout << "Produto (Remoção): " << (ok ? "OK" : "Not OK") << endl;

    ok = l.remove("CFC01");
    cout << "Produto (Remoção): " << (ok ? "OK" : "Not OK") << endl;

    return 0;
}