#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "Portuguese");	
	int N,t1=0,t2=1,proxtermo=0;
	
	cout<<"Digite o valor de N: ";
	cin>>N;
	
	if(N<=0)
	{
		cout<<"Erro de entrada"<<endl;
	}
	else
	{
		for(int i=1;i<=N;i++)
		{
			cout<<t1<<" ";
			
			proxtermo=t1+t2;
			
			t1=t2;
			t2=proxtermo;
		}
	}
	
	
	
	
	return 0;
}
	