#include <iostream>
#include <locale> 

using namespace std;

int busca_sequencial(int vetor[], int cont, int procurar)
{
	for(int i=0;i<cont;i++)
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
	setlocale (LC_ALL, "Portuguese");
	
	int vetor[100];
	int i = 0, cont = 0;
	int aux = 1;
	
	do
	{
		cout<<"Digite o valor da posição "<<i<<": ";
		cin>>aux;
		if(aux!=-1)
		{
			vetor[i] = aux;
			cont++;
			i++;
		}
	}while(aux!=-1 && cont<100);
	
	int procurar;
	
	cout<<endl;
	cout<<"Digite o valor de deseja procurar: ";
	cin>>procurar;
	cout<<endl;
	
	int num_buscado = busca_sequencial(vetor,cont,procurar);
	
	if(num_buscado == -1)
	{
		cout<<procurar<<" não encontrado"<<endl;
	}
	else
	{
		cout<<procurar<<" encontrado na posição "<<num_buscado<<endl;
	}

	return 0;
}