using System;
using poo;

class Program
{

  static void Main(string[] args)
  {

    Voador v = new Passaro();

    v.Decolar();
    v.Aterissar();

    MeioDeTransporte m = new Onibus();

    m.Subir();
    m.Descer();

    Aviao a = new Aviao();

    a.Decolar();
    a.Aterissar();
    a.Subir();
    a.Descer();
  }
}