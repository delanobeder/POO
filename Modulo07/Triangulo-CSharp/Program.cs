using System;

public class Program {

  public static void Main(string[] args) {
    
    Triangulo t1 = new Triangulo(3,4,5);
    Equilatero t2 = new Equilatero(3);
    
    t1.imprime();
    
    Console.WriteLine();
    
    t2.imprime();
    
    Console.WriteLine();

    int v = t1.compare(t2);
    Console.WriteLine(v == 0 ? "Igual" : ((v < 0) ? "Menor" : "Maior"));
    v = t1.compare(t1);
    Console.WriteLine(v == 0 ? "Igual" : ((v < 0) ? "Menor" : "Maior"));
    v = t2.compare(t1);
    Console.WriteLine(v == 0 ? "Igual" : ((v < 0) ? "Menor" : "Maior"));
  }
}