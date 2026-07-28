using System;

class Program {

  private static Data readData(string text) {
    Console.Write(text);
    string[] s = Console.ReadLine().Split("/");
    int dd = int.Parse(s[0]);
    int mm = int.Parse(s[1]);
    int yy = int.Parse(s[2]);
    return new Data(dd, mm, yy);
  }
  public static void Main(string[] args) {

    Data D1 = readData("1a Data: ");
    Data D2 = readData("2a Data: ");

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