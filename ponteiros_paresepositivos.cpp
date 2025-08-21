#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	int vetor[n];

	int aux;
	int *p;
	
	for(int i = 0; i < n; i++)
	{
		cin >> aux;
		
		p = &vetor[i];
		
		*p = aux;
	}	
	
	double teste;
	int soma = 0;
	
	for(int i = 0; i < n; i++)
	{
		p = &vetor[i];
		
		teste = *p%2;
		
		if( *p > 0 && teste == 0)
		{
			soma++;
		}
	}
	
	cout << soma;
	
	return 0;
}
