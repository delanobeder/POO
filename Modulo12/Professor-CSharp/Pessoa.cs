using System;
using System.Collections;

namespace poo
{

    public class Pessoa : IComparable<Pessoa>
    {

        private string nome;
        private int CPF;

        public Pessoa(string nome, int CPF)
        {
            this.CPF = CPF;
            this.nome = nome;
        }

        public int GetCPF()
        {
            return CPF;
        }

        public void SetCPF(int CPF)
        {
            this.CPF = CPF;
        }

        public string GetNome()
        {
            return nome;
        }

        public void SetNome(string nome)
        {
            this.nome = nome;
        }

        public virtual void Imprime()
        {
            Console.WriteLine("Nome: " + nome);
            Console.WriteLine("CPF: " + CPF);
        }

        public int CompareTo(Pessoa outro)
        { // comparação padrão => por nome
            if (outro == null)
                return 1;
            else
                return this.nome.CompareTo(outro.nome);
        }
    }

}