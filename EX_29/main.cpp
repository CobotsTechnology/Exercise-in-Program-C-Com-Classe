/*
    Exercicios propostos do m�dulo 5 do curso CPP do Wagner Rambo
    Escopo  e acesso a Membros de classe
    ->Por refer�ncia
    ->Por passagem de parametro
    ->Por valor

*/

#include <iostream>
using std::cout;
using std::endl;
#include "PrintValor.hpp"
int main()
{
    //crio um objeto
    PrintValor valor;             //declaro um objeto valor do tipo classe PrintValor
    PrintValor *valorPTR=&valor;  //declaro um ponteiro do tipo classe PrintValor que armazena o endere�o de mem�ria do objeto valor
    PrintValor &valorREF=valor;   //decalro um objeto do tipo classe PrintValor que armazena a refer�ncia do objeto valor

    //Acesso por objeto
    valor.setValor(10);            //acesso as fun��es membros por objeto
    valor.PrintThis();
    //Acesso por refer�ncia
    valorREF.setValor(100);         //acesso as fun��es membros por refer�ncia
                                    //ou seja, j� que tenho a refer�ncia do objeto valor

    valorREF.PrintThis();
    //Acesso por ponteiro
    valorPTR->setValor(1000);        //acesso as fun��es membros por ponteiro para modificar o objeto valor
    valorPTR->PrintThis();
cout<<"\n\nFim"<<endl;
while(1);
    return 0;
}







