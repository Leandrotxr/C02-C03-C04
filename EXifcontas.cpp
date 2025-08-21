#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
#include <iomanip> //função setprecision
#include <cmath> //funções matematicas 
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
	double X,Y,Z;
    //entrada de dados
    cout<<"digite o valor de X e de Y: ";
    cin>>X>>Y;
    //teste
    if(X+Y<=0)
	{
    	cout<<"Calculo impossivel."<<endl;
	}
    else if(X-Y<0)
	{
    	cout<<"Calculo impossivel."<<endl;
	}
    else 
	{
    	Z=(sqrt(X-Y))/(sqrt(X+Y));
    	cout<<Z<<endl;
	}
		
		
		
		
	return 0;
}






