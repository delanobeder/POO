using System;

namespace poo {
    public class Enfermeiro : Funcionario {

        private int CRE; // Conselho Regional de Enfermagem

        public Enfermeiro(string CPF, string nome, int CRE) : base(CPF, nome) {
            this.CRE = CRE;
        }

        public override string getProfissao() {
            return "Enfermeiro";
        }

        public int getCRE() {
            return CRE;
        }

        public override void imprime() {
            base.imprime();
            Console.WriteLine("CRE: {0}", this.CRE);
        }
    }
}