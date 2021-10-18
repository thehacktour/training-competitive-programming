#include <iostream>
#include <iomanip>
using namespace std;

int main(){

       int numero, quantidade;
       double preco, resultado;

       cin >> numero >> quantidade;

       if(numero == 1){
              preco = 4.0;
              resultado = (preco*quantidade);
              cout << fixed << setprecision(2);
              cout <<"Total: R$ " <<resultado << endl;
       }else if(numero == 2){
              preco = 4.5;
              resultado = (preco*quantidade);
              cout << fixed << setprecision(2);
              cout << "Total: R$ " <<resultado << endl;
       }else if(numero == 3){
              preco = 5.0;
              resultado = (preco*quantidade);
              cout << fixed << setprecision(2);
              cout << "Total: R$ " <<resultado << endl;
       }else if(numero == 4){
              preco = 2.0;
              resultado = (preco*quantidade);
              cout << fixed << setprecision(2);
              cout << "Total: R$ " <<resultado << endl;
       }else if(numero == 5){
              preco = 1.5;
              resultado = (preco*quantidade);
              cout << fixed << setprecision(2);
              cout << "Total: R$ " <<resultado << endl;
       }

}