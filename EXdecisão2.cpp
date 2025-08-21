#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double pg,pe;
	int lg,le;
	
	cout<<"Digite os preços da gasolina e do etanol: ";
	cin>>pg>>pe;
	cout<<"Digite a quantidade de litros de gasolina e de etanol vendidos: ";
	cin>>lg>>le;
	
	if(lg>2*le)
	{
		pg=pg*1.2;
		pe=pe*0.9;
	}
	else if(lg==2*le)
	{
		pg=pg*1.1;
		pe=pe*0.9;
	}
	else 
	{
		pg=pg*0.9;
		pe=pe*1.2;
	}
	
	cout<<fixed<<setprecision(2);
	cout<<"R$"<<pg<<" R$"<<pe<<endl;
	
	
	return 0;
}