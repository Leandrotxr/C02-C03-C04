#include <iostream>
#include <locale> //portugues

using namespace std;
int main()
{
	//portugues
	setlocale(LC_ALL, "Portuguese");
	
	//variaveis
	char apelido[21],opc;
	int idade,parti;
	int c1=0; // numero em c
	int j1=0; //numero em j
	int p1=0; //número em p
	double inscc, inscj, inscp; //porcentagem da linguagem
	int soma=0; //soma das idades
	int media; //media das idades
	
	//primeira parte: número de cadastros (entre 1 e 400)
	do
	{
		cout<<"Quantos participantes deseja cadastrar(1 a 400)? ";
		cin>>parti;
	}while(parti<1 || parti>400);
	
	for(int i=1;i<=parti;i++)
	{
		//segunda parte: nome 
    	cout<<"Nome: ";
    	cin>>apelido;
    
    	//terceira parte: idade (entre 16 e 30)
    	do
		{
			cout<<"Idade(16 a 30): ";
			cin>>idade;
		}while(idade<16 || idade>30);
		
		soma=soma+idade;
		media=soma/parti;
	
		//quarta parte: linguagem
		do
		{
			cout<<"Linguagem - C, J ou P: ";
			cin>>opc;	
		}while(opc!='c' && opc!='j' && opc!='p');
		
		cout<<endl;
	
		//quinta parte: número em cada linguagem
		if(opc=='c')
		{
			c1++;
		}
		else if(opc=='j')
		{
			j1++;
		}
		else 
		{
			p1++;
		}
	}
	//sexta parte: porcentagem em cada linguagem 
	inscc=(c1*100.0)/parti;
	inscj=(j1*100.0)/parti;
	inscp=(p1*100.0)/parti;
	
	cout<<"Inscritos em C/C++: "<<inscc<<" %"<<endl;
	cout<<"Inscritos em Java: "<<inscj<<" %"<<endl;
	cout<<"Inscritos em Python: "<<inscp<<" %"<<endl;
	
	//setima parte: media idade
	cout<<endl;
	cout<<"Média de idade dos participantes: "<<media<<endl;
	
	
	
	return 0;
}	