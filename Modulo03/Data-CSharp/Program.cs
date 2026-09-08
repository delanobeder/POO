using System;

public class Program
{
  public static void Main(string[] args)
  {

    Data d1 = new Data(20, 8, 2019);
    Data d2 = new Data(20, 8, 2020);
    Data d3 = new Data(20, 8, 2019);

    d1.Imprime();
    d1.ImprimePorExtenso();
    d2.Imprime();
    d2.ImprimePorExtenso();

    Console.WriteLine(d1.AnoBissexto());
    Console.WriteLine(d2.AnoBissexto());

    Console.WriteLine(d1.Compare(d2));
    Console.WriteLine(d1.Compare(d3));
    Console.WriteLine(d2.Compare(d1));
  }
}