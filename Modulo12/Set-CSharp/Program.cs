

public class Program
{
    public static void Main(string[] args)
    {
        SortedSet<int> cjto_ints = new SortedSet<int>();
        SortedSet<Pessoa> cjto_pessoas = new SortedSet<Pessoa>();

        cjto_ints.Add(2);
        cjto_ints.Add(1);
        cjto_ints.Add(2);

        foreach (int i in cjto_ints)
        {
            Console.WriteLine(i);
        }

        Console.WriteLine();

        cjto_pessoas.Add(new Pessoa("Maria", 20));
        cjto_pessoas.Add(new Pessoa("João", 18));
        cjto_pessoas.Add(new Pessoa("Maria", 20));

        foreach (Pessoa p in cjto_pessoas)
        {
            p.Imprime();
        }
    }
}