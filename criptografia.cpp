#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int N,M,i,j;
	
	cout<<"Digite o número de linhas e o número de colunas: "; 
	do
	{
		cin>>N>>M;
	}while(N<0 || M<0);
	
	char crip[N][M];
	
	cin.ignore();
	
	cout<<"Digite a mensagem criptografada: "<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			cin>>crip[i][j];
		}
	}
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<crip[j][i];
		}
	}
	return 0;
}