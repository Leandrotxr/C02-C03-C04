#include <iostream>
#include <string>

using namespace std;

struct aluno
{
	int matricula;
	string nome;
	int idade;
};

aluno cria_aluno()
{
	aluno a;
	cin>>a.matricula;
	cin>>a.nome;
	cin>>a.idade;
	return a;
}

int busca_seq_aluno_mat(aluno alunos[],int n, int mat)
{
	for(int i=0;i<n;i++)
	{
		if(mat == alunos[i].matricula)
		{
			return i;
		}
	}
	return -1; //caso não haja posição válida
}

int busca_seq_aluno_nome(aluno alunos[],int n, string nome)
{
	for(int i=0;i<n;i++)
	{
		if(nome == alunos[i].nome)
		{
			return i;
		}
	}
	return -1; //caso não haja posição válida
}

int busca_seq_aluno_idade(aluno alunos[],int n, int idade)
{
	int contador = 0;
	
	for(int i=0;i<n;i++)
	{
		if(idade >= alunos[i].idade)
		{
			contador++;
		}
	}
	return contador;
}

int main()
{
	int n;
	
	cout<<"Digite o número de alunos que deseja cadastrar: ";
	do
	{
		cin>>n;
	}while(n<=0);
	
	aluno alunos[n];
	
	for(int i=0;i<n;i++)
	{
		alunos[i] = cria_aluno();
	}

	int mat_busca;
	
	cin>>mat_busca;
	
	int resultado = busca_seq_aluno_mat(alunos, n, mat_busca);
	
	if(resultado=!-1)
	{
		cout<<alunos[resultado].nome <<endl;
		cout<<alunos[resultado].matricula <<endl;
		cout<<alunos[resultado].idade <<endl;
	}
	else
	{
		cout<<"Não foi identificado nenhum aluno";
	}
	
	string nome = "Jonas";
	
	resultado = busca_seq_aluno_nome(alunos, n, nome);
	
	if(resultado=!-1)
	{
		cout<<alunos[resultado].nome <<endl;
		cout<<alunos[resultado].matricula <<endl;
		cout<<alunos[resultado].idade <<endl;
	}
	else
	{
		cout<<"Não foi identificado nenhum aluno";
	}
	
	int idade_buscada = 15;
	
	resultado = busca_seq_aluno_idade(alunos, n, idade_buscada);
	
	cout<<"Existe(m) "<<resultado<<" aluno(s) com essa idade ou menor"<<endl;
	
	return 0;
}