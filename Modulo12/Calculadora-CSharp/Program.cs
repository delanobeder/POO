using poo;

class Program
{
    public static void Troca<X>(ref X a, ref X b)
    {
        X aux = a;
        a = b;
        b = aux;
    }

    public static void Main(string[] args)
    {

        int i = 10, j = 20;
        double x = 10.1, y = 23.3;
        char a = 'A', b = 'Z';

        Console.WriteLine("Original: {0} {1}", i, j);
        Console.WriteLine("Original: {0} {1}", x, y);
        Console.WriteLine("Original: {0} {1}", a, b);
        Console.WriteLine();

        Troca(ref i, ref j); // Troca inteiros
        Troca(ref x, ref y); // Troca números double
        Troca(ref a, ref b); // Troca caracteres

        Console.WriteLine("Depois da Troca: {0} {1}", i, j);
        Console.WriteLine("Depois da Troca: {0} {1}", x, y);
        Console.WriteLine("Depois da Troca: {0} {1}", a, b);
        Console.WriteLine();

        Calculadora<int> cInt = new Calculadora<int>(10, 3);
        cInt.Imprime();

        Console.WriteLine();

        Calculadora<float> cFloat = new Calculadora<float>(10.1f, 3.1f);
        cFloat.Imprime();

        Console.WriteLine();

        Calculadora<Complexo> cComplexo = new Calculadora<Complexo>(new Complexo(3, 4), new Complexo(1, 2));
        cComplexo.Imprime();
    }
}