using System;
using System.Collections.Generic;
using poo;

class Program {

    public static void Main(string[] args) {

        List<Pessoa> pessoas = new List<Pessoa>();

        Pessoa p1 = new Pessoa("Fulano", 12345);
        Professor p2 = new Professor("Sincrano", 54321, 1000);
        Coordenador p3 = new Coordenador("Beltrano", 13579, 2000, "BCC");

        Console.WriteLine();
        Console.WriteLine("----------------------------- ");
        Console.WriteLine();

        pessoas.Add(p1);
        pessoas.Add(p2);
        pessoas.Add(p3);

        for (int i = 0; i < pessoas.Count; i++) {
            pessoas[i].imprime();
            Console.WriteLine();
        }

        Console.WriteLine("----------------------------- ");
        Console.WriteLine();

        pessoas.Sort();


        foreach (Pessoa p in pessoas) {
            p.imprime();
            Console.WriteLine();
        }
    }
}