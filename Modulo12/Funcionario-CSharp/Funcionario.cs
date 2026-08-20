using System;

namespace poo {
    public abstract class Funcionario : IComparable<Funcionario> {
        private string CPF;
        private string nome;

        public Funcionario(string CPF, string nome)        {
            this.CPF = CPF;
            this.nome = nome;
        }

        public abstract string getProfissao(); // método abstrato

        virtual public void imprime() {
            Console.WriteLine("Nome: {0}", this.nome);
            Console.WriteLine("CPF: {0}", this.CPF);
            Console.WriteLine("Profissão : {0}", this.getProfissao());
        }

        public int CompareTo(Funcionario outro) { // comparação padrão => por CPF
            if (outro == null)
                return 1;
            else
                return this.CPF.CompareTo(outro.CPF);
        }

        public static int CompareProfissao(Funcionario x, Funcionario y) {
            string profissao1 = x.getProfissao();
            string profissao2 = y.getProfissao();

            if (profissao1 != profissao2) {
                return profissao1.CompareTo(profissao2);
            } else {
                return x.CompareTo(y); // invoca comparação padrão => por CPF
            }
        }
    }
}