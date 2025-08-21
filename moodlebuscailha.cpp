#include <iostream>
#include <string>

using namespace std;

struct dados
{
	char nome[100];
	int indice;
};


void nome_ilhas(dados nome[])
{
	for(int i = 0; i < 7; i++)
	{
		nome[i].indice = i;
		cin.ignore();
		cin.getline(nome[i].nome,100);
	}
}

int procurar_ilha(dados nome[], string procurar)
{
	for(int i=0;i<7;i++)
	{
		if(nome[i].nome == procurar)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	dados nome[7];
	
	nome_ilhas(nome);
	
	string procurar;
	
	cin >> procurar;
	
	int ilha_procurada;
	
	ilha_procurada = procurar_ilha(nome,procurar);
	
	cout << ilha_procurada;
	
	
}