#include <iostream>
#include <locale>
#include <cstring>

using namespace std;
 
int main() 
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa

	int n;
	int i;
	struct ficha{
		char nome[100];
		char genero[20];
		char diretor[30];
	} dados[1000]; //ficha do filme
	
	cout<<"Quantos filmes deseja cadastrar (1 a 1000)? ";
	do{
		cin>>n; //número de filmes que serão cadastrados
		if(n<1 || n>1000){
			cout<<"Entrada inválida, digite novamente: ";
		}
	} while(n<1 || n>1000);
	
	cin.ignore();

	cout<<endl; //pular uma linha
	
	for (i=0; i<n; i++){
		cout<<"Nome do filme "<<i+1<<": "; //cadastro do nome do filme
	   	cin.getline(dados[i].nome,100);
		
		cout<<"Gênero do filme "<<i+1<<": "; //cadastro do gênero do filme
		cin.getline(dados[i].genero,20);
		
		cout<<"Diretor do filme "<<i+1<<": "; //cadastro do diretor do filme
		cin.getline(dados[i].diretor,30);
		
		cout<<endl; //pular uma linha
	}
	
	struct cliente{
		char nome[100];
		int idade;
		int id;
		char gefav[20];
		char dirfav[30];
	} dadoscli[1000];
	int m;
	
	cout<<"Quantos clientes deseja cadastrar (1 a 1000)? ";
	do{
		cin>>m; //número de clientes que serão cadastrados
		if(m<1 || m>1000)
		{
			cout<<"Entrada inválida, digite novamente: ";
		}
	} while(m<1 || m>1000);
	
	cout<<endl; //pular uma linha
	
	for (i=0; i<m; i++){
		cout<<"Nome do cliente "<<i+1<<" (ID: "<<i+1<<"): "; //cadastro do nome do cliente
		cin.ignore();
	   	cin.getline(dadoscli[i].nome,100);
	   	
	   	cout<<"Idade do cliente "<<i+1<<" (10 a 100): "; //cadastro da idade do cliente
	   	do{
	   		cin>>dadoscli[i].idade;  	
	   		if(dadoscli[i].idade<10 || dadoscli[i].idade>100)
			   {
			   		cout<<"Erro de entrada, digite novamente: ";
			   }
		} while(dadoscli[i].idade<10 || dadoscli[i].idade>100);
		
		cout<<"Gênero favorito do cliente "<<i+1<<": "; //cadastro do gênero favorito
		cin.ignore();
		cin.getline(dadoscli[i].gefav,20);
		
		cout<<"Diretor favorito do cliente "<<i+1<<": "; //cadastro do diretor favorito
		cin.getline(dadoscli[i].dirfav,30);
		
		dadoscli[i].id=i+1;
		
		cout<<endl; //pular uma linha
	}
	
	int clienteteste;
	
	cout<<"Para qual cliente deseja indicar filmes (digitar o id): ";

	do{ //para qual cliente o filme será indicado
		cin>>clienteteste;
		if(clienteteste>m || clienteteste<1){
			cout<<"Digite um id válido: ";
		}
	} while(clienteteste>m || clienteteste<1);
	
	int res1,res2,nindg=0,nindd=0; 
	int j;
	
	cout<<endl; //pular uma linha	
	
	for(i=0;i<m;i++){
		if(clienteteste == dadoscli[i].id){
			cout<<"Indicações por gênero: "<<endl; //verificação para indicar pelo gênero
			for(j=0;j<n;j++){
				res1=strcmp(dadoscli[i].gefav,dados[j].genero);
				if(res1==0){
					cout<<dados[j].nome<<endl;
					nindg++;
				}
			}
			if(nindg==0){
					cout<<"Não há indicações disponíveis"<<endl;
				}
            
            cout<<endl; //pular uma linha	
            	
			cout<<"Indicações por diretor: "<<endl; //verificação para indicar pelo diretor
			for(j=0;j<n;j++){
				res2=strcmp(dadoscli[i].dirfav,dados[j].diretor);
				if(res2==0){
					cout<<dados[j].nome<<endl;
					nindd++;
				}
			}
			if(nindd==0){
					cout<<"Não há indicações disponíveis"<<endl;
				}
		}
	}
	
	return 0;
}