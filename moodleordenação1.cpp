#include <iostream>
#include <locale>

using namespace std;

void bubblesort(int vetor[], int n)
{
	int trab,cont = 0;
	
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(vetor[j]>vetor[j+1])
			{
				trab = vetor[j];
				cout<<"New trab: "<<trab<<endl;
				vetor[j] = vetor[j+1];
				vetor[j+1] = trab;
				cont++;
			}
		}
	}
	cout<<"\nContador: "<<cont;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int n;
	
	cout<<"Digite o número de elementos: ";
	do
	{
		cin>>n;
		if(n<=0)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(n<=0);
	
	int vetor[n];
	
	cout<<"Digite o valor de cada elemento: ";
	for(int i=0;i<n;i++)
	{
		cin>>vetor[i];
	}
	
	bubblesort(vetor,n);
	
	
	
	return 0;
}