#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "Portuguese");	
	int A,N,P;
	int f=1;
	
	cout<<"Digite o número total de elementos e o número que deseja rearranjar: ";
	cin>>N>>P;
	
	if(N<=0 || P<=0 || P>N)
	{
		cout<<"Erro de entrada"<<endl;
	}
	else
	{
		int fn=1;
		for(int i=2;i<=N;i++)
		{
			fn=fn*i;
		}
		int np;
		np=N-P;
		int fnp=1;
		for(int j=2;j<=np;j++)
		{
			fnp=fnp*j;
		}
	
		A=fn/fnp;
		cout<<A<<endl;
	}
	return 0;
}