#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

struct dados
{
	char nome[100];
	int notas[4];
};

int soma(dados competidor[],int N)
{
	int soma[N];
	
	for(int i=0;i<N;i++)
	{
		soma[i] = 0;
		for(int j=0;j<4;j++)
		{
			soma[i] = soma[i] + competidor[i].notas[j];
		}
	}
	
	int ma, pos;
	
	ma = -1;
	
	for(int i=0;i<N;i++)
	{
		if(soma[i]>ma)
		{
			ma = soma[i];
			pos = i;
		}
	}
	
	return pos;
}

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int N;
	
	cout<<"Digite o número de competidores: ";
	do
	{
		cin>>N;
		if(N<1)
		{
			cout<<"Erro de enytrada, digite novamente: ";
		}
	}while(N<1);
	cout<<endl;
	
	dados competidor[N];
	
	for(int i=0;i<N;i++)
	{
		cout<<"Digite o nome do "<<i+1<<"° competidor: ";
		cin>>competidor[i].nome;
		cout<<"Digite as notas do "<<i+1<<"° competidor: ";
		for(int j=0;j<4;j++)
		{
			cin>>competidor[i].notas[j];
		}
		cout<<endl;
	}
	
	int maior;
	
	maior = soma(competidor,N);
	
	cout<<"Vencedor : "<<competidor[maior].nome<<endl;
	
	return 0;
}