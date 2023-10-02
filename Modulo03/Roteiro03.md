## PROGRAMAÇÃO ORIENTADA A OBJETOS
**Prof. Delano M. Beder**

- - -

##### Roteiro 03

- - -

Representar **Datas** e as seguintes operações:

* Operação **imprime** que imprime a data no formato *DD/MM/YY*YY
Exemplo: 20/08/2019

* Operação **imprimePorExtenso** que imprime a data por extenso
Exemplo: 20 de Agosto de 2019

* Operação **anoBissexto** que verifica (verdade ou falso) se a data encontra-se em um ano bissexto.
	> São bissextos todos os anos múltiplos de 400, p.ex: 1600, 2000, 2400, 2800...
	> São bissextos todos os múltiplos de 4, exceto se for múltiplo de 100 mas não de 400,
	> p.ex: 1996, 2000, 2004, 2008, 2012, 2016, 2020...
	> Não são bissextos todos os demais anos.
	
	Exemplo: 20/08/2019 é uma data que não encontra-se em um ano bissexto.
	Porém 20/08/2020 encontra-se em um ano bissexto.

* Operação **compare** que recebe como parâmetro uma 2a data **d2** e:
	> Retorna **negativo** se **d2** é "maior" (depois) que o objeto que está executando a operação
	> Retorna **zero** se **d2** é "igual" ao objeto que está executando a operação
	> Retorna **positivo** se **d2** é "menor" (antes) que o objeto que está executando a operação

	Exemplo:
	**compare** entre 20/08/2019 e 21/08/2019 retorna **negativo**. Sendo 21/08/2019 a data **d2**.
	**compare** entre 20/08/2019 e 20/08/2019 retorna **0**. Sendo 20/08/2019 a data **d2**.
	**compare** entre 20/08/2019 e 19/08/2019 retorna **positivo**. Sendo 19/08/2019 a data **d2**.
<div style="page-break-after: always"></div>

1. Crie um projeto (Aplicação C++) denominado **Data**

2. Implementação da classe **Data**

   Crie o arquivo de cabeçalho C++ denominado **Data.h**

   ```c++
   #ifndef DATA_H
   #define DATA_H
   
   class Data {
   public:
       Data(int dia, int mes, int ano);
       virtual ~Data();
       int compare(const Data& data) const;
       void imprimePorExtenso() const;
       void imprime() const;
       bool anoBissexto() const;
   private:
       int dia;
       int mes;
       int ano;
   };
   
   #endif /* DATA_H */
   ```
   
   Crie o arquivo de código-fonte C++ denominado **Data.cpp**
   
   ```c++
   #include <iostream>
   #include <iomanip>
   #include <string>
   #include "Data.h"
   
   using namespace std;
   
   Data::Data(int dia, int mes, int ano) :
   dia(dia), mes(mes), ano(ano) {
   }
   
   Data::~Data() {
   }
   
   void Data::imprime() const {
       cout << setfill('0') << setw(2) << dia << "/";
       cout << setfill('0') << setw(2) << mes << "/";
       cout << setfill('0') << setw(4) << ano << endl;
   }
   
   void Data::imprimePorExtenso() const {
       string meses[12] = {
           "Janeiro", "Fevereiro", "Março", "Abril",
           "Maio", "Junho", "Julho", "Agosto",
           "Setembro", "Outubro", "Novembro", "Dezembro"
       };
       cout << setfill('0') << setw(2) << dia << " de ";
       cout << meses[mes - 1] << " de ";
       cout << setfill('0') << setw(4) << ano << endl;
   }
   
   /* void Data::imprimePorExtenso() const {
       string s;
       switch(mes) {
           case 1: s = "Janeiro"; break;
           case 2: s = "Fevereiro"; break;
           case 3: s = "Março"; break;
           case 4: s = "Abril"; break;
           case 5: s = "Maio"; break;
           case 6: s = "Junho"; break;
           case 7: s = "Julho"; break;
           case 8: s = "Agosto"; break;
           case 9: s = "Setembro"; break;
           case 10: s = "Outubro"; break;
           case 11: s = "Novembro"; break;
           case 12: s = "Dezembro"; break;
       }
       
       cout << dia << " de " << s << " de " << ano << endl;
   } */
   
   bool Data::anoBissexto() const {
       return (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0));
   }
   
   int Data::compare(const Data& data) const {
       if (this->ano != data.ano) {
           return this->ano - data.ano;
       } else if (this->mes != data.mes) {
           return this->mes - data.mes;
       } else {
           return this->dia - data.dia;
       }
   }
   
   /* int Data::compare(const Data data) const {
       int value1 = ano * 10000 + mes * 100 + dia;
       int value2 = data.ano * 10000 + data.mes * 100 + data.dia;
       return value1 - value2;
   } */
   ```
   
   
<div style="page-break-after: always"></div>
3. Atualize o arquivo de código-fonte C++ denominado **main.cpp** (programa principal)

   ```c++
   #include <iostream>
   #include "Data.h"
   using namespace std;
   
   int main() {
       Data d1(20, 8, 2019);
       Data d2(20, 8, 2020);
       Data d3(20, 8, 2019); 
       
       d1.imprime();
       d1.imprimePorExtenso();
       d2.imprime();
       d2.imprimePorExtenso();
       
       cout << boolalpha; 
       cout << d1.anoBissexto() << endl;
       cout << d2.anoBissexto() << endl;
       
       cout << noboolalpha; 
       cout << d1.anoBissexto() << endl;
       cout << d2.anoBissexto() << endl;
       
       cout << d1.compare(d2) << endl;
       cout << d1.compare(d3) << endl;
       cout << d2.compare(d1) << endl;
      
       return 0;
   }
   ```
   
4. Crie o arquivo **Makefile** (opcional)

   ```makefile
   CXX		    := g++
   CXX_FLAGS   := -Wall -Wextra -std=c++17 -ggdb
   LIBRARIES	:=
   EXECUTABLE	:= Data
   
   all: run
   	@rm -f $(EXECUTABLE)
   
   run: $(EXECUTABLE)
   	@./$(EXECUTABLE)
   
   $(EXECUTABLE): *.cpp
   	$(CXX) $(CXX_FLAGS) -I. $^ -o $@ $(LIBRARIES)
   ```
   
5. Compile, execute e verifique a saída impressa 

6. Fim
