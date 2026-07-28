using System;

public class Medico : Funcionario {

    private string especialidade;

    public Medico(int CPF, string nome, string especialidade) : base(CPF, nome) {
        this.especialidade = especialidade;
    }

    override public string getProfissao() {
        return "Medico";
    }

    public string getEspecialidade() {
        return especialidade;
    }

    new public void imprime() {
        base.imprime();
        Console.WriteLine("Especialidade: {0}", this.especialidade);
    }
}