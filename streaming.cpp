#include <iostream>

using namespace std;

//struct de declaração de nó
struct treenode{
	int info;
	treenode *esq; //ponteiro para filho esquerdo
	treenode *dir; //ponteiro para filho direito
};

struct dados{
	string nome;
	string gen;
	int dur;
	int cla;
	int ano;
};

typedef treenode *treenodeptr;

//função para inserir elementos na arvore
void tInsere(treenodeptr &p){
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
	
	int N = -1;
	
	treenodeptr arvore = NULL;
	
	bool ligado = true;
	
	while(ligado){
		cout << "Digite uma opcao: " << endl;
		cout << "1 - Inserir filme " << endl;
		cout << "2 - Pesquisar filme " << endl;
		cout << "3 - Sair " << endl;
		
		do{
			cin >> N;
		}while(N != 0 && N != 1 && N!=2);
		
		int aux;
		if(N == 0){
			N = 3;
		}
		
		switch (N) {
            case 1:
                tInsere(arvore);
                break;
            case 2:
                
                break;
            case 3:
                ligado = false;
                break;
        }
	}
	
	
}