#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    //declaração de variaveis
    double din,gast,troco;
    //entrada de dados
    cin>>din;
	cin>>gast;
    //calculos
	troco=din-gast;
    //saida de dados
    cout<<fixed<<setprecision(2);
    cout<<"TROCO = "<<troco<<endl;
   return 0;
}