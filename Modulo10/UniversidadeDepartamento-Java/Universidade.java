
public class Universidade {

    private String nome;
    private Departamento departamentos[];
    private int qtde;
    private int max;

    public Universidade(String nome) {
        System.out.println("[Construindo " + nome + "]");
        this.nome = nome;
        this.qtde = 0;
        this.max = 2;
        departamentos = new Departamento[max];
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    private void realoca(int tam) {

        // cria um novo array com mudança no tamanho do array

        max = tam;

        Departamento aux[] = new Departamento[max];

        for (int i = 0; i < qtde; i++) {
            aux[i] = departamentos[i];
        }

        departamentos = aux;
    }

    public void adicionaDepartamento(String nome, String sigla) {
        if (qtde == max) {
            realoca(max + 5);
        }
        departamentos[qtde++] = new Departamento(nome, sigla, this);
    }

    public void removeDepartamento(String sigla) {
        boolean found = false;
        int i = 0;

        while (i < qtde && !found) {
            if (departamentos[i].getSigla().equals(sigla)) {
                found = true;
            } else {
                i++;
            }
        }

        if (found) {
            departamentos[i] = null;

            while (i < qtde) {
                departamentos[i] = departamentos[i + 1];
                i++;
            }

            qtde = qtde - 1;

            if (qtde == max - 5) {
                realoca(max - 5);
            }
        }
    }

    public void imprime() {
        System.out.println("Departamentos da " + nome);
        for (int i = 0; i < qtde; i++) {
            departamentos[i].imprime();
        }
    }
}