using System;
using System.Collections.Generic;
using System.Linq;

class Program {
    private static void remove(List<int> l, int el) {
        
        /*
        int i = 0;
        while (i < l.Count && l[i] != el) {
            i++;
        }

        if (i != l.Count) {
            // encontrou na posicao i
            l.RemoveAt(i); // remove o i-esimo elemento
        }
        */

        l.Remove(el);
    }

    private static bool encontra(List<int> l, int el) {
        /*
        int i = 0;
        while (i < l.Count && l[i] != el) {
            i++;
        }

        return i != l.Count;
        */

        return l.Contains(el);
    }

    private static void imprime(List<int> l) {
        for (int i = 1; i <= l.Count; i++) {
            Console.Write(l[i - 1].ToString("D2"));
            if (i % 10 == 0 || i == l.Count) {
                Console.WriteLine();
            } else {
                Console.Write(" ");
            }
        }
        Console.WriteLine();
    }

    public static void Main() {
        Random rand = new Random();

        List<int> colecao = new List<int>();

        for (int i = 0; i < 50; i++) {
            int segredo;
            do {
                segredo = rand.Next(1, 51);
            } while (encontra(colecao, segredo));
            colecao.Add(segredo);
        }

        /*
        IList<int> colecao = new List<int>(new int[50]);

        for (int i = 0; i < 50; i++) {
            int segredo;
            do {
                segredo = rand.Next(1, 51);
            } while (encontra(colecao, segredo));
            colecao[i] = segredo;
        }
        */

        Console.WriteLine();

        imprime(colecao);

        colecao.Sort();

        imprime(colecao);

        colecao.RemoveAt(22); // remove o 23o elemento

        remove(colecao, 7);
        remove(colecao, 38);
        remove(colecao, 5);
        remove(colecao, 17);

        imprime(colecao);

        // remove os últimos 5 elementos
        for (int i = 0; i < 5; i++) {
            colecao.RemoveAt(colecao.Count - 1);
        }

        imprime(colecao);

        // remove os últimos 10 elementos
        colecao.RemoveRange(colecao.Count - 10, 10);

        imprime(colecao);
    }
}