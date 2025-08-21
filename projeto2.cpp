#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cstring>

using namespace std;
 
int main() 
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa
	
	int n;
	int i;
	struct ficha
	{
		char nome[100];
		char genero[20];
		char diretor[30];
	} dados[1000]; //ficha do filme
	
	cout<<"Quantos filmes deseja cadastrar(1 a 1000)? ";
	do
	{
		cin>>n; //número de filmes que serão cadastrados
		if(n<1 || n>1000)
		{
			cout<<"Entrada inválida, digite novamente: ";
		}
	}while(n<1 || n>1000);
	
	cin.ignore();

	cout<<endl; //pular uma linha
	
	for (i=0; i<n; i++) 
	{
		cout<<"Nome do filme "<<i+1<<": "; //cadastro do nome do filme
	   	cin.getline(dados[i].nome,100);
		
		cout<<"Gênero do filme "<<i+1<<": ";        //cadastro do gênero do filme
		cin.getline(dados[i].genero,20);
		
		cout<<"Diretor do filme "<<i+1<<": ";       //cadastro do diretor do filme
		cin.getline(dados[i].diretor,30);
		
		cout<<endl; //pular uma linha
	}
	
	struct cliente
	{
		char nome[100];
		int idade;
		int id;
		char gefav[20];
		char dirfav[30];
	}dadoscli[1000];
	int m;
	
	cout<<"Quantos clientes deseja cadastrar(1 a 1000)? ";
	do
	{
		cin>>m; //número de clientes que serão cadastrados
		if(m<1 || m>1000)
		{
			cout<<"Entrada inválida, digite novamente: ";
		}
	}while(m<1 || m>1000);
	
	cout<<endl; //pular uma linha
	
	for (i=0; i<m; i++) 
	{
		cout<<"Nome do cliente "<<i+1<<": "; //cadastro do nome do cliente
		cin.ignore();
	   	cin.getline(dadoscli[i].nome,100);
	   	
	   	cout<<"Idade do cliente "<<i+1<<"(10 a 100): "; //cadastro da idade do cliente
	   	do
	   	{
	   		cin>>dadoscli[i].idade;  	
	   		if(dadoscli[i].idade<10 || dadoscli[i].idade>100)
			   {
			   		cout<<"Erro de entrada, digite novamente: ";
			   }
		}while(dadoscli[i].idade<10 || dadoscli[i].idade>100);
		
		cout<<"Gênero favorito do cliente "<<i+1<<": ";        //cadastro do gênero favorito
		cin.ignore();
		cin.getline(dadoscli[i].gefav,20);
		
		cout<<"Diretor favorito do cliente "<<i+1<<": ";       //cadastro do diretor favorito
		cin.getline(dadoscli[i].dirfav,30);
		
		dadoscli[i].id=i+1;
		
		cout<<endl; //pular uma linha
	}
	
	int clienteteste;
	
	cout<<"Para qual cliente deseja indicar filmes(digitar o id): ";
	do
	{
		cin>>clienteteste;
		if(clienteteste>m)
		{
			cout<<"Digite um id válido: ";
		}
	}while(clienteteste>m);
	
	int res1,res2;
	int j;
	
	for(i=0;i<m;i++)
	{
		if(clienteteste == dadoscli[i].id)
		{
			cout<<"\nIndicações por gênero: "<<endl;
			for(j=0;j<n;j++)
			{
				res1=strcmp(dadoscli[i].gefav,dados[j].genero);
				if(res1==0)
				{
					cout<<dados[j].nome<<endl;
				}
			}
			cout<<"\nIndicações por diretor: "<<endl;
			for(j=0;j<n;j++)
			{
				res2=strcmp(dadoscli[i].dirfav,dados[j].diretor);
				if(res2==0)
				{
					cout<<dados[j].nome<<endl;
				}
			}
		}
	}
	
	
	/*
	char clienteteste[100];
	
	cout<<"Para qual cliente deseja indicar filmes? ";
	cin.getline(clienteteste,100);
	
	int res=1,res1=1,res2=1;
	int j;
	
	for(i=0;i<m;i++)
	{
		res=strcmp(clienteteste,dadoscli[i].nome);
		if(res==0)
		{
			cout<<"\nIndicações por gênero: "<<endl;
			for(j=0;j<n;j++)
			{
				res1=strcmp(dadoscli[i].gefav,dados[j].genero);
				if(res1==0)
				{
					cout<<dados[j].nome<<endl;
				}
			}
			cout<<"\nIndicações por diretor: "<<endl;
			for(j=0;j<n;j++)
			{
				res2=strcmp(dadoscli[i].dirfav,dados[j].diretor);
				if(res2==0)
				{
					cout<<dados[j].nome<<endl;
				}
			}
		}
	}
	*/
	
	
	
	
	
	return 0;
}