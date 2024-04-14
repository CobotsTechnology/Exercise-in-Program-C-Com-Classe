/*
    programa de faturamento de um escrit�rio de advocacia
    Autor: Lucas Alves
    Refer�ncia: Retirado do livro: C-Absoluto
    Ano: Dezembro de 2022
*/


#include <iostream>
using namespace std;


//variavel global
const double RATE= 150.00 ; //150 dol�res por  15 minutos


double fee(int hoursWorked, int minutesWorked);
//retorna o pre�o da hora hoursWorked e minutes Worked de servi�oes

int main()
{
    int hours, minutes;
    double bill;
    cout<<"Ol� seja bem vindoao escrit�rio de advocacia:"<<endl;
    cout<<" Informe as horase minutos trabalhadas"<<endl;
    cout<<" de sua consulta"<<endl;   
    
    cin>>hours>>minutes;
    
    bill=fee(hours, minutes);
    // a variavel bill recebe o retorno de resultado ca consulta
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Por "<<hours<<" horas e "<<minutes<<" minutos, sua conta ficou $ "<<bill<< " dolares:"<<endl;
    
    while(1);
    return 0;
}


double fee(int hoursWorked, int minutesWorked)
{
    int quarterHours;
    minutesWorked=hoursWorked*60 + minutesWorked;
    quarterHours=minutesWorked/15;
    return (quarterHours*RATE);
}









