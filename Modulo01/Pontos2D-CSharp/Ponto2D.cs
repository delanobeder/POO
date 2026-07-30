using System;

public class Ponto2D {
    
    // Atributos da classe

    private float x;
    private float y;

    public Ponto2D(float x, float y) { // Construtor
        this.x = x;
        this.y = y;
    }

    // Métodos getters and setters

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

    // Outros métodos da classe

    public float distancia(Ponto2D p) {
        double dx = x - p.x;
        double dy = y - p.y;
        return ((float)Math.Sqrt(dx * dx + dy * dy));
    }

    public void moveX(float dx) {
        this.x += dx;
    }
    
    public void moveY(float dy) {
        this.y += dy;
    }

    public void imprime() {
        Console.WriteLine("({0:0.00}, {1:0.00})", this.x, this.y);
    }
}
