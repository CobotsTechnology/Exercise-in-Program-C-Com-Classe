#ifndef BASEPLUSS_H
#define BASEPLUSS_H

//--include das bibliotecas----
#include <string>
using std::string;

class BasePlussEmployee
{

public:
    //inicializa��o do construtor
   BasePlussEmployee(const string &, const string &,
                     const string &, double=0.0, double=0, double=0.0);


void setFirstName(const string &);//configura o nome
string getFirstName()const;//retorno o nome

void setLastName(const string &);//configuro o sobre nome
string getLastName();//retorno o sobre nome

void setSocialSecurityNumber(const string &);//configura o numero social de segunra�a
string getSocialSecurityNumber()const;//retorna o numero social de segura�a

void setGrossSales(double);//configura a quantidade de vendas brutas
double getGrossSales()const;//retorna a quantidade de vendas

void setComissionRate(double);//configura a taxa de comiss�o
double getComissionRate()const;//retorna a taxa de comiss�o

double earnings()const;//calcula os rendimentos
void shows()const;//imprime o objeto BasePlussComissionEmployee

//-----Fun��o-Membro adicional para esta arquitetura de classe-----
void setBaseSalary(double);//configura o sal�rio-base
double getBaseSalary()const;//retorna o sal�rio base

//-----Membros privados------
private:
    string _firstName;
    string _lastName;
    string _sosialSecurityNumber;
    double _grossSales; //vendas brutas mensais
    double _comissionRate;
    double _baseSalary;//base salario

};//Fim da classe BasePlussComissionEmployee


#endif // BASEPLUSS_H

