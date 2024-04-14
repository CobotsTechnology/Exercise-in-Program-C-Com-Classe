#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;

#include "senVolt.hpp"

int main()
{
    cout << "Hello REAA!" << endl;
    sensVolt sensor("Voltage", 267, 1, 5.0);

    cout<< fixed <<setprecision(4);
    cout<<"configura��es inciais"<<endl;
    sensor.dispResults();
    cout<<"Voltage = "<<sensor.voltsVal()<<'V'<<endl;

    cout<<"novas configura��es"<<endl;
    sensor.setSensID(4);
    sensor.setValorADC(743);
    sensor.setSensType("pressao");
    sensor.setVref(3.3);
    sensor.dispResults();
    cout<<"Voltage = "<<sensor.voltsVal()<<'V'<<endl;
    return 0;
}
