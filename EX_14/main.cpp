/*
    Programa que pede um numero x de valores  e compara quais s�o divisiveis por tres

*/

#include <iostream>


#include "Divtres.hpp"

int main()
{
    DivTres calc;

    calc.getNumbers();
    calc.printResults();

    cout<<"\n\nFIM. "<<endl;
    while(1);

    return 0;
}
