#include <iostream>
#include <locale>

using namespace std;

int busca_binaria_invertida(double vetor[], int N, double procurar)
{
	int inicio = 0;
	int fim = N-1;
	int meio;
	
	while(inicio<=fim)
	{
		meio = (inicio + fim)/2;
		
		if(vetor[meio] < procurar)
		{
			fim = meio - 1;
		}
		else if(vetor[meio] > procurar)
		{
			inicio = meio + 1;
		}
		else
		{
			return meio;
		}
	}
	return -1;
}

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int N;
	
	cout<<"Digite o número de elementos: ";
	do
	{
		cin>>N;
		if(N<1 || N>10000)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(N<1 || N>10000);
	
	double vetor[N];
	
	cout<<"\nDigite os elementos: ";
	for(int i=0;i<N;i++)
	{
		cin>>vetor[i];
	}
	
	double procurar;
	
	cout<<"\nQual elemento deseja buscar: ";
	cin>>procurar;
	
	int teste;
	
	teste = busca_binaria_invertida(vetor,N,procurar);
	cout<<endl;
	
	if(teste == -1)
	{
		cout<<procurar<<" não encontrado."<<endl;
	}
	else
	{
		cout<<procurar<<" encontrado na posição "<<teste<<"."<<endl;
	}
	
	return 0;
}