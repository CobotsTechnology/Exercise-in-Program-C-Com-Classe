#include <iostream>
using namespace std;
//=====================
//- estrutura--
struct Aluno
{
    string anome;
    int matricula;
    int notas[3];

};
//=====================
//- Fim da estrutura--


int main()
{

    cout << "Hello REAA!" << endl;
    int *P_inteiro   = new int[4];   //Aloca memoria para 4 inteiros
    int *P_variavel  = new int;
    double *P_double = new double[4];//Aloca memoria para 4 double

    Aluno *P_struct  = new Aluno[4]; //Aloca memoria para 4 estruturas do tipo Aluno

    //Insers�o de valores para P_inteiro
    //Insers�o de valores para P_double
    //Insers�o de valores para P_struct

    delete[] P_inteiro;//Naturalmente
    delete[] P_double; //Naturalmente
    delete[] P_struct; //Naturalmente
    //OBS!  Se eu uso new <tipo>[]. Ent�o eu uso delete[]<tipo>
    //      Se eu uso apenas new. Ent�o eu uso apenas delete
    delete P_variavel; //N�o usei colchetes por que aloquei apenas uma vari�vel

    return 0;
}
