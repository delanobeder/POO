using System;

class P {
}

class X {
    public void x(int i) {
        Console.WriteLine("Implementação Método x(int) classe X com parametro {0}", i);
    }

    public void x(P p) {
        Console.WriteLine("Implementação Método x(P*) classe X com parametro {0}", p);
    }
}

class Y : X {
    new public void x(int i) {
        Console.WriteLine("Implementação Método x(int) classe Y com parametro {0}",  i);
    }

    public void x(String s) {
        Console.WriteLine("Implementação Método x(String) classe Y com parametro {0}", s);
    }
}

public class Program {
    public static void Main(string[] args) {
        Y y = new Y();

        y.x(10);
        y.x(new P());
        y.x("Fulano");
    }
}