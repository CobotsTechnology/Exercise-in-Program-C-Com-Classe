
#ifndef CURSOCOPRODUZIDO_H
#define CURSOCOPRODUZIDO_H
#include <iostream>
using namespace::std;

#include "CursoAfiliado.hpp"


class CursoCoproduzido:public CursoAfiliado
{
public:
    CursoCoproduzido(const string &curso, const string &empresa,
                     double taxa=0.0, int quantidade=0, double valorFixo=0.0);

    void    setValorFixo(double Fixo);
    double  getValorFixo()const;

    virtual double calculaLucro()const;//fun��o virtual que ir� sobrescrever a fun��o da classe b�sica
    virtual void   mostraValores()const;//exibe os valores do objeto CrusoCoproduzido



private:
    double cursoValorFixo;

};

#endif // CURSOCOPRODUZIDO_H
