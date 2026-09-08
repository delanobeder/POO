using System;

public class Equilatero : Triangulo
{
    public Equilatero(double lado) : base(lado)
    {
    }

    public override double GetArea()
    {
        return lados[0] * lados[0] * Math.Sqrt(3) / 4;
    }
}
