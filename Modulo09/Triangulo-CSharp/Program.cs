using System;
using poo;

class Program {

  public static void Main(string[] args) {

    Triangulo t1 = new Triangulo(5,4,3);
    Triangulo t2 = new Equilatero(3);
    Triangulo t3 = new Retangulo(3,4,5);

    t1.imprime();
    Console.WriteLine();
    t2.imprime();
    Console.WriteLine();
    t3.imprime();
    Console.WriteLine();

    Console.WriteLine("t1 > t2 " + (t1 > t2));
    Console.WriteLine("t1 > t3 " + (t1 > t3));
    Console.WriteLine("t2 > t1 " + (t2 > t1));
    Console.WriteLine("t2 > t3 " + (t2 > t3));
    Console.WriteLine("t3 > t1 " + (t3 > t1));
    Console.WriteLine("t3 > t2 " + (t3 > t2));
  }
}