#include <iostream>

using namespace std;

void insertion_sort(double vetor[],int tamanho)
{
	int aux; //auxiliar no swap
		
	for(int i=0;i<tamanho-1;i++)
	{
		for(int j=i+1;j>0;j--)
		{
			if(vetor[j]<vetor[j-1])
			{
					aux = vetor[j];
					vetor[j] = vetor[j-1];
					vetor[j-1] = aux;
			}
			else
			{
				break; //para parar antes
			}
		}
	}	
}

void bubblesort(double vet[],int n)
{
	double aux;
	
	for(int j=0;j<n-1;j++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(vet[i]>vet[i+1])
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			}
		}
	}
}

void seletion_sort(double vet[], int n)
{
	double temp;
	int pos_min;
	
	for(int i=0;i<n;i++)
	{
		double min = 99999;
		
		for(int k=i;k<n;k++)
		{
			if(vet[k]<min)
			{
				min = vet[k];
				pos_min = k;
			}
		}
		temp = vet[i];
		vet[i] = min;
		vet[pos_min] = temp;
	}
}

int main()
{
	
	int n;
	
	cout<<"Digite o numero de cadastros: ";
	cin>>n;
	
	double vet[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Digite o valor da posicao "<<i<<": ";
		cin>>vet[i];
	}
	
	insertion_sort(vet,n);
	
	//bubblesort(vet,n);
	
	//seletion_sort(vet,n);
	
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<vet[i]<<" ";
	}
	
	return 0;
}