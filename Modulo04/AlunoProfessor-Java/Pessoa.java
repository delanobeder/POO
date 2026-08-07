
public class Pessoa {

    private String nome;
    private int idade;

    private static int contador = 0;

    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
        incrementa();
        System.out.println("Construtor: " + this.nome);
    }

    @Override
    protected void finalize() throws Throwable {
        decrementa();
        System.out.println("Destrutor: " + this.nome);
    }
    
    public int getIdade() {
        return this.idade;
    }
    
    public void setIdade(int idade) {
        this.idade = idade;
    }
    
    public String getNome() {
        return this.nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public void imprime() {
        System.out.println("Nome: " + this.nome);
        System.out.println("Idade: " + this.idade);
    }
    
    public static int getContador() {
        return Pessoa.contador;
    }

    private static void decrementa() {
        Pessoa.contador -= 1;
    }

    private static void incrementa(){
        Pessoa.contador += 1;
    }
}

