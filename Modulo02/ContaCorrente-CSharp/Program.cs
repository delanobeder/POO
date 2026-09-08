using System;

public class Program
{
  public static void Main(string[] args)
  {
    ContaCorrente c1 = new ContaCorrente(1000, 1200.50);
    ContaCorrente c2 = new ContaCorrente(2000);

    Console.WriteLine("\n============================");
    Console.WriteLine("Antes da Transferência");
    Console.WriteLine("============================\n");

    c1.Imprime();
    c2.Imprime();

    c1.Transferencia(c2, 500);

    Console.WriteLine("\n============================");
    Console.WriteLine("Depois da Transferência");
    Console.WriteLine("============================\n");

    c1.Imprime();
    c2.Imprime();

    Console.WriteLine();
  }
}