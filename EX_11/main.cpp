/*
Desenvolver uma fun��o em C++ para receber como parametro func�oes para 
soma, subtra��o, e multiplica��o, alpem de apresentar o caractere pertinente a opera��o
'*', '+', '-', '\'.
Esta fun��o receber� os dois caracteres inteiros a serem processados e vai imprimir o 
resultado em um dos formatos
a + b=res (se receber a fun��o soma como parametro)
a - b=res (se receber a fun��o subtra�ao como parametro)
a * b=res (se receber a fun��o multiplica��o como parametro)
*/

//==========================================BIBLIOTECAS
#include <iostream>
#include <cstdlib>
using namespace std;
//==========================================PROT�TIPO DAS FUN��ES
int soma(int a, int b, char &sym);
int subt(int a, int b, char &sym);
int mult(int a, int b, char &sym);

void calc( int(*operation)(int, int, char &), int a, int b);//ponteiro de fun��es


//===========================================FUN��O PRINCIPAL
int main()
{
    
    calc(soma, 5, 8);
    calc(subt, 10, 1);
    calc(mult, 3, 10);
    system("PAUSE");
    return 0;
}
//===========================================FUN�OES DESENVOLVIDAS


//===============================
int soma(int a, int b, char &sym)
{
    sym= '+';
    return a + b;

}//end soma

//==============================
int subt(int a , int b, char &sym)
{
    sym='-';
    return a - b;
}//end subt

//==============================
int mult(int a , int b, char &sym)
{
    sym='*';
    return a * b;
}//end mult


void calc( int(*operation)(int, int, char &), int a, int b )
{
    char sym= '.'; //armazena o simbolo de referencia da oper��o
    int res=(*operation)(a, b, sym);
    
    cout<<a<< sym << b <<" = "<< res <<endl;



}//end calc


























