#include <iostream>
using namespace std;
//===========================================
//--classe b�sica--
class Aeronaves
{

public:
    Aeronaves(int=0, string="", string="", string="");//cnt

    void setNumeroPassageiros(int);
    int  getNumeroPassageiros();

    void setNomeAeronave(string);
    string  getNomeAeronave();

    void   setTipoAeronave(string);
    string getTipoAeronave();

    void   setHibrido(string);
    string getHibrido();

private:
    int _Npassageiros;
    string _TipoAeronave;
    string _Hibrido;
    string _NomeAeronave;

};//Fim classe Aeronaves

//===========================================
//--classe Derivada--
class fokker:public Aeronaves
{
public:
    fokker(float=0.0, int=0, string="", string="", string="");//cnt

    void  setvelocidade(float);
    float getvelocidade();

    void display();//mostra as informa��es


private:
    float _velocidade;

};

int main()
{
    cout << "Hello world!" << endl;
    //objeto
    fokker M5;//crio um objeto M5, instanciado da classe fokker
    M5.setNumeroPassageiros(151);//seto o numero de passageiros
    M5.setHibrido("Nao");//seto o a informa��o de � hibrido ou n�o
    M5.setTipoAeronave("Comercial");//seto a classifica��o dele
    M5.setvelocidade(900.0);//seto a velocidade
    M5.setNomeAeronave("Fokker100");//seto o nome
    M5.display();//nesta fun��o-membro uso para mostrar todas as informa��es

    cout<<"\n"<<endl;//crio um espa�o

    //Crio outro objeto chamado spin instanciado da classe fokker
    fokker spin(10.1, 1, "Combate", "Nao", "Fokker_spin");//velocidade est� menor que 850.0 ent�o � setado para 850.0
    spin.display();//Mostro as info.

    return 0;
}


//===========================================
//--Desenvolvimento das fun�oes da classe b�sica--
//--Construtor--
//--Posso usar esta forma de inicializa��o dos atributos--
Aeronaves::Aeronaves(int Npassageiro, string TipoAeronave, string Hibrido, string nome)
{
    _Npassageiros=Npassageiro;
    _TipoAeronave=TipoAeronave;
    _Hibrido=Hibrido;
    _NomeAeronave=nome;
}
void Aeronaves::setNumeroPassageiros(int passgeiros)//seto o numero de passageiros restringindo o min�mo
{
    _Npassageiros=(passgeiros <0 && 340 ? 0: passgeiros);//uso o perador tern�rio para evitar de usar o if-else
}
int Aeronaves::getNumeroPassageiros()//retorno o atributo.
{
    return _Npassageiros;
}
void Aeronaves::setNomeAeronave(string nome)//seto o nome a aeronave
{
    _NomeAeronave=nome;
}
string Aeronaves::getNomeAeronave()//devolvo o atributo inicializado
{
    return _NomeAeronave;
}

void  Aeronaves::setTipoAeronave(string TipoAero)//seto o tipo de aeronave
{
    _TipoAeronave=TipoAero;
}
string Aeronaves::getTipoAeronave()//devolvo o atributo inicializado
{
    return _TipoAeronave;
}
void  Aeronaves::setHibrido(string Hib)//seto se � hibrido
{
    _Hibrido=Hib;
}
string Aeronaves::getHibrido()//devolvo o atributo inicializado
{
    return _Hibrido;
}
//===========================================
//--Fim Desenvolvimento das fun�oes da classe b�sica--


//===========================================
//--Desenvolvimento das fun�oes da classe Derivada--
//Ou posso atilizar esta forma para inicializar os membros de dados atrav�s do construtor
fokker::fokker(float velocidade, int passageiros, string tipoAeronaves, string hibrido, string nome):
_velocidade(velocidade<850.0? 850.0: velocidade),
Aeronaves(passageiros, tipoAeronaves, hibrido, nome)//Devo chamar o construtor da classe b�sica para inicializar os membros de dados
{

}
void fokker::setvelocidade(float velo)
{
    _velocidade=(velo < 850.0 ? 850.0: velo);//seto a velocidade restringindo os valores atrav�s do operador tern�rio
}
float fokker::getvelocidade()//retorno a velocidade
{
    return _velocidade;
}
void fokker::display()//mostro os dados
{
    cout<<"Nome da aeronave:....."<<getNomeAeronave()<<endl;//cada fn��o-membro get retorna o atributo inicializado
    cout<<"N.Passageiros:.."<<getNumeroPassageiros()<<endl;//Ent�o posso usar na saido de fluxo de dados (cout)
    cout<<"Tipo Aeronave:.."<<getTipoAeronave()<<endl;
    cout<<"Hibrido:........"<<getHibrido()<<endl;
    cout<<"velocidade:....."<<getvelocidade()<<endl;


}
//===========================================
//--Fim Desenvolvimento das fun�oes da classe Derivada--

