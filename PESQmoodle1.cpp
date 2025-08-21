#include <iostream>
#include <locale>

using namespace std;

int busca_binaria(int vetor[], int cont, int procurar)
{
	int inicio = 0;
	int fim = cont-1;
	int meio;
	
	while(inicio <= fim)
	{
		meio = (inicio + fim)/2;
		
		if(vetor[meio] < procurar)
		{
			inicio = meio + 1;
		}
		else if(vetor[meio] > procurar)
		{
			fim = meio - 1;
		}
		else
		{
			return meio;
		}
	}
	return -1;
}

int busca_sequencial(int vetor[], int cont, int procurar)
{
	for(int i = 0; i < cont; i++)
	{
		if(vetor[i] == procurar)
		{
			return i;
		}
	}
	int nao_encontrado = -1;
	return nao_encontrado;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int vetor[100];
	int i = 0;
	int cont = 0;
	int aux;
	
	do
	{
		cout<<"Digite o valor da posição "<<i<<": ";
		cin>>aux;
		if(aux != -1)
		{
			vetor[i] = aux;
			i++;
			cont++;
		}
	}while(aux != -1 && i < 100);
	
	int procurar;
	
	cout<<"\nDigite o valor que deseja buscar: ";
	cin>>procurar;
	
	//int numero_buscado1 = busca_sequencial(vetor,cont,procurar);
	int numero_buscado2 = busca_binaria(vetor,cont,procurar);
	
	/*if(numero_buscado1 == -1)
	{
		cout<<procurar<<" não encontrado."<<endl;
	}
	else
	{
		cout<<procurar<<" encontrado na posição "<<numero_buscado1<<"."<<endl;
	}*/
	
	if(numero_buscado2 == -1)
	{
		cout<<procurar<<" não encontrado."<<endl;
	}
	else
	{
		cout<<procurar<<" encontrado na posição "<<numero_buscado2<<"."<<endl;
	}
	
	return 0;
}