#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
    //declaração de variaveis
    double A,R;
    //entrada de dados
    cout<<"digite o valor do raio:"<<endl;
    cin>>R;
    //calculos
    A=pow(R,2)*3.14159;
    //saida de dados
    cout<<fixed<<setprecision(3);
    cout<<"AREA = "<<A<<endl;
   return 0;
}