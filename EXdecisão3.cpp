#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opc,dias;
	double custo;
	
	cout<<"Digite o tipo de automóvel(1, 2 ou 3): ";
	cin>>opc;
	cout<<"Digite o número de dias de locação: ";
	cin>>dias;
	
	cout<<fixed<<setprecision(2);
	
	switch(opc)
	{
		case 1:
		{
			custo=dias*50;
			if(dias<7)
			{
				cout<<custo<<endl;
			}
			else if(dias>=7 && dias<15)
			{
				custo=custo*0.95;
				cout<<custo<<endl;
			}
			else
			{
				custo=custo*0.9;
				cout<<custo<<endl;
			}
			break;
		}
		case 2:
		{
			custo=dias*100;
			if(dias<7)
			{
				cout<<custo<<endl;
			}
			else if(dias>=7 && dias<15)
			{
				custo=custo*0.95;
				cout<<custo<<endl;
			}
			else
			{
				custo=custo*0.9;
				cout<<custo<<endl;
			}
			break;
		}
		case 3:
		{
			custo=dias*150;
			if(dias<7)
			{
				cout<<custo<<endl;
			}
			else if(dias>=7 && dias<15)
			{
				custo=custo*0.95;
				cout<<custo<<endl;
			}
			else
			{
				custo=custo*0.9;
				cout<<custo<<endl;
			}
			break;
		}
	}
	
	
	
	
	
	
	
	return 0;
}