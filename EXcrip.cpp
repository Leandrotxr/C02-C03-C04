#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	//linhas e colunas da matriz
	int N,M;
	do
	{
	cout<<"Digite o número de linhas e o número de colunas: ";
	cin>>N>>M;
	}while(N<1 || M<1);
	
	cout<<endl;//pular uma linha
	
	
	char matriz[N][M];
	
	cin.ignore();
	
	//matriz normal
	cout<<"Digite a mensagem criptografada: ";
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>matriz[i][j];
		}
	}
	
	//matriz inversa
	cout<<endl;
	
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<matriz[j][i];
		}
	}

	
	return 0;
}