#include "Horario.h"
#include <iostream>
using namespace std;
	
int main() {

    Horario comer(12,0,0);
    Horario dormir(30,90,75); //horário inválido

    cout << "horário de comer: ";
    comer.imprime();

    comer.setHora(23);
    comer.setMinuto(15);
    comer.setSegundo(30);

    cout << "horário de comer modificado: ";
    comer.imprime();

    cout << "horário de dormir: ";
    dormir.imprime();
}