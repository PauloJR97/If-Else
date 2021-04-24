#include <iostream>
using namespace std;
#define A 3
int main() {

  float nota[A];
  float soma = 0, media = 0;

  for(int i = 0; i < A; i++){
    cout<<"Informe a "<<i+1<<" nota: ";
    cin>>nota[i];
  }
  for(int i = 0; i < A; i++){
    soma = soma + nota[i];
    //soma += nota[i]
  }
   media = soma / A;

   if(media >= 7){
     cout<<"\tAluno aprovado"<<endl;
   }
   else{
     cout<<"\tAluno reprovado"<<endl;
   }
 return 0;
   
}