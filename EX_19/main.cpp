/*
    Exercicio do livro  "Como programar C++" Deitel
    pagina: 58

    Data: Janeiro de 2023
    Autor: Lucas Alves
*/
#include <cstdlib>
using std::system;

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;

#include "func.hpp"

int main()
{
	string nameOfCourse;  //Cria uma string chamada nameOfCourse
	
	//cria um objeto GradeBook chamado myGradeBook
	GradeBook myGradeBook;
	cout<<"Digite o nome do curso: "<<endl;
	getline(cin, nameOfCourse);  //fun��o getline() permite escrever uma string com espa�os
	
	myGradeBook.setCourseName(nameOfCourse);//fun��o membro setCourseName() com parametro string
	myGradeBook.displayMenssage(); //chama a fun��o membro displayMessage
    
    
	system("PAUSE");
	return 0;
}











