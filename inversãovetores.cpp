#include <iostream>
#include <locale>

using namespace std;

void cadastro_vetor(int vetor[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> vetor[i];
	}
}

void testar(int vetor[], int n)
{
	int k;
	int j = n;
	int inversao = 0;
	
	for(int i = 0; i < j; i++)
	{
		k = i + 1;
		for(k; k < j; k++)
		{
			if(vetor[i] > vetor[k])
			{
				inversao++;
			}
		}
	}
	cout<<endl;
	cout<<inversao;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int n;
	
	cin >> n;
	
	int vetor[n];
	
	cadastro_vetor(vetor,n);
	
	testar(vetor,n);
	
	return 0;
}