#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
#include <iomanip> //função setprecision
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
	double X,Y;
    //entrada de dados
    cout<<"digite o valor de X: ";
    cin>>X;
    //teste
    if(X!=0)
	{
    	Y=1.0/X;
    cout<<fixed<<setprecision(4);
    cout<<Y<<endl;
	}
    if(X==0)
    	cout<<"Erro! Calculo impossivel."<<endl;
    return 0;
}


