#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int N,C[1000],i;
	int ma=0,me;
	
	do
	{
		cout<<"Digite o número de usuários: ";
		cin>>N;
	}while(N<=0 || N>1000);
	
	for(i=0;i<N;i++)
	{
		cin>>C[i];
	}
	
	me=C[0];
	
	for(i=0;i<N;i++)
	{
		if(C[i]>ma)
		{
			ma=C[i];
		}
		
		if(C[i]<me)
		{
			me=C[i];
		}
	}
	
	cout<<"Menor numero de contatos: "<<me<<endl;
	cout<<"Maior numero de contatos: "<<ma<<endl;
	return 0;
}