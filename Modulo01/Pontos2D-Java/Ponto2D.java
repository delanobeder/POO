public class Ponto2D {
    
    // Atributos da classe

    private double x;
    private double y;

    public Ponto2D(double x, double y) { // Construtor
        this.x = x;
        this.y = y;
    }

    // Métodos getters and setters

    public double getX() {
        return this.x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return this.y;
    }

    public void setY(double y) {
        this.y = y;
    }

    // Outros métodos da classe

    public double distancia(Ponto2D p) {
        double dx = x - p.x;
        double dy = y - p.y;
        return Math.sqrt(dx * dx + dy * dy);
    }

    public void moveX(double dx) {
        this.x += dx;
    }
    
    public void moveY(double dy) {
        this.y += dy;
    }

    public void imprime() {
        System.out.printf("(%.2f, %.2f)\n", this.x, this.y);
    }
}
