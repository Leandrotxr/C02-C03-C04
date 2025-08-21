#include <iostream>
#include <locale>
#include <cstring>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	struct ficha
	{
		char modelo[300][50];
		char placa[300][7];
		int ano[300];
	};
	
	ficha dados;
	int i=0,cont=0;
	char opc[300];
	
	do
	{
		cout<<"Modelo: ";
		cin.getline(dados.modelo[i],50);
		cout<<"Placa: ";
		cin.getline(dados.placa[i],7);
		cout<<"Ano: ";
		cin>>dados.ano[i];
		cin.ignore();
		cout<<endl;
		do
		{
			cout<<"Tecle 's' para novo cadastro ou 'n' para finalizar cadastro: ";
			cin>>opc[i];
		}while(opc[i]!='s' && opc[i]!='S' && opc[i]!='n' && opc[i]!='N');
		i++;
		cont++;
		cin.ignore();
	}while(opc[i-1]!='n' && opc[1-1]!='N');
	
	int ver;
	cout<<endl;
	
	cout<<"Deseja listar carros fabricados antes de que ano? ";
	cin>>ver;
	
	cout<<endl;
	cout<<"Equipes com veiculos fabricanos antes do ano "<<ver<<endl;
	cout<<"Modelo    Placa"<<endl;
	for(i=0;i<cont;i++)
	{
		if(dados.ano[i]<ver)
		{
			cout<<dados.modelo[i]<<"        "<<dados.placa[i]<<endl;
		}
	}
	
	return 0;
}