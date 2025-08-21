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
	
	cin >> N;
	
	int y,x;
	
	for(int i = 0; i<N;i++){
		cout << "Digite o elemento que deseja cadastrar: ";
		cin >> y;
		
		tInsere(arvore, y);
	}
	
	cout << "\nDigite o elemento que deseja buscar: ";
	cin >> x;
	
	treenodeptr aux;
	
	aux = tPesq(arvore, x);
	
	if(aux == NULL){
		cout << "\nElemento nao encontrado. ";
	}
	else
	{
		cout << "\nElemento " << x << " encontrado.";
	}
	
}