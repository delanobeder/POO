class Main {
  public static void main(String[] args) {
    
    Data d1 = new Data(20, 8, 2019);
    Data d2 = new Data(20, 8, 2020);
    Data d3 = new Data(20, 8, 2019); 
    
    d1.imprime();
    d1.imprimePorExtenso();
    d2.imprime();
    d2.imprimePorExtenso();
     
    System.out.println(d1.anoBissexto());
    System.out.println(d2.anoBissexto());
    
    System.out.println(d1.compare(d2));
    System.out.println(d1.compare(d3));
    System.out.println(d2.compare(d1));
  }
}