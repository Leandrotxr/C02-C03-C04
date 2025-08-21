#include <iostream>
#include <locale>

using namespace std;

struct proj {
	int x; //destruição
	int y; //peso
};

void cadastrar(proj projetil[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> projetil[i].x;
		cin >> projetil[i].y;
	}
}

void teste(proj projetil[], int n, int k, int r)
{
	int soma_peso = 0;
	
	for(int i = 0; i < n; i++)
	{
		if(soma_peso + projetil[i].y < k)
		{
			soma_peso = soma_peso + projetil[i].y;
			r = r - projetil[i].x;
		}
	}
	
	if(r > 0)
	{
		cout<<"\nFalha na missão";
	}
	else
	{
		cout<<"\nMissão completada com sucesso";
	}
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int n; //projeteis 
	
	do
	{
		cin >> n;
	}while(n < 1 || n > 50);
	
	proj projetil[n];
	
	cadastrar(projetil,n);
	
	int k; //capacidade do canhao
	
	do
	{
		cin >> k;
	}while(k < 1 || k > 50);
	
	int r; //resistencia
	
	cin >> r;
	
	teste(projetil, n, k, r);
	
	return 0;
}