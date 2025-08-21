#include <iostream>
#include <locale>

using namespace std;

void area_max(int vet[], int n)
{
	int i;
	int maiorA = 0;
	for(i = 1; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(vet[i] < vet[j])
			{
				if(vet[i]*(j-i) > maiorA)
				{
					maiorA = vet[i]*(j-i);
				}
			}
			if(vet[i] > vet[j])
			{
				if(vet[j]*(j-i) > maiorA)
				{
					maiorA = vet[j]*(j-i);
				}
			}
		}
	}
	cout<< maiorA << endl;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int n;
	
	cout<<"Digite o valor de n: ";
	cin>>n;
	
	int vet[n];
	
	for(int i = 0; i<n; i++)
	{
		cin >> vet[i];
	}
	
	area_max(vet,n);
	
	return 0;
}