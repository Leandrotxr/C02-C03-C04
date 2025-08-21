#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int N;
	do
	{
		cin>>N;
	}while(N>=100 || N<1);
	
	int X[N],Y[N];
	int i;
	char opc[N];
	
	for(i=0;i<N;i++)
	{
		cin>>X[i];
	}
	for(i=0;i<N;i++)
	{
		cin>>Y[i];
	}
	for(i=0;i<N;i++)
	{
		do
		{
			cin>>opc[i];
		}while(opc[i]!='+' && opc[i]!='-' && opc[i]!='/' && opc[i]!='*');
	}
	
	double resultado;
	for(i=0;i<N;i++)
	{
		switch(opc[i])
		{
			case '+':
			{
				cout<<X[i]<<" + "<<Y[i]<<" = "<<X[i]+Y[i]<<endl;
				break;
			}
			case '-':
			{
				cout<<X[i]<<" - "<<Y[i]<<" = "<<X[i]-Y[i]<<endl;
				break;
			}
			case '*':
			{
				cout<<X[i]<<" * "<<Y[i]<<" = "<<X[i]*Y[i]<<endl;
				break;
			}
			case '/':
			{
				resultado=(X[i]*1.0/Y[i]);
				cout<<fixed<<setprecision(2);
				cout<<X[i]<<" / "<<Y[i]<<" = "<<resultado<<endl;
				break;
			}
		}
	}
	return 0;
}