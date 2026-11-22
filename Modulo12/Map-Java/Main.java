
public class Main
{

    public static void main(String[] args)
    {
        Loja l = new Loja();
        boolean ok;
        double valor;

        ok = l.adiciona(new Produto("CFC01", "Café Coringa 500mg", 5, 29.79));
        System.out.printf("Produto (Adição): %s\n", ok ? "OK" : "Not OK");

        ok = l.adiciona(new Produto("RCC02", "Coca-Cola 600ml", 4, 5.69));
        System.out.printf("Produto (Adição): %s\n", ok ? "OK" : "Not OK");

        ok = l.adiciona(new Produto("AMC03", "Amaciante Concentrado Comfort 1,5L", 3, 31.90));
        System.out.printf("Produto (Adição): %s\n", ok ? "OK" : "Not OK");

        ok = l.adiciona(new Produto("CFC01", "Café Coringa 500mg", 5, 29.79));
        System.out.printf("Produto (Adição): %s\n", ok ? "OK" : "Not OK");

        System.out.println();

        l.imprime();

        System.out.println();

        valor = l.vende("RCC02", 3);
        if (valor != -1)
        {
            System.out.printf("Compra realizada de valor: R$ %5.2f\n", valor);
        }
        else
        {
            System.out.println("Compra não realizada. Produto não encontrado ou estoque insuficiente");
        }

        System.out.println();

        l.imprime();

        System.out.println();

        valor = l.vende("RCC02", 3);
        if (valor != -1)
        {
            System.out.printf("Compra realizada de valor: R$ %5.2f\n", valor);
        }
        else
        {
            System.out.println("Compra não realizada. Produto não encontrado ou estoque insuficiente");
        }

        System.out.println();

        l.imprime();

        System.out.println();

        valor = l.vende("ABC04", 3);
        if (valor != -1)
        {
            System.out.printf("Compra realizada de valor: R$ %5.2f\n", valor);
        }
        else
        {
            System.out.println("Compra não realizada. Produto não encontrado ou estoque insuficiente");
        }

        System.out.println();

        l.imprime();

        System.out.println();

        ok = l.remove("CFC01");
        System.out.printf("Produto (Remoção): %s\n", ok ? "OK" : "Not OK");
        
        ok = l.remove("RCC02");
        System.out.printf("Produto (Remoção): %s\n", ok ? "OK" : "Not OK");

        ok = l.remove("AMC03");
        System.out.printf("Produto (Remoção): %s\n", ok ? "OK" : "Not OK");

        ok = l.remove("CFC01");
        System.out.printf("Produto (Remoção): %s\n", ok ? "OK" : "Not OK");
    }
}