/*
    programa que calcula p� mais polegadas em polegadas
    Autor: Lucas Alves
    Refer�ncia: Retirado do livro: C-Absoluto
    Ano: Dezembro de 2022
*/


#include <iostream>

using namespace std;

int polegadas(int pe, int polegadas);


int main()
{
    int polegada, pe, pol;
    cout<<"Ola, seja bem vndo ao programa que calcula pes e polegadas em polegadas:"<<endl;
    cout<<"Digite o valor em p�s: ";
    cin>>pe;
    cout<<"Digite o valor em polegadas: ";
    cin>>pol;
    
    polegada=polegadas(pe, pol);
    
    cout<<pe<<" p�(s) "<<" e "<<" polegada(s) "<<pol<<" sao "<<polegada<<" polegadas "<<endl;
    
    while(1);
    return 0;
}


int polegadas(int pe, int polegadas){

   
    return (pe*12+polegadas);
    

}