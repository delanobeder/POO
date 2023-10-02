
public class Enfermeiro extends Funcionario{

    private int CRE; // Conselho Regional de Enfermagem

    public Enfermeiro(int CPF, String nome, int CRE) {
        super(CPF, nome);
        this.CRE = CRE;
    }

    public String getProfissao() {
        return "Enfermeiro";
    }

    public void imprime() {
        super.imprime();
        System.out.println("CRE: " + CRE);
    } 
}