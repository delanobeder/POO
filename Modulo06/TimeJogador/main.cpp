#include "Time.h"
#include <iostream>
using namespace std;

int main() {
    
    Jogador *prass = new Jogador("Fernando Prass", 40, "Goleiro");
    Jogador guerra("Alejando Guerra", 33, "Meia");
    Jogador *borja = new Jogador("Miguel Borja", 25, "Atacante");
    
    Time *time = new Time("Palmeiras");
    
    time->adicionaJogador(1, *prass);
    time->adicionaJogador(10, guerra);
    time->adicionaJogador(9, *borja);
    
    cout << endl;
    
    time->imprime();
    
    cout << endl;
    
    time->removeJogador(10);
    
    time->imprime();
    
    cout << endl;
    
    guerra.imprime();
    
    cout << endl;
    
    delete time;
    
    delete borja;
    delete prass;
    
    return 0;
}

