#include "PrintValor.hpp"

PrintValor::PrintValor()         //Cnstrutor para inicializar os membros de dados da classe
{
    ValorParaPrintar=0;

}//end ValorparaPrintar


void PrintValor::setValor(int val)
{
    ValorParaPrintar=val;         //Fun��o setValor, seta a fun��o  com mecanismos de seguran�a

}//end setValor

void PrintValor::PrintThis()
{
    cout<<"Valor recebido: "<<ValorParaPrintar<<endl;   //a fun��o mostra o valor que foi armazenado na variavel membro
}

