#ifndef FUNC_H
#define FUNC_H

//================inclus�o de bibliotecas

#include <string>
using std::string;
//================
class GradeBook
{
    public:        
       void displayMenssage();                 //Fun��o que exibe uma menssagem de boas vindas no console
       void setCourseName(string name);        //Fun��o que armazena ou que seta o nome do curso        
       string getCourseName();                 //Seta onome do curso ou que armazena o nome do curso numa variavel string
    private:
       
        string nameCourse;                     //Membro de dados
};


#endif // FUNC_H
