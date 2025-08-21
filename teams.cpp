#include <iostream>
using namespace std;

void insertion_sort(int vetor[], int n)
{
	int aux;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(vetor[j] < vetor[j-1])
			{
				aux = vetor[j];
				vetor[j] = vetor[j-1];
				vetor[j-1] = aux;
			}
		}
	}
}
//a complexidade do insertion sort é o(n^2), assim como a complexidade do bubblesort e do seletionsort.
//porém o insertion sort é um pouco mais eficiente que os dois.

int main()
{
	int n;
	
	cout<<"Digite o numero de elementos: ";
	do
	{
		cin>>n;
		if(n<1 || n>100)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(n<1 || n>100);
	
	int vetor[n];
	
	cout<<"\nDigite os elementos: ";
	for(int i=0;i<n;i++)
	{
		cin>>vetor[i];
	}
	
	insertion_sort(vetor,n);
	
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<vetor[i]<<" | ";
	}
	
	return 0;
}