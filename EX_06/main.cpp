/*

    programa que verifica a data de nascimento de um indiv�duo 
    com a data atual fornecida pelo usu�rio, se forem iguais -> Feliz anivers�rio cara
    Autor: Lucas Loren�o Alves
    Ano: Dezembro de 2022
    Vers�o: V.0.0

*/
#include <iostream>     //inclus�o de func�es padr�o do C++
#include "library.hpp"  //biblioteca local

using namespace std;

int main()
{


    //CRIA OBJETOS
    Aniversario Today, Birthday;
    cout<<"BEM VNDO AO SISTEMA QUE CALCULA SEU ANIVERSARIO:\n"<<endl;
    
    cout<<"\nDIGITE A DATA EM QUE VOCE EST� USANDO ESTE SISTEMA: \n";    
    Today.input();
    cout<<"\nVOCE ESTA USANDO ESTE SISTEMA EM: ";
    Today.out();  
     
    cout<<endl;
    
    Birthday.Set(3, 21);//PEGA A DATA DE ANIVERSARIO
    cout<<"\nO ANIVERSARIO DE J.S EH: ";
    Birthday.out();
    cout<<endl;
       
    if(Today.getMonthNumber() == Birthday.getMonthNumber()  && Today.getDay() == Birthday.getDay() )
        cout<<"Feliz anivers�rio! ";
    else
        cout<<"\nAINDA NAO EH SEU ANIVERSARIO: ";
   
    //chama a funcao

    while(1);
    return 0;
}
