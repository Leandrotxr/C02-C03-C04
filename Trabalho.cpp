#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <locale>
#include <cmath>

using namespace std;

vector <set<int> > adj;

// Struct dos dados pokémons
struct pokemonInfo {
    int id;
    string nome;
    string tipo;
    int vida;
    int poder;
};

// Struct da árvore
struct treenode {
    pokemonInfo info;
    treenode *esq;
    treenode *dir;
};

// Struct do mapa
struct cidadeInfo {
	string nome;
    int id;
    double x;
    double y;
    int pokecenter;
};

//struct do nó
struct no{
	int v;
	double peso;
};

list <cidadeInfo> cidades;

typedef treenode* treenodeptr;

// Função para inserir pokémon na árvore
void tInsere(treenodeptr &p, pokemonInfo aux) {
    if (p == NULL) {
        p = new treenode;
        p->info = aux;
        p->esq = NULL;
        p->dir = NULL;
    } else {
        if (aux.id < p->info.id)
            tInsere(p->esq, aux);
        else
            tInsere(p->dir, aux);
    }
}

// Função para cadastrar pokémon na árvore
void cadastrarPokemon(treenodeptr &arvore) {
    pokemonInfo aux;
    cout << "Digite quantos pokémons deseja cadastrar: " << endl;
    int quant;
    cin >> quant;

    while (quant--) {
        cout << "Digite o id do pokémon a ser cadastrado: " << endl;
        cin >> aux.id;

        if (aux.id == -1)
            break;
        
        cout << "Digite o nome do pokémon: " << endl;
        cin >> aux.nome;
        cout << "Digite o tipo do pokémon: " << endl;
        cin >> aux.tipo;
        cout << "Digite quanto de vida este pokémon possui: " << endl;
        cin >> aux.vida;
        cout << "Digite quanto de poder este pokémon possui: " << endl;
        cin >> aux.poder;

        tInsere(arvore, aux);
    }
}

// Função para imprimir as informações de todos os pokémons da árvore em pré-ordem
void preOrdem(treenodeptr arvore) {
    if (arvore != NULL) {
        cout << "ID: " << arvore->info.id << endl;
        cout << "Nome: " << arvore->info.nome << endl;
        cout << "Tipo: " << arvore->info.tipo << endl;
        cout << "Vida: " << arvore->info.vida << endl;
        cout << "Poder: " << arvore->info.poder << endl;
        cout << "--------------------" << endl;
        preOrdem(arvore->esq);
        preOrdem(arvore->dir);
    }
}

// Menu pokédex
void pokedexMenu(treenodeptr &arvore) {
	cout << endl;
	
    bool ligado = true;

    while (ligado) {
        cout << "Digite uma opção válida:" << endl;
        cout << "1 - Cadastrar pokémon" << endl;
        cout << "2 - Exibir informações sobre os pokémons cadastrados" << endl;
        cout << "3 - Sair" << endl;

        int aux = 0;
        cin >> aux;

        switch (aux) {
            case 1:
                cadastrarPokemon(arvore);
                break;
            case 2:
                preOrdem(arvore);
                break;
            case 3:
                ligado = false;
                break;
        }
    }
}

// Função para cadastrar cidade
void cadastrarCidade() {
    cidadeInfo aux;
    
    cout << "Digite quantas cidades deseja cadastrar: ";
    int quant;
    
    do{
    	cin >> quant;
    	if(quant < 1)
    		cout << "Erro de entrada, digite novamente: ";
	}while(quant < 1);
    	
    	
    while(quant > 0){
		cout << "\nDigite o id da cidade cadastrada: ";
		
		do{
			cin >> aux.id;
			if(aux.id < 0)
				cout << "Erro de entrada, digite novamente: ";
		}while(aux.id < 0);
		
		if(aux.id == -1)
			break;
		
		cout << "Digite o nome da cidade: ";
		cin >> aux.nome;
		
		cout << "Digite a posição X e Y da cidade: ";
		cin >> aux.x >> aux.y;
		
		cout << "Digite 1 se a cidade tiver centro pokemon e 0 se não tiver: ";
		do{
			cin >> aux.pokecenter;
			if(aux.pokecenter != 1 && aux.pokecenter != 0)
				cout << "Erro de entrada, digite novamente: ";
		}while(aux.pokecenter != 1 && aux.pokecenter != 0);
		
		cidades.push_back(aux);
		quant--;
	}
}

//Função para mostrar as cidades
void mostrarCidade(){
	cout << endl;
	
	cidadeInfo aux;
	for(int i = 0; i < cidades.size(); i++)
	{
		cout << cidades.front().nome;
		cout << endl;
		
		aux = cidades.front();
		
		cidades.push_back(aux);
		cidades.pop_front();
	}
}

//Função para criar aresta do grafo
void cria_aresta(list <no> adj[],int id1,int id2){
	
	cidadeInfo auxiliar, aux1, aux2;
	
	for(int i = 0; i < cidades.size(); i++){
		
		auxiliar = cidades.front();
			
			if(id1 == auxiliar.id)
				aux1 = auxiliar;
			if(id2 == auxiliar.id)
				aux2 = auxiliar;
			
			cidades.push_back(auxiliar);
			cidades.pop_front();
	}
	
	int numero;
	
	double peso;
	numero = (aux2.x - aux1.x)*(aux2.x - aux1.x) + (aux2.y - aux1.y)*(aux2.y - aux1.y);
	
	peso = sqrt(numero);
	
	no novo;
	novo.v = id2;
	novo.peso = peso;
    
    adj[id1].push_back(novo);
    
    novo.v = id1;
    adj[id2].push_back(novo);
}

//Função para criar o mapa
void CriarMapa(list <no> adj[], int num){
	
	cout << endl;
	
	int id1, id2,idteste1,idteste2;
	
	cout << "Digite os id's das cidades que deseja interligar: ";
	cin >> id1 >> id2;
	
	cidadeInfo auxiliar;
	
	while(id1 != -1 && id2 !=-1){
		for(int i = 0; i < cidades.size(); i++){
			
			auxiliar = cidades.front();
			
			if(id1 == auxiliar.id)
				idteste1 = 1;
			if(id2 == auxiliar.id)
				idteste2 = 1;
			
			cidades.push_back(auxiliar);
			cidades.pop_front();
		}
		
		if(idteste1 == 1 && idteste2 == 1){
			cria_aresta(adj,id1,id2);
			cout << "Digite os id's das cidades que deseja interligar: ";
		}
		else
		{
			cout << "ID's não encontrados, digite novamente: ";
		}
		cin >> id1 >> id2;
	}
}

//Função para exibir a cidade mais próxima
void exibirCidade(list <no> adj[],int num,int ide){
	
	cout << endl;
	
	cidadeInfo aux;
	cidadeInfo auxiliar;
	
	for(int i = 0; i < cidades.size(); i++){
		
		auxiliar = cidades.front();
		
		if(ide == auxiliar.id){
			aux = auxiliar;
			
			if(aux.pokecenter == 1){
				cout << "Há um pokecenter na cidade que você está. " << endl;
			}
		}
		
		cidades.push_back(auxiliar);
		cidades.pop_front();
	}
}

// Menu mapa
void mapaMenu() {
	cout << endl;
	
	int num = cidades.size();
	int id,idteste;
	
	cidadeInfo auxiliar;
	
	list <no> adj[num];
	
	cadastrarCidade();
	
    bool ligado = true;

    while (ligado) {
        cout << "Digite uma opção válida:" << endl;
        cout << "1 - Criar mapa" << endl;
        cout << "2 - Exibir cidades cadastradas" << endl;
        cout << "3 - Exibir a cidade mais próxima" << endl;
        cout << "4 - Sair" << endl;

        int aux = 0;
        cin >> aux;

        switch (aux) {
            case 1:
            	CriarMapa(adj,num);
                break;
            case 2:
            	mostrarCidade();
                break;
            case 3:
            	
            	cout << "\nDigite o ID da cidade que vc está: ";
            	cin >> id;
            	
            	for(int i = 0; i < cidades.size(); i++){
            		
            		auxiliar = cidades.front();
			
					if(id == auxiliar.id)
					idteste = 1;
			
					cidades.push_back(auxiliar);
					cidades.pop_front();
				}
				
				if(idteste == 1){
					exibirCidade(adj,num,id);
				}
				else
				{
					cout << "Erro de entrada" << endl;
				}
                break;
            case 4:
                ligado = false;
                break;
        }
    }
}

int main() {
	
	setlocale (LC_ALL, "portuguese");
	
    bool ligado = true;
    treenodeptr arvore = NULL;

    cout << "--POKÉDEX--" << endl;
    while (ligado) {
        cout << "Digite uma opção válida:" << endl;
        cout << "1 - Pokédex" << endl;
        cout << "2 - Mapa" << endl;
        cout << "3 - Desligar" << endl;

        int aux = 0;
        cin >> aux;

        switch (aux) {
            case 1:
                pokedexMenu(arvore);
                break;
            case 2:
                mapaMenu();
                break;
            case 3:
                ligado = false;
                break;
        }
    }

    return 0;
}
