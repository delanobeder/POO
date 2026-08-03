namespace poo {
    
    public class Complexo {
        private double real;
        private double imaginaria;

        public Complexo(double real, double imaginaria) {
            this.real = real;
            this.imaginaria = imaginaria;
        }

        public override string ToString() {
            bool flag = this.imaginaria >= 0;
            string op = (flag ? " + " : " - ");
            double img = (flag ? this.imaginaria : -this.imaginaria);

            return string.Format("{0}{1}{2}i", this.real, op, img);
        }

        // operadores aritméticos binários

        public static Complexo operator +(Complexo c1, Complexo c2) {
            double r = c1.real + c2.real;
            double i = c1.imaginaria + c2.imaginaria;
            return new Complexo(r, i);
        }

        public static Complexo operator -(Complexo c1, Complexo c2) {
            return c1 + -c2;
        }

        public static Complexo operator *(Complexo c1, Complexo c2) {
            double a = c1.real;
            double b = c1.imaginaria;
            double c = c2.real;
            double d = c2.imaginaria;

            double r = a * c - b * d;
            double i = a * d + b * c;

            return new Complexo(r, i);
        }

        public static Complexo operator /(Complexo c1, Complexo c2) {
            double a = c1.real;
            double b = c1.imaginaria;
            double c = c2.real;
            double d = c2.imaginaria;

            double r = (a * c + b * d) / (c * c + d * d);
            double i = (b * c - a * d) / (c * c + d * d);

            return new Complexo(r, i);
        }

        // operador aritméticos unários

        public static Complexo operator -(Complexo c1) {
            return new Complexo(-c1.real, -c1.imaginaria);
        }
    }

}