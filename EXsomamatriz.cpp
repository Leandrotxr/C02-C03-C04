#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//entrar com as linhas e as colunas
	int N,M;
	cout<<"Digite o número de linhas e número de colunas: ";
	cin>>N>>M;
	
	//entrar com os valores da matrizes
	int mat1[N][M],mat2[N][M],mat3[N][M];
	
	cout<<"Digite os valores da matriz 1: "<<endl;
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>mat1[i][j];
		}
	}
	
	cout<<"Digite os valores da matriz 2: "<<endl;
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>mat2[i][j];
		}
	}
	
	//somar os valores
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			mat3[i][j]=mat1[i][j] + mat2[i][j];
		}
	}
	
	//saida de dados
	cout<<endl;
	cout<<"matriz 3:"<<endl;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}