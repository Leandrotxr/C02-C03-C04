#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{
    //declaração de variaveis
    double C,i,M,L;
    int t;
    //entrada de dados
    cin>>C;
	cin>>i;
	cin>>t;
    //calculos
    M=pow((1+(i/100)),t)*C;
    L=M-C;
    //saida de dados
    cout<<fixed<<setprecision(2);
    cout<<"LUCRO = "<<L<<endl;
   return 0;
}