
#ifndef COMPONENTES
#define COMPONENTES

class Componentes{

public:
    Componentes(const char *const typdeComp, const char modelComp);//cosntrutor. Na� foi definido tamanho para ela, ent�o deve-se usar "new"
    ~Componentes();                                      //destrutor
    const char *getTypeComp();                           //retornam o tipo de componente
    const char *getModelComp();                          //retornam o modelo do componente

    static int getCompCnt();                             //fun�ao-memobro que retorna o n�mero de objetos instanciados

private:
    char *_typeComp;                                    //undercore para diferenciar dos parametros do construtor
    char *_modelComp;

    static int compCnt;                                  //n�mero de componentes que ser�o criados na classe (objetos)
};

#endif // COMPONENTES


