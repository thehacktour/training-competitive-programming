#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha = {100,50,20,10,5,2,1};
       int valor_entrada;
       int result_inicial;

       cin >> valor_entrada;

       for(auto i=listinha.begin(); i!=listinha.end(); ++i){

              result_inicial = *i/valor_entrada;
              cout << result_inicial << endl;
              valor_entrada = valor_entrada - (*i*result_inicial);
       }

}