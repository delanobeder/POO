using System;
using System.Collections;

namespace poo {

    public class Pessoa : IComparable<Pessoa> {

        private string nome;
        private int CPF;

        public Pessoa(string nome, int CPF) {
            this.CPF = CPF;
            this.nome = nome;
        }

        public int getCPF() {
            return CPF;
        }

        public void setCPF(int CPF) {
            this.CPF = CPF;
        }

        public string getNome() {
            return nome;
        }

        public void setNome(string nome) {
            this.nome = nome;
        }

        public virtual void imprime() {
            Console.WriteLine("Nome: " + nome);
            Console.WriteLine("CPF: " + CPF);
        }

        public int CompareTo(Pessoa outro) { // comparação padrão => por nome
            if (outro == null)
                return 1;
            else
                return this.nome.CompareTo(outro.nome);
        }
    }

}