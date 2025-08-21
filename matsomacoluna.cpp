#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int N,i,j;
	
	//definir a ordem da matriz
	cout<<"Digite a ordem da matriz: ";
	do
	{
		cin>>N;
		if(N>10 || N<1)
		{
			cout<<"Valor inválido, digite novamente: ";
		}
	}while(N>10 || N<1);
	
	int mat[N][N];
	
	//prencher a matriz
	cout<<"Digite os valores da matriz: "<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	cout<<endl;
	
	//somar as colunas
	for(i=0;i<N;i++)
	{
		int soma=0;
		for(j=0;j<N;j++)
		{
			soma+=mat[j][i];
		}
		cout<<"Soma da coluna "<<i<<" = "<<soma<<endl;
	}
	return 0;
}