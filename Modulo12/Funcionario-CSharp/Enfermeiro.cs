using System;

namespace poo {
    public class Enfermeiro : Funcionario {

        private int CRE; // Conselho Regional de Enfermagem

        public Enfermeiro(string CPF, string nome, int CRE) : base(CPF, nome) {
            this.CRE = CRE;
        }

        override public string getProfissao() {
            return "Enfermeiro";
        }

        public int getCRE() {
            return CRE;
        }

        new public void imprime() {
            base.imprime();
            Console.WriteLine("CRE: {0}", this.CRE);
        }
    }
}