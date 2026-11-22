
public class Produto
{

    private string codigo;
    private string descricao;
    private int estoque;
    private double preco;

    public Produto(string codigo, string descricao, int estoque, double preco)
    {
        this.codigo = codigo;
        this.descricao = descricao;
        this.estoque = estoque;
        this.preco = preco;
    }
    public void SetCodigo(string codigo)
    {
        this.codigo = codigo;
    }

    public string GetCodigo()
    {
        return this.codigo;
    }

    public void SetDescricao(string descricao)
    {
        this.descricao = descricao;
    }

    public string GetDescricao()
    {
        return this.descricao;
    }

    public void SetEstoque(int estoque)
    {
        this.estoque = estoque;
    }

    public int GetEstoque()
    {
        return this.estoque;
    }

    public void SetPreco(double preco)
    {
        this.preco = preco;
    }

    public double GetPreco()
    {
        return this.preco;
    }

    public void Imprime()
    {
        Console.Write("Código: {0}", this.codigo);
        Console.Write(", Descricao: {0}", this.descricao);
        Console.Write(", Estoque: {0}", this.estoque);
        Console.WriteLine(", Preco: {0:0.00}", this.preco);
    }
}