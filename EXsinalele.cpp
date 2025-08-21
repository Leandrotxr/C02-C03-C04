#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
#include <iomanip> //função setprecision
#include <cmath> //funções matematicas 
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
	double Y,T;
    //entrada de dados
    cout<<"digite o valor de T: ";
    cin>>T;
    //teste
    if(T>1)
	{
		cout<<"x(t) = 0"<<endl;
	}
	else if(T<-1)
	{
		cout<<"x(t) = 0"<<endl;
	}
    else
	{
		Y=1-fabs(T);
		cout<<"x(t) = "<<Y<<endl;
	}
		
	return 0;
}
