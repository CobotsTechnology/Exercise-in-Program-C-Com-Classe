#ifndef SENSCURRENT_H
#define SENSCURRENT_H

//Bibliotecas
#include <iostream>

#include <string>
using std::string;


//Por estarmos fazendo herdar classes e fun��es de outra lib, devemos chamar a outra lib
#include "SensVolt.hpp"


//---------- Indica��o de Heranca ------------
class sensCurrent : public sensvolt //SensCurrente vai herdar senVolt
{

public:
//------construtor-----
    sensCurrent(const string &senstype, int valorADC,
                unsigned sensID, double Vref, double Res);


 //Deletado do programa devido ao uso da heran�a.
   /* void setSenType(const string &sensType);
    string getSensType() const;
    void setValorADC(int valorADC);
    int  getValorADC() const;
    void setSensID(unsigned sensID);
    unsigned getSensID() const;
    void setVref(double Vref);
    double getVref() const;
    */
//-----Fun��es adicionadas para classe de corrente----

    void setRes(double Res);
    double getRes() const;


//-----Fun��o que retorno o valor do c�lculo-------
    double currentVal() const;
    void dispResults() const;

private:
//ser� herdado da outra classe
//    string _sensType;
//    int _valorADC;
//    unsigned _sensID;
//    double _Vref;
//Deixo esta variavel membro por ser de uso proprio para esta classe
    double _Res;
};


#endif // SENSCURRENT_H


/*
A palavra-chave "const" na declara��o de uma fun��o em C++ indica que a fun��o n�o modifica o estado interno do objeto no qual ela � chamada.

No caso espec�fico da declara��o "double getsRes() const;", a fun��o "getsRes" retorna um valor do tipo "double" e � declarada como "const",
o que significa que essa fun��o n�o pode modificar os dados do objeto no qual � chamada. Isso garante que a fun��o n�o altere o estado do objeto
e, portanto, � considerada uma fun��o "constante".

O uso da palavra-chave "const" � �til em C++ porque permite que o compilador verifique se uma fun��o � segura para ser chamada em um objeto constante,
ou seja, um objeto que n�o deve ser modificado. Al�m disso, o uso de fun��es constantes pode melhorar a efici�ncia do c�digo, j� que o compilador pode
fazer otimiza��es adicionais com base na garantia de que a fun��o n�o modifica o estado do objeto.*/
