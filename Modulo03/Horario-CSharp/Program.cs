using System;

class Program {
  public static void Main(string[] args) {
    
    Horario comer = new Horario(12,0,0);
    Horario dormir = new Horario(30,90,75); //horário inválido

    Console.WriteLine("horário de comer: ");
    comer.imprime();

    comer.setHora(23);
    comer.setMinuto(15);
    comer.setSegundo(30);

    Console.WriteLine("horário de comer modificado: ");
    comer.imprime();

    Console.WriteLine("horário de dormir: ");
    dormir.imprime();
  }
}