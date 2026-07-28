class P {
}

class X {
    public void x(int i) {
        System.out.println("Implementação Método x(int) classe X com parametro " + i);
    }

    public void x(P p) {
        System.out.println("Implementação Método x(P*) classe X com parametro " + p);
    }
}

class Y extends X {
    public void x(int i) {
        System.out.println("Implementação Método x(int) classe Y com parametro " + i);
    }

    public void x(String s) {
        System.out.println("Implementação Método x(String) classe Y com parametro " + s);
    }
}

public class Main {
    public static void main(String[] args) {
        Y y = new Y();

        y.x(10);
        y.x(new P());
        y.x("Fulano");
    }
}