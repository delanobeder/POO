using poo;

public class Program
{

    public static void Main(string[] args)
    {

        Random rand = new Random();

        ed.Queue<int> q = new ed.Queue<int>(10);

        q.Imprime();

        while (!q.full())
        {
            int valor = rand.Next(1, 100000) % 100 + 1;
            bool ok = q.add(valor);
            if (ok)
            {
                Console.WriteLine("Adicionado " + valor);
                q.Imprime();
            }
        }

        while (!q.empty())
        {
            int opcao = rand.Next(1, 100000) % 3;
            int valor;
            if (opcao == 0)
            {
                valor = rand.Next(1, 100) % 100 + 1;
                bool ok = q.add(valor);
                if (ok)
                {
                    Console.WriteLine("Adicionado " + valor);
                    q.Imprime();
                }
            }
            else
            {
                valor = q.remove();
                Console.WriteLine("Removido " + valor);
                q.Imprime();
            }
        }

        Console.WriteLine();
        Console.WriteLine();

        ed.Queue<Pessoa> qp = new ed.Queue<Pessoa>(5);

        qp.add(new Pessoa("Pessoa01"));
        qp.Imprime();
        qp.add(new Pessoa("Pessoa02"));
        qp.Imprime();
        qp.add(new Pessoa("Pessoa03"));
        qp.Imprime();
        qp.add(new Pessoa("Pessoa04"));
        qp.Imprime();
        qp.add(new Pessoa("Pessoa05"));
        qp.Imprime();

        while (!qp.empty())
        {
            Pessoa? p = qp.remove();
            Console.WriteLine("Removido " + p);
            qp.Imprime();
        }
    }
}