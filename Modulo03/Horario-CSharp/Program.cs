using System;

public class Program
{
  public static void Main(string[] args)
  {

    Horario comer = new Horario(12, 0, 0);
    Horario dormir = new Horario(30, 90, 75); //horário inválido

    Console.Write("horário de comer: ");
    comer.Imprime();

    comer.SetHora(23);
    comer.SetMinuto(15);
    comer.SetSegundo(30);

    Console.Write("horário de comer modificado: ");
    comer.Imprime();

    Console.Write("horário de dormir: ");
    dormir.Imprime();
  }
}