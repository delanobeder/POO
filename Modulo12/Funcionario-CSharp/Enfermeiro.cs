using System;

namespace poo
{
    public class Enfermeiro : Funcionario
    {

        private int CRE; // Conselho Regional de Enfermagem

        public Enfermeiro(string CPF, string nome, int CRE) : base(CPF, nome)
        {
            this.CRE = CRE;
        }

        public override string GetProfissao()
        {
            return "Enfermeiro";
        }

        public int GetCRE()
        {
            return CRE;
        }

        public override void Imprime()
        {
            base.Imprime();
            Console.WriteLine("CRE: {0}", this.CRE);
        }
    }
}