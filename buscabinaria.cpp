#include<iostream> // biblioteca para podermos usar cin e cout e fazer entrada e saída de dados.
#include<string> 
using namespace std;

/* Relembrando o uso de structs, abaixo eu criou uma struct para definir um tipo abstrato de dados para um "aluno", ou seja, um tipo de dados que não é primitivo do C++ (como o int e o char).
Para criar um "aluno" eu preciso de uma "matricula" que é um número inteiro (int) e um "nome" que é uma cadeia de caracteres (char []).
Para facilitar eu usei o tipo abstrato de dados "string" que ajuda nas operações com matrizes.
Outras informações poderiam ser acrescentadas nessa struct para representar ainda melhor um "aluno".
*/ 
struct aluno {
	int matricula;
	string nome;
	int idade; // Incluindo a idade no modelo.
};

/* Relembrando o conceito de função, eu criei uma função que:
 - cria um variável do tipo "aluno", 
 - pede a matrícula e o nome do aluno para o usuário, 
 - atribui para os campos "matricula" e "nome" da variável do tipo "aluno" e 
 - retorna esse valor.
Perceba que essa função não recebe nenum parâmetro, ou seja, nenhuma variável é definida entre os parenteses na sua criação.
Perceba também que ela tem um retorno do tipo "aluno", por isso esse tipo é definido antes do nome da função.
Por fim, o nome da função é definido como "cria_aluno". */
aluno cria_aluno(){
	aluno a;
	cout<<"Informe a matricula: ";
	cin>>a.matricula;
	cout<<"Informe o nome: ";
	cin>>a.nome;
	cout<<"Informe a idade: ";
	cin>>a.idade; // Lendo a idade na entrada de dados.
	cout<<endl;
	return a;
}

/*Essa função recebe como parâmetros o vetor de alunos, o seu tamanho "n" e a matrícula a ser buscada. 
Quando encontrar a matrícula correspondente, a função retorna o aluno em questão. 
Caso não encontre, a função retorna um aluno com matrícula -1. */
aluno busca_bin_aluno_matricula(aluno alunos[], int n, int mat){
	int inicio = 0, meio, fim = n - 1;
	
	while(inicio <= fim){
		meio =(inicio + fim)/2;
		 if(alunos[meio].matricula == mat){
			 return alunos[meio];
		 }
		 else if(alunos[meio].matricula < mat){
			 inicio = meio + 1;
		 }
		 else {
			 fim = meio - 1;
		 }
	}
	aluno nao_encontrado;
	nao_encontrado.matricula = -1;
	return nao_encontrado; 
}

/*Essa função recebe como parâmetros o vetor de alunos, o seu tamanho "n" e o nome a ser buscado. 
Quando encontrar o nome correspondente, a função retorna o aluno em questão. 
Caso não encontre, a função retorna um aluno com matrícula -1. */
aluno busca_seq_aluno_nome(aluno alunos[], int n, string nome){
	for(int i=0;i<n;i++){
		if(alunos[i].nome == nome){
			return alunos[i]; // Como o tipo do retorno da função é "aluno", retorno o elemento na posição "i".
			// return i; // Poderia mudar o tipo do retorno da função para "int" e retornar a posição do elemento e, na função principal, acessar o elemento na posição retornada.
		}
	}
	aluno nao_encontrado;
	nao_encontrado.matricula = -1;
	return nao_encontrado; // Caso não encontr o aluno, retornamos um aluno com matrícula -1 para indicar isso.	
}

/*Essa função recebe como parâmetros o vetor de alunos, o seu tamanho "n" e a idade a ser buscada. 
Um contador é criado e inicializado com o valor 0. Quando encontrar uma idade menor ou igaul a idade buscada, a função soma mais um no contador. 
No fim a função retorna o contador.*/
int busca_seq_aluno_idade(aluno alunos[], int n, int idade){
	int contador = 0;
	for(int i=0;i<n;i++){
		if(alunos[i].idade <= idade){
			contador++;
		}
	}
	return contador;
}

/* Diferente do que tínhamos feito em aula, a o procedimento main agora conta com um vetor do tipo "aluno", diferente dos dois vetores de matrículas e nomes.
Além disso, dentro da repetição que entra com as informações dos alunos, a função "cria_aluno" é chamada para auiliar nessa tarefa de entrada de dados.
*/
int main(){
	int n;
	cout<<"Bem-vindo(a) ao sistema de cadastro academico!"<<endl;
	cout<<"Informe a quantidade de alunos(as):";
	cin>>n;
	aluno alunos[n];
	
	for(int i=0;i<n;i++){
		alunos[i] = cria_aluno();
	}
	
	cout<<"---------------------------------"<<endl;
	
	aluno aluno_buscado = busca_bin_aluno_matricula(alunos,n,1);
	
	if(aluno_buscado.matricula != -1){ // Verificando se o aluno foi encontrado.
		// Imprimindo as informações do aluno na saída.
		cout<<"Nome: "<<aluno_buscado.nome<<endl;
		cout<<"Matricula: "<<aluno_buscado.matricula<<endl;
		cout<<"Idade: "<<aluno_buscado.idade<<endl;
	} else {
		cout<<"Aluno nao encontrado!"<<endl;
	}
	
	cout<<"---------------------------------"<<endl;
	
	aluno_buscado = busca_seq_aluno_nome(alunos,n,"Jonas");
	
	if(aluno_buscado.matricula != -1){ // Verificando se o aluno foi encontrado.
		// Imprimindo as informações do aluno na saída.
		cout<<"Nome: "<<aluno_buscado.nome<<endl;
		cout<<"Matricula: "<<aluno_buscado.matricula<<endl;
		cout<<"Idade: "<<aluno_buscado.idade<<endl;
	} else {
		cout<<"Aluno nao encontrado!"<<endl;
	}
	
	cout<<"---------------------------------"<<endl;
	
	int alunos_menores = busca_seq_aluno_idade(alunos,n,17);
	
	cout << "Existe(m) " << alunos_menores << " aluno(a)(s) menor(es) de idade."<<endl;
	
	return 0;
}











/*RESPOSTAS
1) Sim.

2) Não, pois não há como ordenar strings. assim, a solução seria fazer uma busca sequencial.

3) Neste código não é possível, pois as idades não estão ordenadas.*/
