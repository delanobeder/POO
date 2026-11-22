
namespace poo;

public class Calculadora<T>
{
    private T num1, num2;

    public Calculadora(T num1, T num2)
    {
        this.num1 = num1;
        this.num2 = num2;
    }

    public T Soma()
    {
        return (dynamic)num1! + (dynamic)num2!;
    }

    public T? Subtracao()
    {
        return (dynamic)num1! - (dynamic)num2!;
    }

    public T Multiplicacao()
    {
        return (dynamic)num1! * (dynamic)num2!;
    }

    public T Divisao()
    {
        return (dynamic)num1! / (dynamic)num2!;
    }

    public void Imprime()
    {
        Console.WriteLine("Numeros: {0} {1}", num1, num2);
        Console.WriteLine("Soma: {0}", this.Soma());
        Console.WriteLine("Subtracao: {0}", this.Subtracao());
        Console.WriteLine("Multiplicacao: {0}", this.Multiplicacao());
        Console.WriteLine("Divisão: {0}", this.Divisao());
    }
}
