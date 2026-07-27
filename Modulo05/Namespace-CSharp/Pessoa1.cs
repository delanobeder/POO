using System;

namespace ns1 {

    public class Pessoa {

        private string nome;
        private int idade;

        public Pessoa(string nome, int idade) {
            this.nome = nome;
            this.idade = idade;
        }

        public void imprime() {
            Console.WriteLine("Nome: {0}", nome);
            Console.WriteLine("Idade: {0}", idade);
        }
    }
}