public class Ponto2D {
    
    // atributos da classe

    private float x;
    private float y;

    public Ponto2D(float x, float y) { // construtor
        this.x = x;
        this.y = y;
    }

    public float getX() {
        return this.x;
    }

    public void setX(float x) {
        this.x = x;
    }

    public float getY() {
        return this.y;
    }

    public void setY(float y) {
        this.y = y;
    }

    // método da classe

    public float distancia(final Ponto2D p) {
        double dx = x - p.x;
        double dy = y - p.y;
        return ((float)Math.sqrt(dx * dx + dy * dy));
    }

    public void moveX(float dx) {
        this.x += dx;
    }
    
    public void moveY(float dy) {
        this.y += dy;
    }

    public void imprime() {
        System.out.printf("(%.2f, %.2f)\n", this.x, this.y);
    }
}