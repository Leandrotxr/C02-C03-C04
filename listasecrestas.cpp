#include <iostream>
#include <list>

using namespace std;

void cria_aresta(list<int>adj[], int a, int b)
{	
	adj[a].push_back(b);
	adj[b].push_back(a);
}


void mostrar_lista(list<int>adj[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << adj[i].size();
		
		adj[i].sort(); //função que ordena a lista
		
		/*list<int>::iterator p;
		for(p = adj[i].begin(); p != adj[i].end(); p++){
			int novo = *p;
			cout << " " << novo << " ";
		}*/
		
		while(!adj[i].empty())
		{
			int novo;
			novo = adj[i].front();
			
			cout << " " << novo+1;
			
			adj[i].pop_front();
		}
		cout << endl;
	}
}

int main()
{
	int n,m; //n é o numero de vertices e m é o numero de arestas
	
	do
	{
		cin >> n;
	}while( n < 1 || n > 100);
	
	int aux; //auxiliar apenas 
	
	aux = n*(n-1)/2;
	
	do
	{
		cin >> m;
	}while( m < 1 || m > aux);
	
	int a,b; //pontos de partida e chegada de uma aresta (bidirecional)
	
	list <int> adj[n];
	
	for(int i = 0; i < n; i++)
	{
		do
		{
			cin >> a;
		}while( a < 1);
		
		do
		{
			cin >> b;
		}while( b > n);
		
		a--;
		b--;
		cria_aresta(adj,a,b);
	} 
	
	cout << endl;
	
	mostrar_lista(adj,n);
	
	return 0;
}