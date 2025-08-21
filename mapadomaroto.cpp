#include <iostream>
#include <list>

using namespace std;

struct no{
	int v;
	int p;
};

void cria_aresta(list<no>adj[], int origem, int dest, int peso, int orien){
	no novo;
	novo.v = dest;
	novo.p = peso;
	
	adj[origem].push_back(novo);
	
	if(!orien){
		novo.v = origem;
		adj[dest].push_back(novo);
	}
}

void mostrar_grafo(list<no>adj[], int v){
	for(int i = 0; i < v; i++){
		while(!adj[i].empty()){
			no novo;
			novo = adj[i].front();
	        
	        cout << i << " " << novo.v << " " << novo.p << endl;
	        
	        adj[i].pop_front();
		}
	}
}

int main()
{
	int v,o;
	
	do{
		cin >> v; 
	}while(v < 1);
	
	list <no> adj[v];
	
	do{
		cin >> o; 
	}while(o != 1 && o !=0);
	
	int origem, dest, peso;
	
	cin >> origem >> dest >> peso;
	
	while(origem != -1 || dest != -1 || peso != -1){
		cria_aresta(adj, origem, dest, peso, o);
		cin >> origem >> dest >> peso;
	}
	
	mostrar_grafo(adj,v);
	
	return 0;
}