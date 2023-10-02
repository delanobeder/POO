#include "Peixe.h"
#include "Cachorro.h"
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    vector<Animal*> animais;

    // animais.push_back(new Peixe("Nemo", 0.15, "Água salgada"));
    Peixe* nemo = new Peixe("Nemo", 0.15, "Água salgada");
    animais.push_back(nemo);

    // animais.push_back(new Peixe("Dory", 0.2, "Água doce"));
    Peixe* dory = new Peixe("Dory", 0.2, "Água doce");
    animais.push_back(dory);

    // animais.push_back(new Cachorro("Teo", 6.2, "pug"));
    Cachorro* teo = new Cachorro("Teo", 6.2, "pug");
    animais.push_back(teo);
    
    cout << "================== SEM ORDENAÇÃO ==================" << endl << endl;
    
    for (long unsigned int i = 0; i < animais.size(); i++) {
        animais[i]->imprime();
        cout << endl;
    }
    
    cout << "================== ORDENAÇÃO (NOME) ==================" << endl << endl;
    
    sort(animais.begin(), animais.end(), Animal::compNome);
    for (long unsigned int i = 0; i < animais.size(); i++) {
        animais[i]->imprime();
        cout << endl;
    }
    
    cout << "================== ORDENAÇÃO (PESO) ==================" << endl << endl;
    
    sort(animais.begin(), animais.end(), Animal::compPeso);
    for (long unsigned int i = 0; i < animais.size(); i++) {
        animais[i]->imprime();
        cout << endl;
    }
    
    cout << "================== ORDENAÇÃO (ESPECIE) ==================" << endl << endl;
    
    sort(animais.begin(), animais.end(), Animal::compEspecie);
    for (long unsigned int i = 0; i < animais.size(); i++) {
        animais[i]->imprime();
        cout << endl;
    }

    return 0;
}

