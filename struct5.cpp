#include <iostream>
#include <locale>
#include <cstring>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int N,i;
	
	cout<<"Digite o número de cavaleiros que serão cadastrados: ";
	do
	{
		cin>>N;
		if(N<=0 || N>1000)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(N<=0 || N>1000);
	cout<<endl;
	
	char nome[N][60];
	int base[N];
	
	cin.ignore(); //ignorar o numero n
	
	for(i=0;i<N;i++)
	{
		cout<<"Digite o nome do cavaleiro: ";
		cin.getline(nome[i],60);
		cout<<"Digite a base do cavaleiro: ";
		cin>>base[i];
		cin.ignore();
	}
	cout<<endl;
	
	char achar[60];
	
	cout<<"Digite o cavaleiro que deseja encontrar: ";
	cin.getline(achar,60);
	
	int res;
	
	for(i=0;i<N;i++)
	{
		res=strcmp(achar,nome[i]);
		if(res==0)
		{
			cout<<"Este cavaleiro esta na base "<<base[i]<<endl;
			break;
		}
	}
	
	if(res!=0)
	{
		cout<<"Este cavaleiro não está cadastrado"<<endl;
	}
	
	
	
	return 0;
}