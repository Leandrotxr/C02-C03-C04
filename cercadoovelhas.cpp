#include <iostream>
#include <locale>

using namespace std;

void busca_maior(int m)
{
	int maiorl, maiorc, maiora = 0;
	
	{
		for(int i = 1; i<=m; i++)
		{
			if((m-i)*i > maiora)
			{
				maiora = (m-i)*i;
				maiorl = i;
				maiorc = (m-i)/2;
			}
		}
	}
	cout<<maiorc<<" X "<<maiorl;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int m;
	
	cout<<"Digite a metragem da cerca: ";
	do
	{
		cin>>m;
		if(m<0)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(m<0);
	
	busca_maior(m);
	
	return 0;
}