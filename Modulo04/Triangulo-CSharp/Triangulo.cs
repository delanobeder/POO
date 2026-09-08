using System;

public class Triangulo
{

    protected double[] lados;

    protected Triangulo(double lado) : this(lado, lado, lado)
    {
    }

    public Triangulo(double lado1, double lado2, double lado3)
    {
        lados = new double[3];
        lados[0] = lado1;
        lados[1] = lado2;
        lados[2] = lado3;
    }

    public double GetPerimetro()
    {
        double soma = 0;
        for (int i = 0; i < 3; i++)
        {
            soma += lados[i];
        }
        return soma;
    }

    public virtual double GetArea()
    {
        double semi = this.GetPerimetro() / 2;
        double produto = semi;
        for (int i = 0; i < 3; i++)
        {
            produto *= semi - lados[i];
        }
        return Math.Sqrt(produto);
    }

    public void Imprime()
    {
        Console.Write("Lados: ");
        for (int i = 0; i < 3; i++)
        {
            Console.Write("{0:0.00} ", lados[i]);
        }
        Console.WriteLine();

        Console.WriteLine("Perímetro: {0:0.00}", this.GetPerimetro());
        Console.WriteLine("Área: {0:0.00}", this.GetArea());
    }

    public int Compare(Triangulo t)
    {
        double diff = this.GetArea() - t.GetArea();
        return (diff < 0) ? -1 : (diff > 0) ? 1 : 0;
    }
}
