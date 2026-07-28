using System;

public class Equilatero : Triangulo {

    public Equilatero(double lado) : base(lado, lado, lado) {
    }

    new public double getArea() {
        return lado1 * lado1 * Math.Sqrt(3) / 4;
    }
}