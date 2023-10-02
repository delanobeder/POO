#include "Horario.h"
#include <iomanip>
#include <iostream>
using namespace std;

Horario::Horario() {
    hora = 0;
    minuto = 0;
    segundo = 0;
}

Horario::Horario(int hora, int minuto, int segundo) {
    setHora(hora);
    setMinuto(minuto);
    setSegundo(segundo);
}

void Horario::setHora(int hora) {
    this->hora = (hora >= 0 && hora < 24) ? hora : 0;
}

void Horario::setMinuto(int minuto) {
    this->minuto = (minuto >= 0 && minuto < 59) ? minuto : 0;
}

void Horario::setSegundo(int segundo) {
    this->segundo = (segundo >= 0 && segundo < 24 ) ? segundo : 0;
}

int Horario::getHora() {
    return hora;
}

int Horario::getMinuto() {
    return minuto;
}

int Horario::getSegundo() {
    return segundo;
}

void Horario::imprime()
{
    cout << setfill( '0' ) << std::setw( 2 ) << hora << ":"
            << setw( 2 ) << minuto << ":"
            << setw( 2 ) << segundo<< endl;
}