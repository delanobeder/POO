using System;
using System.Linq;
using poo;
using ed;

public class Program {

    public static void Main(string[] args) {

        Random rand = new Random();

        Queue<int> q = new Queue<int>(10);

        q.imprime();

        while (!q.full()) {
            int valor = rand.Next(1, 100000) % 100 + 1;
            bool ok = q.add(valor);
            if (ok) {
                Console.WriteLine("Adicionado " + valor);
                q.imprime();
            }
        }

        while (!q.empty()) {
            int opcao = rand.Next(1, 100000) % 3;
            int valor;
            if (opcao == 0) {
                valor = rand.Next(1, 100) % 100 + 1;
                bool ok = q.add(valor);
                if (ok) {
                    Console.WriteLine("Adicionado " + valor);
                    q.imprime();
                }
            } else {
                valor = q.remove();
                Console.WriteLine("Removido " + valor);
                q.imprime();
            }
        }

        Console.WriteLine();
        Console.WriteLine();

        Queue<Pessoa> qp = new Queue<Pessoa>(5);

        qp.add(new Pessoa("Pessoa01"));
        qp.imprime();
        qp.add(new Pessoa("Pessoa02"));
        qp.imprime();
        qp.add(new Pessoa("Pessoa03"));
        qp.imprime();
        qp.add(new Pessoa("Pessoa04"));
        qp.imprime();
        qp.add(new Pessoa("Pessoa05"));
        qp.imprime();

        while (!qp.empty()) {
            Pessoa p = qp.remove();
            Console.WriteLine("Removido " + p);
            qp.imprime();
        }
    }
}