#include <iostream>
#include <string>
#define CURSOS 7
using namespace std;

string cursos[CURSOS] = {"GEC", "GES", "GEB", "GET", "GEE", "GEP", "GEA"};

typedef struct aluno{
	int matricula;
	string nome;
	int curso;
} Aluno;

void troca(Aluno &a, Aluno &b){
	Aluno temp = a;
	a = b;
	b = temp;
	return;
}

int encontra_menor_matricula(Aluno vetor[], int n, int inicio){
	int menor = inicio;
	for(int i=inicio+1;i<n;i++){
		if(vetor[i].matricula < vetor[menor].matricula)
			menor = i;
	}
	return menor;
}

void ordena1(Aluno vetor[], int n){
	for(int i=0;i<n;i++){
	   int menor = encontra_menor_matricula(vetor, n, i);
	   troca(vetor[i], vetor[menor]);
	}
	
}
//ordena1 não será usado pois sua complexidade é n²;

int divide(Aluno vetor[], int inicio, int fim){
	Aluno metade = vetor[(inicio+fim)/2];
	int i=inicio, j=fim;
	while(i <= j){
		while(vetor[i].matricula < metade.matricula && i<fim)
			i++;
		while(vetor[j].matricula > metade.matricula && j>inicio)
			j--;
		troca(vetor[i], vetor[j]);
		i++;
		j--;
	}
	return i;
}

Aluno busca_aluno(Aluno vetor[], int n, int matricula_buscada){
	int inicio = 0, fim = n-1;
	int metade;
	
	while(inicio <= fim){
		int metade = (inicio+fim)/2;
		if(vetor[metade].matricula == matricula_buscada){
			return vetor[metade];
		} else if(vetor[metade].matricula > matricula_buscada){
			fim = metade -1;			
		} else {
			inicio = metade + 1;
		}
	}
	aluno nao_encontrado;
	nao_encontrado.matricula = -1;
	return nao_encontrado;
}

void alunos_curso(Aluno vetor[], int n, int curso){
	cout<<"Alunos do curso "<<cursos[curso]<<":"<<endl;
	for(int i=0;i<n;i++){
		if(vetor[i].curso == curso){
			cout<<vetor[i].nome<<endl;
		}
	}
}

void ordena2(Aluno vetor[], int inicio, int fim){
	if(inicio >= fim)
		return;
	int metade = divide(vetor,inicio,fim);
	ordena2(vetor,inicio,metade-1);
	ordena2(vetor,metade+1,fim);	
}
//ordena2 será usado pois sua complexidade é n*log(n)

int main(){
	
	Aluno alunos[1000];
	
	int n;
	cout<<"Informe a quantidade de alunos: ";
	cin>>n;
	
	cout<<"\nCursos:";
	for(int j=0;j<CURSOS;j++){
		cout<<" |"<<j<<": "<<cursos[j]<<"| ";
	}
	
	cout<<endl;
	
	for(int i=0;i<n;i++){
		cout<<endl;
		cout<<"Matricula: ";
		cin>>alunos[i].matricula;
		cout<<"Nome: ";
		cin.ignore();
		getline(cin, alunos[i].nome);
		cout<<"Curso(0 a 6): ";
		cin>>alunos[i].curso;
	}
	
	cout<<"\nLista em ordem de matricula:"<<endl;
	
	//ordena1(alunos,n); não é usada
	
	ordena2(alunos,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<alunos[i].nome<<endl;
	}
	
	int op;
	cout<<"\nInforme o curso que deseja visualizar: ";
	cin>>op;
	cout<<endl;
	
	alunos_curso(alunos,n,op);
	
	int op2;
	cout<<"\nInforme a matricula do aluno que deseja visualizar: ";
	cin>>op2;
	cout<<endl;
	
	Aluno aluno = busca_aluno(alunos,n,op2);
	
	if(aluno.matricula == -1)
	{
		cout<<"Aluno nao encontrado"<<endl;
	}
	else
	{
		cout<<"Nome: "<<aluno.nome<<endl;
		cout<<"Curso: "<<cursos[aluno.curso]<<endl;
	}
	
	return 0;
}