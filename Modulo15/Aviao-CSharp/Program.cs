using System;
using poo;

class Program {

  static void Main(string[] args) {
    
    Voador v = new Passaro();
    
    v.decolar();
    v.aterissar();
    
    MeioDeTransporte m = new Onibus();
    
    m.subir();
    m.descer();
        
    Aviao a = new Aviao();
    
    a.decolar();
    a.aterissar();
    a.subir();
    a.descer();
  }
}