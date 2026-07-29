package br.ufscar.dc.ed;

import java.util.ArrayList;
import java.util.List;

public class Queue<T> {

    private List<T> elements;
    private int maxSize;

    public Queue(int maxSize) {
        this.maxSize = maxSize;
        elements = new ArrayList<>();
    }

    // métodos da classe

    public boolean empty() {
        return elements.isEmpty();
    }

    public boolean full() {
        return this.size() == maxSize;
    }

    public boolean add(T v) {
        boolean ok = !full();
        if (ok) {
            elements.add(v);
        }
        return ok;
    }

    public T remove() {
        T v = null;
        boolean ok = !empty();
        if (ok) {
            v = elements.get(0);
            elements.remove(0);
        }
        return v;
    }

    public int size() {
        return elements.size();
    }

    public void imprime() {
        System.out.print("[");
        for (T element: elements) {
            System.out.print(" " + element);
        }
        System.out.println(" ] Size => " + size() + ", maxSize => " + maxSize);
    }
}