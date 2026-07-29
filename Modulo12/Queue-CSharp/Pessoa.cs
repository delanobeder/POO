namespace poo {

    public class Pessoa {
        private string nome;

        public Pessoa(string nome) {
            this.nome = nome;
        }

        public override string ToString() {
            return this.nome;
        }
    }

}