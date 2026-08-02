using System;

namespace poo {

    public class Carro {

        private string marca;
        private string cor;
        private int ano;
        private string placa;
        private Pessoa dono;

        public Carro(string marca, string cor, int ano, string placa) {
            this.marca = marca;
            this.cor = cor;
            this.ano = ano;
            this.placa = placa;
        }

        public string getMarca() {
            return this.marca;
        }

        public void setMarca(string marca) {
            this.marca = marca;
        }

        public string getCor() {
            return this.cor;
        }

        public void setCor(string cor) {
            this.cor = cor;
        }

        public int getAno() {
            return ano;
        }

        public void setAno(int ano) {
            this.ano = ano;
        }

        public string getPlaca() {
            return placa;
        }

        public void setPlaca(string placa) {
            this.placa = placa;
        }

        public Pessoa getDono() {
            return dono;
        }

        public void setDono(Pessoa dono) {
            this.dono = dono;
        }

        public void imprime() {

            Console.WriteLine("Marca: " + this.marca);
            Console.WriteLine("Cor: " + this.cor);
            Console.WriteLine("Ano: " + this.ano);
            Console.WriteLine("Placa: " + this.placa);
            if (this.dono != null) {
                Console.WriteLine("Dono: " + this.dono.getNome());
            }
        }
    }
}