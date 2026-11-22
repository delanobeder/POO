
public class Programa
{

    public static void Main(string[] args)
    {
        Loja l = new Loja();
        bool ok;
        double valor;

        ok = l.Adiciona(new Produto("CFC01", "Café Coringa 500mg", 5, 29.79));
        Console.WriteLine("Produto (Adição): {0}", ok ? "OK" : "Not OK");

        ok = l.Adiciona(new Produto("RCC02", "Coca-Cola 600ml", 4, 5.69));
        Console.WriteLine("Produto (Adição): {0}", ok ? "OK" : "Not OK");

        ok = l.Adiciona(new Produto("AMC03", "Amaciante Concentrado Comfort 1,5L", 3, 31.90));
        Console.WriteLine("Produto (Adição): {0}", ok ? "OK" : "Not OK");

        ok = l.Adiciona(new Produto("CFC01", "Café Coringa 500mg", 5, 29.79));
        Console.WriteLine("Produto (Adição): {0}", ok ? "OK" : "Not OK");

        Console.WriteLine();

        l.Imprime();

        Console.WriteLine();

        valor = l.Vende("RCC02", 3);
        if (valor != -1)
        {
            Console.WriteLine("Compra realizada de valor: R$ {0:0.00}", valor);
        }
        else
        {
            Console.WriteLine("Compra não realizada. Produto não encontrado ou estoque insuficiente");
        }

        Console.WriteLine();

        l.Imprime();

        Console.WriteLine();

        valor = l.Vende("RCC02", 3);
        if (valor != -1)
        {
            Console.WriteLine("Compra realizada de valor: R$ {0:0.00}", valor);
        }
        else
        {
            Console.WriteLine("Compra não realizada. Produto não encontrado ou estoque insuficiente");
        }

        Console.WriteLine();

        l.Imprime();

        Console.WriteLine();

        valor = l.Vende("ABC04", 3);
        if (valor != -1)
        {
            Console.WriteLine("Compra realizada de valor: R$ {0:0.00}", valor);
        }
        else
        {
            Console.WriteLine("Compra não realizada. Produto não encontrado ou estoque insuficiente");
        }

        Console.WriteLine();

        l.Imprime();

        Console.WriteLine();

        ok = l.Remove("CFC01");
        Console.WriteLine("Produto (Remoção): {0}", ok ? "OK" : "Not OK");
        
        ok = l.Remove("RCC02");
        Console.WriteLine("Produto (Remoção): {0}", ok ? "OK" : "Not OK");

        ok = l.Remove("AMC03");
        Console.WriteLine("Produto (Remoção): {0}", ok ? "OK" : "Not OK");

        ok = l.Remove("CFC01");
        Console.WriteLine("Produto (Remoção): {0}", ok ? "OK" : "Not OK");
    }
}