#ifndef  PRINTVALORES_HPP
#define  PRINTVALORES_HPP

#include <iostream>
using std::cout;
using std::endl;


//Defini��o de classe
class PrintValor{

public:
    PrintValor();                        //Declara��o do construtor
    void setValor(int valor);            //Boa pr�tica de programa��o usnado fun�oes set e get
    void PrintThis();                    //Fun��o para iprimir o valor
private:
    int ValorParaPrintar;                //vari�vel-Membro

};

#endif // PRINTVALORES_HPP
