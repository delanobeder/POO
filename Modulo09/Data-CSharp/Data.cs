using System;

public class Data {

    private int dia, mes, ano;

    public Data(int dia, int mes, int ano) {
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }

    // operadores relacionais

    public static bool operator >(Data d1, Data d2) {
        return d1.compare(d2) > 0;
    }

    public static bool operator >=(Data d1, Data d2) {
        return (d1 > d2) || (d1 == d2);
    }

    public static bool operator <(Data d1, Data d2) {
        return !(d1 > d2) && !(d1 == d2);
    }

    public static bool operator <=(Data d1, Data d2) {
        return !(d1 > d2);
    }

    public static bool operator ==(Data d1, Data d2) {
        return d1.compare(d2) == 0;
    }

    public static bool operator !=(Data d1, Data d2) {
        return !(d1 == d2);
    }

    // prefix increment => ++d1

    public static Data operator ++(Data d1) {

        int dia = d1.dia;
        int mes = d1.mes;
        int ano = d1.ano;

        int maxNroDias;

        switch (mes) {
            case 2: {
                    bool bissexto = (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
                    maxNroDias = bissexto ? 29 : 28;
                    break;
            }
            case 4:
            case 6:
            case 9:
            case 11: {
                    maxNroDias = 30;
                    break;
            }
            default: {
                    maxNroDias = 31;
                    break;
            }
        }

        dia++;
        if (dia > maxNroDias) {
            dia -= maxNroDias;
            mes++;
        }

        if (mes > 12) {
            mes--;
            ano++;
        }

        return new Data(dia, mes, ano);
    }

    // posfix increment => d1++

    public static Data operator +(Data d1, int inc) {
        Data old = new Data(d1.dia, d1.mes, d1.ano);
        d1++;
        return old;   
    }

    private int compare(Data outra) {
        if (this.ano != outra.ano) {
            return this.ano - outra.ano;
        } else if (this.mes != outra.mes) {
            return this.mes - outra.mes;
        } else return this.dia - outra.dia;
    }
    
    public override string ToString() {
        return string.Format("{0:00}/{1:00}/{2:0000}", dia, mes, ano);
    }

    public override bool Equals(Object obj) {
      //Check for null and compare run-time types.
      if ((obj == null) || ! this.GetType().Equals(obj.GetType())) {
         return false;
      } else {
         Data d = (Data) obj;
         return this == d;
      }
    }

    public override int GetHashCode() {
        return HashCode.Combine(dia, mes, ano);
    }
}