#include<iostream>
#include <locale>

using namespace std;

struct Gladiadores
{
	string nome;
	int forca;
	int hab;
	int ida;
	int vida;
	int id;
};

void cadastrar_gladiador(Gladiadores gladiador[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Digite o nome do gladiador "<<i+1<<": ";
		cin>>gladiador[i].nome;
		cout<<"Digite a força do gladiador "<<i+1<<" (0 a 10): ";
		
		do
		{
			cin>>gladiador[i].forca;
			if(gladiador[i].forca<0 || gladiador[i].forca>10)
			{
				cout<<"Erro de entrada, digite novamente: ";
			}
		}while(gladiador[i].forca<0 || gladiador[i].forca>10);
		
		cout<<"Digite a habilidade do gladiador "<<i+1<<"(0 a 10): ";
		
		do
		{
			cin>>gladiador[i].hab;	
			if(gladiador[i].hab < 0 || gladiador[i].hab > 10)
			{
				cout<<"Erro de entrada, digite novamente: ";
			}
		}while(gladiador[i].hab < 0 || gladiador[i].hab > 10);
		cout<<"Digite a idade do gladiador "<<i+1<<": ";
		
		do
		{
			cin>>gladiador[i].ida;
			if(gladiador[i].ida <= 0)
			{
				cout<<"Erro de entrada, digite novamente: ";
			}	
		}while(gladiador[i].ida <= 0);
		
		gladiador[i].id = i+1;
		cin.ignore();
		cout<<endl;
	}
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	Gladiadores gladiador[5];
	
	cout<<"Cadastre os 5 gladiadores\n\n"<<endl;
	
	cadastrar_gladiador(gladiador,5);
	
	for(int i=0;i<5;i++)
	{
		cout<<gladiador[i].id<<". "<<gladiador[i].nome<<endl;
	}
	
	int gla1, gla2;
	
	cout<<"Escolha 2 gladiadores para batalharem(id): ";
	do
	{
		cin>>gla1>>gla2;
	}while(gla1<1 || gla1>5 && gla2<1 || gla2>5);
	
	
	
	cout<<"Aaaaaaaaaaaa\n\n\n\n";
	for(int i=0;i<5;i++)
	{
		cout<<gladiador[i].nome;
		cout<<gladiador[i].forca;
		cout<<gladiador[i].hab;
		cout<<gladiador[i].ida;
		cout<<endl;
	}
	
	
	return 0;
}