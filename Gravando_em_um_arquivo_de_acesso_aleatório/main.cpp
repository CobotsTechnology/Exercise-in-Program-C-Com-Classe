// Exercicio de fixa��o
// Lucas loren�o Alves
// Deitel 5� Ed.
// Cap 17- pag687
// Figura 17.13: Fig17_13.cpp
// Gravando em um arquivo de acesso aleat�rio
#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ios; //Fluxo de arquivo

#include <iomanip>
using std::setw;

#include <fstream>
using std::fstream;
using std::ofstream;

#include <cstdlib>
using std::exit;

#include "ClientData.hpp" //definifi��o da classe clientdata

int main()
{

    //Variav�is----
    int     accountNumber =0;
    char    lastName[15]  ={'\0'},
            FirstName[10] ={'\0'};
    double  balance       =0.0;

    //Arquivo e modo de leitura----
    //ofstream outCredit("credit.bin", ios::out);
    fstream outCredit("creditos.dat",ios::in | ios::out | ios::binary );
    //sistema de seguran�a de abertura do arquivo---
    if( !outCredit)
    {
        cerr << "Erro ao acessar o arquivo..." << endl;
        exit(1);
    }//Fim do if

    cout << "Enter account number (1 to 100, 0 to end input)\n>>";

    //requer que o usuario espesifique o numero da conta
    ClientData client; //cria um objeto client
    cin >> accountNumber;

    //O usu�rio insere informa��es, que s�o copiadas para o arquivo
    while( accountNumber > 0 && accountNumber <= 100)
    {
        //O usu�rio insere o sobrenome, nome e o saldo
        cout << "Enter lastName, firstName, balance\n";
        cin  >>setw(15) >> lastName
             >>setw(10) >> FirstName
             >>balance;
        //Configura valores de accountNumber,lastName, Firstname e balance
        client.setAccounterNumber(accountNumber);
        client.setLastName(lastName);
        client.setFirstName(FirstName);
        client.setBalance(balance);

        //busca a posi��o no arquivo de registro espesificado pelo usu�rio
        outCredit.seekp( (client.getAccounterNumber()-1 )*sizeof(ClientData) );

        //grava as informa��es  espesificadas pelo usu�rio no arquivo
        outCredit.write( reinterpret_cast<const char *>(&client), sizeof(ClientData) );

        //Permite ao usu�rio inseriroutra conta
        cout  << "enter account number\n";
        cin   >> accountNumber;

     }//fim do while


    return 0;
}





























