#include <iostream>
#include <locale>
using namespace std;
double menor(double vet[],int n)
{
	int i;
	double men;
	men=vet[0];
	for(i=0;i<n;i++)
	{
		if(vet[i]<men)
		{
			men=vet[i];
		}
	}
	return men;
}
double maior(double vet[],int n)
{
	int i;
	double mai;
	mai=vet[0];
	for(i=1;i<n;i++)
	{
		if(vet[i]>mai)
		{
			mai=vet[i];
		}
	}
	return mai;
}
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int N,i;
	
	cout<<"Quantos elementos? ";
	do
	{
		cin>>N;
		if(N<1 || N>10)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(N<1 || N>10);
	
	double ele[N];
	double ma,me;
	
	cout<<"Digite os elementos: ";
	for(i=0;i<N;i++)
	{
		cin>>ele[i];
	}
	
	cout<<endl;
	
	ma=maior(ele,N);
	cout<<"Maior elemento: "<<ma<<endl;
	
	me=menor(ele,N);
	cout<<"Menor elemento: "<<me<<endl;
	
	return 0;
}