public class Loja
{
    Dictionary<string, Produto> catalogo;

    public Loja()
    {
        catalogo = new Dictionary<string, Produto>();
    }

    public bool Adiciona(Produto p)
    {
        bool ok = false;
        string codigo = p.GetCodigo();

        // Checa se produto encontra-se no catalogo

        if (!this.catalogo.ContainsKey(codigo)) // não achou
        {
            this.catalogo.Add(codigo, p);
            ok = true;
        }

        return ok;
    }

    public bool Remove(string codigo)
    {
        return this.catalogo.Remove(codigo);
    }

    public double Vende(string codigo, int qtde)
    {
        double valor = -1;
        // Checa se produto encontra-se no catálogo

        if (this.catalogo.ContainsKey(codigo)) // achou
        {
            Produto p = this.catalogo[codigo];
            int estoque = p.GetEstoque();

            // Checa estoque do produto

            if (estoque >= qtde)
            {
                p.SetEstoque(estoque - qtde);
                valor = p.GetPreco() * qtde;
            }
        }

        return valor;
    }

    public void Imprime()
    {
        foreach (KeyValuePair<string, Produto> kvp in this.catalogo)
        {
            Console.Write("[Chave: {0}] => ", kvp.Key);
            kvp.Value.Imprime();
                
        }
    }
}