#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int numeros[100];
	int n=0,num;
	
	
	
	while(true)
	{
		cin>>num;
		if(num==0)
		{
			break;
		}
		numeros[n]=num;
		n++;
	}
	
	int x,posicao=-1;
	cin>>x;
	
	int i;
	for(i=0;i<n;i++)
	{
		if(numeros[i]==x)
		{
			posicao=i;
			cout<<"Elemento "<<x<<" encontrado na posição "<<posicao+1<<endl;
		}
	}
	
	if(posicao==-1)
	{
		cout<<"Elemento "<<x<<" não foi encontrado"<<endl;
	}
	return 0;
}