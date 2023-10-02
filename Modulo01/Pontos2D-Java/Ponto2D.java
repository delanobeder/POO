public class Ponto2D {
    
    // atributos da classe
    private float x;
    private float y;

    public Ponto2D(float x, float y) { // construtor
        this.x = x;
        this.y = y;
    }

    // método da classe

    public double distancia(final Ponto2D p) {
        double dx = x - p.x;
        double dy = y - p.y;
        return Math.sqrt(dx * dx + dy * dy);
    }

    public void moveX(float dx) {
        this.x += dx;
    }
    
    public void moveY(float dy) {
        this.y += dy;
    }

    public void imprime() {
        System.out.printf("(%5.2f, %5.2f)\n", this.x, this.y);
    }
}