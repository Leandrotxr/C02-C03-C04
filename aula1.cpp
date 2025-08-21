#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	
	cout<<"Quantos alunos serão cadastrados? ";
	do
	{
		cin>>n;
		if(n<=0)
		{
			cout<<"Erro de entrada, digite novamente: "
		}
	}while(n<=0);
	
	int matriculas[n];
	string nomes[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>matriculas[i];
		cin>>nomes[i];
	}
	
	
	return 0;
}











