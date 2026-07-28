using System;

class Program {
  public static void Main(string[] args) {

    Complexo c1 = new Complexo(2,2);
    Complexo c2 = new Complexo(3,5);
    Complexo c3 = new Complexo(1,2);
    Complexo c4 = new Complexo(3,4);

    Console.WriteLine(c1);
    Console.WriteLine(c2);
    Console.WriteLine(-c1);
    Console.WriteLine(c1 + c2);
    Console.WriteLine(c1 + (-c2));
    Console.WriteLine(c1 - c2);
    Console.WriteLine(c3 * c4);
    Console.WriteLine(c3 / c4);
  }
}