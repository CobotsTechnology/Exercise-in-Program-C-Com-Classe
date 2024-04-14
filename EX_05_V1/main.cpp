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






int main()
{

Descrescente ordena;
 
int vet[4];
int Number=0;

cout<<"Entre com 5 valores: \n";
for(int i=0; i<5; i++){
    cout<<" Numero["<<i<<"]: ";
    cin>>vet[i];
}
ordena.original(vet);
cout<<"\n====== ordenando =================\n";
ordena.ordVector(vet);

cout<<"\nDigite um numero a ser encontrado dentro do vetor: ";
cin>>Number;
cout<<"\n=======Numero encontrado===========\n";

    Number=ordena.searchVector(vet, Number);
if(Number == 0){
    cout<<"Nao encontrado";
}
else
    cout<<"\nEncontrado na posicao "<<Number<<endl;
    
    while(1);
    return 0;
}
