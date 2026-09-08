using System;

public class Ponto2D
{

    // Atributos da classe

    private double x;
    private double y;

    public Ponto2D(double x, double y)
    { // Construtor
        this.x = x;
        this.y = y;
    }

    // Métodos Getters and setters

    public double GetX()
    {
        return this.x;
    }

    public void SetX(double x)
    {
        this.x = x;
    }

    public double GetY()
    {
        return this.y;
    }

    public void SetY(double y)
    {
        this.y = y;
    }

    // Outros métodos da classe

    public double Distancia(Ponto2D p)
    {
        double dx = x - p.x;
        double dy = y - p.y;
        return Math.Sqrt(dx * dx + dy * dy);
    }

    public void MoveX(double dx)
    {
        this.x += dx;
    }

    public void MoveY(double dy)
    {
        this.y += dy;
    }

    public void Imprime()
    {
        Console.WriteLine("({0:0.00}, {1:0.00})", this.x, this.y);
    }
}
