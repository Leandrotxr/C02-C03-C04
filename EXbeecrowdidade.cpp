#include <iostream>
using namespace std;
int main() 
{
    //declaração de variaveis
    int dias,meses,anos,restan,restme;
    //entrada de dados
    cin>>dias;
    //calculos
    anos=dias/365;
    restan=dias%365;
    meses=restan/30;
	restme=restan%30;
    //saida de dados
    cout<<anos<<" ano(s)"<<endl;
    cout<<meses<<" mes(es)"<<endl;
    cout<<restme<<" dia(s)"<<endl;
   return 0;
}