#include <iostream>
                            using namespace std;

                            //========================================
                            //--Prot�tipo da(s) fun��es--

                            int cubebyValue(int);//Passagem por valor
                            void cubebyReferenceByAddres(int&);//Passagem por eferencia
                            void cubebyReferenceByPoiter(int*);

                            //========================================
                            //--Corpo do programa--

                            int main()
                            {
                                cout << "Hello REAA" << endl;
                                int number   =5,
                                    numero   =10,
                                    num      =40,
                                    auxiliar =0;

                                cout<<endl;
                                cout <<"===Passagem por valor==="<<endl;
                                cout <<"O valor original de number eh "<< number;
                                auxiliar = cubebyValue(number); //passa o argumento number por valor;
                                cout<< "\nO valor de number continua o mesmo " << number << endl;
                                cout<< "O valor que retorna eh " << auxiliar << endl;
                                cout<<endl;

                                cout <<"===Passagem por referencia com argumentos de referencia===" << endl;
                                cout <<"O valor original de numero eh "<<numero<<endl;
                                cubebyReferenceByAddres(numero);//N�o retorna nada, pois ele altera diretamente

                                                                //no endere�o da variavel numero
                                cout <<"O novo valor de numero eh "<<numero<<endl;

                                cout<<endl;

                                cout <<"===Passagem por referencia com argumentos de ponteiro===" << endl;
                                cout <<"O valor original de num eh " << num <<endl;
                                cubebyReferenceByPoiter(&num);
                                cout <<"o novo valor de num eh " << num <<endl;

                                return 0;


                                return 0;
                            }//Fim


                            //========================================
                            //--Desenvolviemnto da(s) fun��es--

                            //c�lcula e retorna  o cubo do valor inteiro
                            int cubebyValue(int number)
                            {
                                return number*number*number;
                            }//Fim da fun��o cubValue

                            void cubebyReferenceByAddres(int &n)
                            {
                                n=(n)*(n)*(n);// o mesmo que n=n*2;
                            }//Fim da fun��o cubebyReferenceByAddres

                            void cubebyReferenceByPoiter(int *n)
                            {
                                *n = (*n)*(*n)*(*n);
                            }//Fim da fun��o cubebyReferenceByPoiter
