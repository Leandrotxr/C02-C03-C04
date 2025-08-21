#include <iostream>

using namespace std;

int vetor[9] = {1,2,3,4,5,6,7,8,9};

int busca_binaria(int elemento, int inicio, int fim)
{
	if(inicio > fim)
	{
		return -1;
	}
	
	int meio = (inicio + fim)/2;
	
	if(vetor[meio] == elemento)
	{
		return meio;
	}
	
	if(vetor[meio] < elemento) // metade superior
	{
		inicio = meio + 1;
		return busca_binaria(elemento,inicio,fim);
	}
	else //metade inferior
	{
		fim = meio - 1;
		return busca_binaria(elemento,inicio,fim);
	}
}




int main()
{
	
	
	
	
	
	
	
	
	
	return 0;
}