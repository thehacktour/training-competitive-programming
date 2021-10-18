#include <iostream>
#include <iomanip>
using namespace std;

int main(){

       double valor_entrada;

       cin >> valor_entrada;

       if (valor_entrada>=0 && valor_entrada <=25.00){
              cout << "Intervalo [0,25]" << endl;
       }else if(valor_entrada >=25.01 && valor_entrada <= 50){
              cout << "Intervalo (25,50]" << endl;
       }else if(valor_entrada >=50.01 && valor_entrada <=75){
              cout << "Intervalo (50,75]" << endl;
       }else if(valor_entrada >= 75.01 && valor_entrada <=100){
              cout << "Intervalo (75,100]" << endl;
       }else if(valor_entrada <0 || valor_entrada > 100){
              cout << "Fora de intervalo" << endl;
       }

}