import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class Main {

    public static void remove(ArrayList<Integer> l, Integer el) { 
        /*
        int i = 0;
        while (i < l.size() && l.get(i) != el) {
            i++;
        }
        if (i != l.size()) {
            l.remove(i); // remove o i-esimo elemento
        }
        */

        l.remove(el); // busca o elemento e o remove
    }

    public static boolean encontra(ArrayList<Integer> l, Integer el) {
        
        /*
        int i = 0;
        while (i < l.size() && l.get(i) != el) {
            i++;
        }
        return i != l.size();
        */

        return l.contains(el);
    }

    public static void imprime(ArrayList<Integer> l) {
        for (int i = 1; i <= l.size(); i++) {
            System.out.printf("%02d", l.get(i - 1));
            if (i % 10 == 0 || i == l.size()) {
                System.out.println();
            } else {
                System.out.print(" ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Random rand = new Random();
 
        ArrayList<Integer> colecao = new ArrayList<>();

        for (int i = 0; i < 50; i++) {
            int segredo;
            do {
                segredo = rand.nextInt(50) + 1;
            } while (encontra(colecao, segredo));
            colecao.add(segredo);
        }

        /* 
        ArrayList<Integer> colecao = new ArrayList<>(Collections.nCopies(50, 0));

        for (int i = 0; i < 50; i++) {
            int segredo;
            do {
                segredo = rand.nextInt(50) + 1;
            } while (encontra(colecao, segredo));
            colecao.set(i, segredo);
        }
        */

        System.out.println();

        imprime(colecao);

        Collections.sort(colecao);

        imprime(colecao);

        colecao.remove(22); // remove o 23o elemento

        remove(colecao, 7);
        remove(colecao, 38);
        remove(colecao, 5);
        remove(colecao, 17);

        imprime(colecao);

        // remove os últimos 5 elementos
        for (int i = 0; i < 5; i++) {
            colecao.remove(colecao.size() - 1);
        }

        imprime(colecao);

        // remove os últimos 10 elementos
        colecao.subList(colecao.size() - 10, colecao.size()).clear();

        imprime(colecao);
    }
}