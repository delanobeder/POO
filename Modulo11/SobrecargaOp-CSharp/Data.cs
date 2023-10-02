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