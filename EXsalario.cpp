#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    //declaração de variaveis
    double func,horas,valor,salario;
    //entrada de dados
    cin>>func;
	cin>>horas;
	cin>>valor;
    //calculos
    salario=horas*valor;
    //saida de dados
    cout<<fixed<<setprecision(2);
    cout<<"NUMBER = "<<func<<endl;
    cout<<"SALARY = U$"<<salario<<endl;
   return 0;
}