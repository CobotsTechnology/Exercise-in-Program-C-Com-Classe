/*
    class criada em novembro de 2022
    ->Programa que pede ao usu�rio para entrar com 5 valores inteiros
    ->Amazene os valores em um array e ap�s organize os dados em ordem decrescente
    ->Depois, entra em loop infinito que solicita ao usu�rio para consultr uma posi��o desejada do vetor
    e mostra qual o contepudo est� armazenado na posi��o digitada
    ->Crie uma classe chamada "Descrescente" que contenha o construtor, uma fun��o para organizar o array passado 
    para ela em ordem descrescente e outra para efetuar 
    a busca pelos conte�dos do array do loop infinito.
    
    versao do programa: V.0.0
    Autor: Lucas Loren�o Alves
    Ano: Dezembro de 2022
    
*/


#include <iostream>

using namespace std;
#include "library.hpp"

class Descrescente
{

    public:
               
       // void descrescente(int vetor, int ordena);
        //void searchVector(int val);     
        void original(int vet[]){
            for(int i=0; i<5; i++){
                cout<<" "<<vet[i];
            }        
        }
        
        void ordVector(int vet[]){
            int auxiliar=0;
            
            for(int i=0; i<5; i++){
                for(int j=i; j<5; j++){
                    if(vet[i] > vet[j]){
                        auxiliar=vet[i];
                        vet[i]=vet[j];
                        vet[j]=auxiliar;                        
                    }                
                }
            }
            //mostra a ordenaca
            for(int i=0; i<5; i++){
                cout<<" "<<vet[i];    
            }        
        }
   
  
    
};





int main()
{

Descrescente ordena;
 
int vet[4];
cout<<"Entre com 5 valores: \n";
for(int i=0; i<5; i++){
    cout<<" Numero["<<i<<"]: ";
    cin>>vet[i];
}
ordena.original(vet);
cout<<"\n====== ordenando =================\n";
ordena.ordVector(vet);
    while(1);
    return 0;
}
