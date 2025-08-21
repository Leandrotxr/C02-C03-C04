#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	struct ficha
	{
		int id;
		double im,fa;
	};
	
	ficha dados;
	
	double melhorga=0,ga;
	int melhorst;
	
	cout<<"Digite a identificação: ";
	cin>>dados.id;
	
	while(dados.id!=0)
	{
		cout<<"Digite o ÍM: ";
		do
		{
			cin>>dados.im;
			if(dados.im<0 || dados.im>1)
			{
				cout<<"Erro de entrada, digite novamente: ";
			}
		}while(dados.im<0 || dados.im>1);
		
		cout<<"Digite a FA: ";
		do
		{
			cin>>dados.fa;
			if(dados.fa<0 || dados.fa>1)
			{
				cout<<"Erro de entrada, digite novamente: ";
			}
		}while(dados.fa<0 || dados.fa>1);
		
		ga=(dados.im+dados.fa)/2.0;
		
		if(ga>melhorga)
		{
			melhorga=ga;
			melhorst=dados.id;
		}
		cout<<"Digite a identificação: ";
		cin>>dados.id;
	}
	
	cout<<"stormtrooper escolhido: "<<melhorst<<endl;
	cout<<"GA: "<<melhorga<<endl;
	
	return 0;
}