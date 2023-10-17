using System;

public class Program {

  public static void Main(string[] args) {
    
    Triangulo t1 = new Triangulo(3,4,5);
    Equilatero t2 = new Equilatero(3);
    
    int res;
    
    t1.imprime();
    
    Console.WriteLine();
    
    t2.imprime();
    
    Console.WriteLine();

    // Comparando t1 com t2
    
    res = t1.compare(t2);
    Console.Write("Comparando t1 com t2: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    // Comparando t1 com t2
    
    res = t2.compare(t1);
    Console.Write("Comparando t2 com t1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    Console.WriteLine();

    // Comparando t1 com t1
    
    res = t1.compare(t1);
    Console.Write("Comparando t1 com t1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    // Comparando t2 com t2
    
    res = t2.compare(t2);
    Console.Write("Comparando t2 com t2: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
  }
}