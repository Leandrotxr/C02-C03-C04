#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL,"portuguese");
	
	char nome[61],opc;
	int idade,visi=0,soma=0;
	double media=0;
	
	do
	{
		cout<<"Nome: ";
		cin>>nome;
		do
		{
			cout<<"Idade: ";
			cin>>idade;
		}while(idade<10 || idade>100);
		
		visi++;
		soma=soma+idade;
		media=soma/visi;
		
		
		cout<<"Tecle ‘s’ para finalizar, ou diferente para novo cadastro: ";
		cin>>opc;
	}while(opc!='s');
	
	cout<<"Número de visitantes foi "<<visi<<endl;
	cout<<"Idade média: "<<media<<endl;
	return 0;
}