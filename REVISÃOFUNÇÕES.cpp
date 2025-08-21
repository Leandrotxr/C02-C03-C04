//AULA FUNÇÕES
#include <iostream>     //função in e out
#include <iomanip>      //função setprecision
#include <locale>    //função linguagem
#include <cmath>        //função matemática
#include <string>       //funçaõ para criar vetores

using namespace std;    //padrão

void soma(int n1, int n2); //protótipo

/*é preciso declarar os parâmetros*/
void bubblesort(double vet[],int n) //void usado para ordenar
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

int main()   //função principal
{
	//é necessário chamar a função para que ela atue
	soma(1,2); /*basta colocar o nome e os argumentos*/
	
	int n;
	
	cout<<"Digite o numero de cadastros: ";
	cin>>n;
	
	double vet[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Digite o valor da posicao "<<i<<": ";
		cin>>vet[i];
	}
	
	bubblesort(vet,n);
	
	return 0;
}

//COMO DECLARAR UMA FUNÇÃO:
/*a função pode ser declarada antes ou depois da main, se ela for após, é necessário
prototipar a função anteriormente*/
int /*tipo de retorno*/ soma/*nome da função*/(int n1, int n2/*argumentos*/)
{
	//instruções da função
	int soma = n1+n2;
	return soma;
}






































