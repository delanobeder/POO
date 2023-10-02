public class Equilatero extends Triangulo {
    public Equilatero(double lado) {
        super(lado);
    }

    public double getArea() {
        return lados[0] * lados[0] * Math.sqrt(3) / 4;
    }
}
