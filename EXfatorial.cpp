#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "Portuguese");	
	int N,f=1;
	cout<<"Digite um número: ";
	cin>>N;
	
	if(N<0)
	{
		cout<<"Cálculo impossível!"<<endl;
	}
	else if(N==0)
	{
		cout<<"1"<<endl;
	}
	else
	{
		for(int i=2;i<=N;i++)
		{
			f=f*i;
		}
		cout<<f<<endl;
	}
	
	return 0;
}
	