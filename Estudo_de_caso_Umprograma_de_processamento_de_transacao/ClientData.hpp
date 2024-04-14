#ifndef CLIENTDATA_H
#define CLIENTDATA_H

#include <string>
using std::string;


class ClientData
{
public:
    //construtor de cliente padr�o
    ClientData(int = 0, string = "", string = "", double = 0.0);


    //Fun�oes de acesso para accounterNumber
    void setAccounterNumber(int);
    int  getAccounterNumber()const;

    //Fun�oes de acesso para lastName
    void   setLastName(string);
    string getLastName()const;

    //Fun��es de acesso para firstName
    void   setFirstName(string);
    string getFirstaName()const;

    //Fun��es de acesso para balance
    void   setBalance(double);
    double getBalance()const;



private:
    int    accountNumber;
    char   lastName[15],
           firstName[10];
    double balance;



};//Fim da classe clientData



#endif // CLIENTDATA_H
