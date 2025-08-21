#include <iostream>
#include <locale>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int N,i;
	
	cout<<"Digite o número de Padawans que serão cadastrados: ";
	do
	{
		cin>>N;
		if(N<=0 || N>100)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(N<=0 || N>100);
	
	struct ficha
	{
		char nome[100][60];
		int pontos[100];
	};
	
	ficha dados;
	int soma=0;
	double media;
	char melhor[60];
	int maiorp;
	
	cin.ignore();
	
	for(i=0;i<N;i++)
	{
		cout<<"Nome: ";
		cin.getline(dados.nome[i],60);
		cout<<"Pontos: ";
		cin>>dados.pontos[i];
		
		if(dados.pontos[i]>maiorp)
		{
			maiorp=dados.pontos[i];
			strcpy(melhor,dados.nome[i]);
		}
		
		soma+=dados.pontos[i];
		cin.ignore();
	}
	
	media=soma/N;
	
	cout<<endl;
	cout<<"padawan com mais pontos: "<<melhor<<endl;
	cout<<"Pontos: "<<maiorp<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Média da turma: "<<media<<endl;
	
	return 0;
}