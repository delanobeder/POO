using System;

public class Triangulo {

    protected double[] lados;

    protected Triangulo(double lado) : this (lado, lado, lado) {
    }

    public Triangulo(double lado1, double lado2, double lado3) {
        lados = new double[3];
        lados[0] = lado1;
        lados[1] = lado2;
        lados[2] = lado3;
    }

    public double getPerimetro() {
        double soma = 0;
        for (int i = 0; i < 3; i++) {
            soma += lados[i];
        }
        return soma;
    }

    public double getArea() {
        double semi = this.getPerimetro() / 2;
        double produto = semi;
        for (int i = 0; i < 3; i++) {
            produto *= semi - lados[i];
        }
        return Math.Sqrt(produto);
    }

    public void imprime() {
        Console.Write("Lados: ");
        for (int i = 0; i < 3; i++) {
            Console.Write("{0:0.00} ", lados[i]);
        }
        Console.WriteLine();

        Console.WriteLine("Perímetro: {0:0.00}", this.getPerimetro());
        Console.WriteLine("Área: {0:0.00}", this.getArea());
    }

    public int compare(Triangulo t) {
        double diff = this.getArea() - t.getArea();
        return (diff < 0) ? -1 : (diff > 0) ? 1 : 0;
    }
}
