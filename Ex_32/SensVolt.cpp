#include <iostream>
using std::cout;
using std::endl;
//--Bibliotecas--
#include "SensVolt.hpp"

//---Desenvolvimento das fun��es membros----

//Construtor: inicializo as variaveis membros da se��o private
sensvolt::sensvolt(const string &sensType, int valorADC, unsigned sensID, double Vref):
    _sensType(sensType), _valorADC(valorADC), _sensID(sensID), _Vref(Vref) //Como retornamos para private ao inv�s de protected, foi feito uma atualiza��o das fun��es
{
//    _sensType  = sensType;
//    _valorADC = valorADC;
//    _sensID   = sensID;
//    _Vref     = Vref;

}//end construtor

//---Fun��o
void sensvolt::setSenType(const string &sensType)
{
    _sensType=sensType;
}

//---Fun��o
string sensvolt::getSensType() const
{
    return _sensType;
}

//---Fun��o
void sensvolt::setValorADC(int valorADC)
{
_valorADC=(valorADC>=0 && valorADC<1024) ? valorADC : 512;
}

//---Fun��o
int  sensvolt::getValorADC() const
{
    return _valorADC;
}

//---Fun��o
void sensvolt::setSensID(unsigned sensID)
{
    _sensID= sensID;
}

//---Fun��o
unsigned sensvolt::getSensID() const
{
    return _sensID;
}

//---Fun��o
void sensvolt::setVref(double Vref)
{
    _Vref=Vref;
}

//---Fun��o
double sensvolt::getVref() const
{
    return _Vref;
}

//-------------Fun��o que retorno o valor do c�lculo-----------------
double sensvolt::voltsVal() const
{
    //return _valorADC*_Vref/static_cast<double>(1024); //faz um casting do inteiro 1024 para double
    return getValorADC()*getVref()/static_cast<double>(1024);
}//end voltsVal

void sensvolt::dispResults() const
{
    cout<<"\nTipo de sensor: "<<getSensType()
        <<"\nValor do ADC: "<<getValorADC()
        <<"\nID do sensor: "<<getSensID()
        <<"\nValor de tensao de ref: "<<getVref()<<endl;

}
