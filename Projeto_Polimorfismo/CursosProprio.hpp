#ifndef CURSOPROPRIO_H
#define CURSOPROPRIO_H
#include "Cursos.hpp"

class CursoProprio:public Cursos
{
public:
    CursoProprio(const string &curso, const string &empresa,
                 double valor=0.0);
    void    setValorCurso(double valor);
    double  getValorCurso()const;

    virtual double calculaLucro()const;//fun��o virtual que ira sobrescrever a fun��o da classe b�sica
    virtual void   mostraValores()const;

private:
    double valorCurso;

};

#endif // CURSOPROPRIO_H
