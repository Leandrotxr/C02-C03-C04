#include <iostream>
#include <locale>

using namespace std;

/*void preencher_mat(int mat[], int n)
{
	int num1, num2;
	int preencher = 1;
	
	cin>>num1>>num2;
	
	while(num1 != -1 || num2 != -1)
	{
		mat[num1][num2] = preencher;
		mat[num2][num1] = preencher;
		
		cin>>num1>>num2;
	}
}*/

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int n;
	
	cout<<"Digite o número de vértices: ";
	do
	{
		cin>>n;
		if(n<1 || n>10)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(n<1 || n>10); 
	
	int mat[n][n];
	
	//preencher_mat(mat,n)
	
	int num1, num2;
	int preencher = 1;
	
	cin>>num1>>num2;
	
	while(num1 != -1 || num2 != -1)
	{
		mat[num1][num2] = preencher;
		mat[num2][num1] = preencher;
		
		cin>>num1>>num2;
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(mat[i][j] != 1)
			{
				mat[i][j] = 0;
			}
		}
	}
	
	cout<<endl;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//ULTIMA PARTE, VER SE HÁ DESCONEXO
	int vetor[n];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(mat[i][j] == 1)
			{
				vetor[i] = 1; //linha não está completamente vazia, logo, tal linha = 1
			}
		}
	}
	
	int teste;
	
	for(int i = 0; i < n; i++)
	{
		if(vetor[i] == 0) //testa se há alguma linha vazia
		{
			teste = -1; //se houver, o valor é -1
		}
	}
	
	if(teste == -1)
	{
		cout<<"Não conexo";
	}
	else
	{
		cout<<"Conexo";
	}

	return 0;
}