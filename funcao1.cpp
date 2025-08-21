#include <iostream>
#include <locale>
using namespace std;
float ideal(float h,char sexo);
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float H,Pideal;
	
	cout<<"Digite a altura: ";
	do
	{
		cin>>H;
		if(H<=0.83)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(H<=0.83);
	
	cin.ignore();
	
	cout<<endl;
	
	char sex[1];
	
	cout<<"Digite o sexo da pessoa (M ou F): ";
	do
	{
		cin>>sex[0];
		if(sex[0]!='m' && sex[0]!='M' && sex[0]!='f' && sex[0]!='F')
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(sex[0]!='m' && sex[0]!='M' && sex[0]!='f' && sex[0]!='F');
	
	Pideal=ideal(H,sex[0]);
	
	cout<<"\nPeso ideal = "<<Pideal<<" kg"<<endl;
	
	return 0;
}
float ideal(float h,char sexo)
{
	float pideal;
	if(sexo=='M' || sexo=='m')
	{
		pideal=72.7*h-58;
	}
	else
	{
		pideal=62.1*h-44.7;
	}
	return pideal;
}
