#include <iostream>
#include <locale>

using namespace std;

int busca_binaria(int vetor[], int i, int procurar)
{
	int inicio = 0;
	int fim = i-1;
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

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int vetor[20];
	int i = 0;
	int aux = 1;
	
	do
	{
		cout<<"Digite o valor da posição "<<i<<": ";
		cin>>aux;
		if(aux!=-1)
		{
			vetor[i] = aux;
			i++;
		}
	}while(aux!=-1 && i<100);
	
	int procurar;
	
	cout<<"Digite o valor que deseja procurar: ";
	cin>>procurar;
	
	int teste;
	
	teste = busca_binaria(vetor,i,procurar);
	
	if(teste == -1)
	{
		cout<<"\nNão possui acesso"<<endl;
	}
	else
	{
		cout<<"\nPossui acesso"<<endl;
	}
	
	return 0;
}