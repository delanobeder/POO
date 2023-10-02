using System;

class Program {
  public static void Main(string[] args) {
    ContaCorrente c1 = new ContaCorrente(1000, 1200.50);
    ContaCorrente c2 = new ContaCorrente(2000);
    
    Console.WriteLine("\nAntes da Transferência\n");
    
    c1.imprime();
    c2.imprime();
    
    c1.transferencia(c2, 500);
    
    Console.WriteLine("\nDepois da Transferência\n");
    
    c1.imprime();
    c2.imprime();
    
    Console.WriteLine();    
  }
}