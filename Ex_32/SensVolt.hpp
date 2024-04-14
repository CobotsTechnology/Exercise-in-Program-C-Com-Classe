#ifndef SENSVOLTS_H
#define SENSVOLTS_H

//Bibliotecas
#include <iostream>

#include <string>
using std::string;


class sensvolt{


public:
    //construtor
    sensvolt(const string &senstype, int valorADC, unsigned sensID, double Vref);

    void setSenType(const string &sensType);
    string getSensType() const;
    void setValorADC(int valorADC);
    int  getValorADC() const;
    void setSensID(unsigned sensID);
    unsigned getSensID() const;
    void setVref(double Vref);
    double getVref() const;

    //Fun��o que retorno o valor do c�lculo
    double voltsVal() const;
    void dispResults() const;

//private: Mesmo usando conceito de heran�a, nao � permitido usar variaveis membros privados, para isto
//pode contornar usando protected
//protected:
//mas na segudna atualiza��o passamos a usar de fato private
private:
    string _sensType;
    int _valorADC;
    unsigned _sensID;
    double _Vref;

};


#endif // SENSVOLTS_H
