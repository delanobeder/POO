using System;

class Program {
  public static void Main(string[] args) {
    Data D1 = new Data(31, 12, 2023);
    Data D2 = new Data(01, 01, 2024);
    
    if (D1 > D2) {    
        Console.WriteLine(D1 + " é mais recente que " + D2);
    } else if (D1 < D2) {
        Console.WriteLine(D2 + " é mais recente que " + D1);
    } else {
        Console.WriteLine(D1 + " é igual a " + D2);
    }

    Console.WriteLine(D1 + " > " + D2 + " => " + (D1 > D2));
    Console.WriteLine(D1 + " >= " + D2 + " => " + (D1 >= D2));
    Console.WriteLine(D1 + " < " + D2 + " => " + (D1 < D2));
    Console.WriteLine(D1 + " <= " + D2 + " => " + (D1 <= D2));
    Console.WriteLine(D1 + " == " + D2 + " => " + (D1 == D2));
    Console.WriteLine(D1 + " != " + D2 + " => " + (D1 != D2));

    Console.WriteLine(D1++);
    Console.WriteLine(++D1);
    Console.WriteLine(D2++);
    Console.WriteLine(++D2);

  }
}