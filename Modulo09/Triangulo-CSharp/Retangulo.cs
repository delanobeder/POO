public class Retangulo : Triangulo {
    public Retangulo(double cateto1, double cateto2, double hipotenuza) : base(cateto1, cateto2, hipotenuza) {
    }
    new public double getArea() {
        return lado1 * lado2 / 2;
    }
}
