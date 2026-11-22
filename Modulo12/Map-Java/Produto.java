
public class Produto
{

    private String codigo;
    private String descricao;
    private int estoque;
    private double preco;

    public Produto(String codigo, String descricao, int estoque, double preco)
    {
        this.codigo = codigo;
        this.descricao = descricao;
        this.estoque = estoque;
        this.preco = preco;
    }
    public void setCodigo(String codigo)
    {
        this.codigo = codigo;
    }

    public String getCodigo()
    {
        return this.codigo;
    }

    public void setDescricao(String descricao)
    {
        this.descricao = descricao;
    }

    public String getDescricao()
    {
        return this.descricao;
    }

    public void setEstoque(int estoque)
    {
        this.estoque = estoque;
    }

    public int getEstoque()
    {
        return this.estoque;
    }

    public void setPreco(double preco)
    {
        this.preco = preco;
    }

    public double getPreco()
    {
        return this.preco;
    }

    public void imprime()
    {
        System.out.printf("Código: %s", this.codigo);
        System.out.printf(", Descricao: %s", this.descricao);
        System.out.printf(", Estoque: %d", this.estoque);
        System.out.printf(", Preco: %5.2f\n", this.preco);
    }
}