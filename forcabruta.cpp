#include <iostream>
#include <locale>

using namespace std;

struct pedras{
	string nome;
	double vol, peso;
	int preco;
};

void cadastrar_pedra(pedras pedra[], int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<"PEDRA "<<i+1<<": "<<endl;
		
		cout<<"Nome: ";
		cin>>pedra[i].nome;
		
		cout<<"Volume(m³): ";
		do
		{
			cin>>pedra[i].vol;
			if(pedra[i].vol<0 || pedra[i].vol>1)
			{
				cout<<"Erro de entrada, digite novamente: ";
			}
		}while(pedra[i].vol<0 || pedra[i].vol>1);
		
		cout<<"Peso(kg): ";
		do
		{
			cin>>pedra[i].peso;
			if(pedra[i].peso<0)
			{
				cout<<"Erro de entrada, digite novamente: ";
			}
		}while(pedra[i].peso<0);
		
		cout<<"Preço: ";
		do{
			cin>>pedra[i].preco;
			if(pedra[i].preco<0)
			{
				cout<<"Erro de entrada, digite novamente: ";
			}
		}while(pedra[i].preco<0);
		
		cin.ignore();
		
		cout<<endl;
	}
}

int solucao(int i, int capp, int capv, int n)
{
	if(i>=n || capp<=0 || capv <=0)
	{
		return 0;
	}
	
	int sol1, sol2;
	
	sol1 = solucao(i+1, capp, capv, n);
	
	if(capp >= pedra[i].peso && capv >= pedra[i].vol)
	{
		sol2 = solucao(i+1, capp-pedra[i].peso, capv-pedra[i].vol, n) + pedra[i].preco;
	}
	
	return max(sol1,sol2);
}

void teste_gulosa(pedras pedra[], int m)
{
	int i = 0;
	int cap_peso = 400;
	double cap_volume = 1;
	int valor_total = 0;
	
	while(i<m)
	{
		if(cap_peso >= pedra[i].peso && cap_volume >= pedra[i].vol)
		{
			cap_peso -= pedra[i].peso;
			cap_volume -= pedra[i].vol;
			valor_total += pedra[i].preco;
		}
		i++;
	}
	cout<<"Valor Total: R$"<<valor_total<<",00"<<endl;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int m;
	
	cout<<"Digite o número de pedras a serem cadastradas: ";
	do
	{
		cin>>m;
		if(m<1)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(m<1);
	
	cout<<endl;
	
	pedras pedra[m];
	
	cadastrar_pedra(pedra,m);
	
	teste_gulosa(pedra,m);
	
	return 0;
}