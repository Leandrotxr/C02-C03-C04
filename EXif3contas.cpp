#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
	double X,Y,R1,R2,R3;
    //entrada de dados
    cout<<"digite o valor de X e Y: ";
    cin>>X>>Y;
    //teste
    if(X>Y)
	{
		R1=(X*X)-(Y*Y)+2.0*X*Y;
		cout<<"f(x,y) = "<<R1<<endl;
	}
	else if(X==Y)
	{
		R2=2.0*X*Y+X+Y;
		cout<<"f(x,y) = "<<R2<<endl;
	}
    else if(X<Y)
	{
		R3=(Y*Y)+(X*X)+2.0*X*Y;
		cout<<"f(x,y) = "<<R3<<endl;
	}
		
	return 0;
}