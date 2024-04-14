#include <iostream>
using namespace std;
#include <cstring>
using std::string;

//========================================
//--Corpo do programa--
int main()
{
    cout << "Hello REAA" << endl;
    cout<<"===Refer�ncia=========="<<endl;
    int a=110;
    int b=960;
    int &aref=a;
    cout<<"aref: "<<aref<<endl; //aref tem refer�ncia de 'a', ent�o aref � exatamente o pr�prio 'a'. Logo aref � 10
    cout<<"a: "<<a<<endl;  //valor de 'a'
    aref=b; //Como, uma vez referenciado, sempre ter� a mesma refer�ncia. Logo, como aref � 'a', atribuindo b em aref, logo 'a' tem o valor de b
    cout<<"a eh alterado para valor de b: "<<a<<endl;

    cout<<"===Ponteiros=========="<<endl;
    int *yptr, y=100, x=200;
    yptr=&y;
    cout<<"(Valor de y)Yptr: "<<*yptr<<endl;
    yptr=&x;
    cout<<"(Valor de x)Yptr: "<<*yptr<<endl;
    cout<<"Valor de y:"<<y<<endl;
    cout<<"Valor de x:"<<x<<endl;

    //para mudar o valor das vari�veis atrav�s de ponteiros.
    yptr=&y;
    *yptr=22;
    yptr=&x;
    *yptr=94;

    cout<<"(Apos alteracao)Valor de y:"<<y<<endl;
    cout<<"(Apos alteracao)Valor de x:"<<x<<endl;


    return 0;
}//Fim

