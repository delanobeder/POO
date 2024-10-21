using System;

class Program {
  public static void Main(string[] args) {
    ContaCorrente c1 = new ContaCorrente(1000, 1200.50);
    ContaChequeEspecial c2 = new ContaChequeEspecial(2000,0, 500);
    
    Console.WriteLine("\nAntes da Transferência\n");
    
    c1.imprime();
    Console.WriteLine();
    c2.imprime();
    
    c1.transferencia(c2, 500);
    
    Console.WriteLine("\nDepois da Transferência\n");
    
    c1.imprime();
    Console.WriteLine();
    c2.imprime();
    
    Console.WriteLine();    
  }
}