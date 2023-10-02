
public class Medico extends Funcionario {

    private String especialidade;

    public Medico(int CPF, String nome, String especialidade) {
        super(CPF, nome);
        this.especialidade = especialidade;
    }

    public String getProfissao() {
        return "Medico";
    }

    public void imprime() {
        super.imprime();
        System.out.println("Especialidade: " + especialidade);
    }
}