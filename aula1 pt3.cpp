#include <iostream>
#include <string>
#include <locale>

using namespace std;

struct cadastro{
	int matricula;
	string nome;
};

cadastro cria_aluno(){
	cadastro a;
	cout<<"Digite a matricula: ";
	cin>>a.matricula;
	cout<<"Digite o nome: ";
	cin>>a.nome;
	return a;
}

cadastro funmat(int mat){
	
	return a;
}

int main()
{
	setlocale (LC_ALL,"portuguese");
	
	int n,i=0;
	int testemat;
	
	cout<<"Quantos alunos serão cadastrados? ";
	do
	{
		cin>>n;
		if(n<=0)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(n<=0);
	
	cout<<endl;
	
	cadastro alunos[n]; 
	
	for(i;i<n;i++)
	{
		alunos[i] = cria_aluno();
	}
	
	cout<<"Qual matricula deseja obter as informações? ";
	cin>>testemat;
	
	funmat(testemat);
	
	
	
	return 0;
}