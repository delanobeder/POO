using System;

namespace poo {
    public class Medico : Funcionario {

        private string especialidade;

        public Medico(string CPF, string nome, string especialidade) : base(CPF, nome) {
            this.especialidade = especialidade;
        }

        public override string getProfissao() {
            return "Medico";
        }

        public string getEspecialidade() {
            return especialidade;
        }

        public override void imprime() {
            base.imprime();
            Console.WriteLine("Especialidade: {0}", this.especialidade);
        }
    }
}