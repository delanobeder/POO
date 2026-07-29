import java.util.Random;

import br.ufscar.dc.ed.Queue;
import br.ufscar.dc.poo.Pessoa;

public class Main {

    public static void main(String[] args) {

        Random rand = new Random();

        Queue<Integer> q = new Queue<>(10);

        q.imprime();

        while (!q.full()) {
            int valor = rand.nextInt(100000) % 100 + 1;
            boolean ok = q.add(valor);
            if (ok) {
                System.out.println("Adicionado " + valor);
                q.imprime();
            }
        }

        while (!q.empty()) {
            int opcao = rand.nextInt(100000) % 3;
            int valor;
            if (opcao == 0) {
                valor = rand.nextInt(100) % 100 + 1;
                boolean ok = q.add(valor);
                if (ok) {
                    System.out.println("Adicionado " + valor);
                    q.imprime();
                }
            } else {
                valor = q.remove();
                System.out.println("Removido " + valor);
                q.imprime();
            }
        }

        System.out.println();
        System.out.println();

        Queue<Pessoa> qp = new Queue<>(5);

        qp.add(new Pessoa("Pessoa01"));
        qp.imprime();
        qp.add(new Pessoa("Pessoa02"));
        qp.imprime();
        qp.add(new Pessoa("Pessoa03"));
        qp.imprime();
        qp.add(new Pessoa("Pessoa04"));
        qp.imprime();
        qp.add(new Pessoa("Pessoa05"));
        qp.imprime();

        while (!qp.empty()) {
            Pessoa p = qp.remove();
            System.out.println("Removido " + p);
            qp.imprime();
        }
    }
}