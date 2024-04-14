
//---include das bibliotecas---
#include <iostream>
using std::cout;

#include "Comission.hpp"

//Constru��o das fun��es
//construtor
comissonEmployee::comissonEmployee( const string &first, const string &last,
                                    const string &ssn, double sales, double rate)
{
    _firstName=first;//deve validar
    _lastName=last;//deve validar
    _socialSecurityNumber=ssn;//deve validar
    setGrossSales( sales);//valida e armazena as vendas brutas
    setComissionRate(rate);//valida e armazena a taxa de comiss�o

}//Fm do construtor ComissionEmployee

//-----configura o Nome-----
void comissonEmployee::setFirstName(const string &first)//recebo um endere�o
{
    _firstName=first;//deve validar

}//fim da fucn��o setFirstName


//-----retorna o nome-----------
string comissonEmployee::getFirstName()const
{
    return _firstName;

}//Fim da fun��o

//--Configura o sobre nome----
void comissonEmployee::setLastName(const string &last)
{
    _lastName=last;//deve validar

}//Fim da fun��osetLastName

//---retorna o sobre nome-----
string comissonEmployee::getLastName()const
{
    return _lastName;
}//Fim da fun��o getLastName

//-----configura o numero social-----
void comissonEmployee::setSocialSecurityNumber(const string &ssn)
{
    _socialSecurityNumber=ssn;
}//Fim da fun��o setSocialSecority

//----retorna o SSN----
string comissonEmployee::getSocialSecurityNumber()const
{
    return _socialSecurityNumber;
}//Fim da fun��o getSocialSecurity

//---configura a quantidade de vendas----
void comissonEmployee::setGrossSales(double sales)
{
    _grossSales=(sales<0.0)? 0.0 : sales;
}//Fim da fun��o setGrossSales

//---retorna a quantidade de vendas----
double comissonEmployee::getGrossSales()const
{
    return _grossSales;
}//Fim da fun��o getGrossSales

//---configura a taxa de comiss�o----
void comissonEmployee::setComissionRate(double rate)
{
    _comissionRate=rate;
}//Fim da fun��o setcomissionRate

double comissonEmployee::getComissionRate()const
{
    return _comissionRate;
}//Fim da fun��o getComissionRate


//----calcula os rendimentos-----
double comissonEmployee::earnings()const
{
    return _comissionRate*_grossSales;
}//Fim da fun��o eranings

//---Imprime o obejto comissionEmployee
void comissonEmployee::shows()const
{
    cout<<"  Comission emplyee: "<<_firstName<<' '<<_lastName
        <<"\n  Social security: "<<_socialSecurityNumber
        <<"\n      gross sales: "<<_grossSales
        <<"\n   comission rate: "<<_comissionRate;
}//Fim da fun��o shows













