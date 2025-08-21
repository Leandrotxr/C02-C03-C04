#include <iostream>
#include <locale>

using namespace std;

void swap(int vetor[], int i, int j){
	int temp = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = temp;	
}

int particiona(int vetor[], int inicio, int fim){
	int pivo = vetor[fim];
	int i=0, j=fim-1;
	while(i<j){
		while(vetor[i] < pivo && i<j)
			i++;
		while(vetor[j] > pivo && i<j)
			j--;
		swap(vetor, i, j);
	}
	if(vetor[i] > pivo){
		swap(vetor, i, fim);
	}
	return i;
}

void quicksort(int vetor[], int inicio, int fim){
	if(inicio < fim){
	   	//fazer a ordenação em relação ao pivô
		int pivo = particiona(vetor, inicio, fim);
		//chamar o quicksort para a metade inferior
		quicksort(vetor, inicio, pivo-1);
		//chamar o quicksort para a metade superior
		quicksort(vetor,pivo+1, fim);
	}
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int vet[100];
	int aux;
	int i=0;
	int n=0;
	
	do
	{
		cin>>aux;
		if(aux != -1)
		{
			vet[i] = aux;
			n++;
			i++;
		}
	}while(aux != -1 && i<100);
	
	quicksort(vet,0,n-1);
	
	for(int j=0;j<n;j++)
	{
		cout<<vet[j]<<" ";
	}
	cout<<endl;
	
	return 0;
}