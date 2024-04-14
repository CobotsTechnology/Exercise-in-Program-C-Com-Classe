
//--include das bibliotecas----
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

//defini��o da classe BaseComissionEmplyee
#include "BasePlusComissionEmployee.hpp"

int main()
{
    //Objeto BasePlussEmployee instanciado
    BasePlussEmployee employee("Lucas", "Alves","345-34-9875", 500, .04, 300);

    //Configura a formata��o de sa�da de ponto flutuante
    cout<<fixed<<setprecision(2); //com duas casas ap�s a v�gula

    //obt�m os dados do empregado comissionado
    cout<<"Employee information obtained by get functions: \n"
        <<"\n              First name is: "<<employee.getFirstName()
        <<"\n               Last name is: "<<employee.getLastName()
        <<"\n     Social security number: "<<employee.getSocialSecurityNumber()
        <<"\n             Gross sales is: "<<employee.getGrossSales()
        <<"\n          Comission rate is: "<<employee.getComissionRate()
        <<"\n             Base salary is: "<<employee.getBaseSalary()<<endl;

        cout<<"\nUpload employee information output by print function: \n"<<endl;
        employee.shows();//exibe os dados das novas informa��es do empregado

        //exibe os rendimentos o empregado
        cout<<"\nEmployee's earnings: $"<<employee.earnings()<<endl;


    return 0;
}












