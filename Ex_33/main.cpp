/*
    Exerc�cio do livro Deitel- Cap 12 - Heren�as de classes
    12.4 Relacionamento entre classes b�sicas e derivadas
    Autor: Lucas Alves
    Data: Abril 2023

*/


//---include das bibliotecas----
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Comission.hpp"


int main()
{
    //instancia um objeto comissionEmployee
    comissonEmployee employee("Suzan","Jones", "999-45-4343", 1000, .06);

    //configura a formata��o de sa�da de ponto flutuante com duas casas ap�s a virgula
    cout<<fixed<<setprecision(2);

    //obt�m os dados do empregado comissionado
    cout<<"Employee information obtained by get function: \n"
        <<"\n            First name is: "<<employee.getFirstName()
        <<"\n                Last name: "<<employee.getLastName()
        <<"\nSocial security number is: "<<employee.getSocialSecurityNumber()
        <<"\n           Gross sales is: "<<employee.getGrossSales()
        <<"\n        Comission rate is: "<<employee.getComissionRate()<<endl;

    employee.setGrossSales(800);//configura as vendas brutas
    employee.setComissionRate(.1);//configura a taxa de comiss�o

    cout<<"\nUpdate employee information output by rpint function: \n"<<endl;
    employee.shows();//exibe novas informa��es do empregado

    //exibe os rendimentos do empregado

    cout<<"\n\nEmployee's earnings: $"<<employee.earnings()<<endl;




    return 0;
}
