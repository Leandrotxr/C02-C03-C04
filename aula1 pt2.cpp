#include <iostream>
#include <string>

using namespace std;

struct cadastro{
	int matricula;
	string nome;
};

cadastro cria_aluno(){
	cadastro a;
	cin>>a.matricula;
	cin>>a.nome;
	return a;
}

int main()
{
	int n;
	
	cout<<"Quantos alunos serão cadastrados? ";
	do
	{
		cin>>n;
		if(n<=0)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(n<=0);
	
	cadastro alunos[n]; 
	
	/*for(int i=0;i<n;i++)
	{
		cout<<"Digite a matricula do aluno "<<i+=1<<": ";
		cin>>alunos[i].matricula;
		
		cout<<"Digite o nome do aluno "<<i+=1<<": ";
		cin>>alunos[i].nome;
	}*/
	
	//USAR UM OU OUTRO FOR
	
	for(int i;i<n;i++)
	{
		alunos[i] = cria_aluno();
	}
	
	
	
	
	
	return 0;
}
