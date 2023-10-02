using System;

class Program {
  public static void Main(string[] args) {
    
    Data d1 = new Data(20, 8, 2019);
    Data d2 = new Data(20, 8, 2020);
    Data d3 = new Data(20, 8, 2019); 
    
    d1.imprime();
    d1.imprimePorExtenso();
    d2.imprime();
    d2.imprimePorExtenso();
     
    Console.WriteLine(d1.anoBissexto());
    Console.WriteLine(d2.anoBissexto());
    
    Console.WriteLine(d1.compare(d2));
    Console.WriteLine(d1.compare(d3));
    Console.WriteLine(d2.compare(d1));
  }
}