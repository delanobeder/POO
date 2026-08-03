using System;

namespace poo {

    public class Equilatero : Triangulo {

        public Equilatero(double lado) : base(lado, lado, lado) {
        }

        public override double getArea() {
            return lado1 * lado1 * Math.Sqrt(3) / 4;
        }
    }

}