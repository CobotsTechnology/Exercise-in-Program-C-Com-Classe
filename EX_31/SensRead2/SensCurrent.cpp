#include <iostream>
using std::cout;
using std::endl;
//--Bibliotecas--
#include "SensCurrent.hpp"

//---Desenvolvimento das fun��es membros----

//Construtor: inicializo as variaveis membros da se��o private
sensCurrent::sensCurrent(const string &sensType, int valorADC,
                         unsigned sensID, double Vref, double Res)
{
    _sensType  = sensType;
    _valorADC = valorADC;
    _sensID   = sensID;
    _Vref     = Vref;
    _Res      =Res;

}//end construtor

//---Fun��o
void sensCurrent::setSenType(const string &sensType)
{
    _sensType=sensType;
}

//---Fun��o
string sensCurrent::getSensType() const
{
    return _sensType;
}

//---Fun��o
void sensCurrent::setValorADC(int valorADC)
{
    _valorADC=(valorADC>=0 && valorADC<1024) ? valorADC : 512;
}

//---Fun��o
int  sensCurrent::getValorADC() const
{
    return _valorADC;
}

//---Fun��o
void sensCurrent::setSensID(unsigned sensID)
{
    _sensID= sensID;
}

//---Fun��o
unsigned sensCurrent::getSensID() const
{
    return _sensID;
}

//---Fun��o
void sensCurrent::setVref(double Vref)
{
    _Vref=Vref;
}

//---Fun��o
double sensCurrent::getVref() const
{
    return _Vref;
}

//-------------Fun��o que retorno o valor do c�lculo-----------------
double sensCurrent::currentVal() const
{
    double voltage =
        _valorADC*_Vref/static_cast<double>(1024); //faz um casting do inteiro 1024 para double
        return voltage/_Res*1000.0;
}

//---Fun��o: setRes
void sensCurrent::setRes(double Res)
{
    _Res=Res;
}
double sensCurrent::getRes()const
{
        return _Res;
}

void sensCurrent::dispResults() const
{
    cout<<"\nTipo de sensor:         "<<_sensType
        <<"\nValor do ADC:           "<<_valorADC
        <<"\nID do sensor:           "<<_sensID
        <<"\nValor de tensao de ref: "<<_Vref
        <<"\nResistor:               "<<_Res<<endl;
}
