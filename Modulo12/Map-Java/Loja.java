
import java.util.HashMap;

public class Loja
{
    HashMap<String, Produto> catalogo;

    public Loja()
    {
        catalogo = new HashMap<>();
    }

    public boolean adiciona(Produto p)
    {
        boolean ok = false;
        String codigo = p.getCodigo();

        // Checa se produto encontra-se no catalogo

        if (!this.catalogo.containsKey(codigo)) // não achou
        {
            this.catalogo.put(codigo, p);
            ok = true;
        }

        return ok;
    }

    public boolean remove(String codigo)
    {
        return (this.catalogo.remove(codigo) != null);
    }

    public double vende(String codigo, int qtde)
    {
        double valor = -1;
        // Checa se produto encontra-se no catálogo

        if (this.catalogo.containsKey(codigo)) // achou
        {
            Produto p = this.catalogo.get(codigo);
            int estoque = p.getEstoque();

            // Checa estoque do produto

            if (estoque >= qtde)
            {
                p.setEstoque(estoque - qtde);
                valor = p.getPreco() * qtde;
            }
        }

        return valor;
    }

    public void imprime()
    {
        for (String key : this.catalogo.keySet()) {
            Produto p = this.catalogo.get(key);
            System.out.printf("[Chave: %s] => ", key);
            p.imprime();
        }
    }
}