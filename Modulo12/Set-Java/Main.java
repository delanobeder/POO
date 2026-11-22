import java.util.TreeSet;

public class Main
{
    public static void main(String[] args)
    {
        TreeSet<Integer> cjto_ints = new TreeSet<>();
        TreeSet<Pessoa> cjto_pessoas = new TreeSet<>();

        cjto_ints.add(2);
        cjto_ints.add(1);
        cjto_ints.add(2);

        for(int i: cjto_ints)
        {
            System.out.println(i);
        }

        System.out.println();
        
        cjto_pessoas.add(new Pessoa("Maria", 20));
        cjto_pessoas.add(new Pessoa("João", 18));
        cjto_pessoas.add(new Pessoa("Maria", 20));
        
        for (Pessoa p: cjto_pessoas) {
            p.imprime();
        }
    }
}