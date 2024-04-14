/*
    Defini��o da classe Increment
*/

#ifndef INCRMENT_H
#define INCRMENT_H


class Increment
{
    public:
        Increment(int c=0, int i=1);//construtor padrao
        //defini��o da funcao addIncrement
        void addIncrement();
        void print()const;//Imprime const e increment
    private:
        int Count;  // se eu modificar Count para ser const, dara erro por causa que n�o sou permitido fazer altera��es quando for const (constante)
        const int increment;//membro de dados const
};//Fim da classe Increment

#endif//end INCRMENT_H