using System;
using System.Collections.Generic;

namespace ed {

    public class Queue<T> {

        private List<T> elements;
        private int maxSize;

        public Queue(int maxSize) {
            this.maxSize = maxSize;
            elements = new List<T>();
        }

        // métodos da classe

        public bool empty() {
            return elements.Count == 0;
        }

        public bool full() {
            return this.size() == maxSize;
        }

        public bool add(T v) {
            bool ok = !full();
            if (ok) {
                elements.Add(v);
            }
            return ok;
        }

        public T remove() {
            T v = default(T);
            bool ok = !empty();
            if (ok) {
                v = elements[0];
                elements.RemoveAt(0);
            }
            return v;
        }

        public int size() {
            return elements.Count;
        }

        public void imprime() {
            Console.Write("[");
            foreach (T element in elements) {
                Console.Write(" " + element);
            }
            Console.WriteLine(" ] Size => " + size() + ", maxSize => " + maxSize);
        }
    }

}