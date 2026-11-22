public class Pessoa : IComparable<Pessoa>
{
    private string nome;
    private int idade;

    public Pessoa(string nome, int idade)
    {
        this.nome = nome;
        this.idade = idade;
    }

    public string GetNome()
    {
        return nome;
    }

    public void SetNome(string nome)
    {
        this.nome = nome;
    }

    public int GetIdade()
    {
        return idade;
    }

    public void SetIdade(int idade)
    {
        this.idade = idade;
    }
    virtual public void Imprime()
    {
        Console.Write("Nome: {0}", nome);
        Console.WriteLine(", Idade: {0}", idade);
    }

    public int CompareTo(Pessoa? p)
    {
        if (p == null)
        {
            return 1;
        }
        else
        {
            return this.nome.CompareTo(p.nome);
        }
    }

    public override bool Equals(object? obj)
    {
        if (obj == null || GetType() != obj.GetType())
        {
            return false;
        }
        else
        {
            Pessoa p = (Pessoa)obj;
            return this.nome.Equals(p.nome) && this.idade == p.idade;
        }
    }

    public override int GetHashCode()
    {
        return this.nome.GetHashCode() * this.idade;
    }
}
