#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int N,i;
	
	do
	{
		cout<<"Digite o número de casos: ";
		cin>>N;
	}while(N<=0 || N>100);
	
	int X[N],Y[N];
	char opc[N];
	
	cout<<"Digite os primeiros números: "<<endl;
	for(i=0;i<N;i++)
	{
		cin>>X[i];
	}
	cout<<"Digite os segundos números: "<<endl;
	for(i=0;i<N;i++)
	{
		cin>>Y[i];
	}
	cout<<"Digite as operações: "<<endl;
	for(i=0;i<N;i++)
	{
		do
		{
			cin>>opc[i];
		}while(opc[i]!='+' && opc[i]!='-' && opc[i]!='*' && opc[i]!='/');
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
				if(Y[i]==0)
				{
					cout<<"Cálculo impossível"<<endl; 
				}
				else
				{
					resultado=(X[i]*1.0/Y[i]);
					cout<<fixed<<setprecision(2);
					cout<<X[i]<<" / "<<Y[i]<<" = "<<resultado<<endl;
					break;
				}
			}
		}
	}
	
	
	return 0;
}