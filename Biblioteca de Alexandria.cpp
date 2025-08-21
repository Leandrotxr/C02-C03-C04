#include <iostream>

using namespace std;

//struct de declaração de nó
struct treenode{
	int info;
	treenode *esq; //ponteiro para filho esquerdo
	treenode *dir; //ponteiro para filho direito
};

typedef treenode *treenodeptr;

//função para inserir elementos na arvore
void tInsere(treenodeptr &p, int x){
	if(p == NULL) //inserir na raíz
	{
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}
	else
	{
		if(x < p->info)//inserir na subarvore esquerda
		{
			tInsere(p->esq, x);
		}
		else
		{
			tInsere(p->dir, x);
		}
	}
}

//função para pesquisar elementos na arvore
treenodeptr tPesq(treenodeptr p, int x){
	if(p == NULL) //elemento não encontrado
	{
		return NULL;
	}
	else
	{
		if(x == p->info) //elemento encontrado na raíz
		{
			return p;
		}
		else
		{
			if(x < p->info) //procura na subarvore esquerda
			{
				return tPesq(p->esq, x);
			}
			else //procura na subarvore direta
			{
				return tPesq(p->dir, x);
			}
		}
	}
}

int main(){
	
	int N;
	
	treenodeptr arvore = NULL;
	
	do{
		cin >> N;
	}while(N < 1 || N > 100);
	
	char op;
	
	int y;
	
	treenodeptr aux;
	
	for(int i = 0; i<N;i++){
		cin.ignore();
		cin >> op;
		cin >> y;
		
		if(op == 'i'){
			tInsere(arvore, y);
		}
		if(op == 'b'){
			aux = tPesq(arvore, y);
			
			if(aux == NULL){
				cout << "\nNao";
			}
			else
			{
				cout << "\nSim";
			}
		}
	}
	
}