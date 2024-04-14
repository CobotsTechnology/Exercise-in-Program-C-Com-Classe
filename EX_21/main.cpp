/*

    Exemplo de fun��o friend
    Uma fun��o friend de uma classe � definida fora do escopo desta classe, por�m
    com ela tamb�m conseguimos acessar os dados "private" da classe  
    
    Autor: Lucas Alves
    Data: janeiro de 2023
*/
#include <cstdlib>
using std::system;

#include "CI555.hpp"

int main()
{
    FriendsDemo CI555;
    calcFreq(CI555, 1.5E3, 10.0E3, 470.0E-9);
    
    CI555.results();
    
    system("Pause");
    return 0;
}
