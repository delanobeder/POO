using System;

namespace poo
{
    public class Departamento
    {
        private string nome;
        private string sigla;
        private Universidade universidade;

        public Departamento(string nome, string sigla, Universidade universidade)
        {
            this.nome = nome;
            this.sigla = sigla;
            this.universidade = universidade;
            Console.WriteLine("[Construindo departamento " + sigla + "]");
        }

        public string GetNome()
        {
            return this.nome;
        }

        public void SetNome(string nome)
        {
            this.nome = nome;
        }

        public string GetSigla()
        {
            return this.sigla;
        }

        public void SetSigla(string sigla)
        {
            this.sigla = sigla;
        }

        public Universidade GetUniversidade()
        {
            return this.universidade;
        }

        public void SetUniversidade(Universidade universidade)
        {
            this.universidade = universidade;
        }

        public void Imprime()
        {
            Console.Write("Departamento " + nome + " de sigla " + sigla);
            Console.WriteLine(" (" + universidade.GetNome() + ")");
        }
    }
}