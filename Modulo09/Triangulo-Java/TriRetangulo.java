public class TriRetangulo extends Triangulo {
    /*
     * cateto1 => lado[0]
     * cateto2 => lado[1]
     * hipotenusa => lado[2]
     */
    public TriRetangulo(double cateto1, double cateto2, double hipotenusa) {
        super(cateto1, cateto2, hipotenusa);
    }

    public double getArea() {
        /*
         * cateto1 é o lado[0]
         * cateto2 é o lado[1]
         * hipotenusa é o lado[2]
         * 
         * Area = (cateto1 * cateto2) /2
         */
        return (lados[0] * lados[1]) / 2;
    }
}
