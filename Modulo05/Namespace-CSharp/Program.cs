using System;
using ns1;

class Program {
  public static void Main(string[] args) {
    

    Pessoa p1 = new Pessoa("Fulano", 18);
    ns2.Pessoa p2 = new ns2.Pessoa("Sincrano", "Endereco X");

    p1.imprime();

    Console.WriteLine();

    p2.imprime();
  }
}