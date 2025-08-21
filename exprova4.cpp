#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	int N,i,j;
	int resp=0;
	
	cout<<"Digite a ordem da matriz: ";
	do
	{
		cin>>N;
		if(N<1 || N>10)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(N<1 || N>10);
	
	double mat[N][N];
	
	cout<<endl;
	cout<<"Digite os elementos da matriz: "<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(mat[i][j]!=0)
			{
				resp=1;
			}		
		}
	}
	
	cout<<endl;
	if(resp==0)
	{
		cout<<"Matriz nula"<<endl;
	}
	else
	{
		cout<<"Matriz não nula"<<endl;
	}
	return 0;
}