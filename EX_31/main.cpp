/*
    Programa demostrativo de heran�a
    Problema;
    . Voc� foi encarregado de desenvolver uma classe  em C++ para a leitura de um sensor anal�gico que informe o valor da tens�o el�trica

    . Na classe b�sica, cada objeto dever� conter o tipo de sensor utilizdo em formato de string. Al�m disso, tamb�m dever� guardar a informa��o da leitura de um conversor AD
      de 10 bits. Tamb�m dever� ser possiv�l armazenar um valor inteiro que consistir� no ID do sensor e um real que consistir� na tens�o de refer�ncia do conversor.

    . Tamb�m deve ser desenvolvida uma classe derivada que ir� informar o valor da corrente o valor el�trica, de acordo com o valor de tens�o e um resistor utilizado no hardware.


    Autor: Lucas Loren�o ALves
    Data: Fev 2023

*/
//---Bibliotecas-----
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;//para trabalhar com ponto flutuante

#include <iomanip> //Trabalhar com casas decimais
using std::setprecision;

#include "SensVolt.hpp"


int main()
{
    //----sensvolt(const string &senstype, int valorADC, unsigned sensID, double Vref)----
    sensvolt sensor("voltage", 267, 1, 5.0);//criando um objeto com inicializa��o
    cout<<fixed<<setprecision(4);

    cout<<"\nConfigura��es iniciais: "<<endl;
    sensor.dispResults();
    cout<<"Voltage= "<<sensor.voltsVal()<<'V'<<endl;

    cout<<"\nNovas Configura��es: "<<endl;
    sensor.setSensID(4);
    sensor.setValorADC(743);
    sensor.setSenType("pressao");
    sensor.setVref(3.3);
    sensor.dispResults();
    cout<<"Voltage= "<<sensor.voltsVal()<<'V'<<endl;

    return 0;
}








