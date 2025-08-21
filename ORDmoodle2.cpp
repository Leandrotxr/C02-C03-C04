#include <iostream>
#include <locale>

using namespace std;

void insertion_sort(int vetor[], int n)
{
	int aux;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j>0;j--)
		{
			if(vetor[j] < vetor[j-1])
			{
				aux = vetor[j-1];
				vetor[j-1] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
}

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int vetor[100];
	int cont = 0;
	int i = 0;
	int aux;
	
	do
	{
		cout<<"Digite o valor da posição "<<i<<": ";
		cin>>aux;
		if(aux != 0)
		{
			vetor[i] = aux;
			i++;
			cont++;
		}
	}while(aux != 0 && i < 100);
	
	insertion_sort(vetor,cont);
	
	cout<<endl;
	
	for(int j=0;j<cont;j++)
	{
		cout<<vetor[j]<<" ";
	}
	
	return 0;
}