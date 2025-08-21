#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int N,i;
	int gostou=0,odiou=0;
	
	do
	{
		cout<<"Digite o número de votos: ";
		cin>>N;
	}while(N<=0 || N>1000);

	int voto[N];
	
	for(i=0;i<N;i++)
	{
		do
		{
			cin>>voto[i];
			
		}while(voto[i]!=1 && voto[i]!=(-1));
	}
	
	for(i=0;i<N;i++)
	{
		if(voto[i]==1)
		{
			gostou++;
		}
		else if(voto[i]==-1)
		{
			odiou++;
		}
		
	}
	
	if(gostou>odiou)
	{
		cout<<"A maioria gostou"<<endl;
	}
	else if(gostou<odiou)
	{
		cout<<"A maioria não gostou"<<endl;
	}
	else
	{
		cout<<"Empate"<<endl;
	}
	return 0;
}