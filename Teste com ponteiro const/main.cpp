#include <iostream>
using std::cout;
using std::endl;

//========================================
//--Prot�tipo da(s) fun��es--



//========================================
//--Corpo do programa--

int main()
{
    cout << "Hello REAA" << endl;
    int x=5, y=1;
    //ptr � ponteiro constante para um inteiro constante.
    //ptr sempre aponte para a mesma posi��o; o inteiro.
    //nessa posi��o n�o pode ser modificado.
    const int *const ptr=&x;
    //int* ptr=&x;

    cout<<*ptr<<endl;
    *ptr=7;//erro: ptr � const; n�o � poss�vel atribuir novo valor
    ptr =&y;//erro: ptr � const; n�o � poss�vel atribuir endere�o
    cout<<*ptr<<endl;
    return 0;


    return 0;
}//Fim


//========================================
//--Desenvolviemnto da(s) fun��es--


