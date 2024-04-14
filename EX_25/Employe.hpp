#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "Date.hpp"

class Employe
{
    public:
        Employe(const char *const, const char *const, const Date &, const Date &);
        void print()const;
        ~Employe();//Fornecida para confirmar a ordem de destrui��o
        
    private:
        char firstName[25];
        char lastName[25];
        char Date birthDate; //composi��o: objeto-membro
        char Date hireDate;  //composi��o: objeto-membro
        
};//fim da classe Employe


#endif  //EMPLOYE