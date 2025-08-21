#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int N;
	int mai=0,men=0;
	double pmaior,pmenor;
	
	cout<<"Digite o número de pessoas: ";
	cin>>N;
	
	for(int i=1;i<=N;i++)
	{
		double x;
		cin>>x;
		
		if(x>=21)
		{
			mai++;
		}
		else
		{
			men++;
		}
	}
	pmaior=100*mai/N;
	pmenor=100*men/N;
	
	cout<<mai<<" "<<pmaior<<"%"<<"   "<<men<<" "<<pmenor<<"%"<<endl;
	
	
	return 0;
}