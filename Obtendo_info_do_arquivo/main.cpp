//Exercicio do livro deitel 5 edi��o, pagina 678 Cp:17
#include "Includes.hpp"


//=========================================
//--Prot�tipos das fun��es--

enum RequestType { ZERO_BALANCE=1, CREDIT_BALANCE, DEBIT_BALANCE, END};
int  getRequest();
bool shouldDisplay(int, double);
void outputLine(int, const string, double);

int main()
{
    ifstream inClintsFile("clientes.dat", ios::in);
    if(!inClintsFile)
    {
        cerr << "Erro ao ler o arquivo\n...";
        exit(1);
    }//fim do if

    int    request   =0,
           account   =0;
    char   name[30]  ={'\0'};
    double balance   =0.0;

    //obtem a solicita��o do usu�rio (saldo zero, credor ou devedor)
    request = getRequest();

    //processa  solicita��o do usu�rio
    while(request != END)//se for 4, sai do programa
    {
        switch( request )
        {
        case ZERO_BALANCE:
            cout << "\nAccounts with zero balances:\n";
            break;
        case CREDIT_BALANCE:
            cout << "\nAccounts with credits balances\n";
        case DEBIT_BALANCE:
            cout << "\nAccounts with debits balances\n";
            break;
        default:
            cout <<"Erro no menu\n...";
        }//fim do switch case



  //L� a conta, nome e saldo do arquivo
  inClintsFile >> account >> name >> balance;

  //Exibe o conte�do do arquivo a� encontrar o final do arquivo (at� EOF)
  while(   !inClintsFile.eof()  )
  {
     //exibe o registro
     if(    shouldDisplay(request, balance) )
        outputLine(account, name, balance);

     //l� a conta, o nome, e o saldo do arquivo
     inClintsFile >> account >> name >> balance;

  }//fim do while interno

  inClintsFile.clear();    //redefine o eof para a pr�xima entrada
  inClintsFile.seekg(0);   //reposiciona no come�o de arquivo
  request = getRequest();  //obt�m a solicita��o adicional do usu�rio


}//fim do while externo

cout << "End of run. " << endl;

    return 0;
}//Fim do main


//obt�m a solicita��o do usu�io
int  getRequest()
{
    int request;//solicita��o do usu�rio

    //exibe as op�oes
    cout << "\nEnter request\n"
         << "1- List account with zero balances\n"
         << "2- List account with credit balances\n"
         << "3- List account with debit balances\n"
         << "4- End of run" << fixed << showpoint;

   do//entrada da solicita�ao do usu�rio
   {

       cout << '\n';
       cin  >> request;


   }while(request < ZERO_BALANCE && request < END); //prende dentro das op�oes do menu

   return request;//retorna a op��o do menu

}//fim da getRequest

//determina se exibe um dado registro
bool shouldDisplay(int type, double balance)
{
        //determina se exibe um saldos zeros
        if(type  == ZERO_BALANCE   && balance ==0)
            return true;
        //determina se exibe saldos credores
        if(type  == CREDIT_BALANCE && balance < 0)
            return true;
        //determina se exibe saldos devedores
        if(type  == DEBIT_BALANCE  && balance > 0)
            return true;

return false;
}//fim do shouldDisplay

//exibe um registro do arquivo
void outputLine(int account, const string name, double balance)
{

    cout << left    <<  setw(10)        << account << setw(13) << name
         << setw(7) <<  setprecision(2) << right   << balance  << endl;

}//Fim da fun��o outputLine




























