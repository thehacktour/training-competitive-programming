#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

       double n1,n2,n3,n4, media_inicial, media_final, new_nota;

       cin >> n1 >> n2 >> n3 >> n4;

       media_inicial = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

       cout << "Media: " << media_inicial << endl;

       if(media_inicial <= 7.0){
              cout << "Aluno aprovado." << endl;
       }else if (media_inicial < 5.0){
              cout << "Aluno reprovado." << endl;
       }else if(media_inicial >=5.0 && media_inicial <=6.9){
              cout << "Aluno em exame." << endl;
              cin >> new_nota;
              cout << "Nota do exame: " << new_nota << endl;
              media_final = (new_nota+media_inicial)/2;
              if(media_final>=5.0){
                     cout << "Aluno aprovado." << endl;
                     cout << "Media final: " << media_final << endl;
              }else if(media_final<=4.9){
                     cout << "Aluno reprovado." << endl;
                     cout << "Media final: " << media_final << endl;
              }
       }

}