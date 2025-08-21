#include <iostream>

using namespace std;

struct cadastro
{
	char nome[100];
	int id;
};

void cadastrar_nomes(cadastro iden[], int n)
{
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		cin.getline(iden[i].nome,100);
		iden[i].id = i;
	}
}

int main()
{
	int n;
	
	cin >> n; //número de usuários
	
	bool matriz_seg[n][n]; //matriz de seguidores
	
	//declarar todos elementos como falso
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			matriz_seg[i][j] = false;
		}
	}
	
	cadastro iden[n];
	
	cadastrar_nomes(iden,n);
	
	int seg;
	
	for(int i = 0; i < n; i++)
	{
		cin >> seg;
		
		while(seg != -1)
		{
			matriz_seg[i][seg] = true;
			cin >> seg;
		}
	}
	
	int desejado;
	
	cin >> desejado;
	
	cout << endl;
	
	for(int i = 0; i < n; i++)
	{
		if(i == desejado)
		{
			for(int j = 0; j < n; j++)
			{
				if(matriz_seg[j][i] == true)
				{
					cout << iden[j].nome << endl;
				}
			}
		}
	}
	
	return 0;
}