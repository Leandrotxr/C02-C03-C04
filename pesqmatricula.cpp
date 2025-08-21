#include <iostream>
#include <locale>
#include <string>

using namespace std;

struct dados
{
	char nome[100];
	char curso[20];
	int mat;
};

dados busca_aluno(dados aluno[], int N, string procurar)
{
	for(int i=0;i<N;i++)
	{
		if(aluno[i].nome == procurar)
		{
			return aluno[i];
		}
	}
	dados aluno_nao_encontrado;
	aluno_nao_encontrado.mat = -1;
	return aluno_nao_encontrado;
}

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int N;
	
	cout<<"Digite o número de alunos: ";
	do
	{
		cin>>N;
		if(N<1 || N>10000)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(N<1 || N>10000);
	cout<<endl;
	
	dados aluno[N];
	
	for(int i=0;i<N;i++)
	{
		cin.ignore();
		cout<<"Nome: ";
		cin.getline(aluno[i].nome,100);
		cout<<"Curso: ";
		cin.getline(aluno[i].curso,20);
		cout<<"Matricula: ";
		cin>>aluno[i].mat;
		cout<<endl;
	}
	
	string procurar;
	
	cout<<"Qual aluno deseja procurar: ";
	cin>>procurar;
	
	dados aluno_procurado;
	
	aluno_procurado = busca_aluno(aluno,N,procurar);
	
	if(aluno_procurado.mat != -1)
	{
		cout<<"\nNome: "<<aluno_procurado.nome<<endl;
		cout<<"Curso: "<<aluno_procurado.curso<<endl;
		cout<<"Matricula: "<<aluno_procurado.mat<<endl;
	}
	else
	{
		cout<<"Aluno não encontrado."<<endl;
	}
	
	return 0;
}