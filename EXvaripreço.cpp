#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
#include <iomanip> //função setprecision
#include <cmath> //funções matematicas 
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    int qtde;
	double PA,P1,P2,P3;
    //entrada de dados
    cout<<"digite o valor do produto: ";
    cin>>PA;
    cout<<"digite a quatidade vendida: ";
    cin>>qtde;
    //teste
    if(PA<0)
	{
		cout<<"Erro de entrada..."<<endl;
	}
	else if(qtde<0)
	{
		cout<<"Erro de entrada..."<<endl;
	}
    else if(qtde==0)
	{
		P1=PA-(1.0/10)*PA;
		cout<<"R$ "<<P1<<" - diminui o preço"<<endl;
	}
	else if(qtde<500)
	{
		cout<<"R$ "<<PA<<" - sem reajuste"<<endl;
	}
	else if(qtde<1000)
	{
		P2=PA+(1.0/10)*PA;
		cout<<"R$ "<<P2<<" - aumentou o preço"<<endl;
	}
	else if(qtde>=1000)
	{
		P3=PA+(15.0/100)*PA;
		cout<<"R$ "<<P3<<" - aumentou o preço"<<endl;
	}
		
		
		
		
		
	return 0;
}