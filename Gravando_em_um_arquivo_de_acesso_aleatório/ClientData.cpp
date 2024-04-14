
#include "ClientData.hpp"
#include "Includes.hpp"

#include <string>
using namespace std;

//construtor client padrao
 ClientData::ClientData(int     accountNumberValue,
                        string  lastNameValue,
                        string  firstNameValue,
                        double  balanceValue)
 {
     setAccounterNumber(accountNumberValue);
     setLastName(lastNameValue);
     setFirstName(firstNameValue);
     setBalance(balanceValue);

 }//fim do coonstrutor padr�o ClienteData


    //Obt�m o valor do n�mero da conta
    int  ClientData::getAccounterNumber()const
    {
        return accountNumber;
    }//Fim da fun��o getAccounterNumber


    //configura o valor do n�mero da conta
    void ClientData::setAccounterNumber(int accountNumberValue)
    {
        accountNumber = accountNumberValue;
    }//fim da fun��o setaccounterNumber


    //Fun�oes de acesso para lastName
    void ClientData::setLastName(string lastNameString)
    {
        //copia no maxima 15caracteres da string para lastName
        const char *lastNamevalue = lastNameString.data();
        int length = lastNameString.size();
        length     = (length < 15 ? length : 14);
        strncpy(lastName, lastNamevalue, length);//copia a string
        lastName[length] ='\0';

    }//fim da fun��o setLastName


    //Obt�m o sobrenome
    string ClientData::getLastName()const
    {
        return lastName;
    }//Fim da fun��o getlastName



    //Fun��es de acesso para firstName
    void  ClientData::setFirstName(string firstNameString)
    {
        //copia no m�ximo 10 caracteres da string para firstName
        const char *firstNameValue = firstNameString.data();
        int length  =  firstNameString.size();
        length = (length < 10 ? length : 9);
        strncpy(firstName, firstNameValue, length);
        firstName[length]='\0'; //coloca o caractere nulo no final.
    }//Fim da fun��o setFirstName.


    //obt�m o valor do nome
    string ClientData::getFirstaName()const
    {
        return firstName;
    }//fim da fun��o getFirsName;



    //Fun��es de acesso para balance
    void ClientData::setBalance(double balanceValue)
    {
        balance = balanceValue;
    }//fim da fun��o setbalance


    double ClientData::getBalance()const
    {
        return balance;
    }
