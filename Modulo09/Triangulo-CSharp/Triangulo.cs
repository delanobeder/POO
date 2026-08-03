using System;

namespace poo {
    public class Triangulo {

        protected double lado1, lado2, lado3;

        public Triangulo(double lado1, double lado2, double lado3) {
            this.lado1 = lado1;
            this.lado2 = lado2;
            this.lado3 = lado3;
        }

        public double getPerimetro() {
            return lado1 + lado2 + lado3;
        }

        public virtual double getArea() {
            double p = getPerimetro() / 2;

            return Math.Sqrt(p * (p - lado1) * (p - lado2) * (p - lado3));
        }

        public static bool operator >(Triangulo t1, Triangulo t2) {
            return t1.getArea() > t2.getArea();
        }

        public static bool operator >=(Triangulo t1, Triangulo t2) {
            return t1 > t2 || t1 == t2;
        }

        public static bool operator <(Triangulo t1, Triangulo t2) {
            return !(t1 >= t2);
        }

        public static bool operator <=(Triangulo t1, Triangulo t2) {
            return t1 < t2 || t1 == t2;
        }

        public static bool operator ==(Triangulo t1, Triangulo t2) {
            return t1.getArea() == t2.getArea();
        }

        public static bool operator !=(Triangulo t1, Triangulo t2) {
            return !(t1 == t2);
        }

        public void imprime() {
            Console.Write("Lados: [" + this.lado1);
            Console.Write(", " + this.lado2);
            Console.WriteLine(", " + this.lado3 + "]");
            Console.WriteLine("Perímetro: " + this.getPerimetro());
            Console.WriteLine("Área: " + this.getArea());
        }

        public override bool Equals(Object obj) {
            //Check for null and compare run-time types.
            if ((obj == null) || !this.GetType().Equals(obj.GetType())) {
                return false;
            } else {
                Triangulo t = (Triangulo)obj;
                return this == t;
            }
        }

        public override int GetHashCode() {
            return HashCode.Combine(lado1, lado2, lado3);
        }
    }

}